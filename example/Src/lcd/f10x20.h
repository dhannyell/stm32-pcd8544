/*
    created with FontEditor written by H. Reddmann
    HaReddmann at t-online dot de

    File Name           : ft10x20.h
    Date                : 4/30/2009
    Font size in bytes  : 0x0B1A, 2842
    Font width          : 11
    Font height         : 20
    Font first char     : 0x20
    Font last char      : 0xFA
    Font bits per pixel : 1
    Font is compressed  : false

    The font data are defined as

    struct _FONT_ {
     // common shared fields
       uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
       uint8_t    font_Width_in_Pixel_for_fixed_drawing;
       uint8_t    font_Height_in_Pixel_for_all_Characters;
       uint8_t    font_Bits_per_Pixels;
                    // if MSB are set then font is a compressed font
       uint8_t    font_First_Char;
       uint8_t    font_Last_Char;
       uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
                    // for each character the separate width in pixels,
                    // characters < 128 have an implicit virtual right empty row
                    // characters with font_Char_Widths[] == 0 are undefined

     // if compressed font then additional fields
       uint8_t    font_Byte_Padding;
                    // each Char in the table are aligned in size to this value
       uint8_t    font_RLE_Table[3];
                    // Run Length Encoding Table for compression
       uint8_t    font_Char_Size_in_Bytes[font_Last_Char - font_First_Char +1];
                    // for each char the size in (bytes / font_Byte_Padding) are stored,
                    // this get us the table to seek to the right beginning of each char
                    // in the font_data[].

     // for compressed and uncompressed fonts
       uint8_t    font_data[];
                    // bit field of all characters
    }
*/

#ifndef ft10x20_H
#define ft10x20_H

