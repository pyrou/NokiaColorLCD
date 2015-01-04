#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <strings.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/spi/spidev.h>

#include <errno.h>
#include <stdio.h>

#include <time.h>

#include "gpio.h"
#include "spi.h"
#include "driver.h"

static int lcd_reset(int reset_pin) {
  if (gpio_setup() != 0) {
    perror("Couldn't setup GPIO");
    exit(1);
  }

  gpio_set_output(reset_pin);

  int reset_pin_mask = 1 << reset_pin;
  int delay_between_commands = 200 * 1000;

  gpio_clear(reset_pin_mask);

  usleep(delay_between_commands);

  gpio_set(reset_pin_mask);

  usleep(delay_between_commands);

  return 0;
}

inline static void send(LCD *lcd, uint16_t word) __attribute__((always_inline));
inline static void send_cmd(LCD *lcd, uint8_t cmd) __attribute__((always_inline));
inline static void send_data(LCD *lcd, uint8_t data) __attribute__((always_inline));
inline static void send_color(LCD *lcd, int color) __attribute__((always_inline));

static void draw_text_line(LCD *lcd, int fcolor, int bcolor, uint8_t x, uint8_t y, char l);
static void flush(LCD *lcd);

static void send(LCD *lcd, uint16_t word) {
  lcd->buffer[lcd->buffer_pos++] = word;
  if (lcd->buffer_pos == MAX_BUFFER_SIZE) {
    flush(lcd);
  }
}

static void send_cmd(LCD *lcd, uint8_t cmd) {
  if(lcd->type == TYPE_PHILIPS) {
         if(cmd == CASET) cmd = CASETP;
    else if(cmd == PASET) cmd = PASETP;
    else if(cmd == RAMWR) cmd = RAMWRP;
  }
  send(lcd, cmd);
}
static void send_data(LCD *lcd, uint8_t data) {
  send(lcd, (uint16_t) data | 0x100);
}

static void send_color(LCD *lcd, int color) {
  if(lcd->color_mode == COLOR_8) {
    uint8_t   red = (uint8_t) ((double)((color >> 8) & 0xF) / 0xF * 0x7); // 3bit
    uint8_t green = (uint8_t) ((double)((color >> 4) & 0xF) / 0xF * 0x7); // 3bit
    uint8_t  blue = (uint8_t) ((double)(color        & 0xF) / 0xF * 0x3); // 2bit

    send_data(lcd, (red << 5 | green << 2 | blue));
  }
  else if(lcd->color_mode == COLOR_16) {
    if (lcd->type == TYPE_EPSON) {
      send_data(lcd, (uint8_t) (color >> 4) & 0x00FF);
      send_data(lcd, (uint8_t) ((color & 0x0F) << 4) | (color >> 8));
      send_data(lcd, (uint8_t) color & 0x0FF);
    } else {
      send_data(lcd, (uint8_t) ((color >> 4) & 0x00FF));
      send_data(lcd, (uint8_t) (((color & 0x0F) << 4) | 0x00));
    }
  }
}

static void flush(LCD *lcd) {
  spi_send_buffer(lcd->fd, lcd->buffer_pos, lcd->buffer);
  lcd->buffer_pos = 0;
}

void lcd_clear(LCD *lcd, int color) {
    lcd_clear_box(lcd, color, 0, 0, 132, 132);
}

void lcd_clear_box(LCD *lcd, int color, uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2)
{
    uint16_t i;
    uint16_t total_bytes1;
    uint16_t total_bytes2;
    uint16_t total_bytes;

    lcd_set_box(lcd, x1, y1, x2, y2);
    send_cmd(lcd, RAMWR);
    flush(lcd);

    total_bytes1 = (x2 - x1 + 1);
    total_bytes2 = (y2 - y1 + 1);
    total_bytes = total_bytes1 * total_bytes2;

    for (i = 0; i < total_bytes; i++){
        send_color(lcd, color);
    }

    flush(lcd);
}


void lcd_set_pixel(LCD *lcd, uint8_t x, uint8_t y, uint16_t color) {
  if (lcd->type == TYPE_EPSON) {
    lcd_set_box(lcd, x, y, ENDPAGE, ENDCOL);
  } else {
    lcd_set_box(lcd, x, y, x, y);
  }

  send_cmd(lcd, RAMWR);

  send_color(lcd, color);

  flush(lcd);
}

void lcd_set_box(LCD *lcd, uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2)
{
    send_cmd(lcd, CASET); // x
    send_data(lcd, x1);
    send_data(lcd, x2);

    send_cmd(lcd, PASET); // y
    send_data(lcd, y1);
    send_data(lcd, y2);
}


static void draw_text_line(LCD *lcd, int fcolor, int bcolor, uint8_t x, uint8_t y, char l)
{
  int i;
  lcd_set_box(lcd, x, y, x, y+8);
  send_cmd(lcd, RAMWR);

  flush(lcd);

  for(i=0;i<8;i++)
  {
    if (1<<i & l) {
        send_color(lcd, fcolor);
    } else {
        send_color(lcd, bcolor);
    }
  }
  flush(lcd);
}

