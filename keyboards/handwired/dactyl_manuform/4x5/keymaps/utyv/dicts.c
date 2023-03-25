#include "dicts.h"

const uint8_t PROGMEM short_dict[] = {
	BM_AL(0), 0			, RU_R, NC
	, BM_AL(1), 0		, RU_I, NC
	, BM_AL(2), 0		, RU_S, NC
	, BM_AL(3), 0		, RU_A, NC
	, BM_AL(4), 0		, RU_T, NC
	, BM_AL(5), 0		, RU_E, NC
	, BM_AL(6), 0		, RU_N, NC
	, BM_AL(7), 0		, RU_O, NC
	
	, 0, BM_AR(0)			, RU_K, NC
	, 0, BM_AR(1)			, RU_U, NC
	, 0, BM_AR(2)			, RU_L, NC
	, 0, BM_AR(3)			, RU_Q, NC
	, 0, BM_AR(4)			, RU_B, NC
	, 0, BM_AR(5)			, RU_Y, NC
	, 0, BM_AR(6)			, RU_M, NC
	, 0, BM_AR(7)			, RU_YU, NC
	
	, BM_AL(0) | BM_AL(6), 0			, RU_L, NC
	, BM_AL(1) | BM_AL(7), 0			, RU_V, NC
	, BM_AL(2) | BM_AL(6), 0			, RU_MZ, NC
	, BM_AL(3) | BM_AL(7), 0			, RU_Z, NC
	, BM_AL(4) | BM_AL(6), 0			, RU_M, NC
	, BM_AL(5) | BM_AL(7), 0			, RU_P, NC
	, BM_AL(0) | BM_AL(4), 0			, RU_Y, NC
	, BM_AL(1) | BM_AL(5), 0			, RU_G, NC
	, BM_AL(2) | BM_AL(4), 0			, RU_U, NC
	, BM_AL(3) | BM_AL(5), 0			, RU_Q, NC
	, BM_AL(0) | BM_AL(2), 0			, RU_K, NC
	, BM_AL(1) | BM_AL(3), 0			, RU_D, NC
	, BM_AL(0) | BM_AL(7), 0			, RU_X, NC
	, BM_AL(1) | BM_AL(6), 0			, RU_B, NC
	, BM_AL(2) | BM_AL(7), 0			, RU_H, NC
	, BM_AL(3) | BM_AL(6), 0			, RU_W, NC
	, BM_AL(4) | BM_AL(7), 0			, RU_C, NC
	, BM_AL(5) | BM_AL(6), 0			, RU_F, NC
	, BM_AL(0) | BM_AL(5), 0			, RU_ZH, NC
	, BM_AL(1) | BM_AL(4), 0			, RU_J, NC
	, BM_AL(2) | BM_AL(5), 0			, RU_EE, NC
	, BM_AL(3) | BM_AL(4), 0			, RU_WW, NC
	, BM_AL(0) | BM_AL(3), 0			, RU_TZ, NC
	, BM_AL(1) | BM_AL(2), 0			, RU_YU, NC
	
	, 0, BM_AR(1) | BM_AR(7)			, RU_J, NC
	, 0, BM_AR(0) | BM_AR(6)			, RU_H, NC
	, 0, BM_AR(1) | BM_AR(3)			, RU_D, NC
	, 0, BM_AR(0) | BM_AR(2)			, RU_ZH, NC
	, 0, BM_AR(3) | BM_AR(5)			, RU_EE, NC
	, 0, BM_AR(2) | BM_AR(4)			, RU_C, NC
	, 0, BM_AR(1) | BM_AR(5)			, RU_G, NC
	, 0, BM_AR(0) | BM_AR(4)			, RU_WW, NC
	, 0, BM_AR(0) | BM_AR(3)			, RU_YO, NC

	// promokl
	, SL_S | SL_T									, SR_R | SR_K | SR_A						, RU_S, RU_T, RU_R, RU_O, RU_K, RU_A, NC

	, 0x00, 0x00 // end
	
};

