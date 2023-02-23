#include QMK_KEYBOARD_H

uint8_t shift2_counter = 0;
uint8_t steno_counter = 0;
bool is_atab_active = false;
bool is_ctab_active = false;
bool is_lnum = false;
bool is_rnum = false;
uint8_t my_dance_counter = 0;
uint16_t my_dance_key = KC_NO;
uint16_t ctl_hold = KC_NO;
uint16_t steno_chord = 0;
bool is_steno_shift = false;

enum layers {
	_DEF = 0
	, _PNC
	, _NUM
	, _NAV
};

enum custom_keycodes {
	// steno
	ST_0 = SAFE_RANGE
	, ST_1
	, ST_2
	, ST_3
	, ST_4
	, ST_5
	, ST_6
	, ST_7
	, ST_8
	, ST_9
	, ST_A
	, ST_B
	, ST_C
	, ST_D
	, ST_E
	, ST_F
	// thumb
	, M_LNUM
	, M_RNUM
	, M_LSPC
	, M_RSPC
	// NUM
	, M_1
	, M_2
	, M_3
	, M_4
	, M_5
	, M_6
	, M_MINS
	, M_EQL
	, M_AT
	, M_HASH
	, M_PERC
	, M_PIPE
	, M_SLASH
	, M_AMP
	, M_TILDE
	, M_CARET
	// NUM thumb
	, M_LPRNTH
	, M_RPRNTH
	, M_LT
	, M_GT
	, M_LBRKT
	, M_RBRKT
	, M_LBRC
	, M_RBRC
	// NAV
	, M_ATAB
	, M_CTAB
	// PNCATEHO
	, PNC_EXCL
	, PNC_DOT
	, PNC_COMMA
	, PNC_QUOT
	, PNC_UNDSCR
	, PNC_LBRKTL
	, PNC_RBRKTL
	, PNC_LBRKTR
	, PNC_RBRKTR
	, PNC_LPRNTHL
	, PNC_RPRNTHL
	, PNC_LPRNTHR
	, PNC_RPRNTHR
	
};

#define FIRST_STENO ST_0
#define LAST_STENO ST_F

