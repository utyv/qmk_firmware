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
	, K_B | K_P, 0, RU_L, NC
	, K_B | K_N, 0, RU_R, NC
	, K_K | K_T, 0, RU_M, NC
	, K_K | K_N, 0, RU_G, NC
	
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

	, K_O | K_I, 0, RU_O, RU_J, NC // ой
	, K_A | K_I, 0, RU_A, RU_L, NC // ал
	, K_O | K_Y, 0, RU_O, RU_M, NC // ом
	, K_E | K_Q, 0, RU_YU, NC // ю
	
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
	
	, 0, L_1, 	            KC_1, NC
	, 0, L_2,               KC_2, NC
	, 0, L_1 | L_2,         KC_3, NC
	, 0, L_4,               KC_4, NC
	, 0, L_1 | L_4,         KC_5, NC
	, 0, L_2 | L_4,         KC_6, NC
	, 0, L_1 | L_2 | L_4,   KC_7, NC
	, 0, L_8,               KC_8, NC
	, 0, L_8 | L_1,         KC_9, NC
	, 0, L_8 | L_2,         KC_0, NC
	
	, L_B | L_P, 0, RU_L, NC
	, L_B | L_N, 0, RU_R, NC
	, L_K | L_T, 0, RU_M, NC
	, L_K | L_N, 0, RU_G, NC
	
	, L_V | L_T | L_P, 0,   CLN, KC_V, NC
	, L_N, L_8,             CLN, KC_Z, NC
	, L_P, L_4,             CLN, KC_X, NC
	
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
	, L_B | L_N, 0,   CLN, KC_RIGHT, NC
	
	, L_V | L_K, 0,   CLF, KC_APP, NC
	
	, L_S | L_D, 0,   CLF, KC_F2, NC
	, L_V | L_B, 0,   CLF, KC_F3, NC
	, L_K | L_P, 0,   CLF, KC_F4, NC
	, L_T | L_N, 0,   CLF, KC_F5, NC
	
	, 0, 0 // end
};
