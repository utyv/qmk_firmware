#pragma once
#include QMK_KEYBOARD_H

enum keycodes {
	AL_0 = SAFE_RANGE
	, AL_1
	, AL_2
	, AL_3
	, AL_4
	, AL_5
	, AL_6
	, AL_7
	, AR_0
	, AR_1
	, AR_2
	, AR_3
	, AR_4
	, AR_5
	, AR_6
	, AR_7
	, BL_0
	, BL_1
	, BL_2
	, BL_3
	, BL_4
	, BL_5
	, BL_6
	, BL_7
	, BR_0
	, BR_1
	, BR_2
	, BR_3
	, BR_4
	, BR_5
	, BR_6
	, BR_7
	, CLL
	, SFL
	, LRL
	, LRR
	, SFR
	, CLR
};

// bit maps
#define BM_AL(code) (1 << (AL_ ## code - AL_0))
#define BM_AR(code) (1 << (AR_ ## code - AR_0))
#define BM_BL(code) (1 << (BL_ ## code - BL_0))
#define BM_BR(code) (1 << (BR_ ## code - BR_0))
#define BM(code) (1ul << (code - AL_0))

// russian letters 
#define RU_A KC_F
#define RU_B KC_COMM
#define RU_V KC_D
#define RU_G KC_U
#define RU_D KC_L
#define RU_E KC_T
#define RU_YO KC_GRV
#define RU_ZH KC_SCLN
#define RU_Z KC_P
#define RU_I KC_B
#define RU_J KC_Q
#define RU_K KC_R
#define RU_L KC_K
#define RU_M KC_V
#define RU_N KC_Y
#define RU_O KC_J
#define RU_P KC_G
#define RU_R KC_H
#define RU_S KC_C
#define RU_T KC_N
#define RU_U KC_E
#define RU_F KC_A
#define RU_H KC_LBRC
#define RU_C KC_W
#define RU_X KC_X
#define RU_W KC_I
#define RU_WW KC_O
#define RU_TZ KC_RBRC
#define RU_Y KC_S
#define RU_MZ KC_M
#define RU_EE KC_QUOT
#define RU_YU KC_DOT
#define RU_Q KC_Z

// STENO LETTERS (promokl)
#define SL_V BM_AL(1)
#define SL_S BM_AL(0)
#define SL_T BM_AL(2)
#define SL_P BM_AL(3)
#define SL_R BM_AL(5)
#define SL_M BM_AL(4)
#define SL_K BM_AL(6)
#define SL_L BM_AL(7)
#define SR_V BM_AR(1)
#define SR_S BM_AR(0)
#define SR_T BM_AR(2)
#define SR_R BM_AR(3)
#define SR_N BM_AR(5)
#define SR_K BM_AR(4)
#define SR_A BM_AR(6)
#define SR_I BM_AR(7)



// control codes in dictionaries
// next chord
#define NC KC_NO
// shift on
#define SFN KC_LSFT	
// shift off
#define SFF KC_RSFT
// ctrl on
#define CLN KC_LCTL
// ctrl off
#define CLF KC_RCTL
// alt on
#define ALN KC_LALT
// alt off
#define ALF KC_RALT
// shift guard
#define SFG KC_CAPS
// macros
#define MCR KC_INS

// alt codes
#define AC2(c1, c2) ALN, KC_KP_ ## c1, KC_KP_ ## c2 
#define AC3(c1, c2, c3) ALN, KC_KP_ ## c1, KC_KP_ ## c2, KC_KP_ ## c3 
