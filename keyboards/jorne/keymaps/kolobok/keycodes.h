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
#define B_S 0x00000001
#define B_V 0x00000002
#define B_K 0x00000004
#define B_T 0x00000008
#define B_D 0x00000010
#define B_B 0x00000020
#define B_P 0x00000040
#define B_N 0x00000080
#define B_L1 0x00000100
#define B_L2 0x00000200
#define B_L4 0x00000400
#define B_L8 0x00000800
#define B_BSPC 0x00001000
#define B_ENT  0x00002000
#define B_DEL  0x00004000
#define B_E 0x00010000
#define B_O 0x00020000
#define B_A 0x00040000
#define B_I 0x00080000
#define B_Y 0x00100000
#define B_U 0x00200000
#define B_Q 0x00400000
#define B_MZ 0x00800000
#define B_R8 0x01000000
#define B_R4 0x02000000
#define B_R2 0x04000000
#define B_R1 0x08000000
#define B_AST 0x10000000
#define B_SPC 0x20000000
#define B_RU 0x40000000
#define B_UND 0x80000000


// dict bits
// kolobok 
#define K_S 0x01
#define K_V 0x02
#define K_K 0x04
#define K_T 0x08
#define K_D 0x10
#define K_B 0x20
#define K_P 0x40
#define K_N 0x80


#define K_E 0x01
#define K_O 0x02
#define K_A 0x04
#define K_I 0x08
#define K_Y 0x10
#define K_U 0x20
#define K_Q 0x40
#define K_MZ 0x80

#define K_1 0x01
#define K_2 0x02
#define K_4 0x04
#define K_8 0x08

// left hand
#define L_S 0x01
#define L_V 0x02
#define L_K 0x04
#define L_T 0x08
#define L_D 0x10
#define L_B 0x20
#define L_P 0x40
#define L_N 0x80

#define L_1 0x01
#define L_2 0x02
#define L_4 0x04
#define L_8 0x08

#define L_BSPC 0x10
#define L_ENT  0x20
#define L_DEL  0x40



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
// alt hold
#define ALH KC_SCRL
// shift guard
#define SFG KC_CAPS
// undo
#define UND KC_INS
// lang swap
#define LSW KC_F13
// multitap start
#define MTS KC_F14

// alt codes
#define AC2(c1, c2) ALN, KC_KP_ ## c1, KC_KP_ ## c2 
#define AC3(c1, c2, c3) ALN, KC_KP_ ## c1, KC_KP_ ## c2, KC_KP_ ## c3 

