

/*
 *
 * Vicler8x16
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Vicler8x16.h
 * Date                : 25.09.2020
 * Font size in bytes  : 10886
 * Font width          : 8
 * Font height         : -16
 * Font first char     : 32
 * Font last char      : 192
 * Font used chars     : 160
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef VICLER8X16_H
#define VICLER8X16_H

#define VICLER8X16_WIDTH 8
#define VICLER8X16_HEIGHT 16

static const uint8_t Vicler8x16[] PROGMEM = {
    0x2A, 0x86, // size
    0x08, // width
    0x10, // height
    0x20, // first char
    0xA0, // char count
    
    // char widths
    0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x04, 0x06, 0x03, 0x06, 0x03, 0x04, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x03, 0x00, 0x07, 0x06, 
    0x07, 0x05, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
    0x00, 0x02, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x03, 0x00, 0x09, 0x00, 0x07, 0x07, 0x08, 0x07, 
    0x08, 0x07, 0x08, 0x07, 0x08, 0x09, 0x07, 0x08, 0x06, 0x07, 
    0x09, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x07, 0x08, 0x07, 
    0x07, 0x07, 0x07, 0x07, 0x0A, 0x07, 0x07, 0x07, 0x07, 0x07, 
    0x08, 0x07, 0x0A, 0x08, 0x08, 0x07, 0x08, 0x08, 0x07, 0x08, 
    0x07, 0x07, 0x0A, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x07, 
    0x08, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x07, 0x07, 0x07, 
    
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
    0x00, 0xFC, 0x00, 0x00, 0x0B, 0x00, // 33
    0x00, 0x0E, 0x0A, 0x0E, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x07, 0x01, 0x01, // 43
    0x00, 0x00, 0x00, 0x00, 0x18, 0x38, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, // 45
    0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, // 46
    0x00, 0x00, 0xE0, 0x1C, 0x00, 0x38, 0x07, 0x00, // 47
    0x00, 0xF0, 0x08, 0x08, 0x08, 0x08, 0xF0, 0x00, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, // 48
    0x00, 0x00, 0x00, 0x10, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, // 49
    0x00, 0x08, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // 50
    0x00, 0x08, 0x88, 0x88, 0x88, 0x88, 0xF0, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, // 51
    0x00, 0x78, 0x80, 0x80, 0x80, 0x80, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, // 52
    0x00, 0x70, 0x88, 0x88, 0x88, 0x88, 0x08, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, // 53
    0x00, 0xF8, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, // 54
    0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, // 55
    0x00, 0x70, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, // 56
    0x00, 0x70, 0x88, 0x88, 0x88, 0x88, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, // 57
    0x00, 0x60, 0x60, 0x00, 0x0C, 0x0C, // 58
    0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0x00, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0F, // 60
    0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, // 61
    0x00, 0xE0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x0F, 0x07, 0x07, 0x03, 0x03, 0x01, // 62
    0x20, 0x10, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x0A, 0x01, 0x00, // 63
    0x00, 0xC0, 0x28, 0x20, 0x20, 0x28, 0xC0, 0x00, 0x07, 0x09, 0x09, 0x09, 0x09, 0x09, // 64
    0x00, 0xFC, 0x04, 0x04, 0x04, 0x04, 0xF8, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x07, // 68
    0xFC, 0x04, 0x3F, 0x20, // 91
    0x04, 0xFC, 0x20, 0x3F, // 93
    0x00, 0x08, 0x14, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, // 95
    0x00, 0xC0, 0x20, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x07, 0x09, 0x09, 0x09, 0x09, 0x09, // 101
    0x00, 0xE0, 0x40, 0x20, 0x20, 0x40, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, // 114
    0x00, 0xFE, 0x00, 0x00, 0x7F, 0x00, // 124
    0x50, 0x50, 0xD0, 0x10, 0x10, 0x10, 0xD0, 0x50, 0x50, 0x08, 0x08, 0x0B, 0x0A, 0x0A, 0x0A, 0x0B, 0x08, 0x08, // 126
    0x00, 0xC0, 0x20, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x7F, 0x08, 0x08, 0x08, 0x08, 0x07, // 128  ?
    0x00, 0xC0, 0x20, 0x20, 0x20, 0x20, 0x40, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x04, // 129  ?
    0x00, 0x20, 0x20, 0x20, 0xE0, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, // 130  ?
    0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x07, 0x48, 0x48, 0x48, 0x48, 0x3F, // 131  ?
    0x00, 0xC0, 0x20, 0x20, 0xF8, 0x20, 0x20, 0xC0, 0x00, 0x07, 0x08, 0x08, 0x3F, 0x08, 0x08, 0x07, // 132  ?
    0x00, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x00, 0x08, 0x04, 0x02, 0x02, 0x04, 0x08, // 133  ?
    0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x0F, 0x18, // 134  ?
    0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x0F, // 135  ?
    0x00, 0xE0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xE0, 0x00, 0x07, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x07, // 136  ?
    0x00, 0xE0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x07, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x0F, 0x18, // 137  ?
    0x00, 0x10, 0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x07, // 138  ?
    0x00, 0xE0, 0x80, 0x80, 0x80, 0x00, 0x00, 0xE0, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x07, 0x00, 0x0F, // 139  ?
    0x00, 0xE0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x07, // 140  ?
    0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x08, 0x08, 0x09, 0x09, 0x09, 0x07, // 141  ?
    0x00, 0xE0, 0x00, 0x00, 0xC0, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x0F, 0x01, 0x01, 0x07, 0x08, 0x08, 0x08, 0x07, // 142  ?
    0x00, 0xC0, 0x20, 0x20, 0x20, 0x20, 0xE0, 0x00, 0x08, 0x05, 0x03, 0x01, 0x01, 0x0F, // 143  ?
    0x00, 0xF8, 0x04, 0x04, 0x04, 0x04, 0xF8, 0x00, 0x0F, 0x01, 0x01, 0x01, 0x01, 0x0F, // 144  ?
    0x00, 0xFC, 0x44, 0x44, 0x44, 0x44, 0x84, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x07, // 145  ?
    0x00, 0xFC, 0x44, 0x44, 0x44, 0x44, 0xB8, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x07, // 146  ?
    0x00, 0xFC, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, // 147  ?
    0x00, 0x00, 0xF8, 0x04, 0x04, 0x04, 0xFC, 0x00, 0x00, 0x18, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x18, // 148  ?
    0x00, 0xF8, 0x44, 0x44, 0x44, 0x04, 0x04, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, // 149  ?
    0x00, 0x04, 0x18, 0x20, 0xFC, 0x20, 0x18, 0x04, 0x00, 0x08, 0x06, 0x01, 0x0F, 0x01, 0x06, 0x08, // 150  ?
    0x00, 0x04, 0x04, 0x44, 0x44, 0x44, 0xB8, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x07, // 151  ?
    0x00, 0xFC, 0x00, 0x80, 0x60, 0x18, 0xFC, 0x00, 0x0F, 0x06, 0x01, 0x00, 0x00, 0x0F, // 152  ?
    0x00, 0xF8, 0x00, 0x82, 0x42, 0x30, 0xF8, 0x00, 0x0F, 0x06, 0x01, 0x00, 0x00, 0x0F, // 153  ?
    0x00, 0xFC, 0x40, 0x60, 0x90, 0x08, 0x04, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x03, 0x0C, // 154  ?
    0x00, 0x00, 0xE0, 0x18, 0x04, 0x04, 0xFC, 0x00, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x0F, // 155  ?
    0x00, 0xFC, 0x08, 0x30, 0x40, 0x80, 0x40, 0x30, 0x08, 0xFC, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, // 156  ?
    0x00, 0xFC, 0x40, 0x40, 0x40, 0x40, 0xFC, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F, // 157  ?
    0x00, 0xF8, 0x04, 0x04, 0x04, 0x04, 0xF8, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, // 158  ?
    0x00, 0xFC, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F, // 159  ?
    0x00, 0xFC, 0x84, 0x84, 0x84, 0x84, 0x78, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, // 160  ?
    0x00, 0xF0, 0x08, 0x04, 0x04, 0x04, 0x08, 0x00, 0x03, 0x04, 0x08, 0x08, 0x08, 0x04, // 161  ?
    0x00, 0x04, 0x04, 0x04, 0xFC, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, // 162  ?
    0x00, 0x7C, 0x80, 0x80, 0x80, 0x80, 0xFC, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x07, // 163  ?
    0x00, 0xF8, 0x04, 0x04, 0x04, 0xFE, 0x04, 0x04, 0x04, 0xF8, 0x00, 0x07, 0x08, 0x08, 0x08, 0x3F, 0x08, 0x08, 0x08, 0x07, // 164  ?
    0x00, 0x04, 0x18, 0x20, 0xC0, 0x20, 0x18, 0x04, 0x00, 0x08, 0x06, 0x01, 0x00, 0x01, 0x06, 0x08, // 165  ?
    0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x0F, 0x18, // 166  ?
    0x00, 0x7C, 0x80, 0x80, 0x80, 0x80, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, // 167  ?
    0x00, 0xFC, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xFC, 0x00, 0x07, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x07, // 168  ?
    0x00, 0xFC, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xFC, 0x00, 0x07, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x1F, // 169  ?
    0x0C, 0xFC, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x07, // 170  ?
    0x00, 0xFC, 0x40, 0x40, 0x40, 0x80, 0x00, 0xFC, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x07, 0x00, 0x0F, // 171  ?
    0x00, 0xFC, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x07, // 172  ?
    0x00, 0x08, 0x04, 0x04, 0x84, 0x84, 0xF8, 0x00, 0x04, 0x08, 0x08, 0x08, 0x08, 0x07, // 173  ?
    0x00, 0xFC, 0x40, 0x40, 0xF8, 0x04, 0x04, 0x04, 0x04, 0xF8, 0x00, 0x0F, 0x00, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, // 174  ?
    0x00, 0x38, 0x44, 0x44, 0xC4, 0x44, 0xFC, 0x00, 0x08, 0x04, 0x03, 0x00, 0x00, 0x0F, // 175  ?
    0x00, 0xC0, 0x20, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x07, 0x08, 0x08, 0x08, 0x04, 0x0F, // 176  ?
    0x00, 0xE0, 0x50, 0x48, 0x48, 0x48, 0x80, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, // 177  ?
    0x00, 0xE0, 0x20, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x0F, 0x09, 0x09, 0x09, 0x09, 0x06, // 178  ?
    0x00, 0xE0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, // 179  ?
    0x00, 0x00, 0x00, 0xE0, 0x20, 0x20, 0xE0, 0x00, 0x00, 0x18, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x18, // 180  ?
    0x00, 0xC0, 0x20, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x07, 0x09, 0x09, 0x09, 0x09, 0x09, // 181  ?
    0x00, 0x20, 0x40, 0x80, 0xE0, 0x80, 0x40, 0x20, 0x00, 0x08, 0x04, 0x02, 0x0F, 0x02, 0x04, 0x08, // 182  ?
    0x00, 0x40, 0x20, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x04, 0x08, 0x08, 0x09, 0x09, 0x06, // 183  ?
    0x00, 0xE0, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x00, 0x0F, 0x04, 0x02, 0x01, 0x00, 0x0F, // 184  ?
    0x00, 0xE0, 0x00, 0x08, 0x08, 0x80, 0xE0, 0x00, 0x0F, 0x04, 0x02, 0x01, 0x00, 0x0F, // 185  ?
    0x00, 0xE0, 0x00, 0x00, 0x80, 0x40, 0x20, 0x00, 0x0F, 0x01, 0x01, 0x02, 0x04, 0x08, // 186  ?
    0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0xE0, 0x00, 0x0C, 0x03, 0x00, 0x00, 0x00, 0x0F, // 187  ?
    0x00, 0xE0, 0x40, 0x80, 0x00, 0x80, 0x40, 0xE0, 0x00, 0x0F, 0x00, 0x01, 0x06, 0x01, 0x00, 0x0F, // 188  ?
    0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x0F, 0x01, 0x01, 0x01, 0x01, 0x0F, // 189  ?
    0x00, 0xC0, 0x20, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, // 190  ?
    0x00, 0xC0, 0x20, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F // 191  ?
    
};

#endif
