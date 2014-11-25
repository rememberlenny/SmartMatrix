#include "MatrixFontCommon.h"

// created using gimp to save 32x32 RGB bitmap as a raw .pnm file, extracted raw data from .pnm file using hex editor
static const unsigned char weathericonbitmap[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x00, 0x06, 0x05, 0x00, 0x07, 0x05, 0x00, 0x0C, 0x09,
0x00, 0x13, 0x0F, 0x01, 0x07, 0x05, 0x00, 0x07, 0x05, 0x00, 0x04, 0x03, 0x00, 0x02, 0x02, 0x02,
0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03,
0x03, 0x0E, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
0x03, 0x00, 0x07, 0x05, 0x00, 0x11, 0x0D, 0x01, 0x3B, 0x2C, 0x03, 0x1E, 0x16, 0x01, 0x32, 0x26,
0x02, 0x4A, 0x37, 0x04, 0x1F, 0x17, 0x01, 0x3B, 0x2C, 0x03, 0x14, 0x0F, 0x01, 0x0A, 0x08, 0x03,
0x14, 0x13, 0x11, 0x09, 0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07,
0x07, 0x11, 0x11, 0x11, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x04, 0x00, 0x26,
0x1E, 0x02, 0x1E, 0x17, 0x01, 0x2B, 0x20, 0x02, 0x84, 0x62, 0x0A, 0x56, 0x3F, 0x04, 0x6A, 0x50,
0x06, 0x7B, 0x5C, 0x08, 0x56, 0x3F, 0x04, 0x87, 0x61, 0x0A, 0x2D, 0x22, 0x02, 0x21, 0x1A, 0x08,
0x2F, 0x27, 0x10, 0x11, 0x10, 0x0D, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
0x01, 0x0C, 0x0C, 0x0C, 0x10, 0x10, 0x10, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x04, 0x00, 0x0F, 0x0B, 0x01, 0x33,
0x27, 0x02, 0x82, 0x5F, 0x0A, 0x6A, 0x4E, 0x06, 0x9A, 0x75, 0x0A, 0xB0, 0x89, 0x12, 0xBE, 0x96,
0x1F, 0xBE, 0x94, 0x1C, 0xAE, 0x80, 0x0F, 0xA6, 0x7C, 0x0D, 0x6B, 0x4F, 0x0C, 0x75, 0x57, 0x17,
0x4F, 0x40, 0x15, 0x63, 0x59, 0x36, 0x5D, 0x60, 0x59, 0x22, 0x23, 0x23, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07,
0x07, 0x14, 0x14, 0x14, 0x0F, 0x0F, 0x0F, 0x0E, 0x0E, 0x0E, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x00, 0x25, 0x1D, 0x02, 0x28, 0x1F, 0x02, 0x4E,
0x39, 0x04, 0x94, 0x6F, 0x0B, 0xC1, 0x9A, 0x21, 0xED, 0xCD, 0x66, 0xFA, 0xE0, 0x8E, 0xFB, 0xE0,
0x8E, 0xFA, 0xDA, 0x81, 0xF8, 0xCC, 0x67, 0xDB, 0xA4, 0x34, 0xB4, 0x87, 0x24, 0xAC, 0x81, 0x27,
0xCF, 0xBD, 0x8A, 0xEF, 0xEA, 0xD2, 0xEC, 0xE1, 0xCA, 0xD3, 0xDB, 0xDB, 0x49, 0x4E, 0x50, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x0D,
0x0D, 0x12, 0x12, 0x12, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x0C, 0x19, 0x19, 0x19, 0x02, 0x02, 0x02,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x06, 0x00, 0x22, 0x1A, 0x01, 0x8B, 0x62, 0x0B, 0x8A,
0x65, 0x08, 0xD4, 0xA8, 0x31, 0xFB, 0xE1, 0x8D, 0xFC, 0xE9, 0x9C, 0xFD, 0xEA, 0x9B, 0xFC, 0xE7,
0x90, 0xFB, 0xE0, 0x7C, 0xE0, 0xC5, 0x72, 0xD7, 0xC3, 0x8D, 0xD7, 0xB9, 0x84, 0xD6, 0xB2, 0x63,
0xEE, 0xC9, 0x76, 0xF0, 0xBC, 0x70, 0xE3, 0xDF, 0xC8, 0xDE, 0xE4, 0xE1, 0xC0, 0xCC, 0xD5, 0x8D,
0x9A, 0x9E, 0x3A, 0x3F, 0x42, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x0C, 0x0C, 0x0C, 0x09, 0x09,
0x09, 0x10, 0x10, 0x10, 0x09, 0x09, 0x09, 0x15, 0x15, 0x15, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x04, 0x03, 0x00, 0x12, 0x0E, 0x01, 0x2D, 0x22, 0x02, 0x6E, 0x4F, 0x06, 0xC9,
0x99, 0x20, 0xFB, 0xDD, 0x7F, 0xFC, 0xE7, 0x90, 0xFD, 0xEC, 0x95, 0xF8, 0xE9, 0x8E, 0xEE, 0xE3,
0x94, 0xE8, 0xDE, 0x9C, 0xD9, 0xD5, 0xB4, 0xD6, 0xCF, 0xBA, 0xEC, 0xE1, 0xC9, 0xE8, 0xD8, 0xBD,
0xDA, 0xC4, 0x9B, 0xD4, 0xC9, 0xA6, 0xE0, 0xDB, 0xBE, 0xE5, 0xE8, 0xDB, 0xD8, 0xDF, 0xE0, 0xCF,
0xD9, 0xDE, 0x9E, 0xB0, 0xB8, 0x45, 0x4A, 0x4F, 0x37, 0x3A, 0x3B, 0x13, 0x13, 0x13, 0x13, 0x13,
0x13, 0x0C, 0x0C, 0x0C, 0x10, 0x10, 0x10, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x09, 0x07, 0x00, 0x43, 0x30, 0x04, 0x81, 0x59, 0x0A, 0x95, 0x6B, 0x0B, 0xF1,
0xC2, 0x48, 0xFB, 0xDE, 0x77, 0xFC, 0xE5, 0x6F, 0xFD, 0xEE, 0x76, 0xE2, 0xDE, 0x8B, 0xD9, 0xDA,
0xC2, 0xE9, 0xE9, 0xCD, 0xDB, 0xD9, 0xBB, 0xE8, 0xE2, 0xC8, 0xEA, 0xE0, 0xC0, 0xDF, 0xD0, 0xB2,
0xD9, 0xC9, 0xB0, 0xD2, 0xCE, 0xBC, 0xC6, 0xBE, 0xAB, 0xC8, 0xC0, 0xB1, 0xB9, 0xC3, 0xC5, 0xC6,
0xD1, 0xD7, 0xCD, 0xD6, 0xDB, 0xAD, 0xB4, 0xB8, 0xB7, 0xBE, 0xC4, 0x38, 0x40, 0x44, 0x1C, 0x1F,
0x20, 0x14, 0x14, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x08, 0x06, 0x00, 0x21, 0x19, 0x01, 0x5C, 0x43, 0x05, 0xBA, 0x85, 0x13, 0xF7,
0xC6, 0x44, 0xFA, 0xD7, 0x57, 0xF8, 0xE0, 0x5E, 0xD9, 0xD6, 0x92, 0xD5, 0xDA, 0xBA, 0xC9, 0xCD,
0xB1, 0xC6, 0xC8, 0xAB, 0xD5, 0xD4, 0xB5, 0xE3, 0xDE, 0xBA, 0xE0, 0xD6, 0xB4, 0xD8, 0xC9, 0xAB,
0xD3, 0xBF, 0xA8, 0xD8, 0xD1, 0xC5, 0xC7, 0xCC, 0xCE, 0xC6, 0xCE, 0xD5, 0xA9, 0xB5, 0xBD, 0xA3,
0xAE, 0xB5, 0xA9, 0xB6, 0xBF, 0x97, 0xA6, 0xB3, 0x8E, 0x99, 0xA1, 0x9E, 0xAC, 0xB4, 0x90, 0xA0,
0xAB, 0x39, 0x42, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x01, 0x01, 0x00, 0x0D, 0x0A, 0x00, 0x2A, 0x20, 0x02, 0x6A, 0x4B, 0x06, 0xCA, 0x8D, 0x10, 0xF6,
0xBA, 0x2B, 0xF9, 0xD1, 0x4B, 0xD4, 0xC2, 0x62, 0xA5, 0xAF, 0x97, 0xC1, 0xC7, 0xA9, 0xC9, 0xCC,
0xAB, 0xC9, 0xCD, 0xAA, 0xD0, 0xD0, 0xAA, 0xCF, 0xCA, 0xA4, 0xC8, 0xC0, 0xA1, 0xCA, 0xBD, 0xA1,
0xC1, 0xBD, 0xB5, 0xC0, 0xCA, 0xD3, 0xB5, 0xC0, 0xCB, 0xB4, 0xBE, 0xC8, 0x94, 0xA0, 0xA8, 0xBD,
0xC4, 0xC8, 0x94, 0x9F, 0xA5, 0x86, 0x97, 0xA3, 0x8C, 0x9B, 0xA7, 0x79, 0x8A, 0x95, 0x75, 0x8A,
0x98, 0x75, 0x88, 0x95, 0x4E, 0x5D, 0x65, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x02, 0x02, 0x00, 0x18, 0x12, 0x01, 0x5B, 0x3E, 0x05, 0x8A, 0x5B, 0x09, 0xCA, 0x88, 0x13, 0xF4,
0xAE, 0x19, 0xF8, 0xC5, 0x37, 0xCA, 0xB4, 0x53, 0x8B, 0x93, 0x7C, 0xA9, 0xAD, 0x90, 0xC2, 0xC4,
0x9E, 0xB3, 0xB9, 0x9C, 0xB4, 0xBC, 0xAF, 0xB8, 0xBF, 0xB4, 0xA4, 0xA8, 0x9A, 0xA7, 0xA7, 0x99,
0xA3, 0xB4, 0xBF, 0xA3, 0xB3, 0xBF, 0xA2, 0xB1, 0xBD, 0x9F, 0xAD, 0xB8, 0x8B, 0x9B, 0xA7, 0xA0,
0xAC, 0xB5, 0xD1, 0xD6, 0xDA, 0x70, 0x80, 0x8B, 0x71, 0x85, 0x93, 0x64, 0x7B, 0x8C, 0x6D, 0x83,
0x93, 0x73, 0x8A, 0x98, 0x6E, 0x86, 0x94, 0x43, 0x50, 0x57, 0x02, 0x03, 0x03, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x09, 0x07, 0x00, 0x1F, 0x18, 0x01, 0x59, 0x40, 0x04, 0xB7, 0x7C, 0x0D, 0xF2,
0xA5, 0x19, 0xE3, 0xA6, 0x1D, 0xE7, 0xB7, 0x30, 0xB7, 0xA8, 0x61, 0xAB, 0xA7, 0x7A, 0xA4, 0xAC,
0x9A, 0x90, 0xA5, 0xB3, 0x9B, 0xAF, 0xBD, 0xA6, 0xB7, 0xC4, 0xA5, 0xB6, 0xC2, 0x9D, 0xAF, 0xBA,
0x8E, 0xA1, 0xAE, 0x7B, 0x91, 0xA1, 0x7D, 0x92, 0xA1, 0x81, 0x95, 0xA3, 0x8D, 0x9E, 0xAB, 0xAD,
0xB5, 0xBB, 0xB8, 0xBE, 0xC4, 0x9F, 0xAE, 0xB8, 0x72, 0x88, 0x99, 0x5E, 0x77, 0x88, 0x5D, 0x76,
0x87, 0x5F, 0x79, 0x8A, 0x53, 0x6F, 0x81, 0x4D, 0x69, 0x7A, 0x21, 0x27, 0x2B, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x08, 0x06, 0x00, 0x3B, 0x2A, 0x02, 0x8B, 0x52, 0x08, 0xAD, 0x69, 0x0D, 0xDE,
0x90, 0x1A, 0xE0, 0x9F, 0x2B, 0xC1, 0xB4, 0x8A, 0xDA, 0xDF, 0xE0, 0xE8, 0xEC, 0xED, 0xCD, 0xD5,
0xDB, 0x97, 0xA7, 0xB3, 0x98, 0xA8, 0xB5, 0x90, 0xA2, 0xAF, 0x8E, 0xA2, 0xAE, 0xA9, 0xB5, 0xBE,
0x9C, 0xA3, 0xAA, 0xB2, 0xBD, 0xC5, 0xC1, 0xCC, 0xD4, 0xCC, 0xD6, 0xDD, 0xD3, 0xDB, 0xE3, 0xC6,
0xCF, 0xD5, 0xB6, 0xC2, 0xCA, 0xD1, 0xD9, 0xE0, 0xE8, 0xED, 0xF0, 0xC0, 0xCD, 0xD4, 0x57, 0x72,
0x81, 0x46, 0x60, 0x70, 0x46, 0x5E, 0x6F, 0x4E, 0x63, 0x71, 0x0E, 0x11, 0x13, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x06, 0x05, 0x00, 0x1F, 0x17, 0x01, 0x34, 0x27, 0x02, 0x73, 0x51, 0x0C, 0xBF,
0x7E, 0x1B, 0xC1, 0x9B, 0x61, 0xCB, 0xD5, 0xDD, 0xD3, 0xDC, 0xE3, 0xCE, 0xD8, 0xE1, 0xD0, 0xDA,
0xE1, 0xDC, 0xE4, 0xE8, 0xE5, 0xEB, 0xEF, 0xE0, 0xE7, 0xEA, 0xE0, 0xE6, 0xE9, 0xE0, 0xE8, 0xEB,
0xD5, 0xDB, 0xE1, 0xB0, 0xB7, 0xBC, 0xC4, 0xCF, 0xD8, 0xBF, 0xCE, 0xD8, 0xA5, 0xB1, 0xBA, 0xB1,
0xBF, 0xC7, 0xB1, 0xC1, 0xCD, 0xB4, 0xC4, 0xCF, 0xC7, 0xD4, 0xDC, 0xCB, 0xD7, 0xDF, 0x81, 0x95,
0xA3, 0x0B, 0x0D, 0x0E, 0x13, 0x15, 0x16, 0x15, 0x16, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x0A, 0x08, 0x01, 0x24, 0x1C, 0x07, 0x77, 0x52, 0x18, 0x9A,
0x8E, 0x82, 0xCA, 0xD2, 0xD6, 0xC4, 0xD1, 0xD9, 0xBF, 0xCE, 0xD7, 0xB6, 0xC7, 0xD1, 0xBD, 0xCC,
0xD6, 0xD6, 0xDF, 0xE5, 0xD5, 0xDE, 0xE4, 0xD6, 0xDF, 0xE5, 0xD9, 0xE1, 0xE7, 0xC7, 0xD5, 0xDC,
0xC0, 0xD0, 0xD8, 0xB6, 0xC3, 0xCB, 0xA1, 0xAF, 0xB6, 0xA0, 0xAD, 0xB7, 0xA0, 0xAD, 0xB8, 0xAA,
0xBB, 0xC7, 0xA4, 0xB6, 0xC5, 0xA6, 0xB9, 0xC5, 0xB2, 0xC3, 0xCF, 0xB1, 0xC3, 0xCE, 0x93, 0xA7,
0xB7, 0x7A, 0x8C, 0x95, 0x61, 0x6E, 0x76, 0x1F, 0x22, 0x23, 0x09, 0x09, 0x09, 0x00, 0x00, 0x00,
0x01, 0x01, 0x01, 0x05, 0x05, 0x05, 0x0E, 0x0D, 0x0A, 0x39, 0x2D, 0x12, 0x73, 0x5C, 0x34, 0x97,
0xAB, 0xB9, 0xA2, 0xB8, 0xC4, 0xAF, 0xC0, 0xCC, 0xA4, 0xB7, 0xC5, 0x9B, 0xB1, 0xC0, 0xA7, 0xBB,
0xC8, 0xBF, 0xCE, 0xD7, 0xBC, 0xCC, 0xD5, 0xC5, 0xD2, 0xD9, 0xCB, 0xD6, 0xDE, 0xB4, 0xC6, 0xD1,
0x87, 0x99, 0xA3, 0x9B, 0xAE, 0xBA, 0x9F, 0xB3, 0xC0, 0x96, 0xA8, 0xB3, 0xA4, 0xB9, 0xC7, 0x9A,
0xB0, 0xBE, 0x8F, 0xA8, 0xB7, 0x8A, 0xA4, 0xB4, 0x89, 0xA3, 0xB4, 0x87, 0xA2, 0xB2, 0x84, 0x9F,
0xB0, 0xA5, 0xB7, 0xC2, 0x9B, 0xAD, 0xB9, 0x62, 0x72, 0x79, 0x13, 0x13, 0x13, 0x00, 0x00, 0x00,
0x04, 0x04, 0x04, 0x11, 0x11, 0x11, 0x12, 0x12, 0x11, 0x16, 0x15, 0x11, 0x39, 0x33, 0x1D, 0x73,
0x88, 0x91, 0x7F, 0x99, 0xA8, 0x99, 0xB0, 0xBE, 0x91, 0xA8, 0xB8, 0x8C, 0xA4, 0xB4, 0x8B, 0xA5,
0xB5, 0x9A, 0xB1, 0xC0, 0xA6, 0xB9, 0xC6, 0xA1, 0xAF, 0xB9, 0xB3, 0xC1, 0xCA, 0xAA, 0xBD, 0xC9,
0x8F, 0xA5, 0xB3, 0x84, 0xA0, 0xB1, 0x83, 0x9F, 0xB1, 0x8B, 0xA6, 0xB6, 0x8A, 0xA5, 0xB5, 0x85,
0xA0, 0xB1, 0x7C, 0x9A, 0xAC, 0x75, 0x93, 0xA6, 0x73, 0x91, 0xA5, 0x70, 0x8F, 0xA3, 0x76, 0x90,
0xA0, 0x92, 0xA6, 0xB3, 0x91, 0xA6, 0xB5, 0x89, 0x9F, 0xAA, 0x28, 0x2E, 0x31, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x05, 0x05, 0x05, 0x11, 0x11, 0x11, 0x12, 0x12, 0x12, 0x05, 0x05, 0x05, 0x56,
0x52, 0x3F, 0x70, 0x86, 0x95, 0x75, 0x8C, 0x9E, 0x7F, 0x9A, 0xAC, 0x86, 0xA1, 0xB2, 0x7C, 0x99,
0xAB, 0x83, 0xA0, 0xB1, 0x83, 0x98, 0xA6, 0x93, 0xA6, 0xB2, 0x93, 0xA6, 0xB2, 0x8E, 0xA0, 0xAB,
0x8B, 0xA6, 0xB5, 0x79, 0x98, 0xAA, 0x6D, 0x8E, 0xA1, 0x6D, 0x8C, 0xA0, 0x6F, 0x8E, 0xA2, 0x6C,
0x8B, 0x9F, 0x69, 0x89, 0x9D, 0x68, 0x88, 0x9C, 0x69, 0x88, 0x9C, 0x6E, 0x8A, 0x9D, 0x83, 0x99,
0xA9, 0x85, 0x9D, 0xAD, 0x83, 0x9D, 0xAD, 0x88, 0xA0, 0xAF, 0x5F, 0x6E, 0x77, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x36, 0x34, 0x22, 0x68, 0x68, 0x4B, 0x6F, 0x89, 0x9C, 0x74, 0x90, 0xA2, 0x6E, 0x8A,
0x9D, 0x66, 0x84, 0x96, 0x72, 0x8C, 0x9C, 0x74, 0x8A, 0x97, 0x86, 0x9C, 0xAA, 0x77, 0x8D, 0x9B,
0x7D, 0x97, 0xA7, 0x86, 0xA2, 0xB2, 0x78, 0x95, 0xA7, 0x61, 0x82, 0x97, 0x5F, 0x81, 0x96, 0x66,
0x86, 0x9A, 0x70, 0x8F, 0xA2, 0x77, 0x94, 0xA6, 0x71, 0x8A, 0x9B, 0x71, 0x87, 0x95, 0x6F, 0x87,
0x95, 0x75, 0x8E, 0x9F, 0x75, 0x8C, 0x9C, 0x5C, 0x6D, 0x77, 0x1A, 0x1E, 0x21, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x01, 0x00, 0x06, 0x05, 0x01, 0x53, 0x54, 0x40, 0x60, 0x63, 0x51, 0x49, 0x41,
0x21, 0x66, 0x74, 0x77, 0x6D, 0x85, 0x92, 0x75, 0x89, 0x92, 0x74, 0x86, 0x92, 0x72, 0x89, 0x97,
0x74, 0x90, 0xA1, 0x7A, 0x94, 0xA4, 0x7D, 0x92, 0xA2, 0x72, 0x8C, 0x9D, 0x6C, 0x87, 0x99, 0x71,
0x89, 0x96, 0x68, 0x78, 0x85, 0x74, 0x87, 0x97, 0x63, 0x74, 0x7F, 0x43, 0x4D, 0x52, 0x80, 0x90,
0x9A, 0xBD, 0xD0, 0xDA, 0xA0, 0xB8, 0xC6, 0x22, 0x28, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x8A, 0x9A, 0xA1, 0xAC, 0xC2, 0xCC, 0x31, 0x37, 0x3B, 0x24, 0x24,
0x21, 0x18, 0x18, 0x15, 0x13, 0x14, 0x14, 0x0E, 0x0E, 0x0E, 0x3D, 0x43, 0x44, 0x5F, 0x6E, 0x75,
0x5E, 0x6D, 0x78, 0x3C, 0x45, 0x4A, 0x08, 0x0A, 0x0A, 0x27, 0x2D, 0x31, 0x2E, 0x35, 0x3A, 0x0E,
0x10, 0x12, 0x0C, 0x0C, 0x0C, 0x13, 0x13, 0x13, 0x27, 0x2C, 0x2F, 0x19, 0x1A, 0x1B, 0xB0, 0xC2,
0xCE, 0xCD, 0xDD, 0xE5, 0xC8, 0xD9, 0xE1, 0x68, 0x75, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x02, 0x03, 0x03, 0xC0, 0xD3, 0xDD, 0xD4, 0xE0, 0xE6, 0x64, 0x6D, 0x73, 0x10, 0x10,
0x10, 0x01, 0x01, 0x01, 0x0C, 0x0C, 0x0C, 0x15, 0x15, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
0x01, 0x01, 0x06, 0x06, 0x06, 0x16, 0x16, 0x16, 0x18, 0x18, 0x18, 0x09, 0x0A, 0x0A, 0x87, 0x9B,
0xA5, 0xD1, 0xDF, 0xE5, 0xE6, 0xEB, 0xEE, 0x51, 0x5A, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0F, 0x12, 0x13, 0x44, 0x4C, 0x52, 0x72, 0x77, 0x7B, 0x27, 0x28, 0x26, 0x13, 0x13,
0x13, 0x13, 0x13, 0x13, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x1B, 0x1F, 0x22, 0x1F, 0x24, 0x27,
0x0A, 0x08, 0x02, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x03, 0x81, 0x8E, 0x95, 0xA4,
0xB5, 0xBF, 0x39, 0x40, 0x43, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x02, 0x02, 0x03, 0x12, 0x15,
0x17, 0x58, 0x61, 0x67, 0x4A, 0x51, 0x56, 0x06, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x07, 0x07, 0x07, 0x1B, 0x1B, 0x1B, 0x12, 0x12, 0x12, 0x11, 0x11, 0x11, 0x10, 0x0F,
0x0C, 0x17, 0x16, 0x15, 0x08, 0x08, 0x08, 0x51, 0x5A, 0x57, 0xC1, 0xD3, 0xDF, 0xAD, 0xC6, 0xD2,
0x40, 0x49, 0x4D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x16, 0x17, 0xB9, 0xC9, 0xD2, 0xBF,
0xC8, 0xCD, 0x6B, 0x74, 0x7B, 0x06, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
0x01, 0x01, 0x0E, 0x0E, 0x0E, 0x13, 0x13, 0x13, 0x00, 0x00, 0x00, 0x0D, 0x0D, 0x0D, 0x13, 0x13,
0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0xA7, 0xB3, 0xCC, 0xDD, 0xE5, 0xCD, 0xDD, 0xE4,
0x8B, 0x9B, 0xA2, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x16, 0x16, 0x16, 0x51, 0x59, 0x5F, 0x83,
0x8A, 0x8F, 0x1E, 0x20, 0x22, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x07, 0x07, 0x07, 0x10,
0x10, 0x10, 0x06, 0x06, 0x06, 0x10, 0x10, 0x10, 0x0B, 0x0B, 0x0B, 0x15, 0x15, 0x15, 0x08, 0x08,
0x08, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x60, 0x6F, 0x78, 0xCC, 0xDC, 0xE2, 0xE7, 0xEC, 0xEF,
0x5F, 0x67, 0x6F, 0x06, 0x06, 0x06, 0x14, 0x14, 0x14, 0x11, 0x11, 0x11, 0x12, 0x13, 0x13, 0x03,
0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x0D, 0x0E, 0x5B, 0x6A, 0x73, 0x89, 0x9F,
0xA9, 0x72, 0x87, 0x91, 0x23, 0x29, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x1B, 0x1B, 0x1B, 0x0C,
0x0C, 0x0C, 0x05, 0x05, 0x05, 0x0F, 0x0F, 0x0F, 0x39, 0x3D, 0x40, 0xAF, 0xC4, 0xCD, 0x41, 0x4B,
0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x0D, 0x0E, 0x3A, 0x41, 0x45, 0x3A, 0x40, 0x44,
0x0B, 0x0B, 0x0B, 0x12, 0x12, 0x12, 0x11, 0x11, 0x11, 0x10, 0x10, 0x10, 0x06, 0x06, 0x07, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x6C, 0x7E, 0x86, 0xD1, 0xE0, 0xE7, 0xC7, 0xD8,
0xE0, 0xB3, 0xCA, 0xD4, 0x9E, 0xB5, 0xC1, 0x16, 0x19, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x09, 0x09, 0x09, 0x10, 0x10, 0x10, 0x05, 0x05, 0x05, 0x0D, 0x0D, 0x0D, 0x16, 0x16, 0x16, 0x02,
0x02, 0x02, 0x0A, 0x0A, 0x0A, 0x0F, 0x0F, 0x0F, 0xBA, 0xCC, 0xD6, 0xD6, 0xE2, 0xE8, 0x62, 0x6D,
0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x08, 0x08, 0x08,
0x0F, 0x0F, 0x0F, 0x2F, 0x35, 0x37, 0x93, 0xA2, 0xA9, 0x96, 0xAA, 0xB2, 0x32, 0x3B, 0x40, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x10, 0x11, 0xAB, 0xC0, 0xC8, 0xCD, 0xDD, 0xE5, 0xC9, 0xD9,
0xE1, 0xC4, 0xD6, 0xDE, 0xC0, 0xD2, 0xDB, 0x3D, 0x46, 0x4D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x02, 0x02, 0x02, 0x14, 0x14, 0x14, 0x0F, 0x0F, 0x0F, 0x0A, 0x0A, 0x0A, 0x10, 0x10, 0x10, 0x0B,
0x0B, 0x0B, 0x15, 0x15, 0x15, 0x08, 0x08, 0x08, 0x2C, 0x31, 0x34, 0x84, 0x8D, 0x93, 0x2C, 0x31,
0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x0A, 0x0A, 0x0E, 0x0E, 0x0E, 0x12, 0x12, 0x12,
0x1B, 0x1D, 0x1F, 0x67, 0x75, 0x7B, 0xCA, 0xDC, 0xE3, 0xC9, 0xDA, 0xE2, 0x7E, 0x8C, 0x94, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x0D, 0x0F, 0x9D, 0xB5, 0xBE, 0xC4, 0xD6, 0xE0, 0xD3, 0xE1,
0xE7, 0xDD, 0xE6, 0xEB, 0xD3, 0xDF, 0xE4, 0x39, 0x41, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x14, 0x14, 0x14, 0x0D, 0x0D, 0x0D, 0x0A, 0x0A, 0x0A, 0x0F,
0x0F, 0x0F, 0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x11, 0x11, 0x11, 0x13, 0x13, 0x13,
0x1F, 0x22, 0x23, 0x76, 0x85, 0x8F, 0xBD, 0xCD, 0xD8, 0xD6, 0xDE, 0xE2, 0x62, 0x6A, 0x70, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x54, 0x60, 0x69, 0xC0, 0xD2, 0xDB, 0xD6, 0xDF,
0xE3, 0xEB, 0xED, 0xEF, 0xAF, 0xB6, 0xB9, 0x10, 0x13, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x13, 0x13, 0x14, 0x14, 0x14, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x11, 0x11, 0x11,
0x00, 0x00, 0x00, 0x2F, 0x35, 0x37, 0x84, 0x93, 0x9E, 0x8A, 0x9A, 0xA2, 0x25, 0x29, 0x2B, 0x00,
0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x06, 0x07, 0x08, 0x3B, 0x44, 0x4B, 0x6F, 0x79,
0x7F, 0x5C, 0x65, 0x6A, 0x17, 0x19, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x05, 0x10, 0x10, 0x10, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

// for some reason accessing the bitmap array directly from a sketch doesn't work
// for now, accessing it like a bitmap font works - will fix before adding
// RGB bitmap support to the library
const struct bitmap_font weathericon = {
    .Width = 32, .Height = 32,
    .Chars = 0,
    .Widths = 0,
    .Index = 0x00,
    .Bitmap = weathericonbitmap,
};