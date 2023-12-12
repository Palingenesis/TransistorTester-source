// table of the bits for the 8x15 character set
// each byte hold 8 bits of a row, the upper bit is 1, the bit for the 8th line is 128

#ifdef LCD_CYRILLIC
 #define CHAR_COUNT 0xa0
#else
 /* ---------------------------------- */
 #if defined LANG_FRANCAIS || defined DANISH
  // Caracteres accentues francais
  #define a_grave       'a' /* e0 */
  #define a_circ        'a' /* e2 */
  #define a_elig        'a' /* e6 */
  #define c_cedil       'c' /* e7 */
  #define e_acute       'e' /* e9 */
  #define e_circ        'e' /* ea */
  #define e_grave       'e' /* e8 */
  #define e_uml         'e' /* eb */
  #define i_circ        'i' /* ee */
  #define i_uml         'i' /* ef */
  #define o_circ        'o' /* f4 */
  #define o_elig        'o' /* bd */
  #define u_grave       'u' /* f9 */
  #define u_circ        'u' /* fb */
  #define u_uml         'u' /* fc */
  #define y_uml         'y' /* ff */
  #ifdef WITH_CAPITAL_SPECIALS
   #define A_grave       'A' /* e0 */
   #define A_circ        'A' /* e2 */
   #define A_elig        'A' /* e6 */
   #define C_cedil       'C' /* e7 */
   #define E_acute       'E' /* e9 */
   #define E_circ        'E' /* ea */
   #define E_grave       'E' /* e8 */
   #define E_uml         'E' /* eb */
   #define I_circ        'I' /* ee */
   #define I_uml         'I' /* ef */
   #define O_circ        'O' /* f4 */
   #define O_elig        'O' /* bd */
   #define U_grave       'U' /* f9 */
   #define U_circ        'U' /* fb */
   #define U_uml         'U' /* fc */
   #define Y_uml         'Y' /* ff */
   #define CHAR_COUNT  128 /* 0x90 */
  #else
   #define A_grave   a_grave
   #define A_circ    a_circ
   #define A_elig    a_elig
   #define C_cedil   c_cedil
   #define E_acute   e_acute
   #define E_circ    e_circ
   #define E_grave   e_grave
   #define E_uml     e_uml
   #define I_circ    i_circ
   #define I_uml     i_uml
   #define O_circ    o_circ
   #define O_elig    o_elig
   #define U_grave   u_grave
   #define U_circ    u_circ
   #define U_uml     u_uml
   #define Y_uml     y_uml
   #define CHAR_COUNT    0x80
  #endif
 /* ---------------------------------- */
 #elif defined LANG_CZECH || defined LANG_SLOVAK
  /* ---------de ISO8859-2---------- */
  #define a_acute       'a' /* e1 */
  #define a_uml         'a' /* e4 */
  #define c_caron       'c' /* e8 */
  #define d_caron       'd' /* ef */
  #define e_acute       'e' /* e9 */
  #define e_caron       'e' /* ec */
  #define i_acute       'i' /* ed */
  #define l_acute       'l' /* e5 */
  #define l_caron       'l' /* b5 */
  #define n_caron       'n' /* f2 */
  #define o_acute       'o' /* f3 */
  #define o_uml         'o' /* f6 */
  #define o_circ        'o' /* f4 */
  #define r_acute       'r' /* e0 */
  #define r_caron       'r' /* f8 */
  #define s_caron       's' /* b9 */
  #define t_caron       't' /* bb */
  #define u_acute       'u' /* fa */
  #define u_uml         'u' /* fc */
  #define u_ring        'u' /* f9 */
  #define y_acute       'y' /* fd */
  #define z_caron       'z' /* b9 */
  #ifdef WITH_CAPITAL_SPECIALS
   #define A_acute       'A' /* c1 */
   #define A_uml         'A' /* c4 */
   #define C_caron       'C' /* c8 */
   #define D_caron       'D' /* cf */
   #define E_acute       'E' /* c9 */
   #define E_caron       'E' /* cc */
   #define I_acute       'I' /* cd */
   #define L_acute       'L' /* c5 */
   #define L_caron       'L' /* a5 */
   #define N_caron       'N' /* d2 */
   #define O_acute       'O' /* d3 */
   #define O_uml         'O' /* d6 */
   #define O_circ        'O' /* d4 */
   #define R_acute       'R' /* c0 */
   #define R_caron       'R' /* d8 */
   #define S_caron       'S' /* a9 */
   #define T_caron       'T' /* ab */
   #define U_acute       'U' /* da */
   #define U_uml         'U' /* dc */
   #define Y_acute       'Y' /* dd */
   #define Z_caron       'Z' /* ae */
   #define CHAR_COUNT  128  // 0x9b
  #else
   #define A_acute       a_acute
   #define A_uml         a_uml
   #define C_caron       c_caron
   #define D_caron       c_caron
   #define E_acute       e_acute
   #define E_caron       e_caron
   #define I_acute       i_acute
   #define L_acute       l_acute
   #define L_caron       l_caron
   #define N_caron       n_caron
   #define O_acute       o_acute
   #define O_uml         o_uml
   #define O_circ        o_circ
   #define R_acute       r_acute
   #define R_caron       r_caron
   #define S_caron       s_caron
   #define T_caron       t_caron
   #define U_acute       u_acute
   #define U_uml         u_uml
   #define Y_acute       y_acute
   #define Z_caron       z_caron
   #define CHAR_COUNT 128  // 0x86
  #endif
 /*--------------------------------------- */
 #elif defined LANG_SERBIAN || LANG_CROATIAN || LANG_SLOWENIAN || LANG_BOSNIAN
  #define c_acute       'c'  /* e6 */
  #define c_caron       'c'  /* e8 */
  #define d_eth         'd'  /* f0 */
  #define s_caron       's'  /* b9 */
  #define z_caron       'z'  /* be */
  #define C_acute       'C'  /* c6 */
  #define C_caron       'C'  /* c8 */
  #define D_eth         'D'  /* d0 */
  #define S_caron       'S'  /* a9 */
  #define Z_caron       'Z'  /* ae */
  #define CHAR_COUNT   128 // 0x7f + 1
 /* ---------------------------------- */
 #elif defined LANG_POLISH
  #define a_ogon        'a' /* b1  */
  #define c_acute       'c' /* e6  */
  #define e_ogon        'e' /* ea  */
  #define l_stroke      'l' /* b3  */
  #define n_acute       'n' /* f1  */
  #define o_acute       'o' /* f3  */
  #define s_acute       's' /* b6  */
  #define z_acute       'z' /* bc  */
  #define z_dot         'z' /* bf  */
  #define A_ogon        'A' /* a1  */
  #define C_acute       'C' /* c6  */
  #define E_ogon        'E' /* ca  */
  #define L_stroke      'L' /* a3  */
  #define N_acute       'N' /* d1  */
  #define O_acute       'O' /* d3  */
  #define S_acute       'S' /* a6  */
  #define Z_acute       'Z' /* ac  */
  #define Z_dot         'Z' /* ae  */
  #define CHAR_COUNT  128  // 0x82
 /* ---------------------------------- */
 #elif defined LANG_GERMAN || defined LANG_ALBANIAN
  #define a_uml         'a' /* e4    */
  #define c_cedil       'c' /* e7    */
  #define e_uml         'e' /* f6    */
  #define o_uml         'o' /* f6    */
  #define s_sharp       's' /* df    */
  #define u_uml         'u' /* fc    */
  #define A_uml         'A' /* c4    */
  #define C_cedil       'C' /* c7    */
  #define E_uml         'E' /* d6    */
  #define O_uml         'O' /* d6    */
  #define U_uml         'U' /* dc    */
  #define CHAR_COUNT 128
