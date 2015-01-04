#include "verdana_12pt.h"

/*
 **  Font data for Verdana 12pt
 */

/* Character bitmaps for Verdana 12pt */
const uint_8 verdana_12ptBitmaps[] =
{
    /* @0 '!' (1 pixels wide) */
    0x37, 0xFC, //   OO OOOOOOOOO
    
    /* @2 '"' (5 pixels wide) */
    0x00, 0x3E, //           OOOOO
    0x00, 0x00, //
    0x00, 0x00, //
    0x00, 0x00, //
    0x00, 0x3E, //           OOOOO
    
    /* @12 '#' (10 pixels wide) */
    0x04, 0x00, //      O
    0x3C, 0x20, //   OOOO    O
    0x07, 0x20, //      OOO  O
    0x04, 0xE0, //      O  OOO
    0x04, 0x3C, //      O    OOOO
    0x3C, 0x20, //   OOOO    O
    0x07, 0x20, //      OOO  O
    0x04, 0xE0, //      O  OOO
    0x04, 0x3C, //      O    OOOO
    0x00, 0x20, //           O
    
    /* @32 '$' (8 pixels wide) */
    0x10, 0x60, //    O     OO
    0x20, 0x90, //   O     O  O
    0x21, 0x08, //   O    O    O
    0xFF, 0xFE, // OOOOOOOOOOOOOOO
    0x21, 0x08, //   O    O    O
    0x21, 0x08, //   O    O    O
    0x12, 0x08, //    O  O     O
    0x0C, 0x10, //     OO     O
    
    /* @48 '%' (15 pixels wide) */
    0x00, 0xF8, //         OOOOO
    0x01, 0x04, //        O     O
    0x01, 0x04, //        O     O
    0x01, 0x04, //        O     O
    0x21, 0x04, //   O    O     O
    0x18, 0xF8, //    OO   OOOOO
    0x06, 0x00, //      OO
    0x01, 0x80, //        OO
    0x00, 0x60, //          OO
    0x1F, 0x18, //    OOOOO   OO
    0x20, 0x84, //   O     O    O
    0x20, 0x80, //   O     O
    0x20, 0x80, //   O     O
    0x20, 0x80, //   O     O
    0x1F, 0x00, //    OOOOO
    
    /* @78 '&' (10 pixels wide) */
    0x0E, 0x00, //     OOO
    0x11, 0x38, //    O   O  OOO
    0x20, 0xC4, //   O     OO   O
    0x20, 0x84, //   O     O    O
    0x21, 0x84, //   O    OO    O
    0x22, 0x44, //   O   O  O   O
    0x14, 0x38, //    O O    OOO
    0x08, 0x00, //     O
    0x17, 0x80, //    O OOOO
    0x20, 0x00, //   O
    
    /* @98 ''' (1 pixels wide) */
    0x00, 0x3E, //           OOOOO
    
    /* @100 '(' (5 pixels wide) */
    0x0F, 0xC0, //     OOOOOO
    0x30, 0x30, //   OO      OO
    0x40, 0x08, //  O          O
    0x80, 0x04, // O            O
    0x00, 0x02, //               O
    
    /* @110 ')' (5 pixels wide) */
    0x00, 0x02, //               O
    0x80, 0x04, // O            O
    0x40, 0x08, //  O          O
    0x30, 0x30, //   OO      OO
    0x0F, 0xC0, //     OOOOOO
    
    /* @120 '*' (7 pixels wide) */
    0x00, 0x44, //          O   O
    0x00, 0x28, //           O O
    0x00, 0x10, //            O
    0x00, 0xFE, //         OOOOOOO
    0x00, 0x10, //            O
    0x00, 0x28, //           O O
    0x00, 0x44, //          O   O
    
    /* @134 '+' (9 pixels wide) */
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    0x1F, 0xF0, //    OOOOOOOOO
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    
    /* @152 ',' (2 pixels wide) */
    0x80, 0x00, // O
    0x70, 0x00, //  OOO
    
    /* @156 '-' (5 pixels wide) */
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    
    /* @166 '.' (1 pixels wide) */
    0x30, 0x00, //   OO
    
    /* @168 '/' (7 pixels wide) */
    0x80, 0x00, // O
    0x70, 0x00, //  OOO
    0x0C, 0x00, //     OO
    0x03, 0x80, //       OOO
    0x00, 0x60, //          OO
    0x00, 0x1C, //            OOO
    0x00, 0x02, //               O
    
    /* @182 '0' (8 pixels wide) */
    0x0F, 0xF0, //     OOOOOOOO
    0x10, 0x08, //    O        O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x10, 0x08, //    O        O
    0x0F, 0xF0, //     OOOOOOOO
    
    /* @198 '1' (5 pixels wide) */
    0x20, 0x10, //   O        O
    0x20, 0x10, //   O        O
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    
    /* @208 '2' (8 pixels wide) */
    0x20, 0x08, //   O         O
    0x30, 0x04, //   OO         O
    0x28, 0x04, //   O O        O
    0x24, 0x04, //   O  O       O
    0x22, 0x04, //   O   O      O
    0x21, 0x04, //   O    O     O
    0x20, 0x88, //   O     O   O
    0x20, 0x70, //   O      OOO
    
    /* @224 '3' (8 pixels wide) */
    0x10, 0x08, //    O        O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x11, 0x48, //    O   O O  O
    0x0E, 0x30, //     OOO   OO
    
    /* @240 '4' (9 pixels wide) */
    0x07, 0x00, //      OOO
    0x04, 0x80, //      O  O
    0x04, 0x40, //      O   O
    0x04, 0x20, //      O    O
    0x04, 0x10, //      O     O
    0x04, 0x08, //      O      O
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x04, 0x00, //      O
    0x04, 0x00, //      O
    
    /* @258 '5' (8 pixels wide) */
    0x10, 0x00, //    O
    0x20, 0x7C, //   O      OOOOO
    0x20, 0x44, //   O      O   O
    0x20, 0x44, //   O      O   O
    0x20, 0x44, //   O      O   O
    0x20, 0x44, //   O      O   O
    0x10, 0x84, //    O    O    O
    0x0F, 0x04, //     OOOO     O
    
    /* @274 '6' (8 pixels wide) */
    0x0F, 0xE0, //     OOOOOOO
    0x10, 0x90, //    O    O  O
    0x20, 0x48, //   O      O  O
    0x20, 0x44, //   O      O   O
    0x20, 0x44, //   O      O   O
    0x20, 0x44, //   O      O   O
    0x10, 0x84, //    O    O    O
    0x0F, 0x00, //     OOOO
    
    /* @290 '7' (8 pixels wide) */
    0x00, 0x04, //              O
    0x00, 0x04, //              O
    0x30, 0x04, //   OO         O
    0x0C, 0x04, //     OO       O
    0x03, 0x04, //       OO     O
    0x00, 0xC4, //         OO   O
    0x00, 0x34, //           OO O
    0x00, 0x0C, //             OO
    
    /* @306 '8' (8 pixels wide) */
    0x0E, 0x30, //     OOO   OO
    0x11, 0x48, //    O   O O  O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x11, 0x48, //    O   O O  O
    0x0E, 0x30, //     OOO   OO
    
    /* @322 '9' (8 pixels wide) */
    0x00, 0xF0, //         OOOO
    0x21, 0x08, //   O    O    O
    0x22, 0x04, //   O   O      O
    0x22, 0x04, //   O   O      O
    0x22, 0x04, //   O   O      O
    0x12, 0x04, //    O  O      O
    0x09, 0x08, //     O  O    O
    0x07, 0xF0, //      OOOOOOO
    
    /* @338 ':' (1 pixels wide) */
    0x30, 0x60, //   OO     OO
    
    /* @340 ';' (2 pixels wide) */
    0x80, 0x00, // O
    0x70, 0x60, //  OOO     OO
    
    /* @344 '<' (9 pixels wide) */
    0x01, 0x00, //        O
    0x02, 0x80, //       O O
    0x02, 0x80, //       O O
    0x04, 0x40, //      O   O
    0x04, 0x40, //      O   O
    0x08, 0x20, //     O     O
    0x08, 0x20, //     O     O
    0x10, 0x10, //    O       O
    0x10, 0x10, //    O       O
    
    /* @362 '=' (9 pixels wide) */
    0x04, 0x80, //      O  O
    0x04, 0x80, //      O  O
    0x04, 0x80, //      O  O
    0x04, 0x80, //      O  O
    0x04, 0x80, //      O  O
    0x04, 0x80, //      O  O
    0x04, 0x80, //      O  O
    0x04, 0x80, //      O  O
    0x04, 0x80, //      O  O
    
    /* @380 '>' (9 pixels wide) */
    0x10, 0x10, //    O       O
    0x10, 0x10, //    O       O
    0x08, 0x20, //     O     O
    0x08, 0x20, //     O     O
    0x04, 0x40, //      O   O
    0x04, 0x40, //      O   O
    0x02, 0x80, //       O O
    0x02, 0x80, //       O O
    0x01, 0x00, //        O
    
    /* @398 '?' (7 pixels wide) */
    0x00, 0x08, //             O
    0x00, 0x04, //              O
    0x00, 0x04, //              O
    0x36, 0x04, //   OO OO      O
    0x01, 0x04, //        O     O
    0x00, 0x88, //         O   O
    0x00, 0x70, //          OOO
    
    /* @412 '@' (14 pixels wide) */
    0x0F, 0x80, //     OOOOO
    0x30, 0x60, //   OO     OO
    0x40, 0x10, //  O         O
    0x47, 0x88, //  O   OOOO   O
    0x88, 0x48, // O   O    O  O
    0x90, 0x24, // O  O      O  O
    0x90, 0x24, // O  O      O  O
    0x90, 0x24, // O  O      O  O
    0x88, 0x24, // O   O     O  O
    0x9F, 0xE4, // O  OOOOOOOO  O
    0x10, 0x08, //    O        O
    0x10, 0x08, //    O        O
    0x10, 0x30, //    O      OO
    0x0F, 0xC0, //     OOOOOO
    
    /* @440 'A' (9 pixels wide) */
    0x38, 0x00, //   OOO
    0x06, 0x00, //      OO
    0x05, 0xC0, //      O OOO
    0x04, 0x30, //      O    OO
    0x04, 0x0C, //      O      OO
    0x04, 0x30, //      O    OO
    0x05, 0xC0, //      O OOO
    0x06, 0x00, //      OO
    0x38, 0x00, //   OOO
    
    /* @458 'B' (9 pixels wide) */
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0xC4, //   O     OO   O
    0x11, 0x38, //    O   O  OOO
    0x0E, 0x00, //     OOO
    
    /* @476 'C' (9 pixels wide) */
    0x07, 0xE0, //      OOOOOO
    0x18, 0x18, //    OO      OO
    0x10, 0x08, //    O        O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x10, 0x08, //    O        O
    0x18, 0x18, //    OO      OO
    
    /* @494 'D' (10 pixels wide) */
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x10, 0x08, //    O        O
    0x10, 0x08, //    O        O
    0x0C, 0x30, //     OO    OO
    0x03, 0xC0, //       OOOO
    
    /* @514 'E' (8 pixels wide) */
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    
    /* @530 'F' (8 pixels wide) */
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x00, 0x84, //         O    O
    0x00, 0x84, //         O    O
    0x00, 0x84, //         O    O
    0x00, 0x84, //         O    O
    0x00, 0x84, //         O    O
    0x00, 0x84, //         O    O
    0x00, 0x04, //              O
    
    /* @546 'G' (10 pixels wide) */
    0x07, 0xE0, //      OOOOOO
    0x18, 0x18, //    OO      OO
    0x10, 0x08, //    O        O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x21, 0x04, //   O    O     O
    0x21, 0x04, //   O    O     O
    0x21, 0x08, //   O    O    O
    0x1F, 0x18, //    OOOOO   OO
    
    /* @566 'H' (10 pixels wide) */
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x00, 0x80, //         O
    0x00, 0x80, //         O
    0x00, 0x80, //         O
    0x00, 0x80, //         O
    0x00, 0x80, //         O
    0x00, 0x80, //         O
    0x00, 0x80, //         O
    0x00, 0x80, //         O
    0x3F, 0xFC, //   OOOOOOOOOOOO
    
    /* @586 'I' (5 pixels wide) */
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    
    /* @596 'J' (6 pixels wide) */
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x10, 0x04, //    O         O
    0x0F, 0xFC, //     OOOOOOOOOO
    
    /* @608 'K' (9 pixels wide) */
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x02, 0x00, //       O
    0x01, 0x00, //        O
    0x01, 0x80, //        OO
    0x02, 0x40, //       O  O
    0x04, 0x20, //      O    O
    0x08, 0x10, //     O      O
    0x10, 0x08, //    O        O
    0x20, 0x04, //   O          O
    
    /* @626 'L' (8 pixels wide) */
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    
    /* @642 'M' (11 pixels wide) */
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x00, 0x0C, //             OO
    0x00, 0x30, //           OO
    0x00, 0xC0, //         OO
    0x03, 0x00, //       OO
    0x0C, 0x00, //     OO
    0x03, 0x00, //       OO
    0x00, 0xC0, //         OO
    0x00, 0x30, //           OO
    0x00, 0x0C, //             OO
    0x3F, 0xFC, //   OOOOOOOOOOOO
    
    /* @664 'N' (10 pixels wide) */
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x00, 0x08, //             O
    0x00, 0x10, //            O
    0x00, 0x60, //          OO
    0x00, 0x80, //         O
    0x01, 0x00, //        O
    0x02, 0x00, //       O
    0x0C, 0x00, //     OO
    0x10, 0x00, //    O
    0x3F, 0xFC, //   OOOOOOOOOOOO
    
    /* @684 'O' (11 pixels wide) */
    0x07, 0xE0, //      OOOOOO
    0x18, 0x18, //    OO      OO
    0x10, 0x08, //    O        O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x10, 0x08, //    O        O
    0x18, 0x18, //    OO      OO
    0x07, 0xE0, //      OOOOOO
    
    /* @706 'P' (8 pixels wide) */
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x02, 0x04, //       O      O
    0x02, 0x04, //       O      O
    0x02, 0x04, //       O      O
    0x02, 0x04, //       O      O
    0x02, 0x04, //       O      O
    0x01, 0x08, //        O    O
    0x00, 0xF0, //         OOOO
    
    /* @722 'Q' (11 pixels wide) */
    0x07, 0xE0, //      OOOOOO
    0x18, 0x18, //    OO      OO
    0x10, 0x08, //    O        O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0x20, 0x04, //   O          O
    0xE0, 0x04, // OOO          O
    0x20, 0x04, //   O          O
    0x10, 0x08, //    O        O
    0x18, 0x18, //    OO      OO
    0x07, 0xE0, //      OOOOOO
    
    /* @744 'R' (10 pixels wide) */
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x01, 0x04, //        O     O
    0x01, 0x04, //        O     O
    0x01, 0x04, //        O     O
    0x01, 0x04, //        O     O
    0x03, 0x04, //       OO     O
    0x04, 0x88, //      O  O   O
    0x08, 0x70, //     O    OOO
    0x10, 0x00, //    O
    0x20, 0x00, //   O
    
    /* @764 'S' (8 pixels wide) */
    0x08, 0x70, //     O    OOO
    0x10, 0x88, //    O    O   O
    0x20, 0x84, //   O     O    O
    0x20, 0x84, //   O     O    O
    0x21, 0x04, //   O    O     O
    0x21, 0x04, //   O    O     O
    0x11, 0x08, //    O   O    O
    0x0E, 0x10, //     OOO    O
    
    /* @780 'T' (9 pixels wide) */
    0x00, 0x04, //              O
    0x00, 0x04, //              O
    0x00, 0x04, //              O
    0x00, 0x04, //              O
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x00, 0x04, //              O
    0x00, 0x04, //              O
    0x00, 0x04, //              O
    0x00, 0x04, //              O
    
    /* @798 'U' (10 pixels wide) */
    0x0F, 0xFC, //     OOOOOOOOOO
    0x10, 0x00, //    O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x10, 0x00, //    O
    0x0F, 0xFC, //     OOOOOOOOOO
    
    /* @818 'V' (9 pixels wide) */
    0x00, 0x1C, //            OOO
    0x00, 0x60, //          OO
    0x03, 0x80, //       OOO
    0x0C, 0x00, //     OO
    0x30, 0x00, //   OO
    0x0C, 0x00, //     OO
    0x03, 0x80, //       OOO
    0x00, 0x60, //          OO
    0x00, 0x1C, //            OOO
    
    /* @836 'W' (15 pixels wide) */
    0x00, 0x1C, //            OOO
    0x01, 0xE0, //        OOOO
    0x0E, 0x00, //     OOO
    0x30, 0x00, //   OO
    0x0E, 0x00, //     OOO
    0x01, 0x80, //        OO
    0x00, 0x70, //          OOO
    0x00, 0x0C, //             OO
    0x00, 0x70, //          OOO
    0x01, 0x80, //        OO
    0x0E, 0x00, //     OOO
    0x30, 0x00, //   OO
    0x0E, 0x00, //     OOO
    0x01, 0xE0, //        OOOO
    0x00, 0x1C, //            OOO
    
    /* @866 'X' (9 pixels wide) */
    0x20, 0x04, //   O          O
    0x10, 0x08, //    O        O
    0x0C, 0x30, //     OO    OO
    0x02, 0x40, //       O  O
    0x01, 0x80, //        OO
    0x02, 0x40, //       O  O
    0x0C, 0x30, //     OO    OO
    0x10, 0x08, //    O        O
    0x20, 0x04, //   O          O
    
    /* @884 'Y' (9 pixels wide) */
    0x00, 0x04, //              O
    0x00, 0x18, //            OO
    0x00, 0x20, //           O
    0x00, 0xC0, //         OO
    0x3F, 0x00, //   OOOOOO
    0x00, 0xC0, //         OO
    0x00, 0x20, //           O
    0x00, 0x18, //            OO
    0x00, 0x04, //              O
    
    /* @902 'Z' (9 pixels wide) */
    0x30, 0x04, //   OO         O
    0x28, 0x04, //   O O        O
    0x24, 0x04, //   O  O       O
    0x22, 0x04, //   O   O      O
    0x21, 0x84, //   O    OO    O
    0x20, 0x44, //   O      O   O
    0x20, 0x24, //   O       O  O
    0x20, 0x14, //   O        O O
    0x20, 0x0C, //   O         OO
    
    /* @920 '[' (4 pixels wide) */
    0xFF, 0xFE, // OOOOOOOOOOOOOOO
    0x00, 0x02, //               O
    0x00, 0x02, //               O
    0x00, 0x02, //               O
    
    /* @928 '\' (7 pixels wide) */
    0x00, 0x02, //               O
    0x00, 0x1C, //            OOO
    0x00, 0x60, //          OO
    0x03, 0x80, //       OOO
    0x0C, 0x00, //     OO
    0x70, 0x00, //  OOO
    0x80, 0x00, // O
    
    /* @942 ']' (4 pixels wide) */
    0x00, 0x02, //               O
    0x00, 0x02, //               O
    0x00, 0x02, //               O
    0xFF, 0xFE, // OOOOOOOOOOOOOOO
    
    /* @950 '^' (10 pixels wide) */
    0x00, 0x80, //         O
    0x00, 0x40, //          O
    0x00, 0x20, //           O
    0x00, 0x18, //            OO
    0x00, 0x04, //              O
    0x00, 0x04, //              O
    0x00, 0x18, //            OO
    0x00, 0x20, //           O
    0x00, 0x40, //          O
    0x00, 0x80, //         O
    
    /* @970 '_' (10 pixels wide) */
    0x80, 0x00, // O
    0x80, 0x00, // O
    0x80, 0x00, // O
    0x80, 0x00, // O
    0x80, 0x00, // O
    0x80, 0x00, // O
    0x80, 0x00, // O
    0x80, 0x00, // O
    0x80, 0x00, // O
    0x80, 0x00, // O
    
    /* @990 '`' (2 pixels wide) */
    0x00, 0x04, //              O
    0x00, 0x08, //             O
    
    /* @994 'a' (8 pixels wide) */
    0x0C, 0x00, //     OO
    0x12, 0x40, //    O  O  O
    0x21, 0x20, //   O    O  O
    0x21, 0x20, //   O    O  O
    0x21, 0x20, //   O    O  O
    0x21, 0x20, //   O    O  O
    0x11, 0x20, //    O   O  O
    0x3F, 0xC0, //   OOOOOOOO
    
    /* @1010 'b' (8 pixels wide) */
    0x3F, 0xFE, //   OOOOOOOOOOOOO
    0x10, 0x40, //    O     O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x10, 0x40, //    O     O
    0x0F, 0x80, //     OOOOO
    
    /* @1026 'c' (7 pixels wide) */
    0x0F, 0x80, //     OOOOO
    0x10, 0x40, //    O     O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x10, 0x40, //    O     O
    
    /* @1040 'd' (8 pixels wide) */
    0x0F, 0x80, //     OOOOO
    0x10, 0x40, //    O     O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x10, 0x40, //    O     O
    0x3F, 0xFE, //   OOOOOOOOOOOOO
    
    /* @1056 'e' (8 pixels wide) */
    0x0F, 0x80, //     OOOOO
    0x12, 0x40, //    O  O  O
    0x22, 0x20, //   O   O   O
    0x22, 0x20, //   O   O   O
    0x22, 0x20, //   O   O   O
    0x22, 0x20, //   O   O   O
    0x22, 0x40, //   O   O  O
    0x13, 0x80, //    O  OOO
    
    /* @1072 'f' (6 pixels wide) */
    0x00, 0x20, //           O
    0x3F, 0xFC, //   OOOOOOOOOOOO
    0x00, 0x22, //           O   O
    0x00, 0x22, //           O   O
    0x00, 0x22, //           O   O
    0x00, 0x02, //               O
    
    /* @1084 'g' (8 pixels wide) */
    0x0F, 0x80, //     OOOOO
    0x90, 0x40, // O  O     O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x90, 0x40, // O  O     O
    0x7F, 0xE0, //  OOOOOOOOOO
    
    /* @1100 'h' (8 pixels wide) */
    0x3F, 0xFE, //   OOOOOOOOOOOOO
    0x00, 0x40, //          O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x00, 0x40, //          O
    0x3F, 0x80, //   OOOOOOO
    
    /* @1116 'i' (1 pixels wide) */
    0x3F, 0xEC, //   OOOOOOOOO OO
    
    /* @1118 'j' (3 pixels wide) */
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0xFF, 0xEC, // OOOOOOOOOOO OO
    
    /* @1124 'k' (7 pixels wide) */
    0x3F, 0xFE, //   OOOOOOOOOOOOO
    0x04, 0x00, //      O
    0x02, 0x00, //       O
    0x05, 0x00, //      O O
    0x08, 0x80, //     O   O
    0x10, 0x40, //    O     O
    0x20, 0x20, //   O       O
    
    /* @1138 'l' (1 pixels wide) */
    0x3F, 0xFE, //   OOOOOOOOOOOOO
    
    /* @1140 'm' (13 pixels wide) */
    0x3F, 0xE0, //   OOOOOOOOO
    0x00, 0x40, //          O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x3F, 0xC0, //   OOOOOOOO
    0x00, 0x40, //          O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x3F, 0xC0, //   OOOOOOOO
    
    /* @1166 'n' (8 pixels wide) */
    0x3F, 0xE0, //   OOOOOOOOO
    0x00, 0x40, //          O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x00, 0x40, //          O
    0x3F, 0x80, //   OOOOOOO
    
    /* @1182 'o' (8 pixels wide) */
    0x0F, 0x80, //     OOOOO
    0x10, 0x40, //    O     O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x10, 0x40, //    O     O
    0x0F, 0x80, //     OOOOO
    
    /* @1198 'p' (8 pixels wide) */
    0xFF, 0xE0, // OOOOOOOOOOO
    0x10, 0x40, //    O     O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x10, 0x40, //    O     O
    0x0F, 0x80, //     OOOOO
    
    /* @1214 'q' (8 pixels wide) */
    0x0F, 0x80, //     OOOOO
    0x10, 0x40, //    O     O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x10, 0x40, //    O     O
    0xFF, 0xE0, // OOOOOOOOOOO
    
    /* @1230 'r' (5 pixels wide) */
    0x3F, 0xE0, //   OOOOOOOOO
    0x00, 0x40, //          O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    0x00, 0x20, //           O
    
    /* @1240 's' (7 pixels wide) */
    0x11, 0xC0, //    O   OOO
    0x22, 0x20, //   O   O   O
    0x22, 0x20, //   O   O   O
    0x22, 0x20, //   O   O   O
    0x22, 0x20, //   O   O   O
    0x22, 0x20, //   O   O   O
    0x1C, 0x40, //    OOO   O
    
    /* @1254 't' (5 pixels wide) */
    0x00, 0x20, //           O
    0x1F, 0xFC, //    OOOOOOOOOOO
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    0x20, 0x20, //   O       O
    
    /* @1264 'u' (8 pixels wide) */
    0x0F, 0xE0, //     OOOOOOO
    0x10, 0x00, //    O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x20, 0x00, //   O
    0x10, 0x00, //    O
    0x3F, 0xE0, //   OOOOOOOOO
    
    /* @1280 'v' (7 pixels wide) */
    0x00, 0x60, //          OO
    0x03, 0x80, //       OOO
    0x0C, 0x00, //     OO
    0x30, 0x00, //   OO
    0x0C, 0x00, //     OO
    0x03, 0x80, //       OOO
    0x00, 0x60, //          OO
    
    /* @1294 'w' (11 pixels wide) */
    0x00, 0x60, //          OO
    0x0F, 0x80, //     OOOOO
    0x30, 0x00, //   OO
    0x0C, 0x00, //     OO
    0x03, 0x80, //       OOO
    0x00, 0x60, //          OO
    0x03, 0x80, //       OOO
    0x0C, 0x00, //     OO
    0x30, 0x00, //   OO
    0x0F, 0x80, //     OOOOO
    0x00, 0x60, //          OO
    
    /* @1316 'x' (7 pixels wide) */
    0x20, 0x20, //   O       O
    0x18, 0xC0, //    OO   OO
    0x05, 0x00, //      O O
    0x02, 0x00, //       O
    0x05, 0x00, //      O O
    0x18, 0xC0, //    OO   OO
    0x20, 0x20, //   O       O
    
    /* @1330 'y' (7 pixels wide) */
    0x00, 0x60, //          OO
    0x03, 0x80, //       OOO
    0x8C, 0x00, // O   OO
    0x70, 0x00, //  OOO
    0x0C, 0x00, //     OO
    0x03, 0x80, //       OOO
    0x00, 0x60, //          OO
    
    /* @1344 'z' (7 pixels wide) */
    0x30, 0x20, //   OO      O
    0x28, 0x20, //   O O     O
    0x24, 0x20, //   O  O    O
    0x22, 0x20, //   O   O   O
    0x21, 0x20, //   O    O  O
    0x20, 0xA0, //   O     O O
    0x20, 0x60, //   O      OO
    
    /* @1358 '{' (7 pixels wide) */
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    0x02, 0x80, //       O O
    0xFC, 0x7C, // OOOOOO   OOOOO
    0x00, 0x02, //               O
    0x00, 0x02, //               O
    0x00, 0x02, //               O
    
    /* @1372 '|' (1 pixels wide) */
    0xFF, 0xFE, // OOOOOOOOOOOOOOO
    
    /* @1374 '}' (7 pixels wide) */
    0x00, 0x02, //               O
    0x00, 0x02, //               O
    0x00, 0x02, //               O
    0xFC, 0x7C, // OOOOOO   OOOOO
    0x02, 0x80, //       O O
    0x01, 0x00, //        O
    0x01, 0x00, //        O
    
    /* @1388 '~' (10 pixels wide) */
    0x06, 0x00, //      OO
    0x01, 0x00, //        O
    0x00, 0x80, //         O
    0x00, 0x80, //         O
    0x01, 0x00, //        O
    0x02, 0x00, //       O
    0x04, 0x00, //      O         
    0x04, 0x00, //      O         
    0x02, 0x00, //       O        
    0x01, 0x80, //        OO      
};

