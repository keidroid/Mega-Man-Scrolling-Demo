#include <avr/pgmspace.h>

//extern const unsigned char incredible1[];
//extern const unsigned char incredible2[];

#define SIZE_BG 256
#define SIZE_CLOUD 48
#define SIZE_BARREL 32
#define SIZE_MEGAMAN 72

PROGMEM const unsigned char bg [] = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0x02, 0x06, 0x66, 0x0E, 0x1E, 0x66, 0x86, 0x06, 0x06, 0x86, 0x66, 0x0E, 0x1E, 0x66, 0xC6, 0xFE,
0x02, 0x06, 0x66, 0x0E, 0x1E, 0x66, 0x86, 0x06, 0x06, 0x86, 0x66, 0x0E, 0x1E, 0x66, 0xC6, 0xFE,
0x00, 0x00, 0x48, 0x30, 0x20, 0x48, 0x84, 0x02, 0x03, 0x84, 0x48, 0x30, 0x20, 0x48, 0xC6, 0xFF,
0x00, 0x00, 0x48, 0x30, 0x20, 0x48, 0x84, 0x02, 0x03, 0x84, 0x48, 0x30, 0x20, 0x48, 0xC6, 0xFF,
0x00, 0x00, 0x48, 0x30, 0x20, 0x48, 0x84, 0x02, 0x03, 0x84, 0x48, 0x30, 0x20, 0x48, 0xC6, 0xFF,
0x00, 0x00, 0x48, 0x30, 0x20, 0x48, 0x84, 0x02, 0x03, 0x84, 0x48, 0x30, 0x20, 0x48, 0xC6, 0xFF,
0x00, 0x00, 0x48, 0x30, 0x20, 0x48, 0x84, 0x02, 0x03, 0x84, 0x48, 0x30, 0x20, 0x48, 0xC6, 0xFF,
0x00, 0x00, 0x48, 0x30, 0x20, 0x48, 0x84, 0x02, 0x03, 0x84, 0x48, 0x30, 0x20, 0x48, 0xC6, 0xFF,
0xFC, 0x7F, 0x3C, 0xCF, 0x7C, 0xBF, 0x7C, 0xEF, 0xFC, 0x7F, 0x9C, 0xFF, 0xFC, 0x2F, 0xDC, 0xFF,
0xEC, 0xDF, 0x7C, 0xFF, 0xDC, 0x3F, 0xFC, 0xFF, 0x6C, 0x9F, 0xFC, 0xFF, 0x3C, 0xDF, 0x7C, 0xFF,
0xEB, 0x7E, 0x3F, 0x69, 0xFE, 0xF9, 0xDE, 0xEF, 0x2D, 0x7F, 0x81, 0xD7, 0xF8, 0x5F, 0x7B, 0x72,
0x43, 0x9B, 0xEE, 0xF7, 0xFD, 0x3F, 0x7B, 0x3D, 0xEE, 0xC7, 0xFD, 0xE7, 0xFF, 0x5E, 0xFB, 0xF5,

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x43, 0x83, 0x83, 0x43, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFB,
0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x43, 0x83, 0x83, 0x43, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFB,
0xFF, 0x00, 0x24, 0x08, 0x18, 0x24, 0x42, 0x81, 0x80, 0x42, 0x24, 0x08, 0x18, 0x24, 0x00, 0xFF,
0xFF, 0x00, 0x24, 0x08, 0x18, 0x24, 0x42, 0x81, 0x80, 0x42, 0x24, 0x08, 0x18, 0x24, 0x00, 0xFF,
0xFF, 0x00, 0x24, 0x08, 0x18, 0x24, 0x42, 0x81, 0x80, 0x42, 0x24, 0x08, 0x18, 0x24, 0x00, 0xFF,
0xFF, 0x00, 0x24, 0x08, 0x18, 0x24, 0x42, 0x81, 0x80, 0x42, 0x24, 0x08, 0x18, 0x24, 0x00, 0xFF,
0xFF, 0x00, 0x24, 0x08, 0x18, 0x24, 0x42, 0x81, 0x80, 0x42, 0x24, 0x08, 0x18, 0x24, 0x00, 0xFF,
0xFF, 0x00, 0x24, 0x08, 0x18, 0x24, 0x42, 0x81, 0x80, 0x42, 0x24, 0x08, 0x18, 0x24, 0x00, 0xFF,
0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x7E, 0xBE, 0x1E, 0xFE, 0xFE, 0x7E, 0xFE, 0xFE, 0xFE, 0x3E, 0xFE,
0x1E, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x7E, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
0x1D, 0x81, 0xC0, 0x97, 0x01, 0xC6, 0xE1, 0x70, 0xF3, 0x80, 0x7E, 0x2F, 0x07, 0xF0, 0xFC, 0xFD,
0xFC, 0x67, 0x11, 0x0F, 0x03, 0xF0, 0xF7, 0xF3, 0x79, 0x38, 0x03, 0xDF, 0xC0, 0xE1, 0x04, 0x0B
};