#define ft10x20_WIDTH 11
#define ft10x20_HEIGHT 20

	const unsigned char f10x20[] = {
    0x0B, 0x1A, 0x0B, 0x14, 0x01, 0x20, 0xFA,
    0x05, 0x01, 0x03, 0x07, 0x05, 0x0A, 0x07, 0x01, 0x03, 0x03, 0x05, 0x05, 0x02, 0x03, 0x01, 0x03, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x01, 0x02, 0x06, 0x05, 0x06, 0x05, 
    0x0A, 0x08, 0x06, 0x07, 0x07, 0x06, 0x06, 0x08, 0x07, 0x01, 0x05, 0x07, 0x05, 0x09, 0x07, 0x08, 
    0x06, 0x08, 0x08, 0x06, 0x07, 0x07, 0x07, 0x09, 0x08, 0x07, 0x07, 0x02, 0x03, 0x02, 0x06, 0x07, 
    0x02, 0x05, 0x05, 0x04, 0x05, 0x05, 0x03, 0x05, 0x05, 0x01, 0x02, 0x05, 0x01, 0x09, 0x05, 0x05, 
    0x05, 0x05, 0x03, 0x04, 0x03, 0x05, 0x05, 0x09, 0x06, 0x05, 0x05, 0x03, 0x01, 0x03, 0x06, 0x07, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x07, 0x07, 0x07, 0x06, 0x06, 0x09, 0x05, 0x06, 0x07, 0x08, 0x08, 0x09, 0x09, 0x07, 0x07, 
    0x07, 0x09, 0x0A, 0x0A, 0x06, 0x06, 0x06, 0x07, 0x06, 0x08, 0x07, 0x07, 0x06, 0x06, 0x08, 0x08, 
    0x08, 0x06, 0x06, 0x06, 0x07, 0x05, 0x07, 0x05, 0x07, 0x08, 0x07, 0x07, 0x09, 0x06, 0x06, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x07, 0x07, 0x07, 0x07, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
    0x03, 0x06, 0x07, 0x07, 0x07, 0x06, 0x06, 0x05, 0x02, 0x06, 0x08, 0x03, 0x05, 0x03, 0x00, 0x09, 
    0x07, 0x07, 0x09, 0x08, 0x08, 0x08, 0x06, 0x09, 0x08, 0x07, 0x08, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x0B, 0x80, 
    0x03, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x01, 0x00, 0xD2, 0x00, 0xE0, 0x03, 0x80, 0x13, 
    0x00, 0x20, 0x0D, 0x00, 0x3E, 0x00, 0x38, 0x01, 0x00, 0x67, 0x00, 0x88, 0x08, 0xC0, 0xFF, 0x01, 
    0x88, 0x08, 0x00, 0x71, 0x00, 0x70, 0x00, 0x80, 0x08, 0x00, 0x88, 0x08, 0x00, 0x47, 0x00, 0x00, 
    0x03, 0x00, 0x08, 0x00, 0x60, 0x07, 0x00, 0x89, 0x00, 0x88, 0x08, 0x00, 0x70, 0x00, 0x00, 0x07, 
    0x00, 0x8B, 0x00, 0xC8, 0x08, 0x80, 0x94, 0x00, 0x30, 0x06, 0x00, 0x70, 0x00, 0x00, 0x08, 0x80, 
    0x03, 0x00, 0xC0, 0x07, 0x00, 0x83, 0x01, 0x08, 0x20, 0x80, 0x00, 0x02, 0x30, 0x18, 0x00, 0x7C, 
    0x00, 0x10, 0x00, 0x00, 0x05, 0x00, 0x38, 0x00, 0x00, 0x05, 0x00, 0x10, 0x00, 0x00, 0x08, 0x00, 
    0x80, 0x00, 0x00, 0x3E, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x00, 0x20, 0x00, 0x80, 0x01, 0x00, 
    0x01, 0x00, 0x10, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x00, 0x0C, 0x00, 0x3E, 0x00, 0x18, 0x00, 
    0x00, 0x7F, 0x00, 0x08, 0x08, 0x80, 0x80, 0x00, 0x08, 0x08, 0x00, 0x7F, 0x00, 0x20, 0x00, 0x00, 
    0x01, 0x00, 0xF8, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x00, 0x08, 0x0A, 0x80, 0x90, 
    0x00, 0x88, 0x08, 0x00, 0x87, 0x00, 0x10, 0x06, 0x80, 0x80, 0x00, 0x88, 0x08, 0x80, 0x88, 0x00, 
    0x70, 0x07, 0x00, 0x18, 0x00, 0x60, 0x01, 0x00, 0x11, 0x00, 0xF8, 0x0F, 0x00, 0x10, 0x00, 0xE0, 
    0x06, 0x80, 0x85, 0x00, 0x48, 0x08, 0x80, 0x84, 0x00, 0x88, 0x07, 0x00, 0x7F, 0x00, 0x88, 0x08, 
    0x80, 0x84, 0x00, 0x48, 0x08, 0x00, 0x79, 0x00, 0x08, 0x00, 0x80, 0xE0, 0x00, 0x88, 0x01, 0x80, 
    0x04, 0x00, 0x38, 0x00, 0x00, 0x77, 0x00, 0x88, 0x08, 0x80, 0x88, 0x00, 0x88, 0x08, 0x00, 0x77, 
    0x00, 0xF0, 0x04, 0x80, 0x90, 0x00, 0x08, 0x09, 0x80, 0x88, 0x00, 0xF0, 0x07, 0x00, 0x82, 0x00, 
    0x00, 0x20, 0x00, 0x82, 0x01, 0x80, 0x00, 0x00, 0x14, 0x00, 0x40, 0x01, 0x00, 0x22, 0x00, 0x20, 
    0x02, 0x00, 0x41, 0x00, 0x20, 0x01, 0x00, 0x12, 0x00, 0x20, 0x01, 0x00, 0x12, 0x00, 0x20, 0x01, 
    0x00, 0x41, 0x00, 0x20, 0x02, 0x00, 0x22, 0x00, 0x40, 0x01, 0x00, 0x14, 0x00, 0x80, 0x00, 0x00, 
    0x03, 0x00, 0x08, 0x00, 0x80, 0xB0, 0x00, 0x88, 0x00, 0x00, 0x07, 0x00, 0xC0, 0x07, 0x00, 0x82, 
    0x01, 0x90, 0x17, 0x00, 0x85, 0x02, 0x28, 0x28, 0x80, 0xC2, 0x02, 0xE8, 0x2B, 0x00, 0x81, 0x02, 
    0x30, 0x24, 0x00, 0x3C, 0x01, 0x00, 0x08, 0x00, 0x60, 0x00, 0xC0, 0x01, 0x00, 0x13, 0x00, 0x08, 
    0x01, 0x00, 0x17, 0x00, 0x80, 0x03, 0x00, 0xC0, 0x00, 0xF8, 0x0F, 0x80, 0x88, 0x00, 0x88, 0x08, 
    0x80, 0x88, 0x00, 0x88, 0x08, 0x00, 0x77, 0x00, 0xE0, 0x03, 0x00, 0x41, 0x00, 0x08, 0x08, 0x80, 
    0x80, 0x00, 0x08, 0x08, 0x00, 0x41, 0x00, 0x20, 0x02, 0x80, 0xFF, 0x00, 0x08, 0x08, 0x80, 0x80, 
    0x00, 0x08, 0x08, 0x80, 0x80, 0x00, 0x10, 0x04, 0x00, 0x3E, 0x00, 0xF8, 0x0F, 0x80, 0x88, 0x00, 
    0x88, 0x08, 0x80, 0x88, 0x00, 0x88, 0x08, 0x80, 0x80, 0x00, 0xF8, 0x0F, 0x80, 0x08, 0x00, 0x88, 
    0x00, 0x80, 0x08, 0x00, 0x88, 0x00, 0x80, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x41, 0x00, 0x08, 0x08, 
    0x80, 0x80, 0x00, 0x88, 0x08, 0x80, 0x88, 0x00, 0x90, 0x08, 0x00, 0x7A, 0x00, 0xF8, 0x0F, 0x00, 
    0x08, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0xF8, 0x0F, 0x80, 0xFF, 
    0x00, 0x00, 0x06, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x80, 0x00, 0xF8, 0x07, 0x80, 0xFF, 0x00, 
    0x80, 0x00, 0x00, 0x0C, 0x00, 0x20, 0x01, 0x00, 0x21, 0x00, 0x08, 0x04, 0x00, 0x80, 0x00, 0xF8, 
    0x0F, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x80, 0x00, 0x00, 0x08, 0x80, 0xFF, 0x00, 0x18, 0x00, 
    0x00, 0x0E, 0x00, 0x00, 0x07, 0x00, 0x80, 0x00, 0x00, 0x07, 0x00, 0x0E, 0x00, 0x18, 0x00, 0x80, 
    0xFF, 0x00, 0xF8, 0x0F, 0x00, 0x01, 0x00, 0x60, 0x00, 0x00, 0x08, 0x00, 0x00, 0x03, 0x00, 0x40, 
    0x00, 0xF8, 0x0F, 0x00, 0x3E, 0x00, 0x10, 0x04, 0x80, 0x80, 0x00, 0x08, 0x08, 0x80, 0x80, 0x00, 
    0x08, 0x08, 0x00, 0x41, 0x00, 0xE0, 0x03, 0x80, 0xFF, 0x00, 0x88, 0x00, 0x80, 0x08, 0x00, 0x88, 
    0x00, 0x80, 0x08, 0x00, 0x70, 0x00, 0x00, 0x3E, 0x00, 0x10, 0x04, 0x80, 0x80, 0x00, 0x08, 0x08, 
    0x80, 0xA0, 0x00, 0x08, 0x04, 0x00, 0xC1, 0x00, 0xE0, 0x13, 0x80, 0xFF, 0x00, 0x88, 0x00, 0x80, 
    0x08, 0x00, 0x88, 0x00, 0x80, 0x18, 0x00, 0x88, 0x02, 0x00, 0x47, 0x00, 0x00, 0x08, 0x00, 0x67, 
    0x00, 0x88, 0x08, 0x80, 0x88, 0x00, 0x88, 0x08, 0x80, 0x88, 0x00, 0x30, 0x07, 0x80, 0x00, 0x00, 
    0x08, 0x00, 0x80, 0x00, 0x00, 0xF8, 0x0F, 0x80, 0x00, 0x00, 0x08, 0x00, 0x80, 0x00, 0x00, 0xF8, 
    0x03, 0x00, 0x40, 0x00, 0x00, 0x08, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x40, 0x00, 0xF8, 0x03, 
    0x80, 0x01, 0x00, 0xE0, 0x00, 0x00, 0x70, 0x00, 0x00, 0x08, 0x00, 0x70, 0x00, 0xE0, 0x00, 0x80, 
    0x01, 0x00, 0x18, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x0C, 0x00, 0x38, 0x00, 0x60, 0x00, 0x00, 0x38, 
    0x00, 0x00, 0x0C, 0x00, 0x3E, 0x00, 0x18, 0x00, 0x80, 0x80, 0x00, 0x10, 0x04, 0x00, 0x22, 0x00, 
    0xC0, 0x01, 0x00, 0x14, 0x00, 0x20, 0x02, 0x00, 0x41, 0x00, 0x08, 0x08, 0x80, 0x00, 0x00, 0x10, 
    0x00, 0x00, 0x06, 0x00, 0x80, 0x0F, 0x00, 0x06, 0x00, 0x10, 0x00, 0x80, 0x00, 0x00, 0x00, 0x0C, 
    0x80, 0xA0, 0x00, 0x08, 0x09, 0x80, 0x88, 0x00, 0x48, 0x08, 0x80, 0x82, 0x00, 0x18, 0x08, 0x80, 
    0xFF, 0x03, 0x08, 0x20, 0x80, 0x01, 0x00, 0xE0, 0x03, 0x00, 0xC0, 0x00, 0x08, 0x20, 0x80, 0xFF, 
    0x03, 0x80, 0x00, 0x00, 0x06, 0x00, 0x18, 0x00, 0x80, 0x01, 0x00, 0x60, 0x00, 0x00, 0x08, 0x00, 
    0x00, 0x20, 0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x02, 0x00, 
    0x20, 0x80, 0x00, 0x00, 0x18, 0x00, 0x00, 0x44, 0x00, 0x20, 0x0A, 0x00, 0x92, 0x00, 0x20, 0x05, 
    0x00, 0xFC, 0x00, 0xF8, 0x0F, 0x00, 0x44, 0x00, 0x20, 0x08, 0x00, 0x82, 0x00, 0xC0, 0x07, 0x00, 
    0x7C, 0x00, 0x20, 0x08, 0x00, 0x82, 0x00, 0x40, 0x06, 0x00, 0x7C, 0x00, 0x20, 0x08, 0x00, 0x82, 
    0x00, 0x40, 0x04, 0x80, 0xFF, 0x00, 0xC0, 0x07, 0x00, 0x92, 0x00, 0x20, 0x09, 0x00, 0x92, 0x00, 
    0xC0, 0x05, 0x00, 0x02, 0x00, 0xF0, 0x0F, 0x80, 0x02, 0x00, 0xC0, 0x17, 0x00, 0x82, 0x02, 0x20, 
    0x28, 0x00, 0x44, 0x02, 0xE0, 0x1F, 0x80, 0xFF, 0x00, 0x40, 0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 
    0x00, 0xFC, 0x00, 0xE8, 0x0F, 0x00, 0x00, 0x02, 0xE8, 0x1F, 0x80, 0xFF, 0x00, 0x00, 0x01, 0x00, 
    0x38, 0x00, 0x40, 0x04, 0x00, 0x82, 0x00, 0xF8, 0x0F, 0x00, 0xFE, 0x00, 0x40, 0x00, 0x00, 0x02, 
    0x00, 0x20, 0x00, 0x00, 0xFC, 0x00, 0x20, 0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0xFC, 0x00, 
    0xE0, 0x0F, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x02, 0x00, 0xC0, 0x0F, 0x00, 0x7C, 0x00, 0x20, 
    0x08, 0x00, 0x82, 0x00, 0x20, 0x08, 0x00, 0x7C, 0x00, 0xE0, 0x3F, 0x00, 0x44, 0x00, 0x20, 0x08, 
    0x00, 0x82, 0x00, 0xC0, 0x07, 0x00, 0x7C, 0x00, 0x20, 0x08, 0x00, 0x82, 0x00, 0x40, 0x04, 0x00, 
    0xFE, 0x03, 0xE0, 0x0F, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x4C, 0x00, 0x20, 0x09, 0x00, 0x92, 
    0x00, 0x40, 0x06, 0x00, 0x02, 0x00, 0xF8, 0x07, 0x00, 0x82, 0x00, 0xE0, 0x07, 0x00, 0x80, 0x00, 
    0x00, 0x08, 0x00, 0x40, 0x00, 0xE0, 0x0F, 0x00, 0x06, 0x00, 0x80, 0x07, 0x00, 0x80, 0x00, 0x80, 
    0x07, 0x00, 0x06, 0x00, 0x60, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0C, 0x00, 0x3C, 0x00, 0x20, 0x00, 
    0x00, 0x3C, 0x00, 0x00, 0x0C, 0x00, 0x38, 0x00, 0x60, 0x00, 0x00, 0x82, 0x00, 0x40, 0x04, 0x00, 
    0x28, 0x00, 0x80, 0x03, 0x00, 0x44, 0x00, 0x20, 0x08, 0x00, 0x06, 0x02, 0x80, 0x23, 0x00, 0xC0, 
    0x01, 0x80, 0x03, 0x00, 0x06, 0x00, 0x20, 0x0C, 0x00, 0xA2, 0x00, 0x20, 0x09, 0x00, 0x8A, 0x00, 
    0x60, 0x08, 0x00, 0x10, 0x00, 0xF0, 0x1E, 0x80, 0x00, 0x02, 0xF8, 0x3F, 0x80, 0x00, 0x02, 0xF0, 
    0x1E, 0x00, 0x10, 0x00, 0x00, 0x01, 0x00, 0x08, 0x00, 0x80, 0x00, 0x00, 0x10, 0x00, 0x00, 0x01, 
    0x00, 0x08, 0x00, 0xFF, 0x1F, 0x10, 0x00, 0x01, 0x01, 0x10, 0x10, 0x00, 0x01, 0x01, 0x10, 0x10, 
    0x00, 0x01, 0xFF, 0x1F, 0x00, 0x02, 0x00, 0xB0, 0x0F, 0x00, 0x05, 0x00, 0x10, 0x00, 0x00, 0x01, 
    0x00, 0x10, 0x00, 0x00, 0xFE, 0x00, 0x60, 0x00, 0x00, 0x0B, 0x00, 0x50, 0x08, 0x00, 0xF9, 0x00, 
    0x60, 0x08, 0x00, 0x80, 0x00, 0xF0, 0x0F, 0x00, 0x0E, 0x00, 0x50, 0x01, 0x00, 0x0A, 0x00, 0x10, 
    0x08, 0x00, 0xFD, 0x00, 0x20, 0x08, 0x00, 0xFF, 0x00, 0xE0, 0x01, 0x00, 0xF9, 0x00, 0x50, 0x01, 
    0x00, 0x09, 0x00, 0x10, 0x00, 0x00, 0xFE, 0x00, 0xE0, 0x03, 0x00, 0xF1, 0x00, 0x90, 0x02, 0x00, 
    0x12, 0x00, 0x10, 0x00, 0x00, 0xFE, 0x00, 0xE0, 0x00, 0x00, 0x15, 0x00, 0x90, 0x04, 0x00, 0xA2, 
    0x00, 0xD0, 0x0F, 0x00, 0x42, 0x00, 0x00, 0x04, 0x00, 0x80, 0x00, 0xF0, 0x0F, 0x00, 0x10, 0x00, 
    0x00, 0x02, 0x00, 0x42, 0x00, 0x50, 0x08, 0x00, 0x7E, 0x00, 0x20, 0x00, 0x00, 0x11, 0x00, 0x90, 
    0x02, 0x00, 0x71, 0x00, 0x10, 0x08, 0x00, 0x7E, 0x00, 0x20, 0x01, 0x00, 0x29, 0x00, 0x90, 0x0F, 
    0x00, 0x41, 0x00, 0xE0, 0x0F, 0x00, 0xA0, 0x00, 0x00, 0x04, 0x00, 0x06, 0x00, 0xB0, 0x00, 0x00, 
    0x85, 0x00, 0x90, 0x0F, 0x00, 0x86, 0x00, 0x20, 0x08, 0x00, 0xFD, 0x00, 0x08, 0x00, 0x00, 0x0E, 
    0x00, 0x50, 0x01, 0x00, 0x8A, 0x00, 0xD0, 0x0F, 0x00, 0x83, 0x00, 0x20, 0x08, 0x00, 0xFD, 0x00, 
    0x08, 0x00, 0x00, 0x02, 0x00, 0xB0, 0x0F, 0x00, 0xA5, 0x00, 0x10, 0x04, 0x00, 0xE1, 0x00, 0xE0, 
    0x0F, 0x00, 0x40, 0x00, 0x00, 0x08, 0x00, 0xFF, 0x00, 0x20, 0x00, 0x00, 0x7B, 0x00, 0x50, 0x0A, 
    0x00, 0x41, 0x00, 0x10, 0x48, 0x00, 0xFE, 0x0A, 0x00, 0xC8, 0x00, 0x80, 0x08, 0xF0, 0x6F, 0x00, 
    0x40, 0x04, 0x20, 0xAA, 0x00, 0x7B, 0x0A, 0x50, 0x60, 0x00, 0x01, 0x05, 0x10, 0x80, 0x00, 0xFE, 
    0x07, 0x00, 0x44, 0x00, 0xA2, 0x0A, 0xF0, 0xE7, 0x00, 0x05, 0x07, 0x10, 0xC0, 0x00, 0x01, 0x06, 
    0xE0, 0xFF, 0x00, 0x02, 0x00, 0x30, 0x41, 0x00, 0x2B, 0x0A, 0x50, 0xC7, 0x00, 0x85, 0x08, 0x90, 
    0xE7, 0x00, 0x01, 0x04, 0xE0, 0x00, 0x00, 0x15, 0x00, 0xA0, 0x00, 0x00, 0x01, 0x00, 0xD0, 0x0F, 
    0x00, 0x32, 0x00, 0xE0, 0x00, 0x00, 0x01, 0x00, 0xF0, 0x0F, 0x00, 0x3E, 0x00, 0x90, 0x0C, 0x00, 
    0x35, 0x00, 0xA0, 0x01, 0x00, 0x43, 0x00, 0x10, 0x0A, 0x00, 0xFE, 0x00, 0x00, 0x04, 0x00, 0x80, 
    0x00, 0xF0, 0x0F, 0x00, 0x02, 0x00, 0xB0, 0x07, 0x00, 0xA5, 0x00, 0x10, 0x04, 0x00, 0x01, 0x00, 
    0xE0, 0x0F, 0x00, 0x40, 0x00, 0xF0, 0x0F, 0x00, 0xA0, 0x00, 0x00, 0x04, 0x00, 0x3E, 0x00, 0x90, 
    0x0C, 0x00, 0x35, 0x00, 0x90, 0x00, 0x00, 0x01, 0x00, 0xE0, 0x0F, 0x00, 0x3E, 0x00, 0x90, 0x0C, 
    0x00, 0x35, 0x00, 0xA0, 0x00, 0x00, 0x01, 0x00, 0xE0, 0x0F, 0x00, 0x7A, 0x00, 0x50, 0x0A, 0x00, 
    0x41, 0x00, 0x10, 0x00, 0x00, 0x01, 0x00, 0xE0, 0x0F, 0x00, 0x02, 0x00, 0x50, 0x00, 0x00, 0xFE, 
    0x00, 0x80, 0x01, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0xFF, 0x00, 0x20, 0x00, 0x00, 0x83, 0x00, 
    0xF0, 0x0F, 0x00, 0x83, 0x00, 0xD0, 0x0F, 0x00, 0x01, 0x00, 0x20, 0x00, 0x00, 0x05, 0x00, 0xE0, 
    0x0F, 0x00, 0x40, 0x00, 0x00, 0x02, 0x00, 0xFF, 0x00, 0x00, 0x0A, 0x00, 0x40, 0x00, 0x20, 0x00, 
    0x00, 0x85, 0x00, 0xE0, 0x0F, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x80, 0x00, 0xF0, 0x0F, 0x00, 
    0x02, 0x00, 0x50, 0x08, 0x00, 0xFE, 0x00, 0x00, 0x08, 0x00, 0x80, 0x00, 0x00, 0x08, 0xE0, 0xFF, 
    0x00, 0xE0, 0x0F, 0x00, 0x65, 0x00, 0x20, 0x01, 0x00, 0x10, 0x00, 0x00, 0x06, 0x00, 0xFF, 0x00, 
    0xE0, 0x0F, 0x00, 0x65, 0x00, 0x20, 0x01, 0x00, 0x10, 0x00, 0x00, 0x06, 0xE0, 0xFF, 0x00, 0x20, 
    0x00, 0x00, 0x05, 0x00, 0xE0, 0x0F, 0x00, 0x78, 0x00, 0x70, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x07, 
    0x00, 0xFF, 0x00, 0x20, 0x00, 0x00, 0x05, 0x00, 0xE0, 0x0F, 0x00, 0x78, 0x00, 0x70, 0x00, 0x00, 
    0x0C, 0x00, 0x00, 0x07, 0xE0, 0xFF, 0x00, 0x00, 0x04, 0x00, 0xA2, 0x00, 0xE0, 0x07, 0x00, 0x05, 
    0x00, 0x10, 0x00, 0x00, 0x01, 0x00, 0x10, 0x00, 0x00, 0xFE, 0x00, 0x20, 0x04, 0x00, 0xA5, 0x00, 
    0xE0, 0x0F, 0x00, 0x40, 0x00, 0x00, 0x08, 0x00, 0xFF, 0x00, 0xE0, 0x0E, 0x00, 0x95, 0x00, 0x20, 
    0x09, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0xFF, 0x00, 0x60, 0x00, 0x00, 0x05, 0x00, 0x50, 0x04, 
    0x00, 0xA5, 0x00, 0x90, 0x07, 0x00, 0x01, 0x00, 0x20, 0x00, 0x00, 0x7A, 0x00, 0x50, 0x0A, 0x00, 
    0x41, 0x00, 0x10, 0x00, 0x00, 0x01, 0x00, 0xE0, 0x7F, 0x00, 0x7D, 0x00, 0x50, 0x0A, 0x00, 0x49, 
    0x00, 0x10, 0x03, 0x00, 0xFE, 0x00, 0x00, 0x04, 0x00, 0xA2, 0x00, 0xE0, 0x07, 0x00, 0x05, 0x00, 
    0x10, 0x00, 0x00, 0x01, 0x00, 0xE0, 0x7F, 0x00, 0x02, 0x00, 0x10, 0x00, 0x00, 0x41, 0x00, 0x10, 
    0x0A, 0x00, 0x7E, 0x00, 0xE0, 0x01, 0x00, 0xF9, 0x00, 0x50, 0x01, 0x00, 0x0D, 0x00, 0x30, 0x00, 
    0x00, 0xFF, 0x00, 0x10, 0x00, 0x00, 0x02, 0x00, 0x50, 0x08, 0x00, 0xFE, 0x00, 0x80, 0x08, 0x00, 
    0x94, 0x00, 0x80, 0x09, 0x00, 0xFF, 0x00, 0x80, 0x00, 0x00, 0x7D, 0x00, 0x50, 0x0A, 0x00, 0x45, 
    0x00, 0xD0, 0x00, 0x00, 0x35, 0x00, 0xE0, 0x0F, 0x00, 0x01, 0x00, 0x20, 0x00, 0x00, 0x05, 0x00, 
    0xE0, 0x0F, 0x00, 0x60, 0x00, 0x20, 0x01, 0x00, 0x0D, 0x00, 0xA0, 0x0F, 0x00, 0x02, 0x00, 0x50, 
    0x00, 0x00, 0xFE, 0x00, 0x00, 0x07, 0x00, 0x08, 0x00, 0xB0, 0x00, 0x00, 0x73, 0x00, 0xF0, 0x0F, 
    0x00, 0x01, 0x00, 0xA0, 0x0F, 0x00, 0x95, 0x00, 0x90, 0x08, 0x00, 0x81, 0x00, 0x10, 0x08, 0x00, 
    0xFE, 0x00, 0x20, 0x0E, 0x00, 0xD5, 0x00, 0x50, 0x0A, 0x00, 0x85, 0x00, 0xE0, 0x0F, 0x00, 0x01, 
    0x00, 0x60, 0x00, 0x00, 0x0D, 0x00, 0xA0, 0x00, 0x00, 0x84, 0x00, 0xF0, 0x07, 0x00, 0x42, 0x00, 
    0x50, 0x0A, 0x00, 0xC6, 0x00, 0x40, 0x08, 0x00, 0x63, 0x00, 0x02, 0x00, 0x50, 0x00, 0x00, 0x06, 
    0x00, 0x40, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x00, 0x10, 0x00, 0x00, 0x01, 0x00, 0x10, 0x00, 
    0x00, 0xFE, 0x00, 0x22, 0x00, 0x50, 0x01, 0x00, 0x12, 0x00, 0x00, 0x01, 0x00, 0xE0, 0x0F, 0x60, 
    0x00, 0x00, 0x05, 0x00, 0x50, 0x00, 0x00, 0x05, 0x00, 0x50, 0x00, 0x00, 0x06, 0x00, 0x40, 0x00, 
    0x00, 0x06, 0x00, 0x50, 0x00, 0x00, 0x05, 0x00, 0x50, 0x00, 0x00, 0x06, 0x00, 0x40, 0x00, 0x00, 
    0x07, 0x00, 0x60, 0x00, 0x00, 0x05, 0x00, 0x50, 0x00, 0x00, 0x07, 0x00, 0x60, 0x00, 0x00, 0x05, 
    0x00, 0x70, 0x00, 0x00, 0x06, 0x00, 0x50, 0x00, 0x00, 0x05, 0x00, 0x60, 0x00, 0x00, 0x07, 0x00, 
    0x40, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0xE0, 0x00, 0x00, 0x02, 0x00, 0xE0, 0x00, 
    0x00, 0x08, 0x00, 0xE0, 0x80, 0xFF, 0x00, 0x88, 0x08, 0xC0, 0xFF, 0x01, 0x88, 0x08, 0x80, 0x88, 
    0x00, 0x70, 0x07, 0x00, 0x7F, 0x00, 0x00, 0x0A, 0x00, 0x40, 0x00, 0xF0, 0x07, 0x00, 0xA0, 0x00, 
    0x00, 0x04, 0x00, 0x7F, 0x00, 0x00, 0x0A, 0x00, 0x40, 0x00, 0x02, 0x00, 0x30, 0x00, 0x80, 0x02, 
    0x00, 0x28, 0x00, 0x80, 0xFE, 0x07, 0x08, 0xA0, 0x40, 0x00, 0x04, 0x30, 0x00, 0x80, 0x06, 0x00, 
    0x58, 0x00, 0x80, 0x02, 0x00, 0xF0, 0x7F, 0x00, 0x00, 0x0A, 0x00, 0x40, 0x80, 0x07, 0x00, 0x80, 
    0x00, 0x00, 0x07, 0x00, 0x08, 0x00, 0x80, 0xFF, 0x07, 0x00, 0xA0, 0x00, 0x00, 0x04, 0x00, 0x02, 
    0x00, 0x10, 0x00, 0x00, 0x01, 0x00, 0x10, 0x00, 0x00, 0x01, 0x00, 0xE0, 0x7F, 0x00, 0x0E, 0x00, 
    0x50, 0x01, 0x00, 0x0A, 0x00, 0x10, 0x40, 0x00, 0x01, 0x04, 0xE0, 0x3F, 0x78, 0x00, 0x40, 0x02, 
    0x00, 0x64, 0x00, 0x40, 0x05, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0xA0, 0x00, 0x00, 
    0x0D, 0x00, 0xA0, 0x00, 0x00, 0x08, 0x00, 0x40, 0x00, 0x00, 0x03, 0x00, 0x60, 0x00, 0x00, 0x0B, 
    0x00, 0x50, 0x00, 0x00, 0x02, 0x00, 0x90, 0x00, 0x00, 0x0E, 0x00, 0x40, 0x00, 0x00, 0x03, 0x00, 
    0x20, 0x00, 0x00, 0x07, 0x00, 0x20, 0x00, 0x00, 0x20, 0x00, 0x00, 0x05, 0x00, 0x28, 0x00, 0x80, 
    0x00, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x05, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
    0x03, 0x00, 0x42, 0x00, 0x90, 0x09, 0x00, 0xBD, 0x00, 0xD0, 0x0B, 0x00, 0x99, 0x00, 0x20, 0x04, 
    0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x80, 0x08, 0x00, 0x88, 0x00, 0x80, 0x08, 0x00, 
    0x88, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x88, 0x00, 0x80, 0x0E, 0x00, 0xE8, 
    0x00, 0x80, 0x16, 0x00, 0xF0, 0x00, 0x10, 0x00, 0x00, 0xFF, 0x00, 0x80, 0x09, 0x00, 0xAC, 0x00, 
    0x40, 0x09, 0x00, 0x88, 0x00, 0x40, 0x08, 0x00, 0x84, 0x00, 0xC0, 0x0F, 0x00, 0x70, 0x00, 0x80, 
    0x0A, 0x00, 0x48, 0x00, 0x80, 0x00, 0x00, 0xF0, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x80, 0x0F, 
    0x00, 0x78, 0x00, 0x40, 0x08, 0x00, 0xA4, 0x00, 0x40, 0x0D, 0x00, 0xE4, 0x00, 0x40, 0x08, 0x00, 
    0x82, 0x00, 0x18, 0x00, 0x00, 0x78, 0x00, 0x40, 0x08, 0x00, 0xA6, 0x00, 0x50, 0x0D, 0x00, 0xE6, 
    0x00, 0x40, 0x08, 0x00, 0x82, 0x00, 0x18, 0x00, 0x00, 0x01, 0x00, 0xE0, 0x04, 0x00, 0xA8, 0x00, 
    0x80, 0x0C, 0x00, 0x88, 0x00, 0x00, 0x07, 0x00, 0x78, 0x00, 0x40, 0x0A, 0x00, 0x44, 0x00, 0x80, 
    0x00, 0x00, 0x84, 0x00, 0xC0, 0x0F, 0x00, 0x40, 0x00, 0xE0, 0x03, 0x00, 0x01, 0x00, 0x80, 0x07, 
    0x00, 0x44, 0x00, 0x40, 0x0E, 0x00, 0x24, 0x00, 0x40, 0x06, 0x00, 0xD4, 0x00, 0x40, 0x0E, 0x00, 
    0x03, 0x00, 0x80, 0x07, 0x00, 0xA4, 0x00, 0x40, 0x0B, 0x00, 0x6C, 0x00, 0xC0, 0x01, 0x00, 0x68, 
    0x00, 0xF0, 0x08, 0x00, 0x06, 0x00, 0xD0, 0x00, 0x00, 0x0A, 0x00, 0x80, 0x00, 0x00, 0x84, 0x00, 
    0xF0, 0x07, 0x00, 0x80, 0x00, 0xF0, 0x07, 0x00
};

#endif

