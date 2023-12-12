/* ************************************************************************
 *  (c) by Karl-Heinz Kuebbeler, Projekt Tranzistor Tester
 *
 *  File:       8x16_vertikal_LSB_1.h bold
 *  Funktion:   (table of the bits for the 8x16 character set)
 *              - 16 bytes per character
 *              - first byte: first vertical line (left to right)
 *              - ninth byte: first vertical line (left to right)
 *              - bit #0: top / bit #7: bottom (vertically flipped)
 *
 * History:     Date        Sign    comment
 *              2021-02-09  Bohu    special characters added
 *              2021-02-12  Karl    character definitions in std_defines.h
 *              2021-02-13  Karl    some characters changed
 *              2021-02-16  Karl    dual tables for tester and characters
 * ************************************************************************ */

#include "std_defines.h"  /* use standard defines for special characters */

 #if defined(MAIN_C)
const unsigned char PROGMEM sfont[9][(FONT_WIDTH * ((FONT_HEIGHT + 7)/8))]=
{
{0xC0,0xF0,0x30,0x30,0x30,0x30,0xF0,0xC0, 0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x00},  /* 0x00 Resistor3 */
{0xFC,0xF8,0xF0,0xE0,0xC0,0xFC,0xFC,0xC0, 0x0F,0x07,0x03,0x01,0x00,0x0F,0x0F,0x00},  /* 0x01 Diode1 */
{0xC0,0xFC,0xFC,0xC0,0xE0,0xF0,0xF8,0xFC, 0x00,0x0F,0x0F,0x00,0x01,0x03,0x07,0x0F},  /* 0x02 Diode2 */
{0xC0,0xFC,0xFC,0x00,0x00,0xFC,0xFC,0xC0, 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},  /* 0x03 Capacitor */
{0xC0,0xF8,0x18,0x18,0x18,0x18,0x18,0x18, 0x00,0x07,0x06,0x06,0x06,0x06,0x06,0x06},  /* 0x04 Resistor1 */
{0x18,0x18,0x18,0x18,0x18,0x18,0xF8,0xC0, 0x06,0x06,0x06,0x06,0x06,0x06,0x07,0x00},  /* 0x05 Resistor2 */
{0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x06 Line1  */
{0xC0,0xC0,0x00,0x80,0x60,0x80,0x00,0x80, 0x00,0x03,0x0C,0x0D,0x03,0x0D,0x0C,0x0D},  /* 0x07 Inductor1 */
{0x60,0x80,0x00,0x80,0x60,0x80,0x00,0xC0, 0x02,0x0D,0x0C,0x0D,0x01,0x0D,0x0C,0x03},  /* 0x08 Inductor2 */
};
const unsigned char PROGMEM nfont[(CHAR_COUNT-28)][((FONT_WIDTH-1) * ((FONT_HEIGHT+7)/8))]=
{
{0x00,0xF0,0xF8,0x1C,0xCC,0xFC,0x78, 0x1C,0x1F,0x0F,0x00,0x0C,0x0F,0x07},  /* 0x1c Beta   */
{0xE0,0xF0,0x38,0x18,0x38,0xF0,0xE0, 0x19,0x1B,0x1F,0x00,0x1F,0x1B,0x19},  /* 0x1d Omega  */
{0x00,0xF8,0xF8,0x00,0x00,0xF0,0xF0, 0x10,0x1F,0x0F,0x06,0x03,0x0F,0x0F},  /* 0x1e mu     */
{0x00,0x18,0x3C,0x66,0x66,0x3C,0x18, 0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x1f Degree */
/* ----ASCII-0x20-0x79-------------------- */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x20 ' ' */
{0x00,0xFC,0xFE,0xFE,0xFC,0x00,0x00, 0x00,0x00,0x6F,0x6F,0x00,0x00,0x00},  /* 0x21 '!' */
{0x0B,0x0F,0x07,0x00,0x0B,0x0F,0x07, 0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x22 '"' */
{0x18,0xFC,0xFC,0x18,0xFC,0xFC,0x18, 0x03,0x07,0x07,0x03,0x07,0x07,0x03},  /* 0x23 '#' */
{0x00,0x38,0x7C,0xE7,0xC7,0x9C,0x18, 0x00,0x06,0x0E,0x38,0x39,0x0F,0x07},  /* 0x24 '$' */
{0x0C,0x12,0x92,0xCC,0xE0,0x70,0x38, 0x0E,0x07,0x03,0x19,0x24,0x24,0x18},  /* 0x25 '%' */
{0x18,0xBC,0xE6,0xB6,0x1E,0x8C,0x80, 0x07,0x0F,0x18,0x19,0x1B,0x16,0x0D},  /* 0x26 '&' */
{0x00,0x1B,0x0F,0x07,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x27 ''' */
{0x00,0x00,0xF0,0xFC,0x0E,0x06,0x00, 0x00,0x00,0x03,0x0F,0x1C,0x18,0x00},  /* 0x28 '(' */
{0x00,0x00,0x06,0x0E,0xFC,0xF0,0x00, 0x00,0x00,0x18,0x1C,0x0F,0x03,0x00},  /* 0x29 ')' */
{0x90,0xA0,0xC0,0xF8,0xC0,0xA0,0x90, 0x04,0x02,0x01,0x0F,0x01,0x02,0x04},  /* 0x2a '*' */
{0x00,0xC0,0xC0,0xF0,0xF0,0xC0,0xC0, 0x00,0x00,0x00,0x03,0x03,0x00,0x00},  /* 0x2b '+' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x58,0x78,0x38,0x00,0x00,0x00},  /* 0x2c ',' */
{0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0, 0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x2d '-' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x18,0x18,0x00,0x00,0x00,0x00},  /* 0x2e '.' */
{0x00,0x00,0x80,0xE0,0x78,0x1E,0x07, 0x38,0x1E,0x07,0x01,0x00,0x00,0x00},  /* 0x2f '/' */
{0xF8,0xFC,0x0E,0xC6,0x3E,0xFC,0xF8, 0x07,0x0F,0x1F,0x18,0x1C,0x0F,0x07},  /* 0x30 '0' */
{0x00,0x0C,0xFE,0xFE,0x00,0x00,0x00, 0x00,0x10,0x1F,0x1F,0x10,0x00,0x00},  /* 0x31 '1' */
{0x18,0x1C,0x0E,0x86,0xCE,0xFC,0x78, 0x1C,0x1E,0x1F,0x1B,0x19,0x18,0x18},  /* 0x32 '2' */
{0x06,0x06,0x66,0x66,0xF6,0x9E,0x0E, 0x06,0x0E,0x1C,0x18,0x1C,0x0F,0x07},  /* 0x33 '3' */
{0xC0,0xFE,0x3E,0x00,0xFC,0xFC,0x00, 0x03,0x03,0x03,0x03,0x1F,0x1F,0x03},  /* 0x34 '4' */
{0x7E,0x7E,0x66,0x66,0xE6,0xC6,0x86, 0x0C,0x1C,0x18,0x18,0x1C,0x0F,0x07},  /* 0x35 '5' */
{0xF8,0xFC,0xCE,0x66,0xE6,0xC0,0x80, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x03},  /* 0x36 '6' */
{0x06,0x06,0x06,0x86,0xE6,0x7E,0x1E, 0x00,0x00,0x1E,0x1F,0x01,0x00,0x00},  /* 0x37 '7' */
{0x18,0xBC,0xEE,0x46,0xEE,0xBC,0x18, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07},  /* 0x38 '8' */
{0x78,0xFC,0xCE,0x86,0xCE,0xFC,0xF8, 0x00,0x00,0x19,0x19,0x1C,0x0F,0x07},  /* 0x39 '9' */
{0x00,0x70,0x70,0x70,0x00,0x00,0x00, 0x00,0x1C,0x1C,0x1C,0x00,0x00,0x00},  /* 0x3a ':' */

{0x00,0x00,0x70,0x70,0x70,0x00,0x00, 0x00,0x40,0x6C,0x3C,0x1C,0x00,0x00},  /* 0x3b ';' */
{0x80,0xC0,0xE0,0x70,0x38,0x1C,0x0E, 0x00,0x01,0x03,0x07,0x0E,0x1C,0x38},  /* 0x3c '<' */
{0x00,0x60,0x60,0x60,0x60,0x60,0x60, 0x00,0x03,0x03,0x03,0x03,0x03,0x03},  /* 0x3d '=' */
{0x0E,0x1C,0x38,0x70,0xE0,0xC0,0x80, 0x38,0x1C,0x0E,0x07,0x03,0x01,0x00},  /* 0x3e '>' */
{0x18,0x1C,0x0E,0x86,0xCE,0xFC,0x78, 0x00,0x00,0x67,0x67,0x01,0x00,0x00},  /* 0x3f '?' */
{0xF0,0x08,0xA4,0xA4,0xC4,0x08,0xF0, 0x07,0x08,0x13,0x12,0x11,0x0A,0x09},  /* 0x40 '@' */
{0xF0,0xF8,0x1C,0x0E,0x1C,0xF8,0xF0, 0x1F,0x1F,0x06,0x06,0x06,0x1F,0x1F},  /* 0x41 'A' */
{0xFE,0xFE,0xC6,0xC6,0xC6,0xFE,0x3C, 0x1F,0x1F,0x18,0x18,0x18,0x1F,0x0F},  /* 0x42 'B' */
{0xF8,0xFC,0x0E,0x06,0x0E,0x1C,0x18, 0x07,0x0F,0x1C,0x18,0x1C,0x0E,0x06},  /* 0x43 'C' */
{0xFE,0xFE,0x02,0x02,0x06,0xFC,0xF8, 0x1F,0x1F,0x10,0x10,0x18,0x0F,0x07},  /* 0x44 'D' */
{0xFE,0xFE,0xC6,0xC6,0xC6,0x06,0x06, 0x1F,0x1F,0x18,0x18,0x18,0x18,0x18},  /* 0x45 'E' */
{0xFE,0xFE,0xC6,0xC6,0xC6,0x06,0x06, 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00},  /* 0x46 'F' */
{0xF8,0xFC,0x0E,0x06,0x8E,0x9C,0x98, 0x07,0x0F,0x1C,0x18,0x0D,0x1F,0x1F},  /* 0x47 'G' */
{0xFE,0xFE,0xC0,0xC0,0xC0,0xFE,0xFE, 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F},  /* 0x48 'H' */
{0x00,0x00,0x00,0xFE,0xFE,0x00,0x00, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00},  /* 0x49 'I' */
{0x00,0x06,0x06,0xFE,0xFE,0x00,0x00, 0x0C,0x1C,0x18,0x1F,0x0F,0x00,0x00},  /* 0x4a 'J' */
{0xFE,0xFE,0xE0,0xF0,0x3C,0x0E,0x06, 0x1F,0x1F,0x00,0x03,0x07,0x1E,0x1C},  /* 0x4b 'K' */
{0xFE,0xFE,0x00,0x00,0x00,0x00,0x00, 0x1F,0x1F,0x18,0x18,0x18,0x18,0x18},  /* 0x4c 'L' */
{0xFE,0xFC,0x70,0xE0,0x70,0xFC,0xFE, 0x1F,0x1F,0x00,0x03,0x00,0x1F,0x1F},  /* 0x4d 'M' */
{0xFE,0xFC,0x78,0xE0,0x80,0xFE,0xFE, 0x1F,0x1F,0x00,0x01,0x07,0x0F,0x1F},  /* 0x4e 'N' */
{0xF8,0xFC,0x0E,0x06,0x0E,0xFC,0xF8, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07},  /* 0x4f 'O' */
{0xFE,0xFE,0x86,0x86,0xCE,0xFC,0x78, 0x1F,0x1F,0x01,0x01,0x01,0x00,0x00},  /* 0x50 'P' */
{0xF8,0xFC,0x0E,0x06,0x0E,0xFC,0xF8, 0x07,0x0F,0x1C,0x19,0x1B,0x16,0x0D},  /* 0x51 'Q' */
{0xFE,0xFE,0x86,0x86,0x86,0xFC,0x78, 0x1F,0x1F,0x01,0x01,0x07,0x1E,0x18},  /* 0x52 'R' */
{0x38,0x7C,0xEE,0xC6,0xCE,0x9C,0x18, 0x06,0x0E,0x1C,0x18,0x1D,0x0F,0x07},  /* 0x53 'S' */
{0x00,0x06,0x06,0xFE,0xFE,0x06,0x06, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00},  /* 0x54 'T' */
{0xFE,0xFE,0x00,0x00,0x00,0xFE,0xFE, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07},  /* 0x55 'U' */
{0xFE,0xFE,0x00,0x00,0x00,0xFE,0xFE, 0x01,0x03,0x0F,0x1C,0x0F,0x03,0x01},  /* 0x56 'V' */
{0xFE,0xFE,0x00,0xFE,0x00,0xFE,0xFE, 0x03,0x1F,0x1E,0x07,0x1E,0x1F,0x03},  /* 0x57 'W' */
{0x0E,0x1E,0xF8,0xE0,0xF8,0x1E,0x0E, 0x1C,0x1F,0x03,0x00,0x03,0x1F,0x1C},  /* 0x58 'X' */
{0x00,0xFE,0xFE,0x80,0x80,0xFE,0xFE, 0x00,0x00,0x01,0x1F,0x1F,0x01,0x00},  /* 0x59 'Y' */
{0x06,0x06,0x86,0xC6,0xE6,0x7E,0x3E, 0x1E,0x1F,0x1B,0x19,0x18,0x18,0x18},  /* 0x5a 'Z' */
{0x00,0xFF,0xFF,0x03,0x03,0x03,0x00, 0x00,0x3F,0x3F,0x30,0x30,0x30,0x00},  /* 0x5b '[' */
{0x07,0x1E,0x78,0xE0,0x80,0x00,0x00, 0x00,0x00,0x00,0x01,0x07,0x1E,0x78},  /* 0x5c '\' */
{0x00,0x03,0x03,0x03,0xFF,0xFF,0x00, 0x00,0x30,0x30,0x30,0x3F,0x3F,0x00},  /* 0x5d ']' */
{0x08,0x0C,0x06,0x03,0x06,0x0C,0x08, 0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x5e '^' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x60,0x60,0x60,0x60,0x60,0x60,0x60},  /* 0x5f '_' */
{0x00,0x00,0x07,0x0F,0x1B,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x60 '`' */
{0x00,0x98,0xD8,0xD8,0xD8,0xF0,0xE0, 0x07,0x0F,0x1D,0x18,0x0C,0x1F,0x1F},  /* 0x61 'a' */
{0xFE,0xFE,0x30,0x18,0x38,0xF0,0xE0, 0x1F,0x1F,0x0C,0x18,0x1C,0x0F,0x07},  /* 0x62 'b' */
{0xE0,0xF0,0x38,0x18,0x38,0x70,0x60, 0x07,0x0F,0x1C,0x18,0x1C,0x0E,0x06},  /* 0x63 'c' */
{0xE0,0xF0,0x38,0x18,0x30,0xFE,0xFE, 0x07,0x0F,0x1C,0x18,0x0C,0x1F,0x1F},  /* 0x64 'd' */
{0xE0,0xF0,0xB8,0x98,0xB8,0xF0,0xE0, 0x07,0x0F,0x1D,0x19,0x19,0x19,0x01},  /* 0x65 'e' */
{0xC0,0xF8,0xFC,0xCE,0xC6,0x1C,0x18, 0x00,0x1F,0x1F,0x00,0x00,0x00,0x00},  /* 0x66 'f' */
{0xE0,0xF0,0x38,0x18,0x30,0xF8,0xF8, 0x03,0x07,0x6E,0x6C,0x66,0x3F,0x1F},  /* 0x67 'g' */
{0xFE,0xFE,0x30,0x18,0x38,0xF0,0xC0, 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F},  /* 0x68 'h' */
{0x00,0x30,0x30,0xF6,0xF6,0x00,0x00, 0x00,0x00,0x18,0x1F,0x1F,0x18,0x00},  /* 0x69 'i' */
{0x00,0x00,0x00,0xF6,0xF6,0x00,0x00, 0x30,0x70,0x60,0x7F,0x3F,0x00,0x00},  /* 0x6a 'j' */
{0xFE,0xFE,0x80,0xC0,0xF0,0x38,0x18, 0x1F,0x1F,0x01,0x07,0x0E,0x1C,0x18},  /* 0x6b 'k' */
{0x00,0x00,0x06,0xFE,0xFE,0x00,0x00, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00},  /* 0x6c 'l' */
{0xF8,0xF8,0x18,0xF0,0x18,0xF0,0xE0, 0x1F,0x1F,0x00,0x1F,0x00,0x1F,0x1F},  /* 0x6d 'm' */
{0xF8,0xF8,0x30,0x18,0x38,0xF0,0xE0, 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F},  /* 0x6e 'n' */
{0xE0,0xF0,0x38,0x18,0x38,0xF0,0xE0, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07},  /* 0x6f 'o' */
{0xF8,0xF8,0x30,0x18,0x38,0xF0,0xE0, 0x7F,0x7F,0x0C,0x18,0x1C,0x0F,0x07},  /* 0x70 'p' */
{0xE0,0xF0,0x38,0x18,0x30,0xF8,0xF8, 0x07,0x0F,0x1C,0x18,0x0C,0x7F,0x7F},  /* 0x71 'q' */
{0xF8,0xF8,0x60,0x30,0x18,0x78,0x70, 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00},  /* 0x72 'r' */
{0x60,0xF0,0x98,0x98,0x98,0x30,0x20, 0x04,0x0C,0x19,0x19,0x19,0x0F,0x06},  /* 0x73 's' */
{0x60,0x60,0xFC,0xFE,0x60,0x60,0x00, 0x00,0x00,0x0F,0x1F,0x18,0x1C,0x0C},  /* 0x74 't' */
{0xF8,0xF8,0x00,0x00,0x00,0xF8,0xF8, 0x0F,0x1F,0x18,0x18,0x0C,0x1F,0x1F},  /* 0x75 'u' */
{0xF8,0xF8,0x00,0x00,0x00,0xF8,0xF8, 0x03,0x07,0x0E,0x1C,0x0E,0x07,0x03},  /* 0x76 'v' */
{0xF8,0xF8,0x00,0xE0,0x00,0xF8,0xF8, 0x03,0x1F,0x1C,0x0F,0x1C,0x1F,0x03},  /* 0x77 'w' */
{0x18,0x38,0xE0,0xC0,0xE0,0x38,0x18, 0x1C,0x1F,0x03,0x01,0x03,0x1F,0x1C},  /* 0x78 'x' */
{0xF8,0xF8,0x00,0x00,0x00,0xF8,0xF8, 0x07,0x0F,0x6C,0x6C,0x66,0x3F,0x1F},  /* 0x79 'y' */
{0x18,0x18,0x18,0x98,0xD8,0x78,0x38, 0x1C,0x1E,0x1B,0x19,0x18,0x18,0x18},  /* 0x7a 'z' */
{0x00,0xC0,0xFE,0x3F,0x03,0x03,0x00, 0x00,0x00,0x1F,0x3F,0x30,0x30,0x00},  /* 0x7b '{' */
{0x00,0x00,0x00,0xFF,0xFF,0x00,0x00, 0x00,0x00,0x00,0x3F,0x3F,0x00,0x00},  /* 0x7c '|' */
{0x00,0x03,0x03,0x3F,0xFE,0xC0,0x00, 0x00,0x30,0x30,0x3F,0x1F,0x00,0x00},  /* 0x7d '}' */
{0x02,0x03,0x01,0x03,0x02,0x03,0x01, 0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x7e '~' */
{0x80,0xE0,0x30,0x18,0x30,0xE0,0x80, 0x07,0x07,0x06,0x06,0x06,0x07,0x07},  /* 0x7f  */

/* All language specific characters are defined below, only the required are added with          */
/* #include "language-dependend_characters.h"                                                    */
/* Please note, that the position of special characters defined in "std_defines.h" must match to */
/* the sequence in "language-dependend_characters.h" !                                           */
/* Cyrillic characters are included additionally, if required.                                   */


#define PIX_a_acute  {0x00,0x98,0xD8,0xDA,0xDB,0xF1,0xE0, 0x07,0x0F,0x1D,0x18,0x0C,0x1F,0x1F}, 
#define PIX_c_acute  {0xF0,0xF8,0x1E,0x0F,0x1D,0x38,0x30, 0x07,0x0F,0x1C,0x18,0x1C,0x0E,0x06}, 
#define PIX_e_acute  {0xE0,0xF0,0xB8,0x9A,0xBB,0xF1,0xE0, 0x07,0x0F,0x1D,0x19,0x19,0x19,0x01}, 
#define PIX_i_acute  {0x00,0x00,0x30,0xF2,0xF3,0x01,0x00, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00}, 
#define PIX_l_acute  {0x00,0x06,0xFE,0xFE,0x00,0x02,0x03, 0x00,0x00,0x1F,0x1F,0x00,0x00,0x00}, 
#define PIX_n_acute  {0xF8,0xF8,0x30,0x1A,0x3B,0xF1,0xE0, 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F}, 
#define PIX_o_acute  {0xE0,0xF0,0x38,0x1A,0x3B,0xF1,0xE0, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_r_acute  {0xF8,0xF8,0x60,0x32,0x1B,0x79,0x70, 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00}, 
#define PIX_s_acute  {0x60,0xF0,0x98,0x9A,0x9B,0x31,0x20, 0x04,0x0C,0x19,0x19,0x19,0x0F,0x06}, 
#define PIX_u_acute  {0xF8,0xF8,0x00,0x02,0x03,0xF9,0xF8, 0x0F,0x1F,0x18,0x18,0x0C,0x1F,0x1F}, 
#define PIX_y_acute  {0xF8,0xF8,0x00,0x02,0x03,0xF9,0xF8, 0x07,0x0F,0x6C,0x6C,0x66,0x3F,0x1F}, 
#define PIX_z_acute  {0x18,0x18,0x18,0x9A,0xDB,0x79,0x38, 0x1C,0x1E,0x1B,0x19,0x18,0x18,0x18}, 
#define PIX_A_acute  {0xC0,0xE0,0x70,0x3A,0x73,0xE1,0xC0, 0x1F,0x1F,0x06,0x06,0x06,0x1F,0x1F}, 
#define PIX_C_acute  {0xF0,0xF8,0x1E,0x0F,0x1D,0x38,0x30, 0x07,0x0F,0x1C,0x18,0x1C,0x0E,0x06}, 
#define PIX_E_acute  {0xFC,0xFC,0xCC,0xCE,0xCF,0x0D,0x0C, 0x1F,0x1F,0x18,0x18,0x18,0x18,0x18}, 
#define PIX_I_acute  {0x00,0x00,0x00,0xFA,0xFB,0x01,0x00, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00}, 
#define PIX_L_acute  {0xFE,0xFE,0x00,0x02,0x03,0x01,0x00, 0x1F,0x1F,0x18,0x18,0x18,0x18,0x18}, 
#define PIX_N_acute  {0xFC,0xFC,0x78,0xE2,0x03,0xFD,0xFC, 0x1F,0x1F,0x00,0x03,0x0F,0x1F,0x1F}, 
#define PIX_O_acute  {0xE0,0xF0,0x38,0x1A,0x3B,0xF1,0xE0, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_R_acute  {0xFC,0xFC,0x8C,0x8E,0x8F,0xF9,0x70, 0x1F,0x1F,0x01,0x01,0x07,0x1E,0x18}, 
#define PIX_S_acute  {0x60,0xF0,0x98,0x9A,0x9B,0x31,0x20, 0x04,0x0C,0x19,0x19,0x19,0x0F,0x06}, 
#define PIX_U_acute  {0xFC,0xFC,0x00,0x02,0x03,0xFD,0xFC, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_Y_acute  {0x00,0xFC,0xFC,0x82,0x83,0xFD,0xFC, 0x00,0x00,0x01,0x1F,0x1F,0x01,0x00}, 
#define PIX_Z_acute  {0x0C,0x0C,0x8C,0xCE,0xEF,0x7D,0x3C, 0x1E,0x1F,0x1B,0x19,0x18,0x18,0x18}, 

#define PIX_a_breve  {0x00,0x9A,0xDB,0xD9,0xDB,0xF2,0xE0, 0x07,0x0F,0x1D,0x18,0x0C,0x1F,0x1F}, 
#define PIX_A_breve  {0xC0,0xE1,0x73,0x3A,0x73,0xE1,0xC0, 0x1F,0x1F,0x06,0x06,0x06,0x1F,0x1F}, 

#define PIX_c_caron  {0xE0,0xF0,0x39,0x1B,0x3A,0x73,0x61, 0x07,0x0F,0x1C,0x18,0x1C,0x0E,0x06}, 
#define PIX_d_caron  {0xE0,0xF0,0x38,0x1B,0x30,0xFE,0xFE, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_e_caron  {0xE0,0xF1,0xBB,0x9A,0xBB,0xF1,0xE0, 0x07,0x0F,0x1D,0x19,0x19,0x19,0x01}, 
#define PIX_l_caron  {0x00,0x00,0x06,0xFE,0xFE,0x00,0x07, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00}, 
#define PIX_n_caron  {0xF8,0xF8,0x31,0x1B,0x3A,0xF3,0xE1, 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F}, 
#define PIX_r_caron  {0xF8,0xF8,0x61,0x33,0x1A,0x7B,0x71, 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00}, 
#define PIX_s_caron  {0x60,0xF1,0x9B,0x9A,0x9B,0x31,0x20, 0x04,0x0C,0x19,0x19,0x19,0x0F,0x06}, 
#define PIX_t_caron  {0x60,0x60,0xFC,0xFE,0x60,0x67,0x00, 0x00,0x00,0x0F,0x1F,0x18,0x1C,0x0C}, 
#define PIX_z_caron  {0x18,0x19,0x1B,0x9A,0xDB,0x79,0x38, 0x1C,0x1E,0x1B,0x19,0x18,0x18,0x18}, 
#define PIX_C_caron  {0xF0,0xF9,0x1F,0x0E,0x1F,0x39,0x30, 0x07,0x0F,0x1C,0x18,0x1C,0x0E,0x06}, 
#define PIX_D_caron  {0xFC,0xFD,0x07,0x06,0x07,0xF9,0xF0, 0x1F,0x1F,0x10,0x10,0x18,0x0F,0x07}, 
#define PIX_E_caron  {0xFC,0xFD,0xCF,0xCE,0xCF,0x0D,0x0C, 0x1F,0x1F,0x18,0x18,0x18,0x18,0x18}, 
#define PIX_L_caron  {0xFE,0xFE,0x00,0x00,0x07,0x07,0x00, 0x1F,0x1F,0x18,0x18,0x18,0x18,0x18}, 
#define PIX_N_caron  {0xFC,0xFD,0x7B,0xE2,0x03,0xFD,0xFC, 0x1F,0x1F,0x00,0x03,0x0F,0x1F,0x1F}, 
#define PIX_R_caron  {0xFC,0xFD,0x8F,0x8E,0x8F,0xF9,0x70, 0x1F,0x1F,0x01,0x01,0x07,0x1E,0x18}, 
#define PIX_S_caron  {0x70,0xF9,0xDD,0xCE,0x9D,0x19,0x10, 0x06,0x0E,0x1C,0x19,0x1F,0x0F,0x06}, 
#define PIX_T_caron  {0x00,0x0D,0x0D,0xFE,0xFE,0x0D,0x0D, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00}, 
#define PIX_Z_caron  {0x0C,0x0D,0x8F,0xCE,0xEF,0x7D,0x3C, 0x1E,0x1F,0x1B,0x19,0x18,0x18,0x18}, 

#define PIX_c_cedil  {0xE0,0xF0,0x38,0x18,0x38,0x70,0x60, 0x07,0x0F,0x1C,0x58,0x5C,0x2E,0x06}, 
#define PIX_s_cedil  {0x60,0xF0,0x98,0x98,0x98,0x30,0x20, 0x04,0x0C,0x59,0x59,0x79,0x0F,0x06}, 
#define PIX_t_cedil  {0x60,0x60,0xFC,0xFE,0x60,0x60,0x00, 0x00,0x00,0x0F,0x5F,0x58,0x3C,0x0C}, 
#define PIX_C_cedil  {0xF8,0xFC,0x0E,0x06,0x0E,0x1C,0x18, 0x07,0x0F,0x1C,0x58,0x5C,0x2E,0x06}, 
#define PIX_S_cedil  {0x38,0x7C,0xEE,0xC6,0xCE,0x9C,0x18, 0x06,0x0E,0x5C,0x58,0x7D,0x0F,0x07}, 
#define PIX_T_cedil  {0x00,0x06,0x06,0xFE,0xFE,0x06,0x06, 0x00,0x00,0x40,0x5F,0x3F,0x00,0x00}, 

#define PIX_a_circ   {0x00,0x9A,0xDB,0xD9,0xDB,0xF2,0xE0, 0x07,0x0F,0x1D,0x18,0x0C,0x1F,0x1F}, 
#define PIX_e_circ   {0xE0,0xF2,0xBB,0x99,0xBB,0xF2,0xE0, 0x07,0x0F,0x1D,0x19,0x19,0x19,0x01}, 
#define PIX_i_circ   {0x00,0x02,0x30,0xF2,0xF3,0x01,0x00, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00}, 
#define PIX_o_circ   {0xE0,0xF2,0x3B,0x19,0x3B,0xF2,0xE0, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_u_circ   {0xF8,0xFA,0x03,0x01,0x03,0xFA,0xF8, 0x0F,0x1F,0x18,0x18,0x0C,0x1F,0x1F}, 
#define PIX_A_circ   {0xC0,0xE2,0x73,0x39,0x73,0xE2,0xC0, 0x1F,0x1F,0x06,0x06,0x06,0x1F,0x1F}, 
#define PIX_E_circ   {0xFC,0xFE,0xCF,0xCD,0xCF,0x0E,0x0C, 0x1F,0x1F,0x18,0x18,0x18,0x18,0x18}, 
#define PIX_I_circ   {0x00,0x02,0x03,0xF9,0xFB,0x02,0x00, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00}, 
#define PIX_O_circ   {0xE0,0xF2,0x3B,0x19,0x3B,0xF2,0xE0, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_U_circ   {0xF8,0xFA,0x03,0x01,0x03,0xFA,0xF8, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 

#define PIX_o_dblac  {0xE0,0xF0,0x3B,0x18,0x3B,0xF0,0xE0, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_u_dblac  {0xF8,0xF8,0x03,0x00,0x03,0xF8,0xF8, 0x0F,0x1F,0x18,0x18,0x0C,0x1F,0x1F}, 
#define PIX_O_dblac  {0xE0,0xF0,0x3B,0x18,0x3B,0xF0,0xE0, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_U_dblac  {0xFC,0xFC,0x03,0x00,0x03,0xFC,0xFC, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 

#define PIX_z_dot    {0x18,0x18,0x1A,0x9A,0xD8,0x78,0x38, 0x1C,0x1E,0x1B,0x19,0x18,0x18,0x18}, 
#define PIX_Z_dot    {0x0C,0x0C,0x8D,0xCD,0xEC,0x7C,0x3C, 0x1E,0x1F,0x1B,0x19,0x18,0x18,0x18}, 

#define PIX_a_elig   {0x18,0x98,0xD8,0xE8,0xB8,0xF0,0xE0, 0x07,0x0F,0x1D,0x1F,0x1F,0x19,0x19}, 
#define PIX_o_elig   {0xE0,0xF0,0x38,0xF8,0x38,0xF0,0xE0, 0x07,0x0F,0x1C,0x1F,0x19,0x19,0x01}, 
#define PIX_A_elig   {0xE0,0xF8,0xCC,0xFE,0xFE,0xC6,0xC6, 0x1F,0x1F,0x00,0x1F,0x1F,0x18,0x18}, 
#define PIX_O_elig   {0xF8,0xFC,0x0E,0xFE,0xFE,0xC6,0xC6, 0x07,0x0F,0x1C,0x1F,0x1F,0x18,0x18}, 

#define PIX_d_eth    {0xE0,0xF0,0x38,0x18,0x32,0xFF,0xFF, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_D_eth    {0xC0,0xFE,0xFE,0xC2,0x06,0xFC,0xF8, 0x00,0x1F,0x1F,0x10,0x18,0x0F,0x07}, 

#define PIX_a_grave  {0x00,0x98,0xD9,0xDB,0xDA,0xF0,0xE0, 0x07,0x0F,0x1D,0x18,0x0C,0x1F,0x1F}, 
#define PIX_e_grave  {0xE0,0xF0,0xB9,0x9B,0xBA,0xF0,0xE0, 0x07,0x0F,0x1D,0x19,0x19,0x19,0x01}, 
#define PIX_i_grave  {0x00,0x00,0x31,0xF3,0xF2,0x00,0x00, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00}, 
#define PIX_o_grave  {0xE0,0xF0,0x39,0x1B,0x3A,0xF0,0xE0, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_u_grave  {0xF8,0xF8,0x01,0x03,0x02,0xF8,0xF8, 0x0F,0x1F,0x18,0x18,0x0C,0x1F,0x1F}, 
#define PIX_A_grave  {0xC0,0xE0,0x71,0x3B,0x72,0xE0,0xC0, 0x1F,0x1F,0x06,0x06,0x06,0x1F,0x1F}, 
#define PIX_E_grave  {0xFC,0xFC,0xCD,0xCF,0xCE,0x0C,0x0C, 0x1F,0x1F,0x18,0x18,0x18,0x18,0x18}, 
#define PIX_I_grave  {0x00,0x00,0x01,0xFB,0xFA,0x00,0x00, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00}, 
#define PIX_O_grave  {0xE0,0xF0,0x39,0x1B,0x3A,0xF0,0xE0, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_U_grave  {0xFC,0xFC,0x01,0x03,0x02,0xFC,0xFC, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 

#define PIX_a_ogon   {0x00,0x98,0xD8,0xD8,0xD8,0xF0,0xE0, 0x07,0x0F,0x1D,0x18,0x2C,0x5F,0x5F}, 
#define PIX_e_ogon   {0xE0,0xF0,0xB8,0x98,0xB8,0xF0,0xE0, 0x07,0x0F,0x0D,0x59,0x59,0x39,0x01}, 
#define PIX_A_ogon   {0xF0,0xF8,0x1C,0x0E,0x1C,0xF8,0xF0, 0x1F,0x1F,0x06,0x06,0x26,0x5F,0x5F}, 
#define PIX_E_ogon   {0xFE,0xFE,0xC6,0xC6,0xC6,0x06,0x06, 0x1F,0x1F,0x18,0x18,0x38,0x58,0x58}, 

#define PIX_a_ring   {0x00,0x98,0xDA,0xDD,0xDA,0xF0,0xE0, 0x07,0x0F,0x1D,0x18,0x0C,0x1F,0x1F}, 
#define PIX_u_ring   {0xF8,0xF8,0x02,0x05,0x02,0xF8,0xF8, 0x0F,0x1F,0x18,0x18,0x0C,0x1F,0x1F}, 
#define PIX_A_ring   {0xC0,0xE0,0x72,0x3D,0x72,0xE0,0xC0, 0x1F,0x1F,0x06,0x06,0x06,0x1F,0x1F}, 
#define PIX_U_ring   {0xFC,0xF8,0x02,0x05,0x02,0xF8,0xFC, 0x0F,0x1F,0x18,0x18,0x0C,0x1F,0x1F}, 

#define PIX_s_sharp  {0xF8,0xFC,0x0E,0xCE,0xFC,0xB8,0x00, 0x0F,0x0F,0x00,0x00,0x0C,0x0F,0x07}, 

#define PIX_o_slash  {0xE0,0xF0,0x38,0x98,0x78,0xF0,0xE0, 0x07,0x0F,0x1D,0x18,0x1C,0x0F,0x07}, 
#define PIX_O_slash  {0xF8,0xFC,0x8E,0x46,0x2E,0xFC,0xF8, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 

#define PIX_l_stroke {0x00,0x00,0x66,0xFE,0xFE,0x30,0x00, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00}, 
#define PIX_L_stroke {0x60,0xFE,0xFE,0x60,0x00,0x00,0x00, 0x00,0x1F,0x1F,0x18,0x18,0x18,0x18}, 

#define PIX_a_uml    {0x00,0x99,0xD9,0xD8,0xD9,0xF1,0xE0, 0x07,0x0F,0x1D,0x18,0x0C,0x1F,0x1F}, 
#define PIX_e_uml    {0xE0,0xF1,0xB9,0x98,0xB9,0xF1,0xE0, 0x07,0x0F,0x1D,0x19,0x19,0x19,0x01}, 
#define PIX_i_uml    {0x00,0x01,0x31,0xF0,0xF1,0x01,0x00, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00}, 
#define PIX_o_uml    {0xE0,0xF1,0x39,0x18,0x39,0xF1,0xE0, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_u_uml    {0xF8,0xF9,0x01,0x00,0x01,0xF9,0xF8, 0x0F,0x1F,0x18,0x18,0x0C,0x1F,0x1F}, 
#define PIX_y_uml    {0xF8,0xF9,0x01,0x00,0x01,0xF9,0xF8, 0x07,0x0F,0x6C,0x6C,0x66,0x3F,0x1F}, 
#define PIX_A_uml    {0xC0,0xE1,0x71,0x38,0x71,0xE1,0xC0, 0x1F,0x1F,0x06,0x06,0x06,0x1F,0x1F}, 
#define PIX_E_uml    {0xFC,0xFD,0xCC,0xCD,0x0D,0x0C,0x0C, 0x1F,0x1F,0x18,0x18,0x18,0x18,0x18}, 
#define PIX_I_uml    {0x00,0x01,0x01,0xF8,0xF9,0x01,0x00, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00}, 
#define PIX_O_uml    {0xF0,0xF9,0x1D,0x0C,0x1D,0xF9,0xF0, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_U_uml    {0xFC,0xFD,0x01,0x00,0x01,0xFD,0xFC, 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07}, 
#define PIX_Y_uml    {0x00,0xFD,0xFD,0x80,0x80,0xFD,0xFD, 0x00,0x00,0x01,0x1F,0x1F,0x01,0x00}, 


#include "language-dependent_characters.h"

 #if defined LCD_CYRILLIC
{0xFE,0xFE,0xC6,0xC6,0xC6,0x86,0x00, 0x1F,0x1F,0x18,0x18,0x1D,0x0F,0x07},  /* 0x80 Cyr_B    */
{0xFE,0xFE,0x06,0x06,0x06,0x06,0x00, 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00},  /* 0x81 Cyr_G    */
{0xFB,0xFB,0x98,0x98,0x9B,0x1B,0x00, 0x1F,0x1F,0x19,0x19,0x19,0x18,0x18},  /* 0x82 Cyr_Jo   */
{0x06,0xBE,0xF0,0xFE,0xF0,0xBE,0x06, 0x1C,0x1F,0x00,0x1F,0x00,0x1F,0x1C},  /* 0x83 Cyr_Zsch */
{0x18,0x1C,0x0E,0xC6,0xEE,0xFC,0x38, 0x06,0x0E,0x1C,0x18,0x1D,0x0F,0x07},  /* 0x84 Cyr_Z    */
{0xFE,0xFE,0x80,0xE0,0x78,0xFE,0xFE, 0x1F,0x0F,0x07,0x01,0x00,0x1F,0x1F},  /* 0x85 Cyr_I    */
{0xFC,0xFD,0x03,0xC6,0xE3,0xFD,0xFC, 0x1F,0x0F,0x07,0x03,0x00,0x1F,0x1F},  /* 0x86 Cyr_J    */
{0x00,0xF0,0xFC,0x0E,0x06,0xFE,0xFE, 0x18,0x1F,0x0F,0x00,0x00,0x1F,0x1F},  /* 0x87 Cyr_L    */
{0xFE,0xFE,0x06,0x06,0x06,0xFE,0xFE, 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F},  /* 0x88 Cyr_P    */
{0xFE,0xFE,0x80,0x00,0x80,0xFE,0xFE, 0x00,0x01,0x1B,0x1B,0x19,0x1F,0x0F},  /* 0x89 Cyr_U    */
{0xF8,0xFC,0x06,0xFF,0x06,0xFC,0xF8, 0x00,0x01,0x03,0x1F,0x03,0x01,0x00},  /* 0x8a Cyr_F    */
{0xFE,0xFE,0x80,0x00,0x80,0xFE,0xFE, 0x00,0x01,0x03,0x03,0x01,0x1F,0x1F},  /* 0x8b Cyr_Tsch */
{0xFE,0xFE,0x00,0xFE,0x00,0xFE,0xFE, 0x1F,0x1F,0x18,0x1F,0x18,0x1F,0x1F},  /* 0x8c Cyr_Sch  */
{0x0E,0xFE,0xFE,0x30,0x18,0xF8,0xF0, 0x00,0x1F,0x1F,0x18,0x18,0x1F,0x0F},  /* 0x8d Cyr_HH   */
{0xFE,0xFE,0x30,0x18,0xF0,0x0E,0xFE, 0x1F,0x1F,0x18,0x18,0x0F,0x10,0x1F},  /* 0x8e Cyr_Y    */
{0x18,0x1C,0x06,0xC6,0xCE,0xFC,0xF8, 0x06,0x0E,0x18,0x18,0x1C,0x0F,0x07},  /* 0x8f Cyr_E    */
{0xFE,0xFE,0xE0,0xFC,0x06,0xFE,0xFC, 0x1F,0x1F,0x00,0x0F,0x18,0x1F,0x0F},  /* 0x90 Cyr_Ju   */
{0x78,0xFC,0x86,0x86,0x86,0xFE,0xFE, 0x18,0x1E,0x07,0x01,0x01,0x1F,0x1F},  /* 0x91 Cyr_Ja   */
{0xF0,0xF8,0xCC,0x6C,0x66,0xC6,0x80, 0x07,0x0F,0x18,0x18,0x18,0x0F,0x07},  /* 0x92 Cyr_b    */
{0xF8,0xF8,0x98,0x98,0x98,0xF0,0x60, 0x1F,0x1F,0x19,0x19,0x19,0x0F,0x06},  /* 0x93 Cyr_v    */
{0xF8,0xF8,0x18,0x18,0x18,0x18,0x00, 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00},  /* 0x94 Cyr_g    */
{0xE0,0xF3,0xBB,0x98,0xBB,0xF3,0xE0, 0x07,0x0F,0x1D,0x19,0x19,0x19,0x01},  /* 0x95 Cyr_jo   */
{0x18,0x78,0xC0,0xF8,0xC0,0x78,0x18, 0x1C,0x1F,0x01,0x1F,0x01,0x1F,0x1C},  /* 0x96 Cyr_zsch */
{0x60,0x70,0x18,0x98,0xB8,0xF0,0x60, 0x06,0x0E,0x18,0x19,0x1D,0x0F,0x06},  /* 0x97 Cyr_z    */
{0xF8,0xF8,0x00,0xC0,0xF0,0xF8,0xF8, 0x1F,0x1F,0x0F,0x03,0x00,0x1F,0x1F},  /* 0x98 Cyr_i    */
{0xF8,0xF9,0x03,0xC6,0xF3,0xF9,0xF8, 0x1F,0x1F,0x0F,0x03,0x00,0x1F,0x1F},  /* 0x99 Cyr_j    */
{0xF8,0xF8,0x80,0xC0,0xF0,0x38,0x18, 0x1F,0x1F,0x01,0x07,0x0E,0x1C,0x18},  /* 0x9a Cyr_k    */
{0x00,0xE0,0xF0,0x38,0x18,0xF8,0xF8, 0x18,0x1F,0x0F,0x00,0x00,0x1F,0x1F},  /* 0x9b Cyr_l    */
{0xF8,0xF0,0xE0,0xC0,0xE0,0xF0,0xF8, 0x1F,0x1F,0x00,0x03,0x00,0x1F,0x1F},  /* 0x9c Cyr_m    */
{0xF8,0xF8,0x80,0x80,0x80,0xF8,0xF8, 0x1F,0x1F,0x01,0x01,0x01,0x1F,0x1F},  /* 0x9d Cyr_n    */
{0xF8,0xF8,0x18,0x18,0x18,0xF8,0xF8, 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F},  /* 0x9e Cyr_p    */
{0x00,0x18,0x18,0xF8,0xF8,0x18,0x18, 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00},  /* 0x9f Cyr_t    */
{0xF8,0xF8,0x00,0x00,0x80,0xF8,0xF8, 0x01,0x03,0x03,0x03,0x01,0x1F,0x1F},  /* 0xa0 Cyr_tsch    */
{0xF8,0xF8,0x00,0xE0,0x00,0xF8,0xF8, 0x1F,0x1F,0x18,0x1F,0x18,0x1F,0x1F},  /* 0xa1 Cyr_sch     */
{0x38,0xF8,0xF8,0x80,0xC0,0xC0,0x80, 0x00,0x1F,0x1F,0x19,0x18,0x1F,0x0F},  /* 0xa2 Cyr_hh      */
{0xF8,0xF8,0x80,0xC0,0x80,0x78,0xF8, 0x1F,0x1F,0x19,0x18,0x0F,0x10,0x1F},  /* 0xa3 Cyr_y       */
{0xF8,0xF8,0x80,0xC0,0xC0,0xC0,0x80, 0x1F,0x1F,0x19,0x18,0x18,0x1F,0x0F},  /* 0xa4 Cyr_ww      */
{0x60,0x70,0x18,0x98,0xB8,0xF0,0xE0, 0x06,0x0E,0x18,0x19,0x1D,0x0F,0x07},  /* 0xa5 Cyr_e       */
{0xF8,0xF8,0xC0,0xF0,0x18,0xF8,0xF0, 0x1F,0x1F,0x01,0x0F,0x18,0x1F,0x0F},  /* 0xa6 Cyr_ju      */
{0xE0,0xF0,0x38,0x18,0x18,0xF8,0xF8, 0x11,0x1B,0x1F,0x06,0x03,0x1F,0x1F},  /* 0xa7 Cyr_ja      */
{0xF0,0xF8,0x1C,0x0E,0xFE,0xFE,0x00, 0x7F,0x1F,0x18,0x18,0x1F,0x7F,0x78},  /* 0xa8 Cyr_D       */
{0xFE,0xFE,0x00,0x00,0xFE,0xFE,0x00, 0x1F,0x1F,0x18,0x18,0x1F,0x7F,0x78},  /* 0xa9 Cyr_C       */
{0xFE,0xFE,0x00,0xFE,0x00,0xFE,0xFE, 0x1F,0x1F,0x18,0x1F,0x18,0x1F,0x7F},  /* 0xaa Cyr_Schtsch */
{0xC0,0xE0,0x30,0x18,0xF8,0xF8,0x00, 0x7F,0x1F,0x18,0x18,0x1F,0x7F,0x78},  /* 0xab Cyr_d       */
{0xC0,0xE0,0x30,0xF8,0x30,0xE0,0xC0, 0x07,0x0F,0x18,0x7F,0x18,0x0F,0x07},  /* 0xac Cyr_f       */
{0xF8,0xF8,0x00,0x00,0xF8,0xF8,0x00, 0x1F,0x1F,0x18,0x18,0x1F,0x7F,0x70},  /* 0xad Cyr_c       */
{0xF8,0xF8,0x00,0xE0,0x00,0xF8,0xF8, 0x1F,0x1F,0x18,0x1F,0x18,0x1F,0x7F},  /* 0xae Cyr_schtsch */
 #endif
};
#else
 #ifndef __ASSEMBLER__
extern const unsigned char PROGMEM sfont[9][(FONT_WIDTH * ((FONT_HEIGHT+7)/8))];
extern const unsigned char PROGMEM nfont[(CHAR_COUNT-28)][((FONT_WIDTH-1) * ((FONT_HEIGHT+7)/8))];
 #endif
#endif
/* ****************************** EOF ***************************************** */