enum combo_events {
	// NUM
	CB_12
	, CB_23
	, CB_45
	, CB_56
	, CB_13
	, CB_46
	, CB_MINS_EQL
	, CB_TILDE_CARET
	// NUM thumb
	//, CB_DOT_COMMA
	//, CB_QUOT_EXCL
	// NAV
	, CB_LEFT_RGHT
	, CB_UP_DOWN
	, CB_HOME_END
	// PNCATEHO
	, PNC_DOT_COMMA
	, PNC_QUOT_COMMA
	// LAYOUT
	, CB_QZ
	, CB_W_LPR
	, PNC_N_UND
	, PNC_A_LPR
	// MISC
	, CB_LSPC_SFT
	, CB_RSPC_SFT
	, CB_LSPC_NUM
	, CB_RSPC_NUM
	, CB_BS_ESC
	, CB_LSPC_ESC
	, CB_RSPC_ESC
	//
	, COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

// NUM
const uint16_t PROGMEM combo_12[] = {M_1, M_2, COMBO_END};
const uint16_t PROGMEM combo_23[] = {M_2, M_3, COMBO_END};
const uint16_t PROGMEM combo_45[] = {M_4, M_5, COMBO_END};
const uint16_t PROGMEM combo_56[] = {M_5, M_6, COMBO_END};
const uint16_t PROGMEM combo_13[] = {M_1, M_3, COMBO_END};
const uint16_t PROGMEM combo_46[] = {M_4, M_6, COMBO_END};

const uint16_t PROGMEM combo_MINS_EQL[] = {M_MINS, M_EQL, COMBO_END};
const uint16_t PROGMEM combo_TILDE_CARET[] = {M_TILDE, M_CARET, COMBO_END};// NUM thumb
//const uint16_t PROGMEM combo_DOT_COMMA[] = {M_DOT, M_COMMA, COMBO_END};
//const uint16_t PROGMEM combo_QUOT_EXCL[] = {M_QUOT, M_EXCL, COMBO_END};
// NAV
const uint16_t PROGMEM combo_LEFT_RGHT[] = {KC_LEFT, KC_RGHT, COMBO_END}; // comment
const uint16_t PROGMEM combo_UP_DOWN[] = {KC_UP, KC_DOWN, COMBO_END}; // menu
const uint16_t PROGMEM combo_HOME_END[] = {KC_HOME, KC_END, COMBO_END}; // lang
// PNCATEHO
const uint16_t PROGMEM pnc_DOT_COMMA[] = {PNC_DOT, PNC_COMMA, COMBO_END}; // ;
const uint16_t PROGMEM pnc_QUOT_COMMA[] = {PNC_QUOT, PNC_COMMA, COMBO_END}; // '

// LAYOUT
const uint16_t PROGMEM combo_QZ[] = {KC_Q, KC_Z, COMBO_END};
const uint16_t PROGMEM combo_W_LPR[] = {KC_W, KC_GRV, COMBO_END};
const uint16_t PROGMEM pnc_N_UND[] = {ST_1, PNC_UNDSCR, COMBO_END};
const uint16_t PROGMEM pnc_A_LPR[] = {ST_3, PNC_LBRKTL, COMBO_END};
// MISC
const uint16_t PROGMEM combo_LSPC_SFT[] = {M_LSPC, KC_LSFT, COMBO_END}; // enter
const uint16_t PROGMEM combo_RSPC_SFT[] = {M_RSPC, KC_LSFT, COMBO_END}; // enter
const uint16_t PROGMEM combo_LSPC_NUM[] = {M_LSPC, M_LNUM, COMBO_END}; // ctl
const uint16_t PROGMEM combo_RSPC_NUM[] = {M_RSPC, M_RNUM, COMBO_END}; // ctl
const uint16_t PROGMEM combo_BS_ESC[] = {KC_BSPC, KC_ESC, COMBO_END}; // ctl bkspc
const uint16_t PROGMEM combo_LSPC_ESC[] = {M_LSPC, KC_ESC, COMBO_END}; // ctl spc
const uint16_t PROGMEM combo_RSPC_ESC[] = {M_RSPC, KC_ESC, COMBO_END}; // ctl spc



combo_t key_combos[] = {
	// NUM
	[CB_12] = COMBO_ACTION(combo_12)
	, [CB_23] = COMBO_ACTION(combo_23)
	, [CB_45] = COMBO_ACTION(combo_45)
	, [CB_56] = COMBO_ACTION(combo_56)
	, [CB_13] = COMBO_ACTION(combo_13)
	, [CB_46] = COMBO_ACTION(combo_46)
	, [CB_MINS_EQL] = COMBO_ACTION(combo_MINS_EQL)
	, [CB_TILDE_CARET] = COMBO_ACTION(combo_TILDE_CARET)
	// NUM thumb
	//, [CB_DOT_COMMA] = COMBO_ACTION(combo_DOT_COMMA)
	//, [CB_QUOT_EXCL] = COMBO_ACTION(combo_QUOT_EXCL)
	// NAV
	, [CB_LEFT_RGHT] = COMBO_ACTION(combo_LEFT_RGHT) 
	, [CB_UP_DOWN] = COMBO_ACTION(combo_UP_DOWN) 
	, [CB_HOME_END] = COMBO_ACTION(combo_HOME_END) 
	// PNCATEHO
	, [PNC_DOT_COMMA] = COMBO_ACTION(pnc_DOT_COMMA) //;
	, [PNC_QUOT_COMMA] = COMBO_ACTION(pnc_QUOT_COMMA) //'
	// LAYOUT
	, [CB_QZ] = COMBO_ACTION(combo_QZ)
	, [CB_W_LPR] = COMBO_ACTION(combo_W_LPR)
	, [PNC_N_UND] = COMBO_ACTION(pnc_N_UND)
	, [PNC_A_LPR] = COMBO_ACTION(pnc_A_LPR)
	// MISC
	, [CB_LSPC_SFT] = COMBO_ACTION(combo_LSPC_SFT) 
	, [CB_RSPC_SFT] = COMBO_ACTION(combo_RSPC_SFT) 
	, [CB_LSPC_NUM] = COMBO_ACTION(combo_LSPC_NUM) // 
	, [CB_RSPC_NUM] = COMBO_ACTION(combo_RSPC_NUM) // 
	, [CB_BS_ESC] = COMBO_ACTION(combo_BS_ESC) 
	, [CB_LSPC_ESC] = COMBO_ACTION(combo_LSPC_ESC) 
	, [CB_RSPC_ESC] = COMBO_ACTION(combo_RSPC_ESC) 
	
};

const uint8_t PROGMEM steno_dictionary[] = {
	0x01, 0x00// р
	, KC_H, KC_NO // р
	, 0x02, 0x00// и
	, KC_B, KC_NO // и
	, 0x04, 0x00// с
	, KC_C, KC_NO // с
	, 0x08, 0x00// а
	, KC_F, KC_NO // а
	, 0x10, 0x00// т
	, KC_N, KC_NO // т
	, 0x20, 0x00// е
	, KC_T, KC_NO // е
	, 0x40, 0x00// н
	, KC_Y, KC_NO // н
	, 0x80, 0x00// о
	, KC_J, KC_NO // о
	, 0x00, 0x01// б
	, KC_COMM, KC_NO // б
	, 0x00, 0x02// ч
	, KC_X, KC_NO // ч
	, 0x00, 0x04// й
	, KC_Q, KC_NO // й
	, 0x00, 0x08// ж
	, KC_SCLN, KC_NO // ж
	, 0x00, 0x10// ы
	, KC_S, KC_NO // ы
	, 0x00, 0x20// г
	, KC_U, KC_NO // г
	, 0x00, 0x40// к
	, KC_R, KC_NO // к
	, 0x00, 0x80// д
	, KC_L, KC_NO // д
	, 0x41, 0x00// рн
	, KC_K, KC_NO // л
	, 0x82, 0x00// ио
	, KC_D, KC_NO // в
	, 0x44, 0x00// сн
	, KC_M, KC_NO // ь
	, 0x88, 0x00// ао
	, KC_P, KC_NO // з
	, 0x50, 0x00// тн
	, KC_V, KC_NO // м
	, 0xa0, 0x00// ео
	, KC_G, KC_NO // п
	, 0x11, 0x00// рт
	, KC_S, KC_NO // ы
	, 0x22, 0x00// ие
	, KC_U, KC_NO // г
	, 0x14, 0x00// ст
	, KC_E, KC_NO // у
	, 0x28, 0x00// ае
	, KC_Z, KC_NO // я
	, 0x05, 0x00// рс
	, KC_R, KC_NO // к
	, 0x0a, 0x00// иа
	, KC_L, KC_NO // д
	, 0x81, 0x00// ро
	, KC_X, KC_NO // ч
	, 0x42, 0x00// ин
	, KC_COMM, KC_NO // б
	, 0x84, 0x00// со
	, KC_LBRC, KC_NO // х
	, 0x48, 0x00// ан
	, KC_I, KC_NO // ш
	, 0x90, 0x00// то
	, KC_W, KC_NO // ц
	, 0x60, 0x00// ен
	, KC_A, KC_NO // ф
	, 0x21, 0x00// ре
	, KC_SCLN, KC_NO // ж
	, 0x12, 0x00// ит
	, KC_Q, KC_NO // й
	, 0x24, 0x00// се
	, KC_QUOT, KC_NO // э
	, 0x18, 0x00// ат
	, KC_O, KC_NO // щ
	, 0x09, 0x00// ра
	, KC_RBRC, KC_NO // ъ
	, 0x06, 0x00// ис
	, KC_DOT, KC_NO // ю
	, 0x00, 0x41// бк
	, KC_DOT, KC_NO // ю
	, 0x00, 0x82// чд
	, KC_W, KC_NO // ц
	, 0x00, 0x11// бы
	, KC_I, KC_NO // ш
	, 0x00, 0x22// чг
	, KC_LBRC, KC_NO // х
	, 0x00, 0x14// йы
	, KC_O, KC_NO // щ
	, 0x00, 0x28// жг
	, KC_QUOT, KC_NO // э
	, 0x03, 0x00// ри
	, KC_H, KC_B, KC_NO // ри
	, 0x0c, 0x00// са
	, KC_C, KC_F, KC_NO // са
	, 0x30, 0x00// те
	, KC_N, KC_T, KC_NO // те
	, 0xc0, 0x00// но
	, KC_Y, KC_J, KC_NO // но
	, 0x05, 0x58// !ст-рка
	, KC_C, KC_N, KC_H, KC_J, KC_R, KC_F, KC_NO // строка
	, 0x05, 0x98// !ст-рки
	, KC_C, KC_N, KC_H, KC_J, KC_R, KC_B, KC_NO // строки
	, 0x40, 0x30// !к-нк
	, KC_R, KC_J, KC_Y, KC_T, KC_W, KC_NO // конец
	, 0x81, 0x80// !сл-и
	, KC_T, KC_C, KC_K, KC_B, KC_NO // если
	, 0x44, 0x04// !тк-т
	, KC_N, KC_J, KC_U, KC_L, KC_F, KC_NO // тогда
	, 0x10, 0x10// !м-к
	, KC_B, KC_Y, KC_F, KC_X, KC_T, KC_NO // иначе
	, 0x29, 0x01// !спр-с
	, KC_P, KC_F, KC_G, KC_H, KC_J, KC_C, KC_NO // запрос
	, 0x10, 0x02// !м-в
	, KC_Y, KC_J, KC_D, KC_S, KC_Q, KC_NO // новый
			
	, 0x00, 0x00 // end
};
 
#define MY_LAYOUT( \
    L00, L01, L02, L03, L04,                     R04, R03, R02, R01, R00, \
    L10, L11, L12, L13, L14,                     R14, R13, R12, R11, R10, \
    L20, L21, L22, L23, L24,                     R24, R23, R22, R21, R20, \
         L31, L32,                                         R31, R30, \
                       L33, L34,                     R33, R32, \
                                 L44, L43, R42, R43, \
                                 L42, L41, R40, R41 \
) { \
    { L00, L01, L02, L03, L04 }, \
    { L10, L11, L12, L13, L14 }, \
    { L20, L21, L22, L23, L24 }, \
    { XXX, L31, L32, L33, L34 }, \
    { XXX, L42, L41, L44, L43 }, \
\
    { R04, R03, R02, R01, R00 }, \
    { R14, R13, R12, R11, R10 }, \
    { R24, R23, R22, R21, R20 }, \
    { R33, R32, R31, R30, XXX }, \
    { R42, R43, R40, R41, XXX } \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base (qwerty)
     * ,----------------------------------,                             ,----------------------------------,
     * |   й  |   ц  |   у  |   к  |   е  |                             |   н  |   г  |   ш  |   щ  |   з  |
     * |------+------+------+------+------|                             |-------------+------+------+------|
     * |   ф  |   ы  |   в  |   а  |   п  |                             |   р  |   о  |   л  |   д  |   ж  |
     * |------+------+------+------+------|                             |------|------+------+------+------|
     * |   я  |   ч  |   с  |   м  |   и  |                             |   т  |   ь  |   б  |   ю  | - _  |
     * |------+------+------+-------------,                             ,-------------+------+------+------,
     *        |   ё  |   ъ  |                                                         |   х  |  э   |
     *        '------+------'-------------'                             '-------------'------+------'
     *                      |NAV   | SFT  |                             | SFT  |NAV   |
     *                      '------+------'                             '------+------'
     *                                    '------+------' '------+------'
     *                                    | SPC  |NUM   | |NUM   | SPC  |
     *                                    '------+------' '------+------'
     *                                    | ESC  |BKSPC | |BKSPC | ESC  |
     *                                    '------+------' '------+------'
     */
    [_DEF] = MY_LAYOUT(
        KC_Q,    KC_W,    KC_E,     KC_R,     KC_T,                                         KC_Y,    KC_U,     KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,     KC_F,     KC_G,                                         KC_H,    KC_J,     KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,     KC_V,     KC_B,                                         KC_N,    KC_M,     KC_COMM, KC_DOT,  KC_MINS,
                 KC_GRV,   KC_RBRC,                                                                            KC_LBRC,  KC_QUOT,
                                            MO(_NAV), KC_LSFT,   KC_LSFT,  MO(_NAV),
                                            M_LSPC,   M_LNUM,    M_RNUM,   M_RSPC,
                                            KC_ESC,   KC_BSPC,   KC_BSPC,  KC_ESC
    ),
     /* PNCATEHO
     * ,----------------------------------,                             ,----------------------------------,
     * |   и  |   а  |   е  |   о  | !?   |                             | !?   |   ч  |   ж  |   г  |   д  |
     * |------+------+------+------+------|                             |-------------+------+------+------|
     * |   р  |   с  |   т  |   н  | .:   |                             | .:   |   б  |   й  |   ы  |   к  |
     * |------+------+------+------+-;----|                             |---;--|------+------+------+------|
     * |   -_ |  (<  |  >)  |   "  ' ,    |                             | ,    '   "  |  (<  |  >)  |  -_  |
     * |------+------+------+-------------,                             ,-------------+------+------+------,
	 *        |  [{  |  }}  |                                                         |  [{  |  }]  |
     *        '------+------'-------------'                             '-------------'------+------'
     *                      |NAV   | SFT  |                             | SFT  | NAV  |
     *                      '------+------'                             '------+------'
     *                                    '------+------' '------+------'
     *                                    | SPC  |NUM   | |NUM   | SPC  |
     *                                    '------+------' '------+------'
     *                                    | ESC  |BKSPC | |BKSPC | ESC  |
     *                                    '------+------' '------+------'
     */
    [_PNC] = MY_LAYOUT(
        ST_1,       ST_3,        ST_5,        ST_7,      PNC_EXCL,                                     PNC_EXCL,  ST_9,     ST_B,        ST_D,        ST_F,
        ST_0,       ST_2,        ST_4,        ST_6,      PNC_DOT,                                      PNC_DOT,   ST_8,     ST_A,        ST_C,        ST_E,
        PNC_UNDSCR, PNC_LPRNTHL, PNC_RPRNTHL, PNC_QUOT,  PNC_COMMA,                                    PNC_COMMA, PNC_QUOT, PNC_LPRNTHR, PNC_RPRNTHR, PNC_UNDSCR,
                    PNC_LBRKTL,  PNC_RBRKTL,                                                                                PNC_LBRKTR,  PNC_RBRKTR,
													           MO(_NAV), KC_LSFT,  KC_LSFT,  MO(_NAV),
													           M_LSPC,   M_LNUM,   M_RNUM,   M_RSPC,
															   KC_ESC,   KC_BSPC,  KC_BSPC,  KC_ESC 
    ),
   /* Ctl
     * ,----------------------------------,                             ,----------------------------------,
     * |  F2  |  F3  |  F4  |  F5  |      |                             |c BS  |  F5  |  F4  |  F3  |  F2  |
     * |------+------+------+------+------|                             |-------------+------+------+------|
     * |Ctl a |Ctl s | Sft2 |Ctl f |c Ent |                             |c Ent |Ctl f | Sft2 |Ctl s |Ctl a |
     * |------+------+------+------+------|                             |------|------+------+------+------|
     * |Ctl z |Ctl x |Ctl c |Ctl v | Del  |                             |  Del |Ctl v |Ctl c |Ctl x |Ctl z |
     * |------+------+------+-------------,                             ,-------------+------+------+------,
     *        |CPause|PrnScr|                                                         |PrnScr|CPause|
     *        '------+------'-------------'                             '-------------'------+------'
     *                      |  NAV | SFT  |                             | SFT  | NAV  |
     *                      '------+------'                             '------+------'
     *                                    '------+------' '------+------'
     *                                    | SPC  | NUM  | | NUM  | SPC  |
     *                                    '------+------' '------+------'
     *                                    | ESC  |BKSPC | |BKSPC | ESC  |
     *                                    '------+------' '------+------'
     */
    /* Num
     * ,----------------------------------,                             ,----------------------------------,
     * |   &  |   4  7   5  8   6  |      |                             |      |   6  8   5  7   4  |   &  |
     * |------+------+------+------+------|                             |-------------+------+------+------|
     * |   /  |   1  9   2  0   3  |   =  |                             |   =  |   3  0   2  9   1  |   /  |
     * |------+------+------+------+---*--|                             |---*--|------+------+------+------|
     * |  |\  |  % $ |  # № |   @  |   +  |                             |   +  |   @  |  #№  |  %$  |  |\  |
     * |------+------+------+-------------,                             ,-------------+------+------+------,
     *        |   ~  `   ^  |                                                         |   ^  `   ~  |
     *        '------+------'-------------'                             '-------------'------+------'
     *                      |   (  |   )  |                             |   <  |   >  |
     *                      '------+------'                             '------+------'
     *                                    '------+------' '------+------'
     *                                    |   ,  ;  . : | |   "  ' ! ?  |
     *                                    '------+------' '------+------'
     *                                    |   [  |  ]   | |  {   |  }   |
     *                                    '------+------' '------+------'
     */
    [_NUM] = MY_LAYOUT(
        M_AMP,   M_4,     M_5,      M_6,      KC_NO,                                       KC_NO,   M_6,      M_5,     M_4,     M_AMP,
        M_SLASH, M_1,     M_2,      M_3,      M_EQL,                                       M_EQL,   M_3,      M_2,     M_1,     M_SLASH,
        M_PIPE,  M_PERC,  M_HASH,   M_AT,     M_MINS,                                      M_MINS,  M_AT,     M_HASH,  M_PERC,  M_PIPE,
                          M_TILDE,  M_CARET,                                                         M_CARET,  M_TILDE,
                                                     M_LPRNTH, M_RPRNTH,    M_LT,   M_GT,
                                                     M_LSPC,   M_LNUM,      M_RNUM, M_RSPC,
                                                     M_LBRKT,  M_RBRKT,     M_LBRC, M_RBRC 
    ),
    /* NAV
     * ,----------------------------------,                             ,----------------------------------,
     * |c home|  up  | down |c end |  TAB |                             |  TAB |c home|  up  | down |c end |
     * |------+------+------+------+------|                             |-------------+------+------+------|
     * | home |  <-  |  ->  | end  |a TAB |                             |a TAB | home |  <-  |  ->  | end  |
     * |------+------+------+------+------|                             |------|------+------+------+------|
     * | c <- | c {  |  c } | c -> |c TAB |                             |c TAB | c <- | c {  | c }  | c -> |
     * |------+------+------+-------------,                             ,-------------+------+------+------,
     *        | c -  | F12  |                                                         | F12  |  c - |
     *        '------+------'-------------'                             '-------------'------+------'
     *                      |      | SFT  |                             |  SFT |      |
     *                      '------+------'                             '------+------'
     *                                    '------+------' '------+------'
     *                                    |      |      | |      |      |
     *                                    '------+------' '------+------'
     *                                    |      |      | |      |      |
     *                                    '------+------' '------+------'
     */
    [_NAV] = MY_LAYOUT(
        C(KC_HOME), KC_UP,      KC_DOWN,    C(KC_END),  KC_TAB,                                    KC_TAB, C(KC_HOME), KC_UP,      KC_DOWN,    C(KC_END),
        KC_HOME,    KC_LEFT,    KC_RGHT,    KC_END   ,  M_ATAB,                                    M_ATAB, KC_HOME,    KC_LEFT,    KC_RGHT,    KC_END,
        C(KC_LEFT), C(KC_LBRC), C(KC_RBRC), C(KC_RGHT), M_CTAB,                                    M_CTAB, C(KC_LEFT), C(KC_LBRC), C(KC_RBRC), C(KC_RGHT),
                    C(KC_MINS), KC_F12,                                                                                KC_F12, C(KC_MINS),
                                                     KC_NO,   KC_LSFT,     KC_LSFT, KC_NO,
                                                     KC_NO,   KC_NO,       KC_NO,   KC_NO,
                                                     KC_NO,   KC_NO,       KC_NO,   KC_NO 
    ),

};

