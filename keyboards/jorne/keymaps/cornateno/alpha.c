#include "alpha.h"

const uint8_t PROGMEM alpha_dict[] = {
	BM_AL(AL_0), 0			, RU_R, NC
	, BM_AL(AL_1), 0		, RU_I, NC
	, BM_AL(AL_2), 0		, RU_S, NC
	, BM_AL(AL_3), 0		, RU_A, NC
	, BM_AL(AL_4), 0		, RU_T, NC
	, BM_AL(AL_5), 0		, RU_E, NC
	, BM_AL(AL_6), 0		, RU_N, NC
	, BM_AL(AL_7), 0		, RU_O, NC
	
	, 0, BM_AR(AR_0)			, RU_K, NC
	, 0, BM_AR(AR_1)			, RU_U, NC
	, 0, BM_AR(AR_2)			, RU_L, NC
	, 0, BM_AR(AR_3)			, RU_Q, NC
	, 0, BM_AR(AR_4)			, RU_B, NC
	, 0, BM_AR(AR_5)			, RU_Y, NC
	, 0, BM_AR(AR_6)			, RU_M, NC
	, 0, BM_AR(AR_7)			, RU_YU, NC
	
	, BM_AL(AL_0) + BM_AL(AL_6), 0			, RU_L, NC
	, BM_AL(AL_1) + BM_AL(AL_7), 0			, RU_V, NC
	, BM_AL(AL_2) + BM_AL(AL_6), 0			, RU_MZ, NC
	, BM_AL(AL_3) + BM_AL(AL_7), 0			, RU_Z, NC
	, BM_AL(AL_4) + BM_AL(AL_6), 0			, RU_M, NC
	, BM_AL(AL_5) + BM_AL(AL_7), 0			, RU_P, NC
	, BM_AL(AL_0) + BM_AL(AL_4), 0			, RU_Y, NC
	, BM_AL(AL_1) + BM_AL(AL_5), 0			, RU_G, NC
	, BM_AL(AL_2) + BM_AL(AL_4), 0			, RU_U, NC
	, BM_AL(AL_3) + BM_AL(AL_5), 0			, RU_Q, NC
	, BM_AL(AL_0) + BM_AL(AL_2), 0			, RU_K, NC
	, BM_AL(AL_1) + BM_AL(AL_3), 0			, RU_D, NC
	, BM_AL(AL_0) + BM_AL(AL_7), 0			, RU_X, NC
	, BM_AL(AL_1) + BM_AL(AL_6), 0			, RU_B, NC
	, BM_AL(AL_2) + BM_AL(AL_7), 0			, RU_H, NC
	, BM_AL(AL_3) + BM_AL(AL_6), 0			, RU_W, NC
	, BM_AL(AL_4) + BM_AL(AL_7), 0			, RU_C, NC
	, BM_AL(AL_5) + BM_AL(AL_6), 0			, RU_F, NC
	, BM_AL(AL_0) + BM_AL(AL_5), 0			, RU_ZH, NC
	, BM_AL(AL_1) + BM_AL(AL_4), 0			, RU_J, NC
	, BM_AL(AL_2) + BM_AL(AL_5), 0			, RU_EE, NC
	, BM_AL(AL_3) + BM_AL(AL_4), 0			, RU_WW, NC
	, BM_AL(AL_0) + BM_AL(AL_3), 0			, RU_TZ, NC
	, BM_AL(AL_1) + BM_AL(AL_2), 0			, RU_YU, NC
	
	, 0, BM_AR(AR_1) + BM_AR(AR_7)			, RU_J, NC
	, 0, BM_AR(AR_0) + BM_AR(AR_6)			, RU_H, NC
	, 0, BM_AR(AR_1) + BM_AR(AR_3)			, RU_D, NC
	, 0, BM_AR(AR_0) + BM_AR(AR_2)			, RU_ZH, NC
	, 0, BM_AR(AR_3) + BM_AR(AR_5)			, RU_EE, NC
	, 0, BM_AR(AR_2) + BM_AR(AR_4)			, RU_C, NC
	, 0, BM_AR(AR_1) + BM_AR(AR_5)			, RU_G, NC
	, 0, BM_AR(AR_0) + BM_AR(AR_4)			, RU_WW, NC
	, 0, BM_AR(AR_0) + BM_AR(AR_3)			, RU_YO, NC
	
	, BM_AL(AL_2) + BM_AL(AL_3), 0			, RU_S, RU_A, NC
	, BM_AL(AL_4) + BM_AL(AL_5), 0			, RU_T, RU_E, NC
	, BM_AL(AL_6) + BM_AL(AL_7), 0			, RU_N, RU_O, NC
	
	, 0, BM_AR(AR_0) + BM_AR(AR_1)			, RU_K, RU_U, NC
	, 0, BM_AR(AR_2) + BM_AR(AR_3)			, RU_L, RU_Q, NC
	, 0, BM_AR(AR_4) + BM_AR(AR_5)			, RU_B, RU_Y, NC

	, BM_AL(SL_S) + BM_AL(SL_T)									, BM_AR(SR_R) + BM_AR(SR_K) + BM_AR(SR_A)						, RU_S, RU_T, RU_R, RU_O, RU_K, RU_A, NC

	, 0x00, 0x00 // end
	
};

