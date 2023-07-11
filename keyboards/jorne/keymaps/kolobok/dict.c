#include "dict.h"
#include "keycodes.h"

const uint8_t PROGMEM kolobok_left_dict[] = {
	K_S, 0,        RU_S, NC
	, K_V, 0,      RU_V, NC
	, K_K, 0,      RU_K, NC
	, K_T, 0,      RU_T, NC
	, K_D, 0,      RU_D, NC
	, K_B, 0,      RU_B, NC
	, K_P, 0,      RU_P, NC
	, K_N, 0,      RU_N, NC
	, K_B | K_N, 0, RU_R, NC
	, K_K | K_T, 0, RU_M, NC
	, K_B | K_P, 0, RU_L, NC
	, K_V | K_D, 0, RU_X, NC
	, K_V | K_P, 0, RU_Z, NC
	, K_K | K_N, 0, RU_G, NC
	, K_T | K_D, 0, RU_ZH, NC
	, K_S | K_N, 0, RU_W, NC
	, K_K | K_D, 0, RU_H, NC
	, K_T | K_P, 0, RU_C, NC
	, K_K | K_B, 0, RU_WW, NC
	, K_T | K_B, 0, RU_F, NC
	, K_S | K_B, 0, RU_J, NC
	
	, 0, 0 // end
};

const uint8_t PROGMEM kolobok_rght_dict[] = {
	K_E, 0,        RU_E, NC
	, K_O, 0,      RU_O, NC
	, K_A, 0,      RU_A, NC
	, K_I, 0,      RU_I, NC
	, K_Y, 0,      RU_Y, NC
	, K_U, 0,      RU_U, NC
	, K_Q, 0,      RU_Q, NC
	, K_MZ, 0,     RU_MZ, NC

	, 0, K_1, 	            KC_1, NC
	, 0, K_2,               KC_2, NC
	, 0, K_1 | K_2,         KC_3, NC
	, 0, K_4,               KC_4, NC
	, 0, K_1 | K_4,         KC_5, NC
	, 0, K_2 | K_4,         KC_6, NC
	, 0, K_1 | K_2 | K_4,   KC_7, NC
	, 0, K_8,               KC_8, NC
	, 0, K_8 | K_1,         KC_9, NC
	, 0, K_8 | K_2,         KC_0, NC
	, 0, K_8 | K_4,         SFF, AC2(4, 6), NC // .
	, 0, K_8 | K_4 | K_2,   SFF, AC2(4, 4), NC // ,
	, 0, K_8 | K_4 | K_2 | K_1, SFF, KC_MINS, NC // -

	, K_E | K_Q, 0, RU_YU, NC // ю
	, K_O | K_Q, 0, RU_EE, NC // э
	, K_O | K_MZ, 0, RU_TZ, NC // ъ
	, K_O | K_Q | K_MZ, 0, RU_YO, NC // ё
	
	
	, K_E | K_O, 0, RU_E, RU_L, NC // ел
	, K_O | K_A, 0, RU_O, RU_L, NC // ол
	, K_A | K_I, 0, RU_A, RU_L, NC // ал
	, K_I | K_Y, 0, RU_I, RU_L, NC // ил
	, K_E | K_A, 0, RU_E, RU_J, NC // ей
	, K_O | K_I, 0, RU_O, RU_J, NC // ой
	, K_A | K_Y, 0, RU_A, RU_J, NC // ай
	, K_I | K_U, 0, RU_I, RU_J, NC // ий
	
	, K_O | K_Y, 0, RU_O, RU_M, NC // ом
	, K_E | K_U, 0, RU_E, RU_G, RU_O, NC // его
	, K_A | K_MZ, 0, RU_A, RU_T, RU_MZ, NC // ать
	, K_E | K_Y, 0, RU_E, RU_N, NC // ен
	, K_E | K_O | K_Y, 0, RU_E, RU_R, NC // ер
	
	, 0, 0 // end
};