/* Character descriptors for Verdana 12pt */
/* { [Char width in bits], [Offset into verdana_12ptCharBitmaps in bytes] } */
const FONT_CHAR_INFO verdana_12ptDescriptors[] = 
{
    {1, 0}, 		/* ! */ 
    {5, 2}, 		/* " */ 
    {10, 12}, 		/* # */ 
    {8, 32}, 		/* $ */ 
    {15, 48}, 		/* % */ 
    {10, 78}, 		/* & */ 
    {1, 98}, 		/* ' */ 
    {5, 100}, 		/* ( */ 
    {5, 110}, 		/* ) */ 
    {7, 120}, 		/* * */ 
    {9, 134}, 		/* + */ 
    {2, 152}, 		/* , */ 
    {5, 156}, 		/* - */ 
    {1, 166}, 		/* . */ 
    {7, 168}, 		/* / */ 
    {8, 182}, 		/* 0 */ 
    {5, 198}, 		/* 1 */ 
    {8, 208}, 		/* 2 */ 
    {8, 224}, 		/* 3 */ 
    {9, 240}, 		/* 4 */ 
    {8, 258}, 		/* 5 */ 
    {8, 274}, 		/* 6 */ 
    {8, 290}, 		/* 7 */ 
    {8, 306}, 		/* 8 */ 
    {8, 322}, 		/* 9 */ 
    {1, 338}, 		/* : */ 
    {2, 340}, 		/* ; */ 
    {9, 344}, 		/* < */ 
    {9, 362}, 		/* = */ 
    {9, 380}, 		/* > */ 
    {7, 398}, 		/* ? */ 
    {14, 412}, 		/* @ */ 
    {9, 440}, 		/* A */ 
    {9, 458}, 		/* B */ 
    {9, 476}, 		/* C */ 
    {10, 494}, 		/* D */ 
    {8, 514}, 		/* E */ 
    {8, 530}, 		/* F */ 
    {10, 546}, 		/* G */ 
    {10, 566}, 		/* H */ 
    {5, 586}, 		/* I */ 
    {6, 596}, 		/* J */ 
    {9, 608}, 		/* K */ 
    {8, 626}, 		/* L */ 
    {11, 642}, 		/* M */ 
    {10, 664}, 		/* N */ 
    {11, 684}, 		/* O */ 
    {8, 706}, 		/* P */ 
    {11, 722}, 		/* Q */ 
    {10, 744}, 		/* R */ 
    {8, 764}, 		/* S */ 
    {9, 780}, 		/* T */ 
    {10, 798}, 		/* U */ 
    {9, 818}, 		/* V */ 
    {15, 836}, 		/* W */ 
    {9, 866}, 		/* X */ 
    {9, 884}, 		/* Y */ 
    {9, 902}, 		/* Z */ 
    {4, 920}, 		/* [ */ 
    {7, 928}, 		/* \ */ 
    {4, 942}, 		/* ] */ 
    {10, 950}, 		/* ^ */ 
    {10, 970}, 		/* _ */ 
    {2, 990}, 		/* ` */ 
    {8, 994}, 		/* a */ 
    {8, 1010}, 		/* b */ 
    {7, 1026}, 		/* c */ 
    {8, 1040}, 		/* d */ 
    {8, 1056}, 		/* e */ 
    {6, 1072}, 		/* f */ 
    {8, 1084}, 		/* g */ 
    {8, 1100}, 		/* h */ 
    {1, 1116}, 		/* i */ 
    {3, 1118}, 		/* j */ 
    {7, 1124}, 		/* k */ 
    {1, 1138}, 		/* l */ 
    {13, 1140}, 		/* m */ 
    {8, 1166}, 		/* n */ 
    {8, 1182}, 		/* o */ 
    {8, 1198}, 		/* p */ 
    {8, 1214}, 		/* q */ 
    {5, 1230}, 		/* r */ 
    {7, 1240}, 		/* s */ 
    {5, 1254}, 		/* t */ 
    {8, 1264}, 		/* u */ 
    {7, 1280}, 		/* v */ 
    {11, 1294}, 		/* w */ 
    {7, 1316}, 		/* x */ 
    {7, 1330}, 		/* y */ 
    {7, 1344}, 		/* z */ 
    {7, 1358}, 		/* { */ 
    {1, 1372}, 		/* | */ 
    {7, 1374}, 		/* } */ 
    {10, 1388}, 		/* ~ */ 
};

/* Font information for Verdana 12pt */
const FONT_INFO verdana_12ptFontInfo =
{
    2, /*  Character height */
    '!', /*  Start character */
    '~', /*  End character */
    2, /*  Width, in pixels, of space character */
    verdana_12ptDescriptors, /*  Character descriptor array */
    verdana_12ptBitmaps, /*  Character bitmap array */
};