PROGMEM const unsigned char cloud [] = {
0xF4, 0xFA, 0xD8, 0xF8, 0xF0, 0xD8, 0xD0, 0xE0, 0xE0, 0xC0, 0xE0, 0xE0, 0xC0, 0xA0, 0xC0, 0x80,
0xC0, 0x20, 0xC0, 0x40, 0x80, 0x00, 0x80, 0x40, 0xA0, 0xD0, 0xA0, 0x80, 0x00, 0xA0, 0xC0, 0xA0,
0xA0, 0xC0, 0xA0, 0xC0, 0xD0, 0xF0, 0xA0, 0xA0, 0x90, 0x98, 0x90, 0xDC, 0xF8, 0xEC, 0xE4, 0xF6,

0x0B, 0x05, 0x27, 0x07, 0x0F, 0x27, 0x2F, 0x1F, 0x1F, 0x3F, 0x1F, 0x1F, 0x3F, 0x5F, 0x3F, 0x7F,
0x3F, 0xDF, 0x3F, 0xBF, 0x7F, 0xFF, 0x7F, 0xBF, 0x5F, 0x2F, 0x5F, 0x7F, 0xFF, 0x5F, 0x3F, 0x5F,
0x5F, 0x3F, 0x5F, 0x3F, 0x2F, 0x0F, 0x5F, 0x5F, 0x6F, 0x67, 0x6F, 0x23, 0x07, 0x13, 0x1B, 0x09
};

PROGMEM const unsigned char barrel [] = {
0x83, 0x7E, 0x42, 0x83, 0x7B, 0x83, 0xFA, 0x7B, 0x02, 0x82, 0x06, 0x56, 0x7E, 0x7E, 0x83, 0x00,
0xC1, 0xBF, 0xE1, 0xC1, 0xBD, 0xC0, 0x9D, 0x80, 0x81, 0xA1, 0x85, 0xAB, 0xBF, 0xBF, 0xC1, 0x00,

0x00, 0x81, 0xBD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xF9, 0xA9, 0x81, 0x81, 0x00, 0x00,
0x00, 0x40, 0x5E, 0x7E, 0x5E, 0x7F, 0x7E, 0x7F, 0x7E, 0x5E, 0x7A, 0x54, 0x40, 0x40, 0x00, 0x00
};