const uint8_t PROGMEM left_dict[] = {
	L_S, 0,        RU_S, NC
	, L_V, 0,      RU_V, NC
	, L_K, 0,      RU_K, NC
	, L_T, 0,      RU_T, NC
	, L_D, 0,      RU_D, NC
	, L_B, 0,      RU_B, NC
	, L_P, 0,      RU_P, NC
	, L_N, 0,      RU_N, NC
	
    , 0, L_1,               SFG, SFF, AC2(3, 7), NC // %
	, 0, L_1, 	            KC_1, NC
	, 0, L_2,               SFG, SFF, AC2(3, 6), NC // $
	, 0, L_2,               KC_2, NC
	, 0, L_1 | L_2,         KC_3, NC
	, 0, L_4,               SFG, SFF, AC2(9, 4), NC // ^
	, 0, L_4,               KC_4, NC
	, 0, L_1 | L_4,         KC_5, NC
	, 0, L_2 | L_4,         KC_6, NC
	, 0, L_1 | L_2 | L_4,   KC_7, NC
	, 0, L_8,               SFG, SFF, AC3(1, 2, 6), NC // ~
	, 0, L_8,               KC_8, NC
	, 0, L_8 | L_1,         KC_9, NC
	, 0, L_8 | L_2,         KC_0, NC
	, 0, L_8 | L_4,         SFF, AC2(4, 6), NC // .
	, 0, L_8 | L_4 | L_2,   SFF, AC2(4, 4), NC // ,
	, 0, L_8 | L_4 | L_2 | L_1, SFF, KC_MINS, NC // -
	
	, L_B | L_N, 0, RU_R, NC
	, L_K | L_T, 0, RU_M, NC
	, L_B | L_P, 0, RU_L, NC
	, L_V | L_D, 0, RU_X, NC
	, L_V | L_P, 0, RU_Z, NC
	, L_K | L_N, 0, RU_G, NC
	, L_T | L_D, 0, RU_ZH, NC
	, L_S | L_N, 0, RU_W, NC
	, L_K | L_D, 0, RU_H, NC
	, L_T | L_P, 0, RU_C, NC
	, L_K | L_B, 0, RU_WW, NC
	, L_T | L_B, 0, RU_F, NC
	, L_S | L_B, 0, RU_J, NC
	
	, L_S | L_T, 0, RU_O, NC
	, L_D | L_N, 0, RU_E, NC
	, L_V | L_T, 0, RU_A, NC
	, L_P | L_N, 0, RU_I, NC
	, L_S | L_K, 0, RU_U, NC
	, L_V | L_K, 0, RU_Q, NC
	, L_D | L_B, 0, RU_Y, NC
	, L_S | L_V, 0, RU_YU, NC
	, L_D | L_P, 0, RU_EE, NC
	, L_V | L_N, 0, RU_MZ, NC
	, L_S | L_P, 0, RU_TZ, NC
	, L_D | L_P | L_N, 0, RU_YO, NC
	
	, L_B | L_P | L_N, 0,       KC_SPC, NC
	, L_D | L_B | L_P | L_N, 0, SFF, CLN, KC_SPC, NC
	, L_D | L_B | L_P, 0,       KC_MINS, NC
	, L_K | L_T | L_N, 0,       SFG, SFN, KC_1, NC // !
	, L_K | L_T | L_N, 0,       AC2(4, 6), NC // .
	, L_K | L_T | L_P, 0,       SFG, SFF, AC2(6, 3), NC // ?
	, L_K | L_T | L_P, 0,       AC2(4, 4), NC // ,
	, L_K | L_B | L_N, 0,       SFG, SFF, AC2(6, 4), NC // @
	, L_K | L_B | L_N, 0,       AC2(5, 9), NC // ;
	, L_K | L_T | L_P | L_N, 0, SFG, SFF, AC2(3, 5), NC // #
	, L_K | L_T | L_P | L_N, 0, AC2(5, 8), NC // :
	, L_V | L_T | L_D | L_P, 0, AC3(2, 5, 2), NC // №
	, L_V | L_B, 0,             SFG, SFF, AC2(6, 0), NC // <
	, L_V | L_B, 0,             SFN, KC_9, NC // (
	, L_K | L_P, 0,             SFG, SFF, AC2(6, 2), NC // >
	, L_K | L_P, 0,             SFN, KC_0, NC // )
	, L_V | L_K | L_B | L_P, 0, SFG, SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	, L_V | L_K | L_B | L_P, 0, SFN, KC_9, KC_0, NC // ()
	, L_S | L_D, 0,             SFG, SFF, AC3(1, 2, 3), NC // {
    , L_S | L_D, 0,             AC2(9, 1), NC // [
    , L_T | L_N, 0,             SFG, SFF, AC3(1, 2, 5), NC // }
	, L_T | L_N, 0,             AC2(9, 3), NC // ]
	, L_S | L_T | L_D | L_N, 0, SFG, SFF, AC3(1, 2, 3), ALF, AC3(1, 2, 5), NC // {}
	, L_S | L_T | L_D | L_N, 0, AC2(9, 1), ALF, AC2(9, 3), NC // []
	, L_T | L_D | L_N, 0,       SFG, SFF, AC2(3, 9), NC // '
	, L_T | L_D | L_N, 0,       AC2(3, 4), NC // "
	, L_V | L_K | L_T, 0,       SFG, SFF, AC2(9, 2), NC // \*
	, L_V | L_K | L_T, 0,       SFF, AC2(4, 7), NC // /
	, L_V | L_K | L_T | L_N, 0, SFF, AC2(4, 7), ALF, AC2(4, 7), NC // //
	, L_V | L_K | L_T | L_P, 0, CLN, KC_PSLS, NC // /
	, L_S | L_V | L_K, 0,       SFG, SFF, AC2(3, 8), NC // &
	, L_S | L_V | L_K, 0,       AC3(1, 2, 4), NC // |
	, L_D | L_B | L_N, 0,       SFN, KC_8, NC // *
	, L_T | L_P | L_N, 0,       SFF, KC_EQL, NC
	, L_K | L_P | L_N, 0,       SFN, KC_EQL, NC // +
	
	, L_V | L_T | L_P, 0,   CLN, KC_V, NC
	, L_N, L_8,             CLN, KC_Z, NC
	, L_P, L_4,             CLN, KC_X, NC
	
	, 0, L_BSPC,            KC_BSPC, NC
	, 0, L_ENT,             KC_ENT, NC
	, 0, L_DEL,             KC_DEL, NC
	, L_T, L_BSPC,          CLN, KC_BSPC, NC
	, L_N, L_ENT,           CLN, KC_ENT, NC
	, 0, L_8 | L_DEL,       CLN, KC_DEL, NC
	, 0, L_ENT | L_DEL,     KC_ESC, NC

	, 0, 0 // end
};

