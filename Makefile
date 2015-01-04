SRC_FONTS=$(wildcard fonts/*.c)
OBJ_FONTS=$(SRC_FONTS:.c=.o)
CFLAGS = -g -Wall
LDFLAGS = -g  -Wall -lm

.PHONY: clean

all: pinokia sendword spidev_test

clean:
	rm pinokia *.o $(OBJ_FONTS)

modules.o: modules.c

gpio.o: gpio.c

spi.o: spi.c

fonts/%.o: fonts/%.c
	$(CC) $(CC_FLAGS) -c -o $@ $<

driver.o: driver.c

main.o: main.c

sendword.o: sendword.c

pinokia: main.o driver.o $(OBJ_FONTS) modules.o gpio.o spi.o
	$(CC) $(LDFLAGS) -o $@ $^

sendword: sendword.o modules.o spi.o
	$(CC) $(LDFLAGS) -o $@ $^

it: all
run: all
	sudo ./pinokia
