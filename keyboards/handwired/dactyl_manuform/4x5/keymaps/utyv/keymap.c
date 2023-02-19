#include QMK_KEYBOARD_H

uint8_t shift2_counter = 0;
bool is_atab_active = false;
bool is_ctab_active = false;
bool is_lnum = false;
bool is_rnum = false;
uint8_t my_dance_counter = 0;
uint16_t my_dance_key = KC_NO;
uint16_t ctl_hold = KC_NO;

enum layers {
	_DEF = 0
	, _PNC
	, _NUM
	, _NAV
};

enum custom_keycodes {
	// thumb
	M_LNUM = SAFE_RANGE
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
	, PNC_P
	, PNC_N
	, PNC_C
	, PNC_A
	, PNC_T
	, PNC_E
	, PNC_H
	, PNC_O
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
	// PNCATEHO RIGHT
	, PNC_R0
	, PNC_R1
	, PNC_R2
	, PNC_R3
	, PNC_R4
	, PNC_R5
	, PNC_R6
	, PNC_R7
	
};

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
	, PNC_NO
	, PNC_PH
	, PNC_NA
	, PNC_EO
	, PNC_PC
	, PNC_TH
	, PNC_NE
	, PNC_AO
	, PNC_PT
	, PNC_CH
	, PNC_AE
	, PNC_CT
	, PNC_NH
	, PNC_PO
	, PNC_PE
	, PNC_AH
	, PNC_NT
	, PNC_CO
	, PNC_CE
	, PNC_AT
	, PNC_PA
	, PNC_EH
	, PNC_NC
	, PNC_TO
	, PNC_PN
	, PNC_CA
	, PNC_TE
	, PNC_HO
	, PNC_DOT_COMMA
	, PNC_QUOT_COMMA
	// PNC RIGHT
	, PNC_R03
	, PNC_R47
	, PNC_R02
	, PNC_R46
	, PNC_R12
	, PNC_R56
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
const uint16_t PROGMEM pnc_NO[] = {PNC_N, PNC_O, COMBO_END};
const uint16_t PROGMEM pnc_PH[] = {PNC_P, PNC_H, COMBO_END};
const uint16_t PROGMEM pnc_NA[] = {PNC_N, PNC_A, COMBO_END};
const uint16_t PROGMEM pnc_EO[] = {PNC_E, PNC_O, COMBO_END};
const uint16_t PROGMEM pnc_PC[] = {PNC_P, PNC_C, COMBO_END};
const uint16_t PROGMEM pnc_TH[] = {PNC_T, PNC_H, COMBO_END};
const uint16_t PROGMEM pnc_NE[] = {PNC_N, PNC_E, COMBO_END};
const uint16_t PROGMEM pnc_AO[] = {PNC_A, PNC_O, COMBO_END};
const uint16_t PROGMEM pnc_PT[] = {PNC_P, PNC_T, COMBO_END};
const uint16_t PROGMEM pnc_CH[] = {PNC_C, PNC_H, COMBO_END};
const uint16_t PROGMEM pnc_AE[] = {PNC_A, PNC_E, COMBO_END};
const uint16_t PROGMEM pnc_CT[] = {PNC_C, PNC_T, COMBO_END};
const uint16_t PROGMEM pnc_NH[] = {PNC_N, PNC_H, COMBO_END};
const uint16_t PROGMEM pnc_PO[] = {PNC_P, PNC_O, COMBO_END};
const uint16_t PROGMEM pnc_PE[] = {PNC_P, PNC_E, COMBO_END};
const uint16_t PROGMEM pnc_AH[] = {PNC_A, PNC_H, COMBO_END};
const uint16_t PROGMEM pnc_NT[] = {PNC_N, PNC_T, COMBO_END};
const uint16_t PROGMEM pnc_CO[] = {PNC_C, PNC_O, COMBO_END};
const uint16_t PROGMEM pnc_CE[] = {PNC_C, PNC_E, COMBO_END};
const uint16_t PROGMEM pnc_AT[] = {PNC_A, PNC_T, COMBO_END};
const uint16_t PROGMEM pnc_PA[] = {PNC_P, PNC_A, COMBO_END};
const uint16_t PROGMEM pnc_EH[] = {PNC_E, PNC_H, COMBO_END};
const uint16_t PROGMEM pnc_NC[] = {PNC_N, PNC_C, COMBO_END};
const uint16_t PROGMEM pnc_TO[] = {PNC_T, PNC_O, COMBO_END};
const uint16_t PROGMEM pnc_PN[] = {PNC_P, PNC_N, COMBO_END};
const uint16_t PROGMEM pnc_CA[] = {PNC_C, PNC_A, COMBO_END};
const uint16_t PROGMEM pnc_TE[] = {PNC_T, PNC_E, COMBO_END};
const uint16_t PROGMEM pnc_HO[] = {PNC_H, PNC_O, COMBO_END};
const uint16_t PROGMEM pnc_DOT_COMMA[] = {PNC_DOT, PNC_COMMA, COMBO_END}; // ;
const uint16_t PROGMEM pnc_QUOT_COMMA[] = {PNC_QUOT, PNC_COMMA, COMBO_END}; // '
// PNC RIGHT
const uint16_t PROGMEM pnc_R03[] = {PNC_R0, PNC_R3, COMBO_END};
const uint16_t PROGMEM pnc_R47[] = {PNC_R4, PNC_R7, COMBO_END};
const uint16_t PROGMEM pnc_R02[] = {PNC_R0, PNC_R2, COMBO_END};
const uint16_t PROGMEM pnc_R46[] = {PNC_R4, PNC_R6, COMBO_END};
const uint16_t PROGMEM pnc_R12[] = {PNC_R1, PNC_R2, COMBO_END};
const uint16_t PROGMEM pnc_R56[] = {PNC_R5, PNC_R6, COMBO_END};