const uint8_t PROGMEM phonetic_dict[] = {
	BM_AL(0), 0			, KC_R, NC
	, BM_AL(1), 0		, KC_I, NC
	, BM_AL(2), 0		, KC_S, NC
	, BM_AL(3), 0		, KC_A, NC
	, BM_AL(4), 0		, KC_T, NC
	, BM_AL(5), 0		, KC_E, NC
	, BM_AL(6), 0		, KC_N, NC
	, BM_AL(7), 0		, KC_O, NC
	
	, 0, BM_AR(0)			, KC_K, NC
	, 0, BM_AR(1)			, KC_U, NC
	, 0, BM_AR(2)			, KC_L, NC
	, 0, BM_AR(3)			, KC_Q, NC
	, 0, BM_AR(4)			, KC_B, NC
	, 0, BM_AR(5)			, KC_Y, NC
	, 0, BM_AR(6)			, KC_M, NC
	
	, BM_AL(0) | BM_AL(6), 0			, KC_L, NC
	, BM_AL(1) | BM_AL(7), 0			, KC_V, NC
	, BM_AL(3) | BM_AL(7), 0			, KC_Z, NC
	, BM_AL(4) | BM_AL(6), 0			, KC_M, NC
	, BM_AL(5) | BM_AL(7), 0			, KC_P, NC
	, BM_AL(0) | BM_AL(4), 0			, KC_Y, NC
	, BM_AL(1) | BM_AL(5), 0			, KC_G, NC
	, BM_AL(2) | BM_AL(4), 0			, KC_U, NC
	, BM_AL(3) | BM_AL(5), 0			, KC_Q, NC
	, BM_AL(0) | BM_AL(2), 0			, KC_K, NC
	, BM_AL(1) | BM_AL(3), 0			, KC_D, NC
	, BM_AL(0) | BM_AL(7), 0			, KC_X, NC
	, BM_AL(1) | BM_AL(6), 0			, KC_B, NC
	, BM_AL(2) | BM_AL(7), 0			, KC_H, NC
	, BM_AL(3) | BM_AL(6), 0			, KC_W, NC
	, BM_AL(4) | BM_AL(7), 0			, KC_C, NC
	, BM_AL(5) | BM_AL(6), 0			, KC_F, NC
	, BM_AL(1) | BM_AL(4), 0			, KC_J, NC
	
	, 0, BM_AR(1) | BM_AR(7)			, KC_J, NC
	, 0, BM_AR(0) | BM_AR(6)			, KC_H, NC
	, 0, BM_AR(1) | BM_AR(3)			, KC_D, NC
	, 0, BM_AR(2) | BM_AR(4)			, KC_C, NC
	, 0, BM_AR(1) | BM_AR(5)			, RU_G, NC
	
	, 0x00, 0x00 // end
	
};

const uint8_t PROGMEM long_dict[] = {
	BM_AL(1), 0, BM_BL(6), 0			, MCR, NC
	, BM_AL(3), 0, BM_BL(5), 0			, MCR, NC
	
	, 0, 0, BM_BL(0), 0					, KC_BSPC, NC
	, 0, 0, 0, BM_BR(0)					, KC_BSPC, NC
	, 0, 0, BM_BL(1), 0					, KC_ENT, NC
	, 0, 0, 0, BM_BR(1)					, KC_ENT, NC
	, 0, 0, BM_BL(2), 0					, KC_DEL, NC
	, 0, 0, 0, BM_BR(2)					, KC_DEL, NC
	, 0, 0, BM_BL(0) | BM_BL(1), 0		, CLN, KC_BSPC, NC
	, 0, 0, 0, BM_BR(0) | BM_BR(1)		, CLN, KC_BSPC, NC
	
	, 0x00, 0x00, 0x00, 0x00 // end
	
};
	
const uint8_t PROGMEM layer_dict[] = {
	BM_AL(0), 0, 0, 0					, CLF, KC_HOME, NC
	, BM_AL(1), 0, 0, 0					, CLN, KC_HOME, NC
	, BM_AL(2), 0, 0, 0					, CLF, KC_LEFT, NC
	, BM_AL(3), 0, 0, 0					, CLF, KC_UP, NC
	, BM_AL(4), 0, 0, 0					, CLF, KC_RIGHT, NC
	, BM_AL(5), 0, 0, 0					, CLF, KC_DOWN, NC
	, BM_AL(6), 0, 0, 0					, CLF, KC_END, NC
	, BM_AL(7), 0, 0, 0					, CLN, KC_END, NC
	
	, 0x00, 0x00, 0x00, 0x00 // end
	
};