void tap_alt_code2(uint16_t mods, uint8_t n1, uint8_t n2) {
	unregister_mods(mods);
	register_mods(MOD_BIT(KC_LEFT_ALT));
	if (n1 == 0) {
		tap_code(KC_KP_0);
	} else {
		tap_code(KC_KP_1 + n1 - 1);
	}
	if (n2 == 0) {
		tap_code(KC_KP_0);
	} else {
		tap_code(KC_KP_1 + n2 - 1);
	}
	unregister_mods(MOD_BIT(KC_LEFT_ALT));
	register_mods(mods);
}

void tap_alt_code3(uint16_t mods, uint8_t n1, uint8_t n2, uint8_t n3) {
	unregister_mods(mods);
	register_mods(MOD_BIT(KC_LEFT_ALT));
	if (n1 == 0) {
		tap_code(KC_KP_0);
	} else {
		tap_code(KC_KP_1 + n1 - 1);
	}
	if (n2 == 0) {
		tap_code(KC_KP_0);
	} else {
		tap_code(KC_KP_1 + n2 - 1);
	}
	if (n3 == 0) {
		tap_code(KC_KP_0);
	} else {
		tap_code(KC_KP_1 + n3 - 1);
	}
	unregister_mods(MOD_BIT(KC_LEFT_ALT));
	register_mods(mods);
}