// LAYOUT
const uint16_t PROGMEM combo_QZ[] = {KC_Q, KC_Z, COMBO_END};
const uint16_t PROGMEM combo_W_LPR[] = {KC_W, KC_GRV, COMBO_END};
const uint16_t PROGMEM pnc_N_UND[] = {PNC_N, PNC_UNDSCR, COMBO_END};
const uint16_t PROGMEM pnc_A_LPR[] = {PNC_A, PNC_LBRKTL, COMBO_END};
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
	, [PNC_NO] = COMBO_ACTION(pnc_NO)
	, [PNC_PH] = COMBO_ACTION(pnc_PH)
	, [PNC_NA] = COMBO_ACTION(pnc_NA)
	, [PNC_EO] = COMBO_ACTION(pnc_EO)
	, [PNC_PC] = COMBO_ACTION(pnc_PC)
	, [PNC_TH] = COMBO_ACTION(pnc_TH)
	, [PNC_NE] = COMBO_ACTION(pnc_NE)
	, [PNC_AO] = COMBO_ACTION(pnc_AO)
	, [PNC_PT] = COMBO_ACTION(pnc_PT)
	, [PNC_CH] = COMBO_ACTION(pnc_CH)
	, [PNC_AE] = COMBO_ACTION(pnc_AE)
	, [PNC_CT] = COMBO_ACTION(pnc_CT)
	, [PNC_NH] = COMBO_ACTION(pnc_NH)
	, [PNC_PO] = COMBO_ACTION(pnc_PO)
	, [PNC_PE] = COMBO_ACTION(pnc_PE)
	, [PNC_AH] = COMBO_ACTION(pnc_AH)
	, [PNC_NT] = COMBO_ACTION(pnc_NT)
	, [PNC_CO] = COMBO_ACTION(pnc_CO)
	, [PNC_CE] = COMBO_ACTION(pnc_CE)
	, [PNC_AT] = COMBO_ACTION(pnc_AT)
	, [PNC_PA] = COMBO_ACTION(pnc_PA)
	, [PNC_EH] = COMBO_ACTION(pnc_EH)
	, [PNC_NC] = COMBO_ACTION(pnc_NC)
	, [PNC_TO] = COMBO_ACTION(pnc_TO)
	, [PNC_PN] = COMBO_ACTION(pnc_PN)
	, [PNC_CA] = COMBO_ACTION(pnc_CA)
	, [PNC_TE] = COMBO_ACTION(pnc_TE)
	, [PNC_HO] = COMBO_ACTION(pnc_HO)
	, [PNC_DOT_COMMA] = COMBO_ACTION(pnc_DOT_COMMA) //;
	, [PNC_QUOT_COMMA] = COMBO_ACTION(pnc_QUOT_COMMA) //'
	// PNC RIGHT
	, [PNC_R03] = COMBO_ACTION(pnc_R03)
	, [PNC_R47] = COMBO_ACTION(pnc_R47)
	, [PNC_R02] = COMBO_ACTION(pnc_R02)
	, [PNC_R46] = COMBO_ACTION(pnc_R46)
	, [PNC_R12] = COMBO_ACTION(pnc_R12)
	, [PNC_R56] = COMBO_ACTION(pnc_R56)
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
        PNC_N,      PNC_A,       PNC_E,       PNC_O,     PNC_EXCL,                                     PNC_EXCL,  PNC_R0,   PNC_R1,      PNC_R2,     PNC_R3,
        PNC_P,      PNC_C,       PNC_T,       PNC_H,     PNC_DOT,                                      PNC_DOT,   PNC_R4,   PNC_R5,      PNC_R6,     PNC_R7,
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
			case PNC_P:
			case PNC_R7:
				tap_code(KC_A);
			return false;
			case KC_S:
			case KC_L:
			case PNC_C:
			case PNC_R6:
				tap_code(KC_S);
			return false;
			case KC_D:
			case KC_K:
			case PNC_T:
			case PNC_R5:
				++shift2_counter;
			return false;
			case KC_F:
			case KC_J:
			case PNC_H:
			case PNC_R4:
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
			case PNC_N:
			case PNC_R3:
				unregister_mods(MOD_BIT(KC_LCTL));
				tap_code(KC_F2);
				register_mods(MOD_BIT(KC_LCTL));
			return false;
			case KC_W:
			case KC_O:
			case PNC_A:
			case PNC_R2:
				unregister_mods(MOD_BIT(KC_LCTL));
				tap_code(KC_F3);
				register_mods(MOD_BIT(KC_LCTL));
			return false;
			case KC_E:
			case KC_I:
			case PNC_E:
			case PNC_R1:
				unregister_mods(MOD_BIT(KC_LCTL));
				tap_code(KC_F4);
				register_mods(MOD_BIT(KC_LCTL));
			return false;
			case KC_R:
			case KC_U:
			case PNC_O:
			case PNC_R0:
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
		// PNCATEHO
		case PNC_P:
			tap_code(KC_H);
		break;
		case PNC_N:
			tap_code(KC_B);
		break;
		case PNC_C:
			tap_code(KC_C);
		break;
		case PNC_A:
			tap_code(KC_F);
		break;
		case PNC_T:
			tap_code(KC_N);
		break;
		case PNC_E:
			tap_code(KC_T);
		break;
		case PNC_H:
			tap_code(KC_Y);
		break;
		case PNC_O:
			tap_code(KC_J);
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
		// PNCATEHO RIGHT
		case PNC_R0:
			// ч
			tap_code(KC_X);
		break;
		case PNC_R1:
			// ж
			tap_code(KC_SCLN);
		break;
		case PNC_R2:
			// г
			tap_code(KC_U);
		break;
		case PNC_R3:
			// д
			tap_code(KC_L);
		break;
		case PNC_R4:
			// б
			tap_code(KC_COMM);
		break;
 		case PNC_R5:
			// й
			tap_code(KC_Q);
		break;
		case PNC_R6:
			// ы
			tap_code(KC_S);
		break;
		case PNC_R7:
			// к
			tap_code(KC_R);
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
		if (combo_index == PNC_PA && my_dance_key == KC_GRV) {
			++my_dance_counter;
			switch (my_dance_counter) {
			case 2:
				// ё
				tap_code(KC_BSPC);
				tap_code(KC_GRV);
				clear_my_dance();
				break;
			}
			return;
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
			
		} else {
			clear_my_dance();
		}
	}
	
	if (pressed) {
		
		switch(combo_index) {
		// PNCATEHO
		case PNC_NO:
			// в
			tap_code(KC_D);
		break;
		case PNC_PH:
			// л
			tap_code(KC_K);
		break;
		case PNC_NA:
			// д
			tap_code(KC_L);
		break;
		case PNC_EO:
			// п
			tap_code(KC_G);
		break;
		case PNC_PC:
			// к
			tap_code(KC_R);
		break;
		case PNC_TH:
			// м
			tap_code(KC_V);
		break;
		case PNC_NE:
			// г
			tap_code(KC_U);
		break;
		case PNC_AO:
			// з
			tap_code(KC_P);
		break;
		case PNC_PT:
			// ы
			tap_code(KC_S);
		break;
		case PNC_CH:
			// ь
			tap_code(KC_M);
		break;
		case PNC_AE:
			// я
			tap_code(KC_Z);
		break;
		case PNC_CT:
			// у
			tap_code(KC_E);
		break;
		case PNC_NH:
			// б
			tap_code(KC_COMM);
		break;
		case PNC_PO:
			// ч
			tap_code(KC_X);
		break;
		case PNC_PE:
			// ж
			tap_code(KC_SCLN);
		break;
		case PNC_AH:
			// ш
			tap_code(KC_I);
		break;
		case PNC_NT:
			// й
			tap_code(KC_Q);
		break;
		case PNC_CO:
			// х
			tap_code(KC_LBRC);
		break;
		case PNC_CE:
			// э
			tap_code(KC_QUOT);
		break;
		case PNC_AT:
			// щ
			tap_code(KC_O);
		break;
		case PNC_PA:
			// ъ
			tap_code(KC_RBRC);
			// ё
			register_my_dance(KC_GRV);

		break;
		case PNC_EH:
			// ф
			tap_code(KC_A);
		break;
		case PNC_NC:
			// ю
			tap_code(KC_DOT);
		break;
		case PNC_TO:
			// ц
			tap_code(KC_W);
		break;
		case PNC_PN:
			// ри
			tap_code(KC_H);
			if (mods & MOD_BIT(KC_LSFT)) {
				unregister_mods(MOD_BIT(KC_LSFT));
				tap_code(KC_B);
				register_mods(MOD_BIT(KC_LSFT));
			} else {
				tap_code(KC_B);
			}
		break;
		case PNC_CA:
			// са
			tap_code(KC_C);
			if (mods & MOD_BIT(KC_LSFT)) {
				unregister_mods(MOD_BIT(KC_LSFT));
				tap_code(KC_F);
				register_mods(MOD_BIT(KC_LSFT));
			} else {
				tap_code(KC_F);
			}
		break;
		case PNC_TE:
			// те
			tap_code(KC_N);
			if (mods & MOD_BIT(KC_LSFT)) {
				unregister_mods(MOD_BIT(KC_LSFT));
				tap_code(KC_T);
				register_mods(MOD_BIT(KC_LSFT));
			} else {
				tap_code(KC_T);
			}
		break;
		case PNC_HO:
			// но
			tap_code(KC_Y);
			if (mods & MOD_BIT(KC_LSFT)) {
				unregister_mods(MOD_BIT(KC_LSFT));
				tap_code(KC_J);
				register_mods(MOD_BIT(KC_LSFT));
			} else {
				tap_code(KC_J);
			}
		break;
		// PNC RIGHT
		case PNC_R03:
			// ц
			tap_code(KC_W);
		break;
		case PNC_R47:
			// ю
			tap_code(KC_DOT);
		break;
		case PNC_R02:
			// х
			tap_code(KC_LBRC);
		break;
		case PNC_R46:
			// ш
			tap_code(KC_I);
		break;
		case PNC_R12:
			// э
			tap_code(KC_QUOT);
		break;
		case PNC_R56:
			// щ
			tap_code(KC_O);
		break;
		
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
		