/* ---------------------------------- */
 #elif defined LANG_HUNGARIAN
  #define a_acute       'a' /* e1 */
  #define e_acute       'e' /* e9 */
  #define o_acute       'o' /* f3 */
  #define o_doubleAcute 'o' /* f5 */
  #define o_uml         'o' /* f6 */
  #define u_acute       'u' /* fa */
  #define u_doubleAcute 'u' /* fb */
  #define u_uml         'u' /* fc */
  #define A_acute       'A' /* c1 */
  #define E_acute       'E' /* c9 */
  #define O_acute       'O' /* d3 */
  #define O_doubleAcute 'O' /* d5 */
  #define O_uml         'O' /* d6 */
  #define U_acute       'U' /* da */
  #define U_doubleAcute 'U' /* db */
  #define U_uml         'U' /* dc */
  #define CHAR_COUNT  128 // 0x7f + 1
 /* ---------------------------------- */
  #elif defined LANG_ROMANIAN  || LANG_DANISH
 /* ----RO-------ISO-8859-2-------- */
  #define a_circ        0x10 /* e2 */
  #define a_breve       0x11 /* e3 */
  #define i_circ        0x12 /* ee */
  #define s_cedil       0x13 /* ba */
  #define t_cedil       0x14 /* fe */
  #define A_circ        0x15 /* c2 */
  #define A_breve       0x16 /* c3 */
  #define I_circ        0x17 /* ce */
  #define S_cedil       0x18 /* aa */
  #define T_cedil       0x19 /* de */
/* ----DK-------ISO-8859-15------- */
  #define a_ring        0x1a /* e5 */
  #define a_elig        0x1b /* e6 */
  #define o_slash       0x1c /* f8 */
  #define A_ring        0x1d /* c5 */
  #define A_elig        0x1e /* c6 */
  #define O_slash       0x1f /* d8 */
 #define CHAR_COUNT   128 // 0x7f + 1
 /* ---------------------------------- */
 #else
  #define CHAR_COUNT 128
 #endif
#endif

#define LastChar (CHAR_COUNT - 1)

