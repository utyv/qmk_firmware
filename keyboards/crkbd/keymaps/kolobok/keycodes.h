#pragma once
#include QMK_KEYBOARD_H


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


// chord bits
// left
#define B_S 0x0001
#define B_V 0x0002
#define B_K 0x0004
#define B_T 0x0008
#define B_D 0x0010
#define B_B 0x0020
#define B_P 0x0040
#define B_N 0x0080
#define B_L1 0x0100
#define B_L2 0x0200
#define B_L4 0x0400
#define B_L8 0x0800
#define B_BSPC 0x1000
#define B_ENT  0x2000
#define B_DEL  0x4000

// right
#define B_E 0x0001
#define B_O 0x0002
#define B_A 0x0004
#define B_I 0x0008
#define B_Y 0x0010
#define B_U 0x0020
#define B_Q 0x0040
#define B_MZ 0x0080
#define B_R8 0x0100
#define B_R4 0x0200
#define B_R2 0x0400
#define B_R1 0x0800
#define B_UND 0x1000
#define B_SPC 0x8000


// dict bits
// alphas lower byte
// left side
#define K_S 0x01
#define K_V 0x02
#define K_K 0x04
#define K_T 0x08
#define K_D 0x10
#define K_B 0x20
#define K_P 0x40
#define K_N 0x80

// rght side
#define K_E 0x01
#define K_O 0x02
#define K_A 0x04
#define K_I 0x08
#define K_Y 0x10
#define K_U 0x20
#define K_Q 0x40
#define K_MZ 0x80

// higher byte
// both sides 
#define K_1 0x01
#define K_2 0x02
#define K_4 0x04
#define K_8 0x08
#define K_BSPC 0x10
#define K_ENT  0x20
#define K_DEL  0x40
#define K_SPC  0x80


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
// phonetic on
#define PHN 0x05
// phonetic off
#define PHF 0x06
// one hand on
#define OHN 0x07
// one hand off
#define OHF 0x08






// alt codes
#define AC2(c1, c2) ALN, KC_KP_ ## c1, KC_KP_ ## c2 
#define AC3(c1, c2, c3) ALN, KC_KP_ ## c1, KC_KP_ ## c2, KC_KP_ ## c3 