void register_my_dance(uint16_t keycode) {
	my_dance_key = keycode;
	my_dance_counter = 1;
}

void clear_my_dance(void) {
	my_dance_key = KC_NO;
	my_dance_counter = 0;
}

bool process_steno_press(uint16_t keycode, uint16_t mods) {
	
	if (keycode < FIRST_STENO || keycode > LAST_STENO) {
		return true;
	}
	
	steno_counter += 1;
	steno_chord |= 1 << (keycode - FIRST_STENO);
	if (mods & MOD_MASK_SHIFT) {
		is_steno_shift = true;
	}
	
	return false;
	
}

bool process_steno_release(uint16_t keycode, uint16_t mods) {

	if (steno_counter == 0) {
		return true;
	}
	
	if (keycode < FIRST_STENO || keycode > LAST_STENO) {
		return true;
	}
	
	steno_counter -= 1;
	
	if (!steno_counter) {
	
		uint16_t i = 0;
		
		uint8_t steno_chord_lo = (uint8_t) steno_chord;
		uint8_t steno_chord_hi = (uint8_t) (steno_chord >> 8);
		uint8_t state = 0;
		uint8_t dict_lo = 0;
		uint8_t dict_hi = 0;
		uint8_t dict_key = 0;
		bool caps_first = is_steno_shift && !((bool)(mods & MOD_MASK_SHIFT));
		bool is_first = true;
		
		while (true) {
			switch (state) {
			case 0:
				dict_lo = pgm_read_byte_near(steno_dictionary+i);
				dict_hi = pgm_read_byte_near(steno_dictionary+i+1);
				
				if (dict_lo == 0x00 && dict_hi == 0x00) {
					state = 9; // end
				} else if (dict_lo == steno_chord_lo && dict_hi == steno_chord_hi) {
					state = 2; // print word
					i += 2;
				} else {
					state = 1; // skip word
					i += 2;
				}
			break;
			case 1:
				dict_key = pgm_read_byte_near(steno_dictionary+i);
				if (dict_key == KC_NO) {
					state = 0; // check chord
				}
				i++;
			break;
			case 2:
				dict_key = pgm_read_byte_near(steno_dictionary+i);
				if (dict_key == KC_NO) {
					state = 9; // end
				} else {
					if (caps_first && is_first) {
						tap_code16(S(dict_key));	
					} else {
						tap_code(dict_key);
					}
					is_first = false;
				}
				i++;
			break;
			}
			if (state == 9) {
				break;
			}
			if (i > 0xfffd) {
				break;
			}
		}
		steno_chord = 0;
		is_steno_shift = false;
	}
	return false;
} 

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	uint16_t mods = get_mods();
			
	// alt tab cleanup
	if (is_atab_active && keycode != M_ATAB) {
		unregister_mods(MOD_BIT(KC_LALT));
		is_atab_active = false;
	}
		
	// ctl tab cleanup
	if (is_ctab_active && keycode != M_CTAB) {
		unregister_mods(MOD_BIT(KC_LCTL));
		is_ctab_active = false;
	}
	
	
	// my dance finish
	if (record->event.pressed && my_dance_counter) {
		if (my_dance_key == keycode) {
			++my_dance_counter;
			switch (keycode) {
			case PNC_EXCL:
			case M_RSPC:
				// ?
				tap_code(KC_BSPC);
				tap_alt_code2(mods, 6, 3);
				clear_my_dance();
				break;
			case PNC_DOT:
			case M_LNUM:
				switch (my_dance_counter) {
				case 2:
					// :
					tap_code(KC_BSPC);
					tap_alt_code2(mods, 5, 8);
					break;
				case 3:
					// ...
					tap_code(KC_BSPC);
					tap_alt_code2(mods, 4, 6);
					tap_alt_code2(mods, 4, 6);
					tap_alt_code2(mods, 4, 6);
					clear_my_dance();
					break;
				}
				break;

			case M_HASH:
				// №
				tap_code(KC_BSPC);
				tap_alt_code3(mods, 2, 5, 2);
			break;
			case M_PERC:
				// $
				tap_code(KC_BSPC);
				tap_alt_code2(mods, 3, 6);
			break;
			case M_PIPE:
				// backslash
				tap_code(KC_BSPC);
				tap_alt_code2(mods, 9, 2);
			break;
			}
			return false;
		} else {
			clear_my_dance();
		}
	}
	
	// Ctl layer
	if ((mods & MOD_BIT(KC_LCTL)) || ctl_hold != KC_NO ) {
		if (record->event.pressed) {
			switch (keycode) {
			// Ctl
			case KC_Z:
			case KC_MINS:
			case PNC_UNDSCR:
				tap_code(KC_Z);
			return false;
			case KC_X:
			case KC_DOT:
			case PNC_LPRNTHL:
			case PNC_RPRNTHR:
				tap_code(KC_X);
			return false;
			case KC_C:
			case KC_COMMA:
			case PNC_RPRNTHL:
			case PNC_LPRNTHR:
				tap_code(KC_C);
			return false;
			case KC_V:
			case KC_M:
			case PNC_QUOT:
				if (shift2_counter) {
					tap_code16(S(KC_V));
				} else {
					tap_code(KC_V);
				}
			return false;
			case KC_B:
			case KC_N:
			case PNC_COMMA:
				unregister_mods(MOD_BIT(KC_LCTL));
				if (shift2_counter) {
					ctl_hold = S(KC_DEL);
				} else {
					ctl_hold = KC_DEL;
				}
				register_code16(ctl_hold);

			return false;
			case KC_A:
			case KC_SCLN:
			case ST_0:
			case ST_E:
				tap_code(KC_A);
			return false;
			case KC_S:
			case KC_L:
			case ST_2:
			case ST_C:
				tap_code(KC_S);
			return false;
			case KC_D:
			case KC_K:
			case ST_4:
			case ST_A:
				++shift2_counter;
			return false;
			case KC_F:
			case KC_J:
			case ST_6:
			case ST_8:
				tap_code(KC_F);
			return false;
			case KC_G:
			case KC_H:
			case PNC_DOT:
				if (shift2_counter) {
					unregister_mods(MOD_BIT(KC_LCTL));
					tap_code16(S(KC_ENT));
					register_mods(MOD_BIT(KC_LCTL));
				} else {
					tap_code(KC_ENT);
				}
			return false;
			case KC_Q:
			case KC_P:
			case ST_1:
			case ST_F:
				unregister_mods(MOD_BIT(KC_LCTL));
				tap_code(KC_F2);
				register_mods(MOD_BIT(KC_LCTL));
			return false;
			case KC_W:
			case KC_O:
			case ST_3:
			case ST_D:
				unregister_mods(MOD_BIT(KC_LCTL));
				tap_code(KC_F3);
				register_mods(MOD_BIT(KC_LCTL));
			return false;
			case KC_E:
			case KC_I:
			case ST_5:
			case ST_B:
				unregister_mods(MOD_BIT(KC_LCTL));
				tap_code(KC_F4);
				register_mods(MOD_BIT(KC_LCTL));
			return false;
			case KC_R:
			case KC_U:
			case ST_7:
			case ST_9:
				unregister_mods(MOD_BIT(KC_LCTL));
				tap_code(KC_F5);
				register_mods(MOD_BIT(KC_LCTL));
			return false;
			case KC_T:
			case KC_Y:
			//case PNC_EXCL:
				//tap_code(KC_BSPC);
			return false;
			case KC_GRV:
			case KC_QUOT:
			case PNC_LBRKTL:
			case PNC_RBRKTR:
				//unregister_mods(MOD_BIT(KC_LCTL));
				tap_code16(KC_PAUS);
				//register_mods(MOD_BIT(KC_LCTL));
			return false;
			case KC_RBRC:
			case KC_LBRC:
			case PNC_RBRKTL:
			case PNC_LBRKTR:
				unregister_mods(MOD_BIT(KC_LCTL));
				tap_code(KC_PSCR);
				register_mods(MOD_BIT(KC_LCTL));
			return false;
			}
		} else {
			// !pressed
			if (ctl_hold != KC_NO) {
				unregister_code16(ctl_hold);
				register_mods(MOD_BIT(KC_LCTL));
				ctl_hold = KC_NO;
			}
			
		}
	}

	if (record->event.pressed) {
		if (!process_steno_press(keycode, mods)) {
			return false;
		}
	} else {
		if (!process_steno_release(keycode, mods)) {
			return false;
		}
	}

	if (record->event.pressed) {
		
		switch (keycode) {
		// my dance
		//case M_EXCL:
		case PNC_EXCL:
			// !
			tap_code16(S(KC_1));
			// ! ?
			register_my_dance(keycode);
		break;
		case PNC_DOT:
			// .
			tap_alt_code2(mods, 4, 6);
			// . :
			register_my_dance(keycode);
		break;
		case M_HASH:
			// #
			tap_alt_code2(mods, 3, 5);
			// #№
			register_my_dance(keycode);
		break;
		case M_PERC:
			// %
			tap_alt_code2(mods, 3, 7);
			// %$
			register_my_dance(keycode);
		break;
		case M_PIPE:
			// |
			tap_alt_code3(mods, 1, 2, 4);
			// 
			register_my_dance(keycode);
		break;
		
		// thumb
		case M_LNUM:
			if (IS_LAYER_ON(_NUM)) {
				// .
				tap_alt_code2(mods, 4, 6);
				// . :
				register_my_dance(keycode);
			} else {
				layer_on(_NUM);
				is_lnum = true;
			}
		break;
		case M_RNUM:
			if (IS_LAYER_ON(_NUM)) {
				// "
				tap_alt_code2(mods, 3, 4);
			} else {
				layer_on(_NUM);
				is_rnum = true;
			}
		break;
		case M_LSPC:
			if (IS_LAYER_ON(_NUM) && is_rnum) {
				// ,
				tap_alt_code2(mods, 4, 4);
			} else {
				register_code(KC_SPC);
			}	
		break;
		case M_RSPC:
			if (IS_LAYER_ON(_NUM) && is_lnum) {
				// !
				tap_code16(S(KC_1));
				// ! ?
				register_my_dance(keycode);
			} else {
				register_code(KC_SPC);
			}	
		break;
		
		// NUM
		case M_1:
			tap_code(KC_1);
		break;
		case M_2:
			tap_code(KC_2);
		break;
		case M_3:
			tap_code(KC_3);
		break;
		case M_4:
			tap_code(KC_4);
		break;
		case M_5:
			tap_code(KC_5);
		break;
		case M_6:
			tap_code(KC_6);
		break;
		case M_MINS:
			// +
			tap_code16(S(KC_EQL));
		break;
		case M_EQL:
			// =
			tap_code(KC_EQL);
		break;
		case M_AT:
			// @
			tap_alt_code2(mods, 6, 4);
		break;
		case M_SLASH:
			// /
			tap_alt_code2(mods, 4, 7);
		break;
		case M_AMP:
			// &
			tap_alt_code2(mods, 3, 8);
		break;
		case M_TILDE:
			// ~
			tap_alt_code3(mods, 1, 2, 6);
		break;
		case M_CARET:
			// ^
			tap_alt_code2(mods, 9, 4);
		break;
		// NUM thumb
		case M_LPRNTH:
			// (
			tap_code16(S(KC_9));
		break;
		case M_RPRNTH:
			// )
			tap_code16(S(KC_0));
		break;
		case M_LT:
			// <
			tap_alt_code2(mods, 6, 0);
		break;
		case M_GT:
			// >
			tap_alt_code2(mods, 6, 2);
		break;
		//case M_COMMA:
		//	// ,
		//	tap_alt_code2(mods, 4, 4);
		break;
		case M_LBRKT:
			// [
			tap_alt_code2(mods, 9, 1);
		break;
		case M_RBRKT:
			// ]
			tap_alt_code2(mods, 9, 3);
		break;
		case M_LBRC:
			// {
			tap_alt_code3(mods, 1, 2, 3);
		break;
		case M_RBRC:
			// }
			tap_alt_code3(mods, 1, 2, 5);
		break;
		case PNC_COMMA:
			// ,
			tap_alt_code2(mods, 4, 4);
		break;
		case PNC_QUOT:
			// "
			tap_alt_code2(mods, 3, 4);
		break;
		case PNC_LPRNTHL:
		case PNC_LPRNTHR:
			if (mods & MOD_MASK_SHIFT) {
				// <
				tap_alt_code2(mods, 6, 0);
			} else {
				// (
				tap_code16(S(KC_9));
			}
		break;
		case PNC_RPRNTHL:
		case PNC_RPRNTHR:
		if (mods & MOD_MASK_SHIFT) {
				// >
				tap_alt_code2(mods, 6, 2);
			} else {
				// )
				tap_code16(S(KC_0));
			}
		break;
		case PNC_LBRKTL:
		case PNC_LBRKTR:
			if (mods & MOD_MASK_SHIFT) {
				// {
				tap_alt_code3(mods, 1, 2, 3);
			} else {
				// [
				tap_alt_code2(mods, 9, 1);
			}
		break;
		case PNC_RBRKTL:
		case PNC_RBRKTR:
			if (mods & MOD_MASK_SHIFT) {
				// }
				tap_alt_code3(mods, 1, 2, 5);
			} else {
				// ]
				tap_alt_code2(mods, 9, 3);
			}
		break;
		case PNC_UNDSCR:
			// -
			tap_code(KC_MINS); 
		break;
		
		// NAV
		case M_ATAB:
			if (!is_atab_active) {
				register_mods(MOD_BIT(KC_LALT));
				is_atab_active = true;
			}
			tap_code(KC_TAB);
		break;
		case M_CTAB:
			if (!is_ctab_active) {
				register_mods(MOD_BIT(KC_LCTL));
				is_ctab_active = true;
			}
			tap_code(KC_TAB);
		break;
		
		}
	} else {
		// !record->event.pressed
		switch (keycode) {
		case M_LNUM:
			if (IS_LAYER_ON(_NUM) && is_lnum) {
				layer_off(_NUM);
				is_lnum = false;
				if (my_dance_counter) {
					clear_my_dance();
				}
			}
				
		break;
		case M_RNUM:
			if (IS_LAYER_ON(_NUM) && is_rnum) {
				layer_off(_NUM);
				is_rnum = false;
				if (my_dance_counter) {
					clear_my_dance();
				}
			}
		break;
		case M_LSPC:
			if (IS_LAYER_OFF(_NUM)) {
				unregister_code(KC_SPC);
			}
		break;
		case M_RSPC:
			if (IS_LAYER_OFF(_NUM)) {
				unregister_code(KC_SPC);
			}
		break;
		
		case KC_D:
		case KC_K:
			if (shift2_counter) {
				--shift2_counter;
			}
		break;
		case KC_LCTL:
			shift2_counter = 0;
		break;
		}
	}
	
	return true;
}