#if defined(MAIN_C)
const unsigned char PROGMEM font[CHAR_COUNT][(FONT_WIDTH * ((FONT_HEIGHT + 7)/8))]={
{0xC0,0xF8,0x18,0x18,0x18,0x18,0xF8,0xC0, 0x00,0x07,0x06,0x06,0x06,0x06,0x07,0x00},	/* 0x00 Resistor3  */
{0xC0,0xFC,0xF8,0xF0,0xE0,0xDC,0xFC,0xC0, 0x00,0x0F,0x07,0x03,0x01,0x0E,0x0F,0x00},	/* 0x01 Diode1  */
{0xC0,0xFC,0xDC,0xE0,0xF0,0xF8,0xFC,0xC0, 0x00,0x0F,0x0E,0x01,0x03,0x07,0x0F,0x00},	/* 0x02 Diode2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x03  ' ' */
{0xC0,0xFC,0xFC,0x00,0x00,0xFC,0xFC,0xC0, 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0x04 Capacitor  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x05  ' ' */
{0xC0,0xFC,0xFC,0x0C,0x0C,0x0C,0x0C,0x0C, 0x00,0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C},	/* 0x06 Resistor2  */
{0x0C,0x0C,0x0C,0x0C,0x0C,0xFC,0xFC,0xC0, 0x0C,0x0C,0x0C,0x0C,0x0C,0x0F,0x0F,0x00},	/* 0x07 Resistor1  */
{0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x08 Line1 */
{0xC0,0x00,0x00,0x80,0x00,0x00,0x80,0x00, 0x07,0x0c,0x0c,0x07,0x0c,0x0c,0x07,0x0c},	/* 0x09 Inductor1 */
{0x00,0x80,0x00,0x00,0x80,0x00,0x00,0xC0, 0x0c,0x07,0x0c,0x0c,0x07,0x0c,0x0c,0x07},	/* 0x0a Inductor2 */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0b  ' ' */
{0x00,0xF8,0xFC,0x46,0x62,0xBC,0x18,0x00, 0x38,0x1F,0x0F,0x00,0x04,0x07,0x03,0x00},	/* 0x0c Beta  */
{0xF0,0xF8,0x0C,0x0C,0x0C,0xF8,0xF0,0x00, 0x0C,0x0D,0x0F,0x00,0x0F,0x0D,0x0C,0x00},	/* 0x0d Omega  */
{0x00,0xFC,0xFC,0x00,0x00,0xF8,0xF8,0x00, 0x38,0x1F,0x0F,0x03,0x06,0x03,0x07,0x06},	/* 0x0e mu  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0f  Degree */


 #if defined LANG_FRANCAIS || LANG_DANISH
{0x20,0xB1,0x93,0x97,0xF4,0xE8,0x00,0x00, 0x07,0x0F,0x08,0x08,0x07,0x0F,0x08,0x00},	/* 0x10 Fr_a_grave */
{0x20,0xB3,0x96,0x93,0xF3,0xE6,0x03,0x00, 0x07,0x0F,0x08,0x08,0x07,0x0F,0x08,0x00},	/* 0x11 Fr_a_circ */
{0xC0,0xE0,0xB4,0x97,0xB3,0xE1,0xC0,0x00, 0x03,0x07,0x0C,0x08,0x08,0x0C,0x04,0x00},	/* 0x12 Fr_e_aigu */
{0xC0,0xE8,0xB6,0x93,0xB3,0xE6,0xC8,0x00, 0x03,0x07,0x0C,0x08,0x08,0x0C,0x04,0x00},	/* 0x13 Fr_e_circ */
{0xC0,0xE1,0xB3,0x97,0xB4,0xE0,0xC0,0x00, 0x03,0x07,0x0C,0x08,0x08,0x0C,0x04,0x00},	/* 0x14 Fr_e_grave */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x15  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x16  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x17  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x18  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x19  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1a  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1b  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1c  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1d  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1e  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1f  */

 #elif defined LANG_CZECH || LANG_SLOVAK
{0x20,0xB0,0x94,0x96,0xF2,0xE0,0x00,0x00, 0x07,0x0F,0x08,0x08,0x07,0x0F,0x08,0x00},	/* 0x10 Cz_a  */
{0xC0,0xE2,0x36,0x14,0x36,0x62,0xc0,0x00, 0x03,0x07,0x0C,0x08,0x08,0x0C,0x04,0x00},	/* 0x11 Cz_c  */
{0xC0,0xE0,0x30,0x12,0xFE,0xFE,0x04,0x03, 0x07,0x0F,0x08,0x08,0x07,0x0F,0x08,0x03},	/* 0x12 Cz_d */
{0xC0,0xE0,0xB0,0x94,0xB6,0xE2,0xC0,0x00, 0x03,0x07,0x0C,0x08,0x08,0x0C,0x04,0x00},	/* 0x13 Cz_e  */
{0xC0,0xE2,0xB6,0x94,0xB6,0xE2,0xC0,0x00, 0x03,0x07,0x0C,0x08,0x08,0x0C,0x04,0x00},	/* 0x14 Cz_ee */
{0x00,0x00,0x10,0xF4,0xF6,0x02,0x00,0x00, 0x00,0x00,0x08,0x0F,0x0F,0x08,0x00,0x00},	/* 0x15 Cz_i  */
{0x10,0xF2,0xE6,0x14,0x36,0xE2,0xC0,0x00, 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0x16 Cz_n */
{0xC0,0xE0,0x34,0x16,0x32,0xE0,0xC0,0x00, 0x03,0x07,0x0C,0x08,0x0C,0x07,0x03,0x00},	/* 0x17 Cz_o */
{0x10,0xF2,0xE6,0x34,0x16,0x72,0x60,0x00, 0x08,0x0F,0x0F,0x08,0x00,0x00,0x00,0x00},	/* 0x18 Cz_r  */
{0x20,0x72,0xD6,0x94,0x96,0x32,0x20,0x00, 0x04,0x0C,0x08,0x08,0x09,0x0F,0x06,0x00},	/* 0x19 Cz_s  */
{0x10,0x10,0xFC,0xFE,0x10,0x16,0x03,0x00, 0x00,0x00,0x07,0x0F,0x08,0x0C,0x04,0x00},	/* 0x1a Cz_t */
{0xF0,0xF0,0x04,0x06,0xF2,0xF0,0x00,0x00, 0x07,0x0F,0x08,0x08,0x07,0x0F,0x08,0x00},	/* 0x1b Cz_u  */
{0xF0,0xF2,0x05,0x05,0xF2,0xF0,0x00,0x00, 0x07,0x0F,0x08,0x08,0x07,0x0F,0x08,0x00},	/* 0x1c Cz_uu */
{0xF0,0xF0,0x04,0x06,0x02,0xF0,0xF0,0x00, 0x13,0x37,0x24,0x24,0x24,0x3F,0x1F,0x00},	/* 0x1d Cz_y */
{0x30,0x32,0x16,0x94,0xD6,0x72,0x30,0x00, 0x0C,0x0E,0x0B,0x09,0x08,0x0C,0x0C,0x00},	/* 0x1e Cz_z */
{0x0C,0x85,0xC7,0x66,0x37,0x1D,0x0C,0x00, 0x0E,0x0F,0x09,0x08,0x08,0x08,0x0C,0x00},	/* 0x1f Cz_Z  */
// #elif defined LANG_SERBIAN || LANG_CROATIAN || LANG_SLOWENIAN || LANG_BOSNIAN
// #elif defined LANG_POLISH
// #elif defined LANG_GERMAN || LANG_ALBANIAN
// #elif defined LANG_HUNGARIAN
// #elif defined LANG_ROMANIAN || LANG_DANISH
 #else
{0xF0,0xF0,0x00,0x00,0x00,0xF0,0xF0,0x00, 0x00,0x01,0x01,0x01,0x01,0x0F,0x0F,0x00},	/* 0x10 Cyr_tsch */
{0xF0,0xF0,0x00,0xF0,0x00,0xF0,0xF0,0x00, 0x0F,0x0F,0x08,0x0F,0x08,0x0F,0x0F,0x00},	/* 0x11 Cyr_sch */
{0x70,0xF0,0xF0,0x80,0x80,0x80,0x00,0x00, 0x08,0x0F,0x0F,0x08,0x08,0x0F,0x07,0x00},	/* 0x12 Cyr_hh */
{0xF0,0xF0,0x80,0x80,0x00,0xF0,0xF0,0x00, 0x0F,0x0F,0x08,0x0F,0x07,0x08,0x0F,0x00},	/* 0x13 Cyr_y */
{0x00,0xF0,0xF0,0x80,0x80,0x80,0x00,0x00, 0x00,0x0F,0x0F,0x08,0x08,0x0F,0x07,0x00},	/* 0x14 Cyr_ww */
{0x00,0x20,0x30,0x90,0xB0,0xE0,0xC0,0x00, 0x00,0x04,0x0C,0x08,0x0C,0x07,0x03,0x00},	/* 0x15 Cyr_e */
{0xF0,0xF0,0x80,0xE0,0x30,0xF0,0xE0,0x00, 0x0F,0x0F,0x01,0x07,0x0C,0x0F,0x07,0x00},	/* 0x16 Cyr_ju */
{0xE0,0xF0,0x10,0x10,0x10,0xF0,0xF0,0x00, 0x08,0x0D,0x07,0x03,0x03,0x0F,0x0F,0x00},	/* 0x17 Cyr_ja */
{0x00,0xF8,0xFC,0x06,0x02,0xFE,0xFE,0x00, 0x38,0x1F,0x0F,0x08,0x08,0x0F,0x1F,0x38},	/* 0x18 Cyr_D -GR_OFFSET3   */
{0xFE,0xFE,0x00,0x00,0xFE,0xFE,0x00,0x00, 0x0F,0x0F,0x08,0x08,0x0F,0x3F,0x18,0x00},	/* 0x19 Cyr_C       */
{0xFE,0xFE,0x00,0xF8,0x00,0xFE,0xFE,0x00, 0x0F,0x0F,0x08,0x0F,0x08,0x0F,0x3F,0x18},	/* 0x1a Cyr_Schtsch */
{0x00,0x80,0xE0,0x30,0x10,0xF0,0xF0,0x00, 0x38,0x1F,0x0F,0x08,0x08,0x0F,0x1F,0x38},	/* 0x1b Cyr_d       */
{0xC0,0xE0,0x28,0xF8,0x28,0xE0,0xC0,0x00, 0x07,0x0F,0x28,0x3F,0x28,0x0F,0x07,0x00},	/* 0x1c Cyr_f       */
{0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,0x00, 0x0F,0x0F,0x08,0x08,0x0F,0x3F,0x18,0x00},	/* 0x1d Cyr_c       */
{0xF0,0xF0,0x00,0xF0,0x00,0xF0,0xF0,0x00, 0x0F,0x0F,0x08,0x0F,0x08,0x0F,0x3F,0x18},	/* 0x1e Cyr_schtsch */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1f  */
 #endif

{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x20 ' ' */
{0x00,0x00,0x7C,0xFE,0xFE,0x7C,0x00,0x00, 0x00,0x00,0x00,0x1B,0x1B,0x00,0x00,0x00},	/* 0x21 '!' */
{0x00,0x0E,0x1E,0x00,0x00,0x1E,0x0E,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x22 '"' */
{0x20,0xF8,0xF8,0x20,0xF8,0xF8,0x20,0x00, 0x02,0x0F,0x0F,0x02,0x0F,0x0F,0x02,0x00},	/* 0x23 '#' */
{0x38,0x7C,0x44,0x47,0x47,0xCC,0x98,0x00, 0x06,0x0C,0x08,0x38,0x38,0x0F,0x07,0x00},	/* 0x24 '$' */
{0x08,0x14,0x94,0xC8,0x60,0x30,0x18,0x00, 0x06,0x03,0x01,0x04,0x0A,0x0A,0x04,0x00},	/* 0x25 '%' */
{0x80,0xD8,0x7C,0xE4,0xBC,0xD8,0x40,0x00, 0x07,0x0F,0x08,0x08,0x07,0x0F,0x08,0x00},	/* 0x26 '&' */
{0x00,0x08,0x0F,0x07,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x27 ''' */
{0x00,0x00,0xF0,0xF8,0x0C,0x04,0x00,0x00, 0x00,0x00,0x07,0x0F,0x18,0x10,0x00,0x00},	/* 0x28 '(' */
{0x00,0x00,0x04,0x0C,0xF8,0xF0,0x00,0x00, 0x00,0x00,0x10,0x18,0x0F,0x07,0x00,0x00},	/* 0x29 ')' */
{0x40,0x50,0xF0,0xE0,0xF0,0x50,0x40,0x00, 0x00,0x01,0x01,0x00,0x01,0x01,0x00,0x00},	/* 0x2a '*' */
{0x00,0x40,0x40,0xF0,0xF0,0x40,0x40,0x00, 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00},	/* 0x2b '+' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x2C,0x3C,0x1C,0x00,0x00,0x00},	/* 0x2c ',' */
{0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x2d '-' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00},	/* 0x2e '.' */
{0x00,0x00,0x80,0xC0,0x60,0x30,0x18,0x00, 0x06,0x03,0x01,0x00,0x00,0x00,0x00,0x00},	/* 0x2f '/' */
{0xF8,0xFC,0x06,0x02,0x06,0xFC,0xF8,0x00, 0x03,0x07,0x0C,0x08,0x0C,0x07,0x03,0x00},	/* 0x30 '0' */
{0x00,0x00,0x0C,0xFE,0xFE,0x00,0x00,0x00, 0x00,0x00,0x08,0x0F,0x0F,0x08,0x00,0x00},	/* 0x31 '1' */
{0x0C,0x0E,0x82,0xC2,0x62,0x3E,0x1C,0x00, 0x0E,0x0F,0x09,0x08,0x08,0x0C,0x0C,0x00},	/* 0x32 '2' */
{0x04,0x06,0x42,0x42,0x42,0xFE,0xBC,0x00, 0x04,0x0C,0x08,0x08,0x08,0x0F,0x07,0x00},	/* 0x33 '3' */
{0xC0,0xE0,0xB0,0x98,0xFC,0xFE,0x80,0x00, 0x00,0x00,0x00,0x08,0x0F,0x0F,0x08,0x00},	/* 0x34 '4' */
{0x3E,0x3E,0x22,0x22,0x22,0xE2,0xC2,0x00, 0x06,0x0C,0x08,0x08,0x08,0x0F,0x07,0x00},	/* 0x35 '5' */
{0xF8,0xFC,0x26,0x22,0x66,0xC4,0x80,0x00, 0x03,0x07,0x0C,0x08,0x0C,0x07,0x03,0x00},	/* 0x36 '6' */
{0x06,0x06,0x82,0xC2,0x62,0x3E,0x1E,0x00, 0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00},	/* 0x37 '7' */
{0xBC,0xFE,0x42,0x42,0x42,0xFE,0xBC,0x00, 0x07,0x0F,0x08,0x08,0x08,0x0F,0x07,0x00},	/* 0x38 '8' */
{0x38,0x7C,0xC6,0x82,0x86,0xFC,0xF8,0x00, 0x00,0x04,0x0C,0x08,0x0C,0x07,0x03,0x00},	/* 0x39 '9' */
{0x00,0x00,0x30,0x30,0x30,0x00,0x00,0x00, 0x00,0x00,0x06,0x06,0x06,0x00,0x00,0x00},	/* 0x3a ':' */
{0x00,0x00,0x30,0x30,0x30,0x00,0x00,0x00, 0x00,0x20,0x36,0x1E,0x0E,0x00,0x00,0x00},	/* 0x3b ';' */
{0x00,0x40,0xE0,0xB0,0x18,0x0C,0x06,0x00, 0x00,0x00,0x00,0x01,0x03,0x06,0x0C,0x00},	/* 0x3c '<' */
{0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x00, 0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00},	/* 0x3d '=' */
{0x00,0x06,0x0C,0x18,0xB0,0xE0,0x40,0x00, 0x00,0x0C,0x06,0x03,0x01,0x00,0x00,0x00},	/* 0x3e '>' */
{0x18,0x1C,0x86,0xC2,0x66,0x3C,0x18,0x00, 0x00,0x00,0x19,0x19,0x00,0x00,0x00,0x00},	/* 0x3f '?' */
{0xF8,0xFC,0x04,0xE4,0xE4,0xFC,0xF8,0x00, 0x07,0x0F,0x08,0x0B,0x0B,0x0B,0x01,0x00},	/* 0x40 '@' */
{0xF0,0xF8,0x8C,0x86,0x8C,0xF8,0xF0,0x00, 0x0F,0x0F,0x00,0x00,0x00,0x0F,0x0F,0x00},	/* 0x41 'A' */
{0x02,0xFE,0xFE,0x42,0x42,0xFE,0xBC,0x00, 0x08,0x0F,0x0F,0x08,0x08,0x0F,0x07,0x00},	/* 0x42 'B' */
{0xF8,0xFC,0x06,0x02,0x02,0x06,0x0C,0x00, 0x03,0x07,0x0C,0x08,0x08,0x0C,0x06,0x00},	/* 0x43 'C' */
{0x02,0xFE,0xFE,0x02,0x06,0xFC,0xF8,0x00, 0x08,0x0F,0x0F,0x08,0x0C,0x07,0x03,0x00},	/* 0x44 'D' */
{0x02,0xFE,0xFE,0x42,0xE2,0x06,0x0E,0x00, 0x08,0x0F,0x0F,0x08,0x08,0x0C,0x0E,0x00},	/* 0x45 'E' */
{0x02,0xFE,0xFE,0x42,0xE2,0x06,0x0E,0x00, 0x08,0x0F,0x0F,0x08,0x00,0x00,0x00,0x00},	/* 0x46 'F' */
{0xF8,0xFC,0x06,0x82,0x82,0x86,0x8C,0x00, 0x03,0x07,0x0C,0x08,0x08,0x07,0x0F,0x00},	/* 0x47 'G' */
{0xFE,0xFE,0x40,0x40,0x40,0xFE,0xFE,0x00, 0x0F,0x0F,0x00,0x00,0x00,0x0F,0x0F,0x00},	/* 0x48 'H' */
{0x00,0x00,0x02,0xFE,0xFE,0x02,0x00,0x00, 0x00,0x00,0x08,0x0F,0x0F,0x08,0x00,0x00},	/* 0x49 'I' */
{0x00,0x00,0x00,0x02,0xFE,0xFE,0x02,0x00, 0x07,0x0F,0x08,0x08,0x0F,0x07,0x00,0x00},	/* 0x4a 'J' */
{0x02,0xFE,0xFE,0x60,0xF0,0x9E,0x0E,0x00, 0x08,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0x4b 'K' */
{0x02,0xFE,0xFE,0x02,0x00,0x00,0x00,0x00, 0x08,0x0F,0x0F,0x08,0x08,0x0C,0x0E,0x00},	/* 0x4c 'L' */
{0xFE,0xFE,0x38,0xE0,0x38,0xFE,0xFE,0x00, 0x0F,0x0F,0x00,0x00,0x00,0x0F,0x0F,0x00},	/* 0x4d 'M' */
{0xFE,0xFE,0x38,0xE0,0x80,0xFE,0xFE,0x00, 0x0F,0x0F,0x00,0x00,0x03,0x0F,0x0F,0x00},	/* 0x4e 'N' */
{0xF8,0xFC,0x06,0x02,0x06,0xFC,0xF8,0x00, 0x03,0x07,0x0C,0x08,0x0C,0x07,0x03,0x00},	/* 0x4f 'O' */
{0x02,0xFE,0xFE,0x42,0x42,0x7E,0x3C,0x00, 0x08,0x0F,0x0F,0x08,0x00,0x00,0x00,0x00},	/* 0x50 'P' */
{0xFC,0xFE,0x02,0x02,0x02,0xFE,0xFC,0x00, 0x07,0x0F,0x08,0x0E,0x3C,0x3F,0x27,0x00},	/* 0x51 'Q' */
{0x02,0xFE,0xFE,0x42,0xC6,0xFC,0x38,0x00, 0x08,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0x52 'R' */
{0x1C,0x3E,0x62,0x42,0xC2,0x8E,0x0C,0x00, 0x06,0x0E,0x08,0x08,0x08,0x0F,0x07,0x00},	/* 0x53 'S' */
{0x0E,0x06,0x02,0xFE,0xFE,0x02,0x06,0x0E, 0x00,0x00,0x08,0x0F,0x0F,0x08,0x00,0x00},	/* 0x54 'T' */
{0xFE,0xFE,0x00,0x00,0x00,0xFE,0xFE,0x00, 0x07,0x0F,0x08,0x08,0x08,0x0F,0x07,0x00},	/* 0x55 'U' */
{0xFE,0xFE,0x00,0x00,0x00,0xFE,0xFE,0x00, 0x01,0x03,0x06,0x0C,0x06,0x03,0x01,0x00},	/* 0x56 'V' */
{0xFE,0xFE,0x00,0xF8,0x00,0xFE,0xFE,0x00, 0x03,0x0F,0x0E,0x03,0x0E,0x0F,0x03,0x00},	/* 0x57 'W' */
{0x06,0x9E,0xF8,0xF0,0xF8,0x9E,0x06,0x00, 0x0E,0x0F,0x01,0x00,0x01,0x0F,0x0E,0x00},	/* 0x58 'X' */
{0x00,0x3E,0x7E,0xC0,0xC0,0x7E,0x3E,0x00, 0x00,0x00,0x08,0x0F,0x0F,0x08,0x00,0x00},	/* 0x59 'Y' */
{0x06,0x82,0xC2,0x62,0x32,0x1E,0x0E,0x00, 0x0E,0x0F,0x09,0x08,0x08,0x08,0x0C,0x00},	/* 0x5a 'Z' */
{0x00,0x00,0xFE,0xFE,0x02,0x02,0x00,0x00, 0x00,0x00,0x0F,0x0F,0x08,0x08,0x00,0x00},	/* 0x5b '[' */
{0x1C,0x38,0x70,0xE0,0xC0,0x80,0x00,0x00, 0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x00},	/* 0x5c '\' */
{0x00,0x00,0x02,0x02,0xFE,0xFE,0x00,0x00, 0x00,0x00,0x08,0x08,0x0F,0x0F,0x00,0x00},	/* 0x5d ']' */
{0x08,0x0C,0x06,0x03,0x06,0x0C,0x08,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x5e '^' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x00},	/* 0x5f '_' */
{0x00,0x00,0x03,0x07,0x04,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x60 '`' */
{0x20,0xB0,0x90,0x90,0xF0,0xE0,0x00,0x00, 0x07,0x0F,0x08,0x08,0x07,0x0F,0x08,0x00},	/* 0x61 'a' */
{0x02,0xFE,0xFE,0x10,0x30,0xE0,0xC0,0x00, 0x00,0x0F,0x0F,0x08,0x0C,0x07,0x03,0x00},	/* 0x62 'b' */
{0xC0,0xE0,0x30,0x10,0x10,0x30,0x20,0x00, 0x03,0x07,0x0C,0x08,0x08,0x0C,0x04,0x00},	/* 0x63 'c' */
{0xC0,0xE0,0x30,0x12,0xFE,0xFE,0x00,0x00, 0x07,0x0F,0x08,0x08,0x07,0x0F,0x08,0x00},	/* 0x64 'd' */
{0xC0,0xE0,0xB0,0x90,0xB0,0xE0,0xC0,0x00, 0x03,0x07,0x0C,0x08,0x08,0x0C,0x04,0x00},	/* 0x65 'e' */
{0x00,0x20,0xFC,0xFE,0x22,0x0E,0x0C,0x00, 0x00,0x08,0x0F,0x0F,0x08,0x00,0x00,0x00},	/* 0x66 'f' */
{0xE0,0xF0,0x10,0x10,0xE0,0xF0,0x10,0x00, 0x13,0x37,0x24,0x24,0x3F,0x1F,0x00,0x00},	/* 0x67 'g' */
{0x02,0xFE,0xFE,0x20,0x10,0xF0,0xE0,0x00, 0x08,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0x68 'h' */
{0x00,0x00,0x10,0xF6,0xF6,0x00,0x00,0x00, 0x00,0x00,0x08,0x0F,0x0F,0x08,0x00,0x00},	/* 0x69 'i' */
{0x00,0x00,0x00,0x10,0xF6,0xF6,0x00,0x00, 0x18,0x38,0x20,0x20,0x3F,0x1F,0x00,0x00},	/* 0x6a 'j' */
{0x02,0xFE,0xFE,0xC0,0xE0,0x30,0x10,0x00, 0x08,0x0F,0x0F,0x00,0x01,0x0F,0x0E,0x00},	/* 0x6b 'k' */
{0x00,0x00,0x02,0xFE,0xFE,0x00,0x00,0x00, 0x00,0x00,0x08,0x0F,0x0F,0x08,0x00,0x00},	/* 0x6c 'l' */
{0xF0,0xE0,0x30,0xE0,0x30,0xF0,0xE0,0x00, 0x0F,0x0F,0x00,0x07,0x00,0x0F,0x0F,0x00},	/* 0x6d 'm' */
{0x10,0xF0,0xE0,0x10,0x30,0xE0,0xC0,0x00, 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0x6e 'n' */
{0xC0,0xE0,0x30,0x10,0x30,0xE0,0xC0,0x00, 0x03,0x07,0x0C,0x08,0x0C,0x07,0x03,0x00},	/* 0x6f 'o' */
{0x10,0xF0,0xE0,0x10,0x10,0xF0,0xE0,0x00, 0x20,0x3F,0x3F,0x28,0x08,0x0F,0x07,0x00},	/* 0x70 'p' */
{0xE0,0xF0,0x10,0x10,0xE0,0xF0,0x10,0x00, 0x07,0x0F,0x08,0x28,0x3F,0x3F,0x20,0x00},	/* 0x71 'q' */
{0x10,0xF0,0xE0,0x30,0x10,0x70,0x60,0x00, 0x08,0x0F,0x0F,0x08,0x00,0x00,0x00,0x00},	/* 0x72 'r' */
{0x20,0x70,0xD0,0x90,0x90,0x30,0x20,0x00, 0x04,0x0C,0x08,0x08,0x09,0x0F,0x06,0x00},	/* 0x73 's' */
{0x10,0x10,0xFC,0xFE,0x10,0x10,0x00,0x00, 0x00,0x00,0x07,0x0F,0x08,0x0C,0x04,0x00},	/* 0x74 't' */
{0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,0x00, 0x07,0x0F,0x08,0x08,0x07,0x0F,0x08,0x00},	/* 0x75 'u' */
{0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00, 0x00,0x03,0x07,0x0C,0x0C,0x07,0x03,0x00},	/* 0x76 'v' */
{0xF0,0xF0,0x00,0xC0,0x00,0xF0,0xF0,0x00, 0x07,0x0F,0x0C,0x07,0x0C,0x0F,0x07,0x00},	/* 0x77 'w' */
{0x30,0x70,0xC0,0x80,0xC0,0x70,0x30,0x00, 0x0C,0x0F,0x03,0x01,0x03,0x0F,0x0C,0x00},	/* 0x78 'x' */
{0xF0,0xF0,0x00,0x00,0x00,0xF0,0xF0,0x00, 0x13,0x37,0x24,0x24,0x24,0x3F,0x1F,0x00},	/* 0x79 'y' */
{0x30,0x30,0x10,0x90,0xD0,0x70,0x30,0x00, 0x0C,0x0E,0x0B,0x09,0x08,0x0C,0x0C,0x00},	/* 0x7a 'z' */
{0x00,0x40,0xE0,0xBE,0x1F,0x01,0x00,0x00, 0x00,0x00,0x00,0x0F,0x1F,0x10,0x00,0x00},	/* 0x7b '{' */
{0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00, 0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00},	/* 0x7c '|' */
{0x00,0x00,0x01,0x1F,0xBE,0xE0,0x40,0x00, 0x00,0x00,0x10,0x1F,0x0F,0x00,0x00,0x00},	/* 0x7d '}' */
{0x08,0x0C,0x04,0x0C,0x08,0x0C,0x04,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x7e '~' */
{0x80,0xC0,0x60,0x30,0x60,0xC0,0x80,0x00, 0x07,0x07,0x04,0x04,0x04,0x07,0x07,0x00},	/* 0x7f  */

 #if defined LANG_FRANCAIS
  #ifdef WITH_CAPITAL_SPECIALS
/* ---F---  ISO8859-15  ------ */
  #endif
 #elif defined LANG_CZECH || defined LANG_SLOVAK
   #ifdef WITH_CAPITAL_SPECIALS
   #endif
 #elif defined LANG_POLISH
 #elif defined LCD_CYRILLIC          
{0x02,0xFE,0xFE,0x42,0x42,0xC6,0x8E,0x00, 0x08,0x0F,0x0F,0x08,0x08,0x0F,0x07,0x00},	/* 0x80 Cyr_B */
{0x02,0xFE,0xFE,0x02,0x02,0x06,0x0E,0x00, 0x08,0x0F,0x0F,0x08,0x00,0x00,0x00,0x00},	/* 0x81 Cyr_G */
{0x08,0xFB,0xFB,0x48,0xE8,0x0B,0x3B,0x00, 0x08,0x0F,0x0F,0x08,0x08,0x0C,0x0E,0x00},	/* 0x82 Cyr_Jo */
{0x9E,0xFE,0x60,0xFE,0x60,0xFE,0x9E,0x00, 0x0F,0x0F,0x00,0x0F,0x00,0x0F,0x0F,0x00},	/* 0x83 Cyr_Zsch */
{0x04,0x06,0x42,0x42,0x42,0xFE,0x9C,0x00, 0x04,0x0C,0x08,0x08,0x08,0x0F,0x07,0x00},	/* 0x84 Cyr_Z */
{0xFE,0xFE,0x80,0xE0,0x38,0xFE,0xFE,0x00, 0x0F,0x0F,0x03,0x00,0x00,0x0F,0x0F,0x00},	/* 0x85 Cyr_I */
{0xFE,0xFE,0x81,0xE3,0x39,0xFE,0xFE,0x00, 0x0F,0x0F,0x03,0x00,0x00,0x0F,0x0F,0x00},	/* 0x86 Cyr_J */
{0xF0,0xF8,0x0C,0x06,0x02,0xFE,0xFE,0x00, 0x0F,0x0F,0x00,0x00,0x00,0x0F,0x0F,0x00},	/* 0x87 Cyr_L */
{0xFE,0xFE,0x02,0x02,0x02,0xFE,0xFE,0x00, 0x0F,0x0F,0x00,0x00,0x00,0x0F,0x0F,0x00},	/* 0x88 Cyr_P */
{0x7E,0xFE,0x80,0x80,0x80,0xFE,0xFE,0x00, 0x04,0x0C,0x08,0x08,0x08,0x0F,0x07,0x00},	/* 0x89 Cyr_U */
{0xF0,0xF8,0x0A,0xFE,0x0A,0xF8,0xF0,0x00, 0x01,0x03,0x0A,0x0F,0x0A,0x03,0x01,0x00},	/* 0x8a Cyr_F */
{0x7E,0xFE,0x80,0x80,0x80,0xFE,0xFE,0x00, 0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00},	/* 0x8b Cyr_Tsch */
{0xFE,0xFE,0x00,0xFE,0x00,0xFE,0xFE,0x00, 0x0F,0x0F,0x08,0x0F,0x08,0x0F,0x0F,0x00},	/* 0x8c Cyr_Sch */
{0x3E,0x02,0xFE,0xFE,0x22,0xE0,0xC0,0x00, 0x00,0x08,0x0F,0x0F,0x08,0x0F,0x07,0x00},	/* 0x8d Cyr_HH */
{0xFE,0xFE,0x20,0xE0,0xC0,0x3E,0xFE,0x00, 0x0F,0x0F,0x08,0x0F,0x07,0x08,0x0F,0x00},	/* 0x8e Cyr_Y */
{0x04,0x06,0xE2,0x42,0x46,0xFC,0xF8,0x00, 0x04,0x0C,0x08,0x08,0x0C,0x0F,0x07,0x00},	/* 0x8f Cyr_E */
{0xFE,0xFE,0xE0,0xFC,0x06,0xFE,0xFC,0x00, 0x0F,0x0F,0x00,0x07,0x0C,0x0F,0x07,0x00},	/* 0x90 Cyr_Ju */
{0x00,0xFC,0xFE,0x02,0x02,0xFE,0xFE,0x00, 0x08,0x0C,0x07,0x03,0x01,0x0F,0x0F,0x00},	/* 0x91 Cyr_Ja */
{0x00,0xF8,0xFC,0x24,0x24,0xE6,0xC2,0x00, 0x00,0x07,0x0F,0x08,0x08,0x0F,0x07,0x00},	/* 0x92 Cyr_b */
{0x10,0xF0,0xF0,0x90,0x90,0xF0,0x60,0x00, 0x08,0x0F,0x0F,0x08,0x08,0x0F,0x07,0x00},	/* 0x93 Cyr_v */
{0x00,0x10,0xF0,0xF0,0x10,0x10,0x70,0x00, 0x00,0x08,0x0F,0x0F,0x08,0x00,0x00,0x00},	/* 0x94 Cyr_g */
{0xE0,0xF6,0x96,0x90,0x96,0xF6,0xE0,0x00, 0x07,0x0F,0x08,0x08,0x08,0x0C,0x04,0x00},	/* 0x95 Cyr_jo */
{0x70,0xF0,0x80,0xF0,0x80,0xF0,0x70,0x00, 0x0E,0x0F,0x01,0x0F,0x01,0x0F,0x0E,0x00},	/* 0x96 Cyr_zsch */
{0x20,0x30,0x10,0x90,0xD0,0x70,0x20,0x00, 0x04,0x0C,0x08,0x08,0x09,0x0F,0x06,0x00},	/* 0x97 Cyr_z */
{0xF0,0xF0,0x00,0x80,0xC0,0xF0,0xF0,0x00, 0x0F,0x0F,0x03,0x01,0x00,0x0F,0x0F,0x00},	/* 0x98 Cyr_i */
{0xF0,0xF2,0x02,0x86,0xC2,0xF2,0xF0,0x00, 0x0F,0x0F,0x03,0x01,0x00,0x0F,0x0F,0x00},	/* 0x99 Cyr_j */
{0x10,0xF0,0xF0,0xC0,0x60,0x30,0x10,0x00, 0x08,0x0F,0x0F,0x01,0x03,0x0E,0x0C,0x00},	/* 0x9a Cyr_k */
{0x00,0xC0,0xE0,0x30,0x10,0xF0,0xF0,0x00, 0x08,0x0F,0x07,0x00,0x00,0x0F,0x0F,0x00},	/* 0x9b Cyr_l */
{0xF0,0xF0,0xE0,0xC0,0xE0,0xF0,0xF0,0x00, 0x0F,0x0F,0x00,0x03,0x00,0x0F,0x0F,0x00},	/* 0x9c Cyr_m */
{0xF0,0xF0,0x80,0x80,0x80,0xF0,0xF0,0x00, 0x0F,0x0F,0x00,0x00,0x00,0x0F,0x0F,0x00},	/* 0x9d Cyr_n */
{0xF0,0xF0,0x10,0x10,0x10,0xF0,0xF0,0x00, 0x0F,0x0F,0x00,0x00,0x00,0x0F,0x0F,0x00},	/* 0x9e Cyr_p */
{0x00,0x70,0x10,0xF0,0xF0,0x10,0x70,0x00, 0x00,0x00,0x08,0x0F,0x0F,0x08,0x00,0x00},	/* 0x9f Cyr_t */
 #endif
};
#else
 #ifndef __ASSEMBLER__
extern const unsigned char PROGMEM font[CHAR_COUNT][(FONT_WIDTH * ((FONT_HEIGHT + 7)/8))];
 #endif
#endif