PROGMEM const unsigned char megaman [] = {
//frame1 grey1
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x50,
0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3C,
0x73, 0x60, 0xC0, 0x86, 0x8F, 0x89, 0x89, 0x00, 0xC8, 0xE7, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x18, 0x08, 0x00, 0x06, 0x0E, 0x0E, 0x0D, 0x00, 0x00,
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
//frame1 grey2
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0x70, 0x70, 0x68, 0x18, 0x50,
0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x3C, 0x3E, 0x0C, 0x03, 0x0F, 0xFC,
0xF3, 0xE1, 0xDE, 0xBF, 0xAF, 0xA9, 0xA9, 0x2E, 0xD8, 0xEF, 0xC0, 0xC0, 0xF8, 0x78, 0x38, 0x00,
0x00, 0x0C, 0x0E, 0x07, 0x0F, 0x1E, 0x1C, 0x19, 0x0B, 0x07, 0x47, 0x7F, 0x7F, 0x7D, 0x58, 0x40,
0x40, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
//frame1 mask
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7F, 0x1F, 0x0F, 0x07, 0x07, 0x03, 0x03, 0x03, 0x07,
0x0F, 0x1F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x83, 0x81, 0x00, 0x40, 0xF0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x07, 0x03, 0x03, 0x83, 0xC7,
0xF3, 0xE1, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xE0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x02, 0x07,
0x1E, 0x3C, 0xFC, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 
//frame2 grey1
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x80, 0xC0, 0x42, 0x46, 0x14,
0x10, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0E, 0x0F, 0x07,
0x0C, 0x18, 0x10, 0x21, 0x63, 0x62, 0x22, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0x06, 0x00, 0x03, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
//frame2 grey2
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x78, 0xBC, 0xDC, 0xDC, 0x5A, 0x46, 0x94,
0x10, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x3E, 0x7F, 0xF7,
0xAC, 0xD8, 0xD7, 0x2F, 0xEB, 0x6A, 0x2A, 0x4B, 0x66, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x78, 0x79, 0x5D, 0x5E, 0x4F, 0x00, 0x03, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
//frame2 mask
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x07, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01,
0x03, 0x07, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xC1, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x87, 0x02, 0x00, 0x00, 0x00, 0x00, 0x30, 0xF8, 0xFC, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
//frame3 grey1
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18,
0x50, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x1C,
0x1C, 0xEB, 0x70, 0x70, 0xE6, 0xCF, 0x09, 0x09, 0x00, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x1E, 0x0C, 0x00, 0x01, 0x00, 0x08, 0x0D, 0x0C, 0x04,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
//frame3 grey2
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0x70, 0x70, 0x68, 0x18,
0x50, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x78, 0x78, 0x1C, 0x1C,
0x9C, 0xEB, 0x71, 0xFE, 0xFF, 0xEF, 0xA9, 0xA9, 0xAE, 0xD8, 0xCF, 0xC0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x0C, 0x0E, 0x07, 0x0F, 0x1E, 0x1C, 0x1E, 0x0F, 0x07, 0x07, 0x06, 0x4D, 0x7D, 0x7D, 0x7D,
0x59, 0x41, 0x41, 0x01, 0x00, 0x00, 0x00, 0x00, 
//frame3 mask
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x0F, 0x07, 0x07, 0x03, 0x03, 0x03,
0x07, 0x0F, 0x1F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x07, 0x03, 0x03, 0x81, 0x41,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x3F, 0xFF, 0xFF, 0xFF,
0xF3, 0xE1, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xE0, 0xF0, 0xF0, 0x30, 0x00, 0x00, 0x00, 0x00,
0x00, 0x04, 0x1C, 0x3C, 0xFE, 0xFF, 0xFF, 0xFF, 
//frame4 grey1
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x80, 0xC0, 0x42, 0x46, 0x14,
0x10, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0E, 0x0F, 0x07,
0x0C, 0x18, 0x10, 0x21, 0x63, 0x62, 0x22, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0x06, 0x00, 0x03, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
//frame4 grey2
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x78, 0xBC, 0xDC, 0xDC, 0x5A, 0x46, 0x94,
0x10, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x3E, 0x7F, 0xF7,
0xAC, 0xD8, 0xD7, 0x2F, 0xEB, 0x6A, 0x2A, 0x4B, 0x66, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x78, 0x79, 0x5D, 0x5E, 0x4F, 0x00, 0x03, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
//frame4 mask
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x07, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01,
0x03, 0x07, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xC1, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x87, 0x02, 0x00, 0x00, 0x00, 0x00, 0x30, 0xF8, 0xFC, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
};
