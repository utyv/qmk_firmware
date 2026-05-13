#pragma once
#include QMK_KEYBOARD_H

enum custom_keycodes {
	// layers
	CC_L00 = SAFE_RANGE,
	CC_L01,
	CC_L02,
	CC_L03,
	CC_L04,
	CC_L05,
	CC_L10,
	CC_L11,
	CC_L12,
	CC_L13,
	CC_L14,
	CC_L15, 
	CC_L20, 
	CC_L21, 
	CC_L22, 
	CC_L23, 
	CC_L24, 
	CC_L25, 
	CC_L31, 
	CC_L32, 
	CC_L33, 
	
	CC_R00, 
	CC_R01,
	CC_R02,
	CC_R03,
	CC_R04,
	CC_R05,
	CC_R10,
	CC_R11,
	CC_R12,
	CC_R13,
	CC_R14,
	CC_R15, 
	CC_R20, 
	CC_R21, 
	CC_R22, 
	CC_R23, 
	CC_R24, 
	CC_R25, 
	CC_R31, 
	CC_R32, 
	CC_R33
	
};

// chorde bits
#define K_L00 0x0000000000000001ULL
#define K_L01 0x0000000000000002ULL
#define K_L02 0x0000000000000004ULL
#define K_L03 0x0000000000000008ULL
#define K_L04 0x0000000000000010ULL
#define K_L05 0x0000000000000020ULL
#define K_L10 0x0000000000000040ULL
#define K_L11 0x0000000000000080ULL
#define K_L12 0x0000000000000100ULL
#define K_L13 0x0000000000000200ULL
#define K_L14 0x0000000000000400ULL
#define K_L15 0x0000000000000800ULL
#define K_L20 0x0000000000001000ULL
#define K_L21 0x0000000000002000ULL
#define K_L22 0x0000000000004000ULL
#define K_L23 0x0000000000008000ULL
#define K_L24 0x0000000000010000ULL
#define K_L25 0x0000000000020000ULL
#define K_L31 0x0000000000040000ULL
#define K_L32 0x0000000000080000ULL
#define K_L33 0x0000000000100000ULL

#define K_R00 0x0000000000200000ULL
#define K_R01 0x0000000000400000ULL
#define K_R02 0x0000000000800000ULL
#define K_R03 0x0000000001000000ULL
#define K_R04 0x0000000002000000ULL
#define K_R05 0x0000000004000000ULL
#define K_R10 0x0000000008000000ULL
#define K_R11 0x0000000010000000ULL
#define K_R12 0x0000000020000000ULL
#define K_R13 0x0000000040000000ULL
#define K_R14 0x0000000080000000ULL
#define K_R15 0x0000000100000000ULL
#define K_R20 0x0000000200000000ULL
#define K_R21 0x0000000400000000ULL
#define K_R22 0x0000000800000000ULL
#define K_R23 0x0000001000000000ULL
#define K_R24 0x0000002000000000ULL
#define K_R25 0x0000004000000000ULL
#define K_R31 0x0000008000000000ULL
#define K_R32 0x0000010000000000ULL
#define K_R33 0x0000020000000000ULL

#define K_RUS 0x0000040000000000ULL
#define K_ENG 0x0000080000000000ULL
#define K_SFN 0x0000100000000000ULL
#define K_SFF 0x0000200000000000ULL
#define K_CMD 0x0000400000000000ULL

#define THUMB_MASK (K_R31 | K_R32 | K_R33)
#define LEFT_MASK (K_L00 | K_L01 | K_L02 | K_L03 | K_L04 | K_L05 | K_L10 | K_L11 | K_L12 | K_L13 | K_L14 | K_L15 | K_L20 | K_L21 | K_L22 | K_L23 | K_L24 | K_L25)
#define RIGHT_MASK (K_R00 | K_R01 | K_R02 | K_R03 | K_R04 | K_R05 | K_R10 | K_R11 | K_R12 | K_R13 | K_R14 | K_R15 | K_R20 | K_R21 | K_R22 | K_R23 | K_R24 | K_R25)

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

#define RU_DOT KC_SLSH


// control codes in dictionaries
// next chorde
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
// win on
#define WNN KC_LGUI
// win off
#define WNF KC_RGUI
// command
#define CMD 0x01

// after CMD expected some of the following:

// alt hold
#define ALH 0x01
// undo
#define UND 0x02
// lang swap
#define LSW 0x03
// multitap start
#define MTS 0x04
// eng on
#define ENG 0x05
// rus on
#define RUS 0x06
// WinCompose
#define CPS 0x09


// chorde bits in dict are represented as 6 bytes
#define CHORDE(c) (uint8_t) ((c)), (uint8_t) ((c) >> 8), (uint8_t) ((c) >> 16), (uint8_t) ((c) >> 24), (uint8_t) ((c) >> 32), (uint8_t) ((c) >> 40)



// alt codes
#define AC2(c1, c2) ALN, KC_KP_ ## c1, KC_KP_ ## c2 
#define AC3(c1, c2, c3) ALN, KC_KP_ ## c1, KC_KP_ ## c2, KC_KP_ ## c3 