void lcd_draw_text(LCD *lcd, int fcolor, int bcolor, uint8_t x, uint8_t y, char *text, FONT_INFO font)
{
  char c;
  unsigned char charnum;
  uint16_t i;
  uint8_t xpos;
  uint8_t ypos;
  uint8_t widthBits;
  uint16_t startOffset;
  uint16_t endOffset;
  char spaceWidth = font.charInfo[':' - font.startChar].widthBits;

  y += font.heightPages * 8;

  while(*text != 0)
  {
    c = *text;
    if(c == ' ') {
      lcd_clear_box(lcd, bcolor, x, y - 8 * (font.heightPages - 1), x + spaceWidth + font.spacePixels - 1, y + 7);
      x += spaceWidth + font.spacePixels;
      text++;
      continue;
    }

    charnum = c - font.startChar;
    widthBits = font.charInfo[charnum].widthBits;
    startOffset = font.charInfo[charnum].offset;
    endOffset = startOffset + (widthBits*font.heightPages);

    xpos = x;
    ypos = y;

    for (i=startOffset; i < endOffset; i++) {
      draw_text_line(lcd, fcolor, bcolor, xpos, ypos, font.data[i]);
      ypos -= 8;

      if((i + 1) % font.heightPages == 0) {
        xpos ++;
        ypos = y;
      }
    }

    x += widthBits;
    text++;
    ypos = y;

    if(*text != 0) {
      lcd_clear_box(lcd, bcolor, x, y - 8 * (font.heightPages-1), x + font.spacePixels - 1, y + 7);
      x += font.spacePixels;
    }


  }
}

int lcd_init(LCD *lcd, char *dev, int reset_pin, int type, char color_mode) {
  int res = lcd_reset(reset_pin);
  if (res < 0) {
    perror("Failed to reset LCD.");
    return 1;
  }

  bzero(lcd, sizeof(LCD));
  lcd->dev = dev;
  lcd->type = type;
  lcd->color_mode = color_mode;
  lcd->fd = spi_init(dev);
  if (lcd->fd < 0)
    return lcd->fd;

  if (type == TYPE_EPSON) {
    send_cmd(lcd, DISCTL); // Display control (0xCA)
    send_data(lcd, 0x0C);  // 12 = 1100 - CL dividing ratio [don't divide] switching period 8H (default)
    send_data(lcd, 0x20);  // nlines/4 - 1 = 132/4 - 1 = 32 duty
    send_data(lcd, 0x00);  // No inversely highlighted lines

    send_cmd(lcd, COMSCN); // common scanning direction (0xBB)
    send_data(lcd, 0x01);  // 1->68, 132<-69 scan direction

    send_cmd(lcd, OSCON); // internal oscialltor ON (0xD1)
    send_cmd(lcd, SLPOUT); // sleep out (0x94)

    send_cmd(lcd, PWRCTR); // power ctrl (0x20)
    send_data(lcd, 0x0F);  // everything on, no external reference resistors

    send_cmd(lcd, DISINV); // invert display mode (0xA7)

    send_cmd(lcd, DATCTL); // data control (0xBC)
    send_data(lcd, 0x00);  // don't inverse page address, reverse rotation column address, column scan-direction !!! try 0x01
    send_data(lcd, 0x00);  // normal RGB arrangement
    switch(lcd->color_mode) {
      case 0: send_data(lcd, 0x01); break; // (8-bit color)
      case 1: send_data(lcd, 0x02); break; // 16-bit Grayscale Type A (12-bit color)
      default:
        perror("Unsupported color mode.");
        return 1;
    }

    send_cmd(lcd, VOLCTR); // electronic volume, this is the contrast/brightness (0x81)
    send_data(lcd, 32);  // volume (contrast) setting - fine tuning, original (0-63)
    send_data(lcd, 3);   // internal resistor ratio - coarse adjustment (0-7)

    send_cmd(lcd, NOP); // nop (0x25)

    usleep(100 * 1000);

    send_cmd(lcd, DISON); // display on (0xAF)
  } else if (type == TYPE_PHILIPS) {
    send_cmd(lcd, SLEEPOUT); // Sleep Out (0x11)
    send_cmd(lcd, BSTRON);   // Booster voltage on (0x03)
    send_cmd(lcd, DISPON);   // Display on (0x29)

    send_cmd(lcd, INVOFF);  // Inversion off (0x21)

    send_cmd(lcd, COLMOD);   // Color interface format (0x3A)
    switch(lcd->color_mode) {
      case 0: send_data(lcd, 0x02); break; // 8-bit/pixel mode
      case 1: send_data(lcd, 0x03); break; // 12-bit/pixel mode
      // case 2: send_data(lcd, 0x05); break; // 16-bit/pixel mode // untested
      default:
        perror("Unsupported color mode.");
        return 1;
    }

    send_cmd(lcd, MADCTL);   // Memory Access Control(PHILLIPS)
    // if (colorSwap)
    //   send_data(lcd, 0x08);
    // else
      send_data(lcd, 0x00);

    send_cmd(lcd, SETCON);   // Set Contrast(PHILLIPS)
    send_data(lcd, 0x30);

    send_cmd(lcd, NOPP);     // nop(PHILLIPS)
  }

  flush(lcd);

  return 0;
}

void lcd_dispose(LCD *lcd) {
  close(lcd->fd);
  gpio_shutdown();
}