void process_combo_event(uint16_t combo_index, bool pressed) {
	uint16_t mods = get_mods();

	// my dance finish
	if (pressed && my_dance_counter) {
		//if (combo_index == PNC_PA && my_dance_key == KC_GRV) {
		//	++my_dance_counter;
		//	switch (my_dance_counter) {
		//	case 2:
		//		// ё
		//		tap_code(KC_BSPC);
		//		tap_code(KC_GRV);
		//		clear_my_dance();
		//		break;
		//	}
		//	return;
		//} else if (combo_index == CB_MINS_EQL && my_dance_key == KC_EQL) {
		//	++my_dance_counter;
		//	switch (my_dance_counter) {
		//	case 2:
		//		// *
		//		tap_code(KC_BSPC);
		//		tap_code16(S(KC_8));
		//		clear_my_dance();
		//		break;
		//	}
		//	return;
			
		//} else {
			clear_my_dance();
		//}
	}
	
	if (pressed) {
		
		switch(combo_index) {
		
		// NUM
		case CB_45:
			// 7
			tap_code(KC_7);
		break;
		case CB_56:
			// 8
			tap_code(KC_8);
		break;
		case CB_12:
			// 9
			tap_code(KC_9);
		break;
		case CB_23:
			// 0
			tap_code(KC_0);
		break;
		case CB_13:
			// .
			tap_alt_code2(mods, 4, 6);
		break;
		case CB_46:
			// ,
			tap_alt_code2(mods, 4, 4);
		break;
		case CB_MINS_EQL:
			// *
			tap_code16(S(KC_8));
		break;
		case PNC_DOT_COMMA:
			// ;
			tap_alt_code2(mods, 5, 9);
		break;
		case PNC_QUOT_COMMA:
			// '
			tap_alt_code2(mods, 3, 9);
		break;
		case CB_TILDE_CARET:
			// `
			tap_alt_code2(mods, 9, 6);
		break;
		// NAV
		case CB_LEFT_RGHT:
			tap_code16(C(KC_KP_SLASH));
		break;
		case CB_UP_DOWN:
			// Menu
			tap_code(KC_APP);
		break;
		case CB_HOME_END:
			// Alt Shift
			tap_code16(A(KC_LSFT));
		break;
		// LAYOUT
		case CB_QZ:
			// DEF
		break;
		case CB_W_LPR:
			// PNCATEHO
			layer_clear();
			layer_on(_PNC);
		break;
		case PNC_N_UND:
			// DEF
			layer_clear();
			layer_on(_DEF);
		break;
		case PNC_A_LPR:
			// PNCATEHO
		break;
		// MISC
		case CB_LSPC_SFT:
		case CB_RSPC_SFT:
			tap_code(KC_ENT);
		break;
		case CB_LSPC_NUM:
			if (IS_LAYER_ON(_NUM)) {
				// ;
				tap_alt_code2(mods, 5, 9);
			} else {
				register_mods(MOD_BIT(KC_LCTL));
			}
		break;
		case CB_RSPC_NUM:
			if (IS_LAYER_ON(_NUM)) {
				// '
				tap_alt_code2(mods, 3, 9);
			} else {
				register_mods(MOD_BIT(KC_LCTL));
			}
		break;
		case CB_BS_ESC:
			tap_code16(C(KC_BSPC));
		break;
		case CB_LSPC_ESC:
		case CB_RSPC_ESC:
			tap_code16(C(KC_SPC));
		break;
		}
		
		
	} else {
		
		switch(combo_index) {
		case CB_LSPC_NUM:
		case CB_RSPC_NUM:
			if (ctl_hold != KC_NO) {
				unregister_code16(ctl_hold);
				ctl_hold = KC_NO;
			} else {
				unregister_mods(MOD_BIT(KC_LCTL));
			}
		break;
		}
		
	}
}	
		