const uint8_t PROGMEM nav_dict[] = {
	L_S, 0,        CLN, KC_HOME, NC
	, L_V, 0,      CLF, KC_UP, NC
	, L_K, 0,      CLF, KC_DOWN, NC
	, L_T, 0,      CLN, KC_END, NC
	, L_D, 0,      CLF, KC_HOME, NC
	, L_B, 0,      CLF, KC_LEFT, NC
	, L_P, 0,      CLF, KC_RIGHT, NC
	, L_N, 0,      CLF, KC_END, NC
	
	, 0, L_1,      CLN, KC_A, NC
	, 0, L_2,      CLN, KC_S, NC
	, 0, L_4,      CLN, KC_C, NC
	, 0, L_8,      CLN, KC_F, NC
	
	, L_S | L_V, 0,   CLF, KC_PGUP, NC
	, L_K | L_T, 0,   CLF, KC_PGDN, NC
	, L_D | L_B, 0,   CLN, KC_LEFT, NC
	, L_P | L_N, 0,   CLN, KC_RIGHT, NC
	, L_D | L_P, 0,   CLN, KC_LBRC, NC // Ctl {
	, L_B | L_N, 0,   CLN, KC_RBRC, NC // Ctl }
	
	, L_V | L_K, 0,   CLF, KC_APP, NC
	, L_B | L_P, 0,   SFG, SFF, CLN, KC_MINS, NC
	, L_B | L_P, 0,   CLF, KC_F12, NC
	
	, L_S | L_D, 0,   CLF, KC_F2, NC
	, L_V | L_B, 0,   CLF, KC_F3, NC
	, L_K | L_P, 0,   CLF, KC_F4, NC
	, L_T | L_N, 0,   CLF, KC_F5, NC
	, L_K | L_T | L_P | L_N, 0, CLF, KC_F9, NC
	
	, L_P, L_4,       CLF, KC_PSCR, NC
	, L_N, L_8,       CLN, KC_PAUS, NC
	
	, 0, L_BSPC,      CLF, KC_TAB, NC
	, 0, L_ENT,       CLF, ALN, KC_TAB, ALH, NC
	, 0, L_DEL,       CLN, KC_TAB, NC
	
	, 0, 0 // end
};
