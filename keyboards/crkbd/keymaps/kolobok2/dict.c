#include "dict.h"
#include "keycodes.h"

const uint8_t PROGMEM dict[] = {

	// commands
	
	  CHORDE(K_CMD | K_SFF | K_L15),             CLF, SFF, KC_BSPC, NC // Backspace 
	, CHORDE(K_CMD | K_SFN | K_L15),             CLF, SFN, KC_BSPC, NC // Sft Backspace 
	, CHORDE(K_CMD | K_SFF | K_L05),             CLF, SFF, KC_ENT, NC // Enter 
	, CHORDE(K_CMD | K_SFN | K_L05),             CLF, SFN, KC_ENT, NC // Sft Enter 
	, CHORDE(K_CMD | K_SFF | K_L20),             CLF, SFF, KC_DEL, NC // Del 
	, CHORDE(K_CMD | K_SFN | K_L20),             CLF, SFN, KC_DEL, NC // Sft Del 
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L15),     SFF, CLN, KC_BSPC, NC // Ctl Backspace 
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L15),     CLN, SFN, KC_BSPC, NC // Ctl Sft Backspace 
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L05),     SFF, CLN, KC_ENT, NC // Ctl Enter 
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L05),     CLN, SFN, KC_ENT, NC // Ctl Sft Enter	
	
	, CHORDE(K_CMD | K_SFF | K_L25),             CLF, SFF, KC_ESC, NC // Esc

	, CHORDE(K_CMD | K_SFF | K_R10),             CLF, SFF, CMD, UND, NC // Chorde undo 
	, CHORDE(K_CMD | K_SFN | K_R10),             CLF, SFF, CMD, UND, NC // Chorde undo 
	
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L14),     CLN, SFF, KC_HOME, NC // Ctl Home
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L14),     CLN, SFN, KC_HOME, NC // Ctl Sft Home
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L13),     CLF, SFF, KC_UP, NC // Up
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L13),     CLF, SFN, KC_UP, NC // Sft Up
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L12),     CLF, SFF, KC_DOWN, NC // Down
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L12),     CLF, SFN, KC_DOWN, NC // Sft Down
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L11),     SFF, CLN, KC_END, NC // Ctl End
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L11),     CLN, SFN, KC_END, NC // Ctl Sft End

	, CHORDE(K_CMD | K_L31 | K_SFF | K_L04),     CLF, SFF, KC_HOME, NC // Home
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L04),     CLF, SFN, KC_HOME, NC // Sft Home
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L03),     CLF, SFF, KC_LEFT, NC // Left
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L03),     CLF, SFN, KC_LEFT, NC // Sft Left
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L02),     CLF, SFF, KC_RIGHT, NC // Right
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L02),     CLF, SFN, KC_RIGHT, NC // Sft Right
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L01),     CLF, SFF, KC_END, NC // End
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L01),     CLF, SFN, KC_END, NC // Sft End

	, CHORDE(K_CMD | K_L31 | K_SFF | K_L14 | K_L13),     CLF, SFF, KC_PGUP, NC // PgUp
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L14 | K_L13),     CLF, SFN, KC_PGUP, NC // Sft PgUp
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L12 | K_L11),     CLF, SFF, KC_PGDN, NC // PgDn
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L12 | K_L11),     CLF, SFN, KC_PGDN, NC // Sft PgDn
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L04 | K_L03),     SFF, CLN, KC_LEFT, NC // Ctl Left
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L04 | K_L03),     CLN, SFN, KC_LEFT, NC // Ctl Sft Left
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L02 | K_L01),     SFF, CLN, KC_RIGHT, NC // Ctl Right
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L02 | K_L01),     CLN, SFN, KC_RIGHT, NC // Ctl Sft Right

	, CHORDE(K_CMD | K_L31 | K_SFF | K_L13 | K_L12),     CLF, SFF, KC_APP, NC // Menu
	
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L10),     CLF, SFF, KC_TAB, NC // Tab
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L10),     CLF, SFN, KC_TAB, NC // Sft Tab
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L00),     CLF, SFF, ALN, KC_TAB, CMD, ALH, NC // Alt Tab, switch window
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L00),     CLF, SFN, ALN, KC_TAB, CMD, ALH, NC // Alt Sft Tab, switch window reverse
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L20),     SFF, CLN, KC_TAB, NC // Ctl Tab, switch tab
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L20),     CLN, SFN, KC_TAB, NC // Ctl Sft Tab, switch tab reverse

	, CHORDE(K_CMD | K_L31 | K_SFF | K_L24),     SFF, CLN, KC_Z, NC // Ctl z, undo
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L23),     SFF, CLN, KC_X, NC // Ctl x, cut
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L22),     SFF, CLN, KC_C, NC // Ctl c, copy
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L21),     SFF, CLN, KC_V, NC // Ctl v, paste
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L21),     SFN, CLN, KC_V, NC // Ctl Sft v, special paste
	
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L24 | K_L04),         SFF, CLN, KC_A, NC // Ctl a, select all
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L23 | K_L03),         SFF, CLN, KC_S, NC // Ctl s, save
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L22 | K_L02),         SFF, CLF, KC_PSCR, NC // PrnScr, screen shot
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L21 | K_L01),         SFF, CLN, KC_F, NC // Ctl f, find
	
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L12 | K_L01),         CLF, SFF, CMD, MTS, NC // multi tap start
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L12 | K_L01),         CLF, SFF, CMD, MTS, NC // multi tap start

    , CHORDE(K_CMD | K_L31 | K_SFF | K_L04 | K_L01),         CLF, SFF, CMD, LSW, CMD, RUS, NC // lang rus
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L14 | K_L11),         CLF, SFF, CMD, LSW, CMD, ENG, NC // lang eng
	
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L04 | K_L02),                 SFF, CLN, KC_LBRC, NC // Ctl {
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L03 | K_L01),                 SFF, CLN, KC_RBRC, NC // Ctl }
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L24 | K_L23),                 SFF, CLN, KC_PAUS, NC // Ctl Pause
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L03 | K_L02 | K_L01),         SFF, CLN, KC_SPC, NC // Ctl Space
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L13 | K_L12 | K_L11 | K_L02), SFF, CLN, KC_PSLS, NC // 1s to comment
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L13 | K_L12 | K_L11 | K_L02), SFN, CLN, KC_PSLS, NC // 1s to uncomment
	
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L14 | K_L04),                 CLF, SFF, KC_F2, NC // F2
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L13 | K_L03),                 CLF, SFF, KC_F3, NC // F3
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L13 | K_L03),                 CLF, SFN, KC_F3, NC // Sft F3
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L12 | K_L02),                 CLF, SFF, KC_F4, NC // F4
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L11 | K_L01),                 CLF, SFF, KC_F5, NC // F5
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L12 | K_L11 | K_L02 | K_L01), CLF, SFF, KC_F9, NC // F9
	
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L03 | K_L02),                 CLF, SFF, KC_F12, NC // F12
	, CHORDE(K_CMD | K_L31 | K_SFN | K_L03 | K_L02),                 SFF, CLN, KC_MINS, NC // 1s un- F12

	, CHORDE(K_CMD | K_L31 | K_SFF | K_L13 | K_L12 | K_L11),         SFF, CLN, ALN, KC_PAUS, NC // MSTSC window

	, CHORDE(K_CMD | K_L31 | K_SFF | K_L12 | K_L03 | K_L01),         SFF, CLN, ALN, KC_P, NC // 1s method lookup
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L13 | K_L11 | K_L02),         SFF, CLN, KC_F7, NC // 1s syntax check
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L02 | K_L23 | K_L21),         SFF, CLN, ALN, KC_M, NC // 1s tree search
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L14 | K_L01),                 SFF, CLN, KC_T, NC // 1s find in the tree

	, CHORDE(K_CMD | K_L31 | K_SFF | K_L13 | K_L12 | K_L03 | K_L02), SFF, CLN, KC_B, NC // text editor bold
	, CHORDE(K_CMD | K_L31 | K_SFF | K_L12 | K_L03),                 SFF, CLN, KC_I, NC // text editor italic

	, CHORDE(K_CMD | K_L31 | K_SFF | K_R01),                         CLF, SFF, KC_INS, NC // INS

	// symbols
	
	, CHORDE(K_RUS | K_SFF | K_R32),                  CLF, SFF, KC_SPC, NC // Space
	, CHORDE(K_RUS | K_SFN | K_R32),                  CLF, SFN, KC_SPC, NC // Sft Space
	, CHORDE(K_RUS | K_SFF | K_R33),                  CLF, SFF, RU_DOT, NC // .
	, CHORDE(K_RUS | K_SFN | K_R33),                  CLF, SFF, RU_DOT, NC // .
	, CHORDE(K_RUS | K_SFF | K_R31),                  CLF, SFN, RU_DOT, KC_SPC, NC // ,
	, CHORDE(K_RUS | K_SFN | K_R31),                  CLF, SFN, RU_DOT, KC_SPC, NC // ,
	, CHORDE(K_RUS | K_SFF | K_R31 | K_R32), 	      CLF, SFF, KC_SPC, KC_EQL, KC_SPC, NC // =
	, CHORDE(K_RUS | K_SFN | K_R31 | K_R32), 	      CLF, SFF, KC_SPC, KC_EQL, KC_SPC, NC // =
	, CHORDE(K_RUS | K_SFF | K_R32 | K_R33),          CLF, SFN, KC_9, SFF, NC // (
	, CHORDE(K_RUS | K_SFN | K_R32 | K_R33),          CLF, SFN, KC_9, SFF, NC // (

	, CHORDE(K_ENG | K_SFF | K_R32),                  CLF, SFF, KC_SPC, NC // Space
	, CHORDE(K_ENG | K_SFN | K_R32),                  CLF, SFN, KC_SPC, NC // Sft Space
	, CHORDE(K_ENG | K_SFF | K_R33),                  CLF, SFF, KC_DOT, NC // .
	, CHORDE(K_ENG | K_SFN | K_R33),                  CLF, SFF, KC_DOT, NC // .
	, CHORDE(K_ENG | K_SFF | K_R31),                  CLF, SFF, KC_COMM, KC_SPC, NC // ,
	, CHORDE(K_ENG | K_SFN | K_R31),                  CLF, SFF, KC_COMM, KC_SPC, NC // ,
	, CHORDE(K_ENG | K_SFF | K_R31 | K_R32),          CLF, SFF, KC_SPC, KC_EQL, KC_SPC, NC // =
	, CHORDE(K_ENG | K_SFN | K_R31 | K_R32),          CLF, SFF, KC_SPC, KC_EQL, KC_SPC, NC // =
	, CHORDE(K_ENG | K_SFF | K_R32 | K_R33),          CLF, SFN, KC_9, SFF, NC // (
	, CHORDE(K_ENG | K_SFN | K_R32 | K_R33),          CLF, SFN, KC_9, SFF, NC // (
	
	, CHORDE(K_RUS | K_SFF | K_L24),                  CLF, SFF, KC_1, NC // 1
	, CHORDE(K_RUS | K_SFF | K_L23),                  CLF, SFF, KC_2, NC // 2
	, CHORDE(K_RUS | K_SFF | K_L24 | K_L23),          CLF, SFF, KC_3, NC // 3
	, CHORDE(K_RUS | K_SFF | K_L22),                  CLF, SFF, KC_4, NC // 4
	, CHORDE(K_RUS | K_SFF | K_L24 | K_L22),          CLF, SFF, KC_5, NC // 5
	, CHORDE(K_RUS | K_SFF | K_L23 | K_L22),          CLF, SFF, KC_6, NC // 6
	, CHORDE(K_RUS | K_SFF | K_L24 | K_L23 | K_L22),  CLF, SFF, KC_7, NC // 7
	, CHORDE(K_RUS | K_SFF | K_L21),                  CLF, SFF, KC_8, NC // 8
	, CHORDE(K_RUS | K_SFF | K_L24 | K_L21),          CLF, SFF, KC_9, NC // 9
	, CHORDE(K_RUS | K_SFF | K_L23 | K_L21),          CLF, SFF, KC_0, NC // 0
	, CHORDE(K_RUS | K_SFF | K_L22 | K_L21),          CLF, SFF, RU_DOT, NC // .
	, CHORDE(K_RUS | K_SFF | K_L23 | K_L22 | K_L21),  CLF, SFN, RU_DOT, NC // ,
	, CHORDE(K_RUS | K_SFF | K_L24 | K_L22 | K_L21),  CLF, SFN, KC_3, NC // №
	, CHORDE(K_RUS | K_SFF | K_L24 | K_L23 | K_L22 | K_L21),  CLF, SFF, KC_MINS, NC // -
	, CHORDE(K_RUS | K_SFN | K_L21),                  CLF, SFF, KC_EQL, NC // =

	, CHORDE(K_ENG | K_SFF | K_L24),                  CLF, SFF, KC_1, NC // 1
	, CHORDE(K_ENG | K_SFF | K_L23),                  CLF, SFF, KC_2, NC // 2
	, CHORDE(K_ENG | K_SFF | K_L24 | K_L23),          CLF, SFF, KC_3, NC // 3
	, CHORDE(K_ENG | K_SFF | K_L22),                  CLF, SFF, KC_4, NC // 4
	, CHORDE(K_ENG | K_SFF | K_L24 | K_L22),          CLF, SFF, KC_5, NC // 5
	, CHORDE(K_ENG | K_SFF | K_L23 | K_L22),          CLF, SFF, KC_6, NC // 6
	, CHORDE(K_ENG | K_SFF | K_L24 | K_L23 | K_L22),  CLF, SFF, KC_7, NC // 7
	, CHORDE(K_ENG | K_SFF | K_L21),                  CLF, SFF, KC_8, NC // 8
	, CHORDE(K_ENG | K_SFF | K_L24 | K_L21),          CLF, SFF, KC_9, NC // 9
	, CHORDE(K_ENG | K_SFF | K_L23 | K_L21),          CLF, SFF, KC_0, NC // 0
	, CHORDE(K_ENG | K_SFF | K_L22 | K_L21),          CLF, SFF, KC_DOT, NC // .
	, CHORDE(K_ENG | K_SFF | K_L23 | K_L22 | K_L21),  CLF, SFF, KC_COMM, NC // ,
	, CHORDE(K_ENG | K_SFF | K_L24 | K_L22 | K_L21),  CLF, CMD, LSW, SFN, KC_3, CMD, LSW, NC // №
	, CHORDE(K_ENG | K_SFF | K_L24 | K_L23 | K_L22 | K_L21),  CLF, SFF, KC_MINS, NC // -
	, CHORDE(K_ENG | K_SFN | K_L21),                  CLF, SFF, KC_EQL, NC // =

	, CHORDE(K_RUS | K_SFF | K_R21), 	              CLF, SFF, KC_EQL, NC // =
	, CHORDE(K_RUS | K_SFN | K_R21), 	              CLF, SFN, KC_1, NC // !
	, CHORDE(K_RUS | K_SFF | K_R22),                  CLF, SFN, KC_9, NC // (
	, CHORDE(K_RUS | K_SFN | K_R22),                  CLF, SFF, CMD, LSW, SFN, KC_COMM, CMD, LSW, NC // <
	, CHORDE(K_RUS | K_SFF | K_R23),                  CLF, SFN, KC_0, NC // )
	, CHORDE(K_RUS | K_SFN | K_R23),                  CLF, SFF, CMD, LSW, SFN, KC_DOT, CMD, LSW, NC // >
	, CHORDE(K_RUS | K_SFF | K_R24),            	  CLF, SFN, KC_8, NC // *
	, CHORDE(K_RUS | K_SFN | K_R24),            	  CLF, SFF, CMD, LSW, SFN, KC_6, CMD, LSW, NC // ^
	, CHORDE(K_RUS | K_SFF | K_R21 | K_R22),          CLF, SFN, KC_EQL, NC // +
	, CHORDE(K_RUS | K_SFN | K_R21 | K_R22),          CLF, SFN, KC_7, NC // ?
	, CHORDE(K_RUS | K_SFF | K_R22 | K_R23),          CLF, SFN, KC_9, KC_0, NC // ()
	, CHORDE(K_RUS | K_SFN | K_R22 | K_R23),          CLF, SFF, CMD, LSW, SFN, KC_COMM, KC_DOT, CMD, LSW, NC // <>
    , CHORDE(K_RUS | K_SFF | K_R23 | K_R24),          CLF, SFN, KC_5, NC // %
    , CHORDE(K_RUS | K_SFN | K_R23 | K_R24),          CLF, SFF, CMD, LSW, SFF, KC_GRV, CMD, LSW, NC // `
	, CHORDE(K_RUS | K_SFF | K_R21 | K_R24),          CLF, SFN, KC_2, NC // "
	, CHORDE(K_RUS | K_SFN | K_R21 | K_R24),          CLF, SFF, CMD, LSW, KC_QUOT, CMD, LSW, NC // '
	, CHORDE(K_RUS | K_SFF | K_R21 | K_R23),          CLF, SFF, CMD, LSW, SFN, KC_2, CMD, LSW, NC // @
	, CHORDE(K_RUS | K_SFN | K_R21 | K_R23),          CLF, SFF, CMD, LSW, SFN, KC_GRV, CMD, LSW, NC // ~
	, CHORDE(K_RUS | K_SFF | K_R22 | K_R24),          CLF, SFF, CMD, LSW, SFN, KC_4, CMD, LSW, NC // $
	, CHORDE(K_RUS | K_SFF | K_R21 | K_R22 | K_R23),  CLF, SFN, KC_BSLS, NC // /
	, CHORDE(K_RUS | K_SFN | K_R21 | K_R22 | K_R23),  CLF, SFF, KC_BSLS, NC // \*
	, CHORDE(K_RUS | K_SFF | K_R22 | K_R23 | K_R24),  CLF, SFF, CMD, LSW, SFN, KC_BSLS, CMD, LSW, NC // |
	, CHORDE(K_RUS | K_SFN | K_R22 | K_R23 | K_R24),  CLF, SFF, CMD, LSW, SFN, KC_7, CMD, LSW, NC // &
    , CHORDE(K_RUS | K_SFF | K_R21 | K_R22 | K_R24),  CLF, SFF, CMD, LSW, KC_LBRC, CMD, LSW, NC // [
    , CHORDE(K_RUS | K_SFN | K_R21 | K_R22 | K_R24),  CLF, SFF, CMD, LSW, SFN, KC_LBRC, CMD, LSW, NC // {
    , CHORDE(K_RUS | K_SFF | K_R21 | K_R23 | K_R24),  CLF, SFF, CMD, LSW, KC_RBRC, CMD, LSW, NC // ]
    , CHORDE(K_RUS | K_SFN | K_R21 | K_R23 | K_R24),  CLF, SFF, CMD, LSW, SFN, KC_RBRC, CMD, LSW, NC // }
	, CHORDE(K_RUS | K_SFF | K_R21 | K_R22 | K_R23 | K_R24), CLF, SFF, CMD, LSW, KC_LBRC, KC_RBRC, CMD, LSW, NC // []
	, CHORDE(K_RUS | K_SFN | K_R21 | K_R22 | K_R23 | K_R24), CLF, SFF, CMD, LSW, SFN, KC_LBRC, KC_RBRC, CMD, LSW, NC // {}
	
	, CHORDE(K_ENG | K_SFF | K_R21), 	              CLF, SFF, KC_EQL, NC // =
	, CHORDE(K_ENG | K_SFN | K_R21), 	              CLF, SFN, KC_1, NC // !
	, CHORDE(K_ENG | K_SFF | K_R22),                  CLF, SFN, KC_9, NC // (
	, CHORDE(K_ENG | K_SFN | K_R22),                  CLF, SFN, KC_COMM, NC // <
	, CHORDE(K_ENG | K_SFF | K_R23),                  CLF, SFN, KC_0, NC // )
	, CHORDE(K_ENG | K_SFN | K_R23),                  CLF, SFN, KC_DOT, NC // >
	, CHORDE(K_ENG | K_SFF | K_R24),            	  CLF, SFN, KC_8, NC // *
	, CHORDE(K_ENG | K_SFN | K_R24),            	  CLF, SFN, KC_6, NC // ^
	, CHORDE(K_ENG | K_SFF | K_R21 | K_R22),          CLF, SFN, KC_EQL, NC // +
	, CHORDE(K_ENG | K_SFN | K_R21 | K_R22),          CLF, SFN, KC_SLSH, NC // ?
	, CHORDE(K_ENG | K_SFF | K_R22 | K_R23),          CLF, SFN, KC_9, KC_0, NC // ()
	, CHORDE(K_ENG | K_SFN | K_R22 | K_R23),          CLF, SFN, KC_COMM, KC_DOT, NC // <>
    , CHORDE(K_ENG | K_SFF | K_R23 | K_R24),          CLF, SFN, KC_5, NC // %
    , CHORDE(K_ENG | K_SFN | K_R23 | K_R24),          CLF, SFF, KC_GRV,  NC // `
	, CHORDE(K_ENG | K_SFF | K_R21 | K_R24),          CLF, SFN, KC_QUOT, NC // "
	, CHORDE(K_ENG | K_SFN | K_R21 | K_R24),          CLF, SFF, KC_QUOT, NC // '
	, CHORDE(K_ENG | K_SFF | K_R21 | K_R23),          CLF, SFN, KC_2, NC // @
	, CHORDE(K_ENG | K_SFN | K_R21 | K_R23),          CLF, SFN, KC_GRV, NC // ~
	, CHORDE(K_ENG | K_SFF | K_R22 | K_R24),          CLF, SFN, KC_4, NC // $
	, CHORDE(K_ENG | K_SFF | K_R21 | K_R22 | K_R23),  CLF, SFF, KC_SLSH, NC // /
	, CHORDE(K_ENG | K_SFN | K_R21 | K_R22 | K_R23),  CLF, SFF, KC_BSLS, NC // \*
	, CHORDE(K_ENG | K_SFF | K_R22 | K_R23 | K_R24),  CLF, SFN, KC_BSLS, NC // |
	, CHORDE(K_ENG | K_SFN | K_R22 | K_R23 | K_R24),  CLF, SFN, KC_7, NC // &
    , CHORDE(K_ENG | K_SFF | K_R21 | K_R22 | K_R24),  CLF, SFF, KC_LBRC, NC // [
    , CHORDE(K_ENG | K_SFN | K_R21 | K_R22 | K_R24),  CLF, SFN, KC_LBRC, NC // {
    , CHORDE(K_ENG | K_SFF | K_R21 | K_R23 | K_R24),  CLF, SFF, KC_RBRC, NC // ]
    , CHORDE(K_ENG | K_SFN | K_R21 | K_R23 | K_R24),  CLF, SFN, KC_RBRC, NC // }
	, CHORDE(K_ENG | K_SFF | K_R21 | K_R22 | K_R23 | K_R24), CLF, SFF, KC_LBRC, KC_RBRC, NC // []
	, CHORDE(K_ENG | K_SFN | K_R21 | K_R22 | K_R23 | K_R24), CLF, SFN, KC_LBRC, KC_RBRC, NC // {}

	, CHORDE(K_RUS | K_SFF | K_R00),                  CLF, SFF, KC_MINS, NC // -
	, CHORDE(K_RUS | K_SFN | K_R00),                  CLF, SFN, KC_MINS, NC // _
	, CHORDE(K_ENG | K_SFF | K_R00),                  CLF, SFF, KC_MINS, NC // -
	, CHORDE(K_ENG | K_SFN | K_R00),                  CLF, SFN, KC_MINS, NC // _

	, CHORDE(K_RUS | K_SFF | K_R20),                  CLF, SFN, KC_6, NC // :
	, CHORDE(K_RUS | K_SFN | K_R20),                  CLF, CMD, LSW, SFN, KC_3, CMD, LSW, NC // #
	, CHORDE(K_ENG | K_SFF | K_R20),                  CLF, SFN, KC_SCLN, NC // :
	, CHORDE(K_ENG | K_SFN | K_R20),                  CLF, SFN, KC_3, NC // #

	
	, CHORDE(K_RUS | K_SFN | K_L21 | K_L22 | K_L23),  CLF, SFN, KC_BSLS, KC_BSLS, NC // //
	, CHORDE(K_ENG | K_SFN | K_L21 | K_L22 | K_L23),  CLF, SFF, KC_SLSH, KC_SLSH, NC // //
	
	, CHORDE(K_RUS | K_SFF | K_R01 | K_R21),          CLF, CMD, LSW, CMD, CPS, KC_BSLS, KC_QUOT, CMD, LSW, NC // ударение
	, CHORDE(K_ENG | K_SFF | K_R01 | K_R21),          CLF, CMD, CPS, KC_BSLS, KC_QUOT, NC // ударение
	
	, CHORDE(K_RUS | K_SFF | K_L04 | K_L00),          CLF, CMD, LSW, CMD, CPS, KC_MINS, SFN, KC_DOT, CMD, LSW, NC // →
	, CHORDE(K_ENG | K_SFF | K_L04 | K_L00),          CLF, CMD, CPS, KC_MINS, SFN, KC_DOT, NC // →
	
	, CHORDE(K_RUS | K_SFF | K_L01 | K_L23 | K_L22),  CLF, SFF, CMD, LSW, KC_LBRC, KC_0, KC_RBRC, CMD, LSW, NC // [0]
	, CHORDE(K_ENG | K_SFF | K_L01 | K_L23 | K_L22),  CLF, SFF, KC_LBRC, KC_0, KC_RBRC, NC // [0]
	
	// combo
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R01),                            CLF, SFN, KC_2, NC // "
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R02),                            CLF, SFN, KC_0, NC // )
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R01 | K_R02),                    CLF, SFN, KC_2, KC_0, NC // ")
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R03),                            CLF, SFN, KC_4, NC // ;
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R01 | K_R03),                    CLF, SFN, KC_2, KC_4, NC // ";
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R02 | K_R03),                    CLF, SFN, KC_0, KC_4, NC // );
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R01 | K_R02 | K_R03),            CLF, SFN, KC_2, KC_0, KC_4, NC // ");
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R01 | K_R04),                    CLF, SFN, KC_2, SFF, KC_ENT, NC // "
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R02 | K_R04),                    CLF, SFN, KC_0, SFF, KC_ENT, NC // )
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R03 | K_R04),                    CLF, SFN, KC_4, SFF, KC_ENT, NC // ;
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R01 | K_R03 | K_R04),            CLF, SFN, KC_2, KC_4, SFF, KC_ENT, NC // ";
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R02 | K_R03 | K_R04),            CLF, SFN, KC_0, KC_4, SFF, KC_ENT, NC // );
	, CHORDE(K_RUS | K_SFF | K_R33 | K_R01 | K_R02 | K_R03 | K_R04),    CLF, SFN, KC_2, KC_0, KC_4, SFF, KC_ENT, NC // ");
	, CHORDE(K_RUS | K_SFF | K_R32 | K_R33 | K_R01),                    CLF, SFF, KC_SPC, SFN, KC_2, NC // "
	, CHORDE(K_RUS | K_SFF | K_R32 | K_R33 | K_R01 | K_R02),            CLF, SFN, KC_9, KC_2, NC // ("
	, CHORDE(K_RUS | K_SFF | K_R32 | K_R33 | K_R02),                    CLF, SFN, KC_9, KC_0, NC // ()
	, CHORDE(K_RUS | K_SFF | K_R32 | K_R33 | K_R02 | K_R03),            CLF, SFN, KC_9, KC_0, KC_4, NC // ();
	, CHORDE(K_RUS | K_SFF | K_R32 | K_R33 | K_R02 | K_R04),            CLF, SFN, KC_9, KC_0, SFF, KC_ENT, NC // ()
	, CHORDE(K_RUS | K_SFF | K_R32 | K_R33 | K_R02 | K_R03 | K_R04),    CLF, SFN, KC_9, KC_0, KC_4, SFF, KC_ENT, NC // ();

	, CHORDE(K_ENG | K_SFF | K_R33 | K_R01),                            CLF, SFN, KC_QUOT, NC // "
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R02),                            CLF, SFN, KC_0, NC // )
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R01 | K_R02),                    CLF, SFN, KC_QUOT, KC_0, NC // ")
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R03),                            CLF, SFF, KC_SCLN, NC // ;
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R01 | K_R03),                    CLF, SFN, KC_QUOT, SFF, KC_SCLN, NC // ";
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R02 | K_R03),                    CLF, SFN, KC_0, SFF, KC_SCLN, NC // );
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R01 | K_R02 | K_R03),            CLF, SFN, KC_QUOT, KC_0, SFF, KC_SCLN, NC // ");
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R01 | K_R04),                    CLF, SFN, KC_QUOT, SFF, KC_ENT, NC // "
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R02 | K_R04),                    CLF, SFN, KC_0, SFF, KC_ENT, NC // )
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R03 | K_R04),                    CLF, SFF, KC_SCLN, KC_ENT, NC // ;
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R01 | K_R03 | K_R04),            CLF, SFN, KC_QUOT, SFF, KC_SCLN, KC_ENT, NC // ";
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R02 | K_R03 | K_R04),            CLF, SFN, KC_0, SFF, KC_SCLN, KC_ENT, NC // );
	, CHORDE(K_ENG | K_SFF | K_R33 | K_R01 | K_R02 | K_R03 | K_R04),    CLF, SFN, KC_QUOT, KC_0, SFF, KC_SCLN, KC_ENT, NC // ");
	, CHORDE(K_ENG | K_SFF | K_R32 | K_R33 | K_R01),                    CLF, SFF, KC_SPC, SFN, KC_QUOT, NC // "
	, CHORDE(K_ENG | K_SFF | K_R32 | K_R33 | K_R01 | K_R02),            CLF, SFN, KC_9, KC_QUOT, NC // ("
	, CHORDE(K_ENG | K_SFF | K_R32 | K_R33 | K_R02),                    CLF, SFN, KC_9, KC_0, NC // ()
	, CHORDE(K_ENG | K_SFF | K_R32 | K_R33 | K_R02 | K_R03),            CLF, SFN, KC_9, KC_0, KC_4, NC // ();
	, CHORDE(K_ENG | K_SFF | K_R32 | K_R33 | K_R02 | K_R04),            CLF, SFN, KC_9, KC_0, SFF, KC_ENT, NC // ()
	, CHORDE(K_ENG | K_SFF | K_R32 | K_R33 | K_R02 | K_R03 | K_R04),    CLF, SFN, KC_9, KC_0, SFF, KC_SCLN, KC_ENT, NC // ();
	
 	// alpha
	
	, CHORDE(K_RUS | K_L00),                                                             CLF, RU_S, NC // с
	, CHORDE(K_RUS | K_L14),                                                             CLF, RU_W, NC // ш
	, CHORDE(K_RUS | K_L13),                                                             CLF, RU_V, NC // в
	, CHORDE(K_RUS | K_L12),                                                             CLF, RU_K, NC // к
	, CHORDE(K_RUS | K_L11),                                                             CLF, RU_T, NC // т
	, CHORDE(K_RUS | K_L04),                                                             CLF, RU_D, NC // д
	, CHORDE(K_RUS | K_L03),                                                             CLF, RU_B, NC // б
	, CHORDE(K_RUS | K_L02),                                                             CLF, RU_P, NC // п
	, CHORDE(K_RUS | K_L01),                                                             CLF, RU_N, NC // н
	, CHORDE(K_RUS | K_L03 | K_L01),                                                     CLF, RU_R, NC // р
	, CHORDE(K_RUS | K_L12 | K_L11),                                                     CLF, RU_M, NC // м
	, CHORDE(K_RUS | K_L03 | K_L02),                                                     CLF, RU_L, NC // л
	, CHORDE(K_RUS | K_L13 | K_L04),                                                     CLF, RU_X, NC // ч
	, CHORDE(K_RUS | K_L13 | K_L02),                                                     CLF, RU_Z, NC // з
	, CHORDE(K_RUS | K_L12 | K_L01),                                                     CLF, RU_G, NC // г
	, CHORDE(K_RUS | K_L11 | K_L04),                                                     CLF, RU_ZH, NC // ж
	, CHORDE(K_RUS | K_L14 | K_L01),                                                     CLF, RU_B, RU_O, RU_L, RU_MZ, RU_W, NC // больш
	, CHORDE(K_RUS | K_L12 | K_L04),                                                     CLF, RU_H, NC // х
	, CHORDE(K_RUS | K_L11 | K_L02),                                                     CLF, RU_C, NC // ц
	, CHORDE(K_RUS | K_L12 | K_L03),                                                     CLF, RU_WW, NC // щ
	, CHORDE(K_RUS | K_L11 | K_L03),                                                     CLF, RU_F, NC // ф
	, CHORDE(K_RUS | K_L14 | K_L03),                                                     CLF, RU_J, NC // й
	, CHORDE(K_RUS | K_L14 | K_L02),                                                     CLF, RU_TZ, NC // ъ
	, CHORDE(K_RUS | K_L10),                                                             CLF, RU_S, RU_T, NC // ст
	, CHORDE(K_RUS | K_L14 | K_L11),                                                     CLF, RU_W, RU_N, NC // шн
	, CHORDE(K_RUS | K_L02 | K_L01),                                                     CLF, RU_P, RU_R, NC // пр
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L03),                                             CLF, RU_K, RU_A, RU_K, NC // как
	, CHORDE(K_RUS | K_L13 | K_L03 | K_L01),                                             CLF, RU_O, RU_N, NC // он
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L04),                                             CLF, RU_X, RU_T, NC // чт
	, CHORDE(K_RUS | K_L04 | K_L03 | K_L02 | K_L01),                                     CLF, RU_B, RU_Y, RU_L, NC // был
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L11),                                             CLF, RU_EE, RU_T, NC // эт
	, CHORDE(K_RUS | K_L10 | K_L00),                                                     CLF, RU_V, RU_S, NC // вс
	, CHORDE(K_RUS | K_L14 | K_L13),                                                     CLF, RU_V, RU_W, NC // вш
	, CHORDE(K_RUS | K_L03 | K_L02 | K_L00),                                             CLF, RU_S, RU_L, NC // сл
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L12),                                             CLF, RU_W, RU_L, NC // шл
	, CHORDE(K_RUS | K_L12 | K_L10),                                                     CLF, RU_S, RU_K, NC // ск
	, CHORDE(K_RUS | K_L14 | K_L12),                                                     CLF, RU_P, RU_R, RU_O, RU_S, RU_T, NC // прост
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L11 | K_L03),                                     CLF, RU_T, RU_A, RU_K, NC // так
	, CHORDE(K_RUS | K_L12 | K_L11 | K_L03 | K_L01),                                     CLF, RU_K, RU_O, RU_T, RU_O, RU_R, NC // котор
	, CHORDE(K_RUS | K_L12 | K_L03 | K_L01),                                             CLF, RU_K, RU_R, NC // кр
	, CHORDE(K_RUS | K_L11 | K_L03 | K_L01),                                             CLF, RU_T, RU_R, NC // тр
	, CHORDE(K_RUS | K_L04 | K_L01),                                                     CLF, RU_D, RU_N, NC // дн
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L10),                                             CLF, RU_S, RU_T, RU_V, NC // ств
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L11),                                             CLF, RU_S, RU_T, RU_V, NC // ств - заменить
	, CHORDE(K_RUS | K_L13 | K_L02 | K_L01),                                             CLF, RU_Z, RU_N, NC // зн
	, CHORDE(K_RUS | K_L11 | K_L10),                                                     CLF, RU_S, RU_T, RU_R, NC // стр
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L12 | K_L11),                                     CLF, RU_P, RU_O, RU_S, RU_L, NC // посл
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L11 | K_L10),                                     CLF, RU_S, RU_T, RU_R, RU_O, RU_K, NC // строк
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L02),                                             CLF, RU_I, RU_Z, NC // из
	, CHORDE(K_RUS | K_L12 | K_L04 | K_L01),                                             CLF, RU_G, RU_D, NC // гд
	, CHORDE(K_RUS | K_L13 | K_L01),                                                     CLF, RU_V, RU_N, NC // вн
	, CHORDE(K_RUS | K_L03 | K_L02 | K_L01),                                             CLF, RU_B, RU_R, NC // бр
	, CHORDE(K_RUS | K_L04 | K_L03 | K_L01),                                             CLF, RU_D, RU_R, NC // др
	, CHORDE(K_RUS | K_L12 | K_L02),                                                     CLF, RU_G, RU_R, NC // гр
	, CHORDE(K_RUS | K_L11 | K_L04 | K_L01),                                             CLF, RU_ZH, RU_N, NC // жн
	, CHORDE(K_RUS | K_L12 | K_L11 | K_L01),                                             CLF, RU_M, RU_N, NC // мн
	, CHORDE(K_RUS | K_L12 | K_L03 | K_L02 | K_L01),                                     CLF, RU_G, RU_L, NC // гл
	, CHORDE(K_RUS | K_L04 | K_L03),                                                     CLF, RU_D, RU_V, NC // дв
	, CHORDE(K_RUS | K_L13 | K_L04 | K_L01),                                             CLF, RU_X, RU_N, NC // чн
	, CHORDE(K_RUS | K_L13 | K_L03),                                                     CLF, RU_O, RU_B, NC // об
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_L01),                                     CLF, RU_V, RU_R, NC // вр
	, CHORDE(K_RUS | K_L12 | K_L11 | K_L10),                                             CLF, RU_S, RU_M, NC // см
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11),                                             CLF, RU_M, RU_O, RU_G, NC // мог
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_L10),                                     CLF, RU_S, RU_M, RU_O, RU_G, NC // смог
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_L02),                                     CLF, RU_M, RU_O, RU_G, RU_L, NC // могл
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_L10 | K_L02),                             CLF, RU_S, RU_M, RU_O, RU_G, RU_L, NC // смогл
	, CHORDE(K_RUS | K_L12 | K_L11 | K_L02),                                             CLF, RU_K, RU_T, NC // кт
	, CHORDE(K_RUS | K_L11 | K_L04 | K_L03 | K_L02),                                     CLF, KC_MINS, RU_T, NC // -т
	, CHORDE(K_RUS | K_L13 | K_L03 | K_L02),                                             CLF, RU_V, RU_L, NC // вл
	, CHORDE(K_RUS | K_L11 | K_L01),                                                     CLF, RU_T, RU_N, NC // тн
	, CHORDE(K_RUS | K_L04 | K_L03 | K_L02),                                             CLF, RU_D, RU_L, NC // дл
	, CHORDE(K_RUS | K_L12 | K_L03 | K_L02),                                             CLF, RU_K, RU_L, NC // кл
	, CHORDE(K_RUS | K_L02 | K_L01 | K_L00),                                             CLF, RU_S, RU_P, RU_R, NC // спр
	, CHORDE(K_RUS | K_L14 | K_L02 | K_L01),                                             CLF, RU_S, RU_P, RU_R, NC // спр - заменить
	, CHORDE(K_RUS | K_L13 | K_L04 | K_L00),                                             CLF, RU_S, RU_X, NC // сч
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L01),                                             CLF, RU_S, RU_X, NC // сч - заменить
	, CHORDE(K_RUS | K_L13 | K_L04 | K_L02),                                             CLF, RU_Z, RU_D, NC // зд
	, CHORDE(K_RUS | K_L13 | K_L10),                                                     CLF, RU_S, RU_V, NC // св
	, CHORDE(K_RUS | K_L13 | K_L12),                                                     CLF, RU_S, RU_E, RU_B, NC // себ
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03),                                             CLF, RU_K, RU_A, RU_Z, NC // каз
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L10 | K_L03),                                     CLF, RU_S, RU_K, RU_A, RU_Z, NC // сказ
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_L02),                                     CLF, RU_Z, RU_A, RU_K, RU_A, RU_Z, NC // заказ
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L03 | K_L01),                                     CLF, RU_G, RU_O, RU_V, RU_O, RU_R, NC // говор
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L01),                                             CLF, RU_R, RU_A, RU_Z, NC // раз
	, CHORDE(K_RUS | K_L14 | K_L10),                                                     CLF, RU_V, RU_S, RU_T, NC // вст 
	, CHORDE(K_RUS | K_L14 | K_L11 | K_L01),                                             CLF, RU_N, RU_I, RU_X, NC // нич
	, CHORDE(K_RUS | K_L04 | K_L02 | K_L01),                                             CLF, RU_D, RU_E, RU_L, NC // дел
	, CHORDE(K_RUS | K_L13 | K_L04 | K_L03),                                             CLF, RU_B, RU_U, RU_D, NC // буд
	, CHORDE(K_RUS | K_L01 | K_L00),                                                     CLF, RU_S, RU_N, NC // сн
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L02),                                             CLF, RU_S, RU_N, NC // сн - заменить
	, CHORDE(K_RUS | K_L11 | K_L02 | K_L01),                                             CLF, RU_P, RU_E, RU_R, NC // пер
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L01),                                             CLF, RU_V, RU_W, NC // вш -заменить
	, CHORDE(K_RUS | K_L13 | K_L11),                                                     CLF, RU_V, RU_I, RU_D, NC // вид
	, CHORDE(K_RUS | K_L03 | K_L01 | K_L00),                                             CLF, RU_S, RU_R, NC // ср
	, CHORDE(K_RUS | K_L12 | K_L11 | K_L04),                                             CLF, RU_S, RU_A, RU_M, NC // сам
	, CHORDE(K_RUS | K_L04 | K_L02),                                                     CLF, RU_P, RU_L, NC // пл
	, CHORDE(K_RUS | K_L11 | K_L04 | K_L03),                                             CLF, RU_ZH, RU_D, NC // жд
	, CHORDE(K_RUS | K_L02 | K_L00),                                                     CLF, RU_S, RU_P, NC // сп
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L02),                                             CLF, RU_S, RU_P, NC // сп -  заменить
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L04 | K_L01),                                     CLF, RU_O, RU_D, RU_N, NC // одн
	, CHORDE(K_RUS | K_L12 | K_L11 | K_L04 | K_L01),                                     CLF, RU_O, RU_D, RU_I, RU_N, NC // один
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L11 | K_L01),                                     CLF, RU_S, RU_K, RU_O, RU_L, RU_MZ, RU_K, NC // скольк
	, CHORDE(K_RUS | K_L11 | K_L03 | K_L02 | K_L01),                                     CLF, RU_H, RU_O, RU_R, RU_O, RU_W, NC // хорош
	, CHORDE(K_RUS | K_L12 | K_L11 | K_L03),                                             CLF, RU_B, RU_L, NC // бл
	, CHORDE(K_RUS | K_L12 | K_L02 | K_L01),                                             CLF, RU_K, RU_N, NC // кн
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L04),                                             CLF, RU_X, RU_K, NC // чк
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L11 | K_L10),                                     CLF, RU_V, RU_S, RU_T, RU_V, NC // вств 
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L11 | K_L01),                                     CLF, RU_V, RU_S, RU_T, RU_V, NC // вств - заменить
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L12 | K_L11 | K_L10),                             CLF, RU_V, RU_S, RU_T, RU_R, NC // встр 
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L12 | K_L11 | K_L01),                             CLF, RU_N, RU_E, RU_S, RU_K, RU_O, RU_L, RU_MZ, RU_K, NC // нескольк
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L01),                                             CLF, RU_B, RU_N, NC // бн
	, CHORDE(K_RUS | K_L12 | K_L03 | K_L01 | K_L00),                                     CLF, RU_S, RU_K, RU_R, NC // скр
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02),                                             CLF, RU_K, RU_O, RU_N, RU_E, RU_C, NC // конец
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L11 | K_L02),                                     CLF, RU_B, RU_E, RU_S, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, NC // бесконечн
	, CHORDE(K_RUS | K_L12 | K_L03 | K_L02 | K_L00),                                     CLF, RU_S, RU_K, RU_L, NC // скл
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L11 | K_L02),                                     CLF, RU_S, RU_K, RU_L, NC // скл - заменить
	, CHORDE(K_RUS | K_L12 | K_L04 | K_L00),                                             CLF, RU_S, RU_H, NC // сх
	, CHORDE(K_RUS | K_L11 | K_L04 | K_L02),                                             CLF, RU_S, RU_H, NC // сх - заменить
	, CHORDE(K_RUS | K_L04 | K_L02 | K_L01 | K_L00),                                     CLF, RU_S, RU_D, RU_E, RU_L, NC // сдел
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L12 | K_L02),                                     CLF, RU_I, RU_S, NC // ис
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_L02 | K_L01),                             CLF, RU_S, RU_K, RU_A, RU_ZH, NC // скаж - заменить
	, CHORDE(K_RUS | K_L12 | K_L04 | K_L03 | K_L01),                                     CLF, RU_H, RU_R, NC // хр
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L11 | K_L04),                                     CLF, RU_V, RU_M, NC // вм
	, CHORDE(K_RUS | K_L12 | K_L04 | K_L02),                                             CLF, RU_P, RU_O, RU_L, NC // пол
	, CHORDE(K_RUS | K_L12 | K_L11 | K_L03 | K_L02 | K_L01),                             CLF, RU_EE, RU_L, RU_E, RU_K, RU_T, RU_R, NC // электр
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L03 | K_L02 | K_L01),                             CLF, RU_G, RU_L, RU_A, RU_Z, NC // глаз
	, CHORDE(K_RUS | K_L13 | K_L04 | K_L02 | K_L01),                                     CLF, RU_EE, RU_K, RU_S, NC // экс
	, CHORDE(K_RUS | K_L13 | K_L04 | K_L03 | K_L02 | K_L01),                             CLF, RU_EE, RU_K, RU_Z, NC // экз
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L03 | K_L02),                                     CLF, RU_Z, RU_L, NC // зл
	, CHORDE(K_RUS | K_L12 | K_L11 | K_L02 | K_L01),                                     CLF, RU_F, RU_O, RU_R, RU_M, NC // форм
	, CHORDE(K_RUS | K_L13 | K_L03 | K_L02 | K_L01),                                     CLF, RU_P, RU_A, RU_R, RU_T, NC // парт
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L02 | K_L01),                                     CLF, RU_Z, RU_V, NC // зв
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L11 | K_L03 | K_L02 | K_L01),                     CLF, RU_X, RU_E, RU_L, RU_O, RU_V, RU_E, RU_K, NC // человек
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L11 | K_L04 | K_L03 | K_L02 | K_L01),             CLF, RU_X, RU_E, RU_L, RU_O, RU_V, RU_E, RU_X, NC // человеч
	, CHORDE(K_RUS | K_L12 | K_L11 | K_L03 | K_L02),                                     CLF, RU_V, RU_Z, NC // вз
	, CHORDE(K_RUS | K_L13 | K_L04 | K_L03 | K_L02),                                     CLF, RU_Z, RU_R, NC // зр
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L02 | K_L01),                                     CLF, RU_V, RU_S, RU_P, NC // всп
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_L01),                                     CLF, RU_V, RU_O, RU_Z, RU_M, RU_O, RU_ZH, RU_N, NC // возможн
	, CHORDE(K_RUS | K_L14 | K_L11 | K_L02 | K_L01),                                     CLF, RU_W, RU_L, NC // шл - заменить
	, CHORDE(K_RUS | K_L11 | K_L03 | K_L02),                                             CLF, RU_P, RU_O, RU_T, NC // пот
	, CHORDE(K_RUS | K_L13 | K_L12 | K_L11 | K_L03 | K_L01),                             CLF, RU_V, RU_R, RU_E, RU_M, NC // врем
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00),                                             CLF, RU_S, RU_P, RU_R, RU_O, RU_S, NC // спрос
	, CHORDE(K_RUS | K_L13 | K_L00),                                                     CLF, RU_Z, RU_D, RU_E, RU_W, RU_N, NC // здешн
	, CHORDE(K_RUS | K_L14 | K_L13 | K_L03 | K_L02),                                     CLF, RU_O, RU_B, RU_TZ, RU_Q, RU_S, RU_N, NC // объясн
	
    , CHORDE(K_RUS | K_L03 | K_L21),                                                     CLF, RU_O, RU_B, RU_TZ, RU_E, RU_K, RU_T, NC // объект	
    , CHORDE(K_RUS | K_L02 | K_L21),                                                     CLF, RU_K, RU_O, RU_N, RU_E, RU_C, NC // конец	
    , CHORDE(K_RUS | K_L01 | K_L22),                                                     CLF, RU_P, RU_R, RU_O, RU_C, RU_E, RU_D, RU_U, RU_R, NC // процедур
    , CHORDE(K_RUS | K_L01 | K_L23),                                                     CLF, RU_F, RU_U, RU_N, RU_K, RU_C, RU_I, NC // функци
	, CHORDE(K_RUS | K_L01 | K_L24),                                                     CLF, RU_EE, RU_K, RU_S, RU_P, RU_O, RU_R, RU_T, NC // экспорт
    , CHORDE(K_RUS | K_L04 | K_L21),                                                     CLF, RU_C, RU_I, RU_K, RU_L, NC // цикл
	
	, CHORDE(K_RUS | K_R11),                                                             CLF, RU_E, NC // е
	, CHORDE(K_RUS | K_R12),                                                             CLF, RU_O, NC // о
	, CHORDE(K_RUS | K_R13),                                                             CLF, RU_A, NC // а
	, CHORDE(K_RUS | K_R14),                                                             CLF, RU_I, NC // и
	, CHORDE(K_RUS | K_R01),                                                             CLF, RU_Y, NC // ы
	, CHORDE(K_RUS | K_R02),                                                             CLF, RU_U, NC // у
	, CHORDE(K_RUS | K_R03),                                                             CLF, RU_Q, NC // я
	, CHORDE(K_RUS | K_R04),                                                             CLF, RU_MZ, NC // ь
	, CHORDE(K_RUS | K_R11 | K_R03),                                                     CLF, RU_YU, NC // ю
	, CHORDE(K_RUS | K_R12 | K_R03),                                                     CLF, RU_EE, NC // э
	, CHORDE(K_RUS | K_R11 | K_R14 | K_R02),                                             CLF, RU_YO, NC // ё
	, CHORDE(K_RUS | K_R11 | K_R13),                                                     CLF, RU_E, RU_J, NC // ей
	, CHORDE(K_RUS | K_R12 | K_R14),                                                     CLF, RU_O, RU_J, NC // ой
	, CHORDE(K_RUS | K_R13 | K_R01),                                                     CLF, RU_A, RU_J, NC // ай
	, CHORDE(K_RUS | K_R00 | K_R13 | K_R01),                                             CLF, RU_I, RU_V, RU_A, RU_J, NC // ивай
	, CHORDE(K_RUS | K_R10 | K_R14),                                                     CLF, RU_I, RU_J, NC // ий
	, CHORDE(K_RUS | K_R14 | K_R02),                                                     CLF, RU_I, RU_J, NC // ий заменить
	, CHORDE(K_RUS | K_R01 | K_R03),                                                     CLF, RU_Y, RU_J, NC // ый
	, CHORDE(K_RUS | K_R02 | K_R04),                                                     CLF, RU_U, RU_J, NC // уй
	, CHORDE(K_RUS | K_R12 | K_R03 | K_R04),                                             CLF, RU_Q, RU_J, NC // яй
	, CHORDE(K_RUS | K_R11 | K_R04),                                                     CLF, RU_E, RU_L, RU_MZ, NC // ель
	, CHORDE(K_RUS | K_R12 | K_R04),                                                     CLF, RU_O, RU_L, RU_MZ, NC // оль
	, CHORDE(K_RUS | K_R00 | K_R13 | K_R04),                                             CLF, RU_I, RU_V, RU_A, RU_T, RU_MZ, NC // ивать
	, CHORDE(K_RUS | K_R13 | K_R04),                                                     CLF, RU_A, RU_T, RU_MZ, NC // ать
	, CHORDE(K_RUS | K_R00 | K_R01),                                                     CLF, RU_I, RU_T, RU_MZ, NC // ить
	, CHORDE(K_RUS | K_R11 | K_R12),                                                     CLF, RU_E, RU_L, NC // ел
	, CHORDE(K_RUS | K_R12 | K_R13),                                                     CLF, RU_O, RU_L, NC // ол
	, CHORDE(K_RUS | K_R13 | K_R14),                                                     CLF, RU_A, RU_L, NC // ал
	, CHORDE(K_RUS | K_R01 | K_R13 | K_R14),                                             CLF, RU_I, RU_V, RU_A, RU_L, NC // ивал
	, CHORDE(K_RUS | K_R14 | K_R01),                                                     CLF, RU_I, RU_L, NC // ил
	, CHORDE(K_RUS | K_R11 | K_R02),                                                     CLF, RU_E, RU_G, RU_O, NC // его
	, CHORDE(K_RUS | K_R12 | K_R02 | K_R03),                                             CLF, RU_O, RU_G, RU_O, NC // ого
	, CHORDE(K_RUS | K_R11 | K_R14),                                                     CLF, RU_E, RU_M, NC // ем
	, CHORDE(K_RUS | K_R12 | K_R01),                                                     CLF, RU_O, RU_M, NC // ом
	, CHORDE(K_RUS | K_R12 | K_R13 | K_R01),                                             CLF, RU_O, RU_T, NC // от
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R01),                                             CLF, RU_E, RU_R, NC // ер
	, CHORDE(K_RUS | K_R11 | K_R01),                                                     CLF, RU_E, RU_N, NC // ен
	, CHORDE(K_RUS | K_R12 | K_R02),                                                     CLF, RU_O, RU_N, NC // он
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R14),                                             CLF, RU_E, RU_T, NC // ет
	, CHORDE(K_RUS | K_R13 | K_R01 | K_R02),                                             CLF, RU_A, RU_L, RU_I, NC // али
	, CHORDE(K_RUS | K_R00 | K_R13 | K_R01 | K_R02),                                     CLF, RU_I, RU_V, RU_A, RU_L, RU_I, NC // ивали
	, CHORDE(K_RUS | K_R13 | K_R01 | K_R03),                                             CLF, RU_A, RU_Q, NC // ая
	, CHORDE(K_RUS | K_R00 | K_R13 | K_R01 | K_R03),                                     CLF, RU_I, RU_V, RU_A, RU_Q, NC // ивая
	, CHORDE(K_RUS | K_R13 | K_R01 | K_R02 | K_R03),                                     CLF, RU_A, RU_L, RU_A, NC // ала
	, CHORDE(K_RUS | K_R00 | K_R13 | K_R01 | K_R02 | K_R03),                             CLF, RU_I, RU_V, RU_A, RU_L, RU_A, NC // ивала
	, CHORDE(K_RUS | K_R13 | K_R03),                                                     CLF, RU_A, RU_N, NC // ан
	, CHORDE(K_RUS | K_R02 | K_R03 | K_R04),                                             CLF, RU_I, RU_L, RU_I, NC // или
	, CHORDE(K_RUS | K_R12 | K_R14 | K_R01),                                             CLF, RU_O, RU_V, NC // ов
	, CHORDE(K_RUS | K_R12 | K_R13 | K_R14),                                             CLF, RU_O, RU_E, NC // ое
	, CHORDE(K_RUS | K_R13 | K_R01 | K_R04),                                             CLF, RU_A, RU_E, RU_T, NC // ает
	, CHORDE(K_RUS | K_R00 | K_R13 | K_R01 | K_R04),                                     CLF, RU_I, RU_V, RU_A, RU_E, RU_T, NC // ивает
	, CHORDE(K_RUS | K_R12 | K_R13 | K_R01 | K_R02),                                     CLF, RU_O, RU_D, NC // од
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13),                                             CLF, RU_E, RU_E, NC // ее
	, CHORDE(K_RUS | K_R01 | K_R02 | K_R03),                                             CLF, RU_Y, RU_E, NC // ые
	, CHORDE(K_RUS | K_R12 | K_R13 | K_R04),                                             CLF, RU_I, RU_M, NC // им
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R04),                                             CLF, RU_I, RU_E, NC // ие
	, CHORDE(K_RUS | K_R12 | K_R13 | K_R02),                                             CLF, RU_O, RU_R, NC // ор
	, CHORDE(K_RUS | K_R13 | K_R02),                                                     CLF, RU_A, RU_M, NC // ам
	, CHORDE(K_RUS | K_R11 | K_R14 | K_R01),                                             CLF, RU_E, RU_H, NC // ех
	, CHORDE(K_RUS | K_R11 | K_R02 | K_R03),                                             CLF, RU_U, RU_YU, NC // ую
	, CHORDE(K_RUS | K_R01 | K_R02 | K_R04),                                             CLF, RU_Y, RU_H, NC // ых
	, CHORDE(K_RUS | K_R03 | K_R04),                                                     CLF, RU_Q, RU_T, RU_MZ, NC // ять
	, CHORDE(K_RUS | K_R02 | K_R03),                                                     CLF, RU_U, RU_L, NC // ул
	, CHORDE(K_RUS | K_R01 | K_R04),                                                     CLF, RU_Y, RU_M, NC // ым
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R14),                                     CLF, RU_E, RU_D, NC // ед
	, CHORDE(K_RUS | K_R13 | K_R02 | K_R03),                                             CLF, RU_A, RU_H, NC // ах
	, CHORDE(K_RUS | K_R01 | K_R03 | K_R04),                                             CLF, RU_Y, RU_T, RU_MZ, NC // ыть
	, CHORDE(K_RUS | K_R01 | K_R02),                                                     CLF, RU_Y, RU_L, NC // ыл
	, CHORDE(K_RUS | K_R11 | K_R13 | K_R14),                                             CLF, RU_I, RU_H, NC // их
	, CHORDE(K_RUS | K_R12 | K_R13 | K_R03),                                             CLF, RU_O, RU_Z, NC // оз
	, CHORDE(K_RUS | K_R11 | K_R13 | K_R02),                                             CLF, RU_A, RU_M, RU_I, NC // ами
	, CHORDE(K_RUS | K_R11 | K_R01 | K_R02 | K_R03),                                     CLF, RU_E, RU_N, RU_I, RU_E, NC // ение
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R02),                                             CLF, RU_E, RU_M, RU_U, NC // ему
	, CHORDE(K_RUS | K_R11 | K_R13 | K_R04),                                             CLF, RU_A, RU_L, RU_MZ, NC // аль
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R03),                                             CLF, RU_I, RU_T, NC // ит
	, CHORDE(K_RUS | K_R11 | K_R01 | K_R03),                                             CLF, RU_I, RU_L, RU_A, NC // ила
	, CHORDE(K_RUS | K_R13 | K_R02 | K_R04),                                             CLF, RU_A, RU_R, NC // ар
	, CHORDE(K_RUS | K_R12 | K_R01 | K_R02),                                             CLF, RU_O, RU_M, RU_U, NC // ому
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R01 | K_R02 | K_R03),                             CLF, RU_E, RU_N, RU_I, RU_Q, NC // ения
	, CHORDE(K_RUS | K_R11 | K_R02 | K_R04),                                             CLF, RU_E, RU_L, RU_I, NC // ели
	, CHORDE(K_RUS | K_R12 | K_R01 | K_R04),                                             CLF, RU_O, RU_S, RU_T, RU_MZ, NC // ость
	, CHORDE(K_RUS | K_R11 | K_R13 | K_R01),                                             CLF, RU_I, RU_N, NC // ин
	, CHORDE(K_RUS | K_R01 | K_R02 | K_R03 | K_R04),                                     CLF, RU_I, RU_Q, NC // ия
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R01),                                     CLF, RU_E, RU_S, RU_T, RU_MZ, NC // есть
	, CHORDE(K_RUS | K_R11 | K_R13 | K_R03),                                             CLF, RU_A, RU_YU, NC // аю
	, CHORDE(K_RUS | K_R10 | K_R11 | K_R13 | K_R03),                                     CLF, RU_I, RU_V, RU_A, RU_YU, NC // иваю
	, CHORDE(K_RUS | K_R12 | K_R02 | K_R04),                                             CLF, RU_U, RU_T, NC // ут
	, CHORDE(K_RUS | K_R12 | K_R01 | K_R03),                                             CLF, RU_E, RU_Z, NC // ез
	, CHORDE(K_RUS | K_R11 | K_R01 | K_R02),                                             CLF, RU_I, RU_L, RU_O, NC // ило
	, CHORDE(K_RUS | K_R10 | K_R13),                                                     CLF, RU_A, RU_S, NC // ас
	, CHORDE(K_RUS | K_R13 | K_R14 | K_R02),                                             CLF, RU_A, RU_S, NC // ас заменить
	, CHORDE(K_RUS | K_R11 | K_R03 | K_R04),                                             CLF, RU_Q, RU_L, NC // ял
	, CHORDE(K_RUS | K_R12 | K_R01 | K_R02 | K_R04),                                     CLF, RU_E, RU_T, RU_MZ, NC // еть
	, CHORDE(K_RUS | K_R12 | K_R02 | K_R03 | K_R04),                                     CLF, RU_U, RU_T, RU_MZ, NC // уть
	, CHORDE(K_RUS | K_R11 | K_R01 | K_R04),                                             CLF, RU_I, RU_L, RU_MZ, NC // иль
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R01 | K_R03),                                     CLF, RU_I, RU_T, RU_E, NC // ите
	, CHORDE(K_RUS | K_R12 | K_R14 | K_R02),                                             CLF, RU_O, RU_I, NC // ои
	, CHORDE(K_RUS | K_R13 | K_R14 | K_R01),                                             CLF, RU_A, RU_E, NC // ае
	, CHORDE(K_RUS | K_R12 | K_R01 | K_R02 | K_R03),                                     CLF, RU_E, RU_T, RU_E, NC // ете
	, CHORDE(K_RUS | K_R11 | K_R13 | K_R01 | K_R04),                                     CLF, RU_A, RU_E, RU_T, RU_E, NC // аете
	, CHORDE(K_RUS | K_R10 | K_R00 | K_R11 | K_R13 | K_R01 | K_R04),                     CLF, RU_I, RU_V, RU_A, RU_E, RU_T, RU_E, NC // иваете
	, CHORDE(K_RUS | K_R11 | K_R13 | K_R14 | K_R01),                                     CLF, RU_A, RU_E, RU_M, NC // аем
	, CHORDE(K_RUS | K_R10 | K_R00 | K_R11 | K_R13 | K_R14 | K_R01),                     CLF, RU_I, RU_V, RU_A, RU_E, RU_M, NC // иваем
	, CHORDE(K_RUS | K_R11 | K_R13 | K_R01 | K_R03),                                     CLF, RU_A, RU_YU, RU_T, NC // ают
	, CHORDE(K_RUS | K_R10 | K_R00 | K_R11 | K_R13 | K_R01 | K_R03),                     CLF, RU_I, RU_V, RU_A, RU_YU, RU_T, NC // ивают
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R03),                                     CLF, RU_A, RU_N, RU_I, RU_E, NC // ание
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R02 | K_R03),                             CLF, RU_A, RU_N, RU_I, RU_Q, NC // ания
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R01 | K_R02),                                     CLF, RU_I, RU_I, NC // ии
	, CHORDE(K_RUS | K_R13 | K_R03 | K_R04),                                             CLF, RU_A, RU_T, NC // ат
	, CHORDE(K_RUS | K_R10 | K_R03),                                                     CLF, RU_U, RU_YU, RU_T, NC // уют
	, CHORDE(K_RUS | K_R11 | K_R01 | K_R03 | K_R04),                                     CLF, RU_I, RU_YU, NC // ию
	, CHORDE(K_RUS | K_R11 | K_R13 | K_R01 | K_R02 | K_R03),                             CLF, RU_E, RU_N, RU_I, RU_YU, NC // ению
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R01 | K_R03),                             CLF, RU_A, RU_N, RU_I, RU_YU, NC // анию
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R03 | K_R04),                             CLF, RU_Q, RU_N, RU_I, RU_E, NC // яние
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R02 | K_R03 | K_R04),                     CLF, RU_Q, RU_N, RU_I, RU_Q, NC // яния
	, CHORDE(K_RUS | K_R11 | K_R01 | K_R02 | K_R03 | K_R04),                             CLF, RU_E, RU_N, RU_I, RU_I, NC // ении
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R01 | K_R02 | K_R03),                     CLF, RU_A, RU_N, RU_I, RU_I, NC // ании
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R01 | K_R02 | K_R03 | K_R04),                     CLF, RU_E, RU_N, RU_I, RU_J, NC // ений
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R01 | K_R02 | K_R03 | K_R04),             CLF, RU_A, RU_N, RU_I, RU_J, NC // аний
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R01 | K_R03 | K_R04),                     CLF, RU_Q, RU_N, RU_I, RU_YU, NC // янию
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R14 | K_R03 | K_R04),                     CLF, RU_Q, RU_N, RU_I, RU_I, NC // янии
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R14 | K_R02 | K_R03 | K_R04),             CLF, RU_Q, RU_N, RU_I, RU_J, NC // яний
	, CHORDE(K_RUS | K_R12 | K_R13 | K_R02 | K_R03),                                     CLF, RU_E, RU_WW, RU_E, NC // еще
	, CHORDE(K_RUS | K_R05),                                                             CLF, RU_E, RU_S, RU_L, RU_I, NC // если
	, CHORDE(K_RUS | K_R15),                                                             CLF, RU_I, RU_N, RU_A, RU_X, RU_E, NC // иначе
	, CHORDE(K_RUS | K_R00 | K_R01 | K_R02),                                             CLF, RU_U, RU_ZH, RU_E, NC // уже
	, CHORDE(K_RUS | K_R12 | K_R13 | K_R14 | K_R01),                                     CLF, RU_E, RU_W, RU_MZ, NC // ешь
	, CHORDE(K_RUS | K_R00 | K_R12 | K_R13 | K_R14 | K_R01),                             CLF, RU_I, RU_V, RU_E, RU_W, RU_MZ, NC // ивешь
	, CHORDE(K_RUS | K_R11 | K_R12 | K_R13 | K_R14 | K_R01),                             CLF, RU_A, RU_E, RU_W, RU_MZ, NC // аешь
	, CHORDE(K_RUS | K_R10 | K_R11 | K_R12 | K_R13 | K_R14 | K_R00 | K_R01),             CLF, RU_I, RU_V, RU_A, RU_E, RU_W, RU_MZ, NC // иваешь
	
	, CHORDE(K_RUS | K_R02 | K_R21),                                                     CLF, CMD, LSW, KC_U, KC_T, KC_Y, KC_V, CMD, LSW, NC // utyv
	
	, CHORDE(K_ENG | K_L14),                                 CLF, KC_S, NC // s
	, CHORDE(K_ENG | K_L13),      	                         CLF, KC_H, NC // h
	, CHORDE(K_ENG | K_L12),                                 CLF, KC_C, NC // c
	, CHORDE(K_ENG | K_L11),                                 CLF, KC_T, NC // t
	, CHORDE(K_ENG | K_L04),                                 CLF, KC_D, NC // d
	, CHORDE(K_ENG | K_L03),                                 CLF, KC_F, NC // f
	, CHORDE(K_ENG | K_L02),                                 CLF, KC_P, NC // p
	, CHORDE(K_ENG | K_L01),                                 CLF, KC_N, NC // n
	, CHORDE(K_ENG | K_L03 | K_L01),                         CLF, KC_R, NC // r
	, CHORDE(K_ENG | K_L03 | K_L02),                         CLF, KC_L, NC // l
	, CHORDE(K_ENG | K_L12 | K_L11),                         CLF, KC_M, NC // m
	, CHORDE(K_ENG | K_L12 | K_L01),                         CLF, KC_G, NC // g
	, CHORDE(K_ENG | K_L04 | K_L01),                         CLF, KC_W, NC // w
	, CHORDE(K_ENG | K_L00),                                 CLF, KC_V, NC // v
	, CHORDE(K_ENG | K_L13 | K_L01),                         CLF, KC_V, NC // v - заменить
	, CHORDE(K_ENG | K_L10),                                 CLF, KC_B, NC // b
	, CHORDE(K_ENG | K_L11 | K_L03),                         CLF, KC_B, NC // b - заменить
	, CHORDE(K_ENG | K_L13 | K_L12),                         CLF, KC_K, NC // k
	, CHORDE(K_ENG | K_L13 | K_L04),                         CLF, KC_X, NC // x
	, CHORDE(K_ENG | K_L11 | K_L04),                         CLF, KC_J, NC // j
	, CHORDE(K_ENG | K_L14 | K_L03),                         CLF, KC_Q, NC // q
	, CHORDE(K_ENG | K_L13 | K_L02),                         CLF, KC_Z, NC // z
	, CHORDE(K_ENG | K_L03 | K_L12),                         CLF, KC_Y, NC // y
	, CHORDE(K_ENG | K_L13 | K_L11),                         CLF, KC_T, KC_H, NC // th
	, CHORDE(K_ENG | K_L14 | K_L13),                         CLF, KC_S, KC_H, NC // sh
	, CHORDE(K_ENG | K_L14 | K_L12),                         CLF, KC_C, KC_H, NC // ch
	, CHORDE(K_ENG | K_L13 | K_L12 | K_L02),                 CLF, KC_P, KC_H, NC // ph
	, CHORDE(K_ENG | K_L13 | K_L04 | K_L01),                 CLF, KC_W, KC_H, NC // wh
	, CHORDE(K_ENG | K_L13 | K_L12 | K_L11),                 CLF, KC_C, KC_K, NC // ck
	, CHORDE(K_ENG | K_L02 | K_L01),                         CLF, KC_P, KC_R, NC // pr
	, CHORDE(K_ENG | K_L14 | K_L11),                         CLF, KC_S, KC_T, NC // st
	, CHORDE(K_ENG | K_L14 | K_L13 | K_L12 | K_L11),         CLF, KC_S, KC_T, KC_R, NC // str
	, CHORDE(K_ENG | K_L11 | K_L03 | K_L01),                 CLF, KC_T, KC_R, NC // tr
	, CHORDE(K_ENG | K_L03 | K_L02 | K_L01),                 CLF, KC_B, KC_R, NC // br
	, CHORDE(K_ENG | K_L04 | K_L02),                         CLF, KC_P, KC_L, NC // pl
	, CHORDE(K_ENG | K_L13 | K_L11 | K_L04),                 CLF, KC_X, KC_T, NC // xt
	, CHORDE(K_ENG | K_L11 | K_L01),                         CLF, KC_I, KC_N, NC // in
	, CHORDE(K_ENG | K_L14 | K_L01),                         CLF, KC_Q, KC_U, NC // qu

	, CHORDE(K_ENG | K_R11),                                 CLF, KC_E, NC // e
	, CHORDE(K_ENG | K_R12),                                 CLF, KC_O, NC // o
	, CHORDE(K_ENG | K_R13),                                 CLF, KC_A, NC // a
	, CHORDE(K_ENG | K_R14),                                 CLF, KC_Y, NC // y
	, CHORDE(K_ENG | K_R01),                                 CLF, KC_I, NC // i
	, CHORDE(K_ENG | K_R02),                                 CLF, KC_U, NC // u
	, CHORDE(K_ENG | K_R03),                                 CLF, KC_S, NC // s
	, CHORDE(K_ENG | K_R04),                                 CLF, KC_QUOT, NC // '
	, CHORDE(K_ENG | K_R11 | K_R13),                         CLF, KC_E, KC_A, NC // ea
	, CHORDE(K_ENG | K_R11 | K_R13 | K_R04),                 CLF, KC_E, KC_A, KC_R, NC // ear
	, CHORDE(K_ENG | K_R11 | K_R13 | K_R03 | K_R04),         CLF, KC_E, KC_A, KC_R, KC_S, NC // ears
	, CHORDE(K_ENG | K_R11 | K_R12 | K_R13),                 CLF, KC_E, KC_E, NC // ee
	, CHORDE(K_ENG | K_R11 | K_R12),                         CLF, KC_E, KC_R, NC // er
	, CHORDE(K_ENG | K_R11 | K_R01),                         CLF, KC_E, KC_I, NC // ei
	, CHORDE(K_ENG | K_R11 | K_R12 | K_R03),                 CLF, KC_E, KC_R, KC_S, NC // ers
	, CHORDE(K_ENG | K_R11 | K_R14),                         CLF, KC_E, KC_Y, NC // ey
	, CHORDE(K_ENG | K_R11 | K_R03),                         CLF, KC_E, KC_S, NC // es
	, CHORDE(K_ENG | K_R11 | K_R04),                         CLF, KC_E, KC_D, NC // ed
	, CHORDE(K_ENG | K_R11 | K_R01 | K_R02 | K_R03),         CLF, KC_E, KC_I, KC_G, KC_H, NC // eigh
	, CHORDE(K_ENG | K_R11 | K_R01 | K_R02 | K_R03 | K_R04), CLF, KC_E, KC_I, KC_G, KC_H, KC_T, NC  // eight
	, CHORDE(K_ENG | K_R12 | K_R13 | K_R14),                 CLF, KC_O, KC_O, NC // oo
	, CHORDE(K_ENG | K_R12 | K_R13),                         CLF, KC_O, KC_R, NC // or
	, CHORDE(K_ENG | K_R12 | K_R13 | K_R03),                 CLF, KC_O, KC_R, KC_S, NC // ors
	, CHORDE(K_ENG | K_R12 | K_R01),                         CLF, KC_O, KC_I, NC // oi
	, CHORDE(K_ENG | K_R12 | K_R02),                         CLF, KC_O, KC_U, NC // ou
	, CHORDE(K_ENG | K_R12 | K_R01 | K_R02 | K_R03),         CLF, KC_O, KC_U, KC_G, KC_H, NC // ough
	, CHORDE(K_ENG | K_R12 | K_R01 | K_R02 | K_R03 | K_R04), CLF, KC_O, KC_U, KC_G, KC_H, KC_T, NC // ought
	, CHORDE(K_ENG | K_R12 | K_R02 | K_R04),                 CLF, KC_O, KC_U, KC_R, NC // our
	, CHORDE(K_ENG | K_R12 | K_R02 | K_R03 | K_R04),         CLF, KC_O, KC_U, KC_R, KC_S, NC // ours
	, CHORDE(K_ENG | K_R13 | K_R01),                         CLF, KC_A, KC_I, NC // ai
	, CHORDE(K_ENG | K_R13 | K_R14),                         CLF, KC_A, KC_Y, NC // ay
	, CHORDE(K_ENG | K_R13 | K_R03),                         CLF, KC_A, KC_S, NC // as
	, CHORDE(K_ENG | K_R13 | K_R04),                         CLF, KC_A, KC_R, NC // ar
	, CHORDE(K_ENG | K_R13 | K_R03 | K_R04),                 CLF, KC_A, KC_R, KC_S, NC // ars
	, CHORDE(K_ENG | K_R01 | K_R04),                         CLF, KC_I, KC_E, NC // ie
	, CHORDE(K_ENG | K_R01 | K_R03 | K_R04),                 CLF, KC_I, KC_E, KC_S, NC // ies
	, CHORDE(K_ENG | K_R01 | K_R02),                         CLF, KC_I, KC_N, KC_G, NC // ing
	, CHORDE(K_ENG | K_R01 | K_R02 | K_R03),                 CLF, KC_I, KC_N, KC_G, KC_S, NC // ings
	, CHORDE(K_ENG | K_R01 | K_R02 | K_R04),                 CLF, KC_I, KC_O, KC_N, NC // ion
	, CHORDE(K_ENG | K_R01 | K_R02 | K_R03 | K_R04),         CLF, KC_I, KC_O, KC_N, KC_S, NC // ions
	, CHORDE(K_ENG | K_R13 | K_R01 | K_R02 | K_R03),         CLF, KC_I, KC_G, KC_H, NC // igh
	, CHORDE(K_ENG | K_R13 | K_R01 | K_R02 | K_R03 | K_R04), CLF, KC_I, KC_G, KC_H, KC_T, NC //ight
	, CHORDE(K_ENG | K_R01 | K_R03),                         CLF, KC_I, KC_R, NC // ir
	, CHORDE(K_ENG | K_R02 | K_R03),                         CLF, KC_U, KC_S, NC // us
	, CHORDE(K_ENG | K_R02 | K_R04),                         CLF, KC_U, KC_R, NC // ur
	, CHORDE(K_ENG | K_R03 | K_R04),                         CLF, KC_QUOT, KC_S, NC // 's

	// ithkuil
	, CHORDE(K_ENG | K_L11 | K_L04 | K_L01),      CLF, CMD, CPS, KC_I, KC_T, NC // ţ
	, CHORDE(K_ENG | K_L04 | K_L02 | K_L01),      CLF, CMD, CPS, KC_I, KC_D, NC // ḑ
	, CHORDE(K_ENG | K_L04 | K_L03 | K_L01),      CLF, CMD, CPS, KC_T, KC_N, NC // ň
	, CHORDE(K_ENG | K_L14 | K_L11 | K_L01),      CLF, CMD, CPS, KC_I, KC_S, NC // š
	, CHORDE(K_ENG | K_L13 | K_L03 | K_L02),      CLF, CMD, CPS, KC_I, KC_Z, NC // ž
	, CHORDE(K_ENG | K_L14 | K_L13 | K_L02),      CLF, CMD, CPS, KC_T, KC_Z, NC // ẓ
	, CHORDE(K_ENG | K_L12 | K_L04 | K_L01),      CLF, CMD, CPS, KC_I, KC_C, NC // č
	, CHORDE(K_ENG | K_L12 | K_L04 | K_L02),      CLF, CMD, CPS, KC_T, KC_C, NC // ç
	, CHORDE(K_ENG | K_L12 | K_L03 | K_L02),      CLF, CMD, CPS, KC_I, KC_L, NC // ļ
	, CHORDE(K_ENG | K_L12 | K_L03 | K_L01),      CLF, CMD, CPS, KC_I, KC_R, NC // ř
	
	, CHORDE(K_ENG | K_R13 | K_R01 | K_R04),      CLF, CMD, CPS, KC_I, KC_A, NC // ä
	, CHORDE(K_ENG | K_R13 | K_R21),              CLF, CMD, CPS, KC_T, KC_A, NC // á
	, CHORDE(K_ENG | K_R13 | K_R04 | K_R21),      CLF, CMD, CPS, KC_H, KC_A, NC // â
	, CHORDE(K_ENG | K_R11 | K_R01 | K_R04),      CLF, CMD, CPS, KC_I, KC_E, NC // ë
	, CHORDE(K_ENG | K_R11 | K_R24),              CLF, CMD, CPS, KC_T, KC_E, NC // é
	, CHORDE(K_ENG | K_R11 | K_R01 | K_R24),      CLF, CMD, CPS, KC_H, KC_E, NC // ê
	, CHORDE(K_ENG | K_R12 | K_R01 | K_R04),      CLF, CMD, CPS, KC_I, KC_O, NC // ö
	, CHORDE(K_ENG | K_R12 | K_R24),              CLF, CMD, CPS, KC_T, KC_O, NC // ó
	, CHORDE(K_ENG | K_R12 | K_R01 | K_R24),      CLF, CMD, CPS, KC_H, KC_O, NC // ü
	, CHORDE(K_ENG | K_R11 | K_R02 | K_R03),      CLF, CMD, CPS, KC_I, KC_U, NC // û
	, CHORDE(K_ENG | K_R02 | K_R23),              CLF, CMD, CPS, KC_T, KC_U, NC // ú
	, CHORDE(K_ENG | K_R11 | K_R02 | K_R23),      CLF, CMD, CPS, KC_H, KC_U, NC // û
	, CHORDE(K_ENG | K_R01 | K_R24),              CLF, CMD, CPS, KC_I, KC_I, NC // í

	// combo
	, CHORDE(K_RUS | K_L03 | K_L02 | K_R05),              CLF, RU_T, RU_O, RU_L, RU_MZ, RU_K, RU_O, NC // л.@ → только
	, CHORDE(K_RUS | K_L12 | K_R05),                      CLF, RU_K, RU_O, RU_G, RU_D, RU_A, NC // к.@ → когда
	, CHORDE(K_RUS | K_L11 | K_L12 | K_R05),              CLF, RU_M, RU_E, RU_N, RU_Q, NC // м.@ → меня
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L04 | K_R05),      CLF, RU_X, RU_T, RU_O, RU_B, RU_Y, NC // чт.@ → чтобы
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L04 | K_R15),      CLF, RU_X, RU_T, RU_O, KC_MINS, RU_T, RU_O, NC // чт.$ → что-то
	, CHORDE(K_RUS | K_L03 | K_L01 | K_L00 | K_R05),      CLF, RU_S, RU_R, RU_A, RU_Z, RU_U, NC // ср.@ → сразу
	, CHORDE(K_RUS | K_L03 | K_L01 | K_R05),              CLF, RU_T, RU_E, RU_P, RU_E, RU_R, RU_MZ, NC // р.@ → теперь
	, CHORDE(K_RUS | K_L11 | K_R05),                      CLF, RU_T, RU_O, RU_G, RU_D, RU_A, NC // т.@ → тогда
	, CHORDE(K_RUS | K_L04 | K_L11 | K_R05),              CLF, RU_D, RU_A, RU_ZH, RU_E, NC // ж.@ → даже
	, CHORDE(K_RUS | K_L00 | K_R05),                      CLF, RU_S, RU_E, RU_J, RU_X, RU_A, RU_S, NC // с.@ → сейчас
	, CHORDE(K_RUS | K_L01 | K_R15),                      CLF, RU_O, RU_X, RU_E, RU_N, RU_MZ, NC // н.$ → очень
	, CHORDE(K_RUS | K_L02 | K_R05),                      CLF, RU_X, RU_E, RU_R, RU_E, RU_Z, NC // п.@ → через
	, CHORDE(K_RUS | K_L01 | K_R05),                      CLF, RU_N, RU_A, RU_D, RU_O, NC // н.@ → надо
	, CHORDE(K_RUS | K_L12 | K_L01 | K_R05),              CLF, RU_V, RU_D, RU_R, RU_U, RU_G, NC // г.@ → вдруг
	, CHORDE(K_RUS | K_L11 | K_L04 | K_R15),              CLF, RU_T, RU_O, RU_ZH, RU_E, NC // ж.$ → тоже
	, CHORDE(K_RUS | K_L13 | K_R05),                      CLF, RU_V, RU_S, RU_E, RU_G, RU_D, RU_A, NC // в.@ → всегда
	, CHORDE(K_RUS | K_L12 | K_L11 | K_R15),              CLF, RU_S, RU_O, RU_V, RU_S, RU_E, RU_M, NC // м.$ → совсем
	, CHORDE(K_RUS | K_L03 | K_R05),                      CLF, RU_T, RU_E, RU_B, RU_Q, NC // б.@ → тебя
	, CHORDE(K_RUS | K_L03 | K_R15),                      CLF, RU_T, RU_E, RU_B, RU_E, NC // б.$ → тебе
	, CHORDE(K_RUS | K_L04 | K_R05),                      CLF, RU_V, RU_E, RU_D, RU_MZ, NC // д.@ → ведь
	
	, CHORDE(K_RUS | K_L13 | K_L12 | K_R12 | K_R14),      CLF, RU_S, RU_O, RU_B, RU_O, RU_J, NC // себ.ой → собой
	, CHORDE(K_RUS | K_L13 | K_L12 | K_R11 | K_R03),      CLF, RU_S, RU_O, RU_B, RU_O, RU_YU, NC // себ.ю → собою
	
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R11),                                  CLF, RU_M, RU_O, RU_ZH, RU_E, NC // мог.е → може
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_L10 | K_R11 ),                         CLF, RU_S, RU_M, RU_O, RU_ZH, RU_E, NC //  смог.е → сможе
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R11 | K_R12 | K_R14),                  CLF, RU_M, RU_O, RU_ZH, RU_E, RU_T, NC //  мог.ет → может
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_L10 | K_R11 | K_R12 | K_R14),          CLF, RU_S, RU_M, RU_O, RU_ZH, RU_E, RU_T, NC //  смог.ет → сможет
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R12 | K_R01 | K_R02 | K_R03),          CLF, RU_M, RU_O, RU_ZH, RU_E, RU_T, RU_E, NC //  мог.ете → можете
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_L10 | K_R12 | K_R01 | K_R02 | K_R03),  CLF, RU_S, RU_M, RU_O, RU_ZH, RU_E, RU_T, RU_E, NC // смог.ете → сможете
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R11 | K_R14),                          CLF, RU_M, RU_O, RU_ZH, RU_E, RU_M, NC //  мог.ем → можем
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_L10 | K_R11 | K_R14),                  CLF, RU_S, RU_M, RU_O, RU_ZH, RU_E, RU_M, NC //  смог.ем → сможем
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_L10 | K_R11 | K_R01),                  CLF, RU_M, RU_O, RU_ZH, RU_E, RU_N, NC //  мог.ен → можен
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R12 | K_R13 | K_R14 | K_R01),          CLF, RU_M, RU_O, RU_ZH, RU_E, RU_W, RU_MZ, NC // мог.ешь → можешь
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_L10 | K_R12 | K_R13 | K_R14 | K_R01),  CLF, RU_S, RU_M, RU_O, RU_ZH, RU_E, RU_W, RU_MZ, NC // смог.ешь → сможешь
	
	, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R12),                       CLF, RU_M, RU_O, RU_ZH, RU_N, RU_O, NC // мог.о → можно
	//, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R12 | K_R14),               CLF, RU_M, RU_O, RU_ZH, RU_N, RU_O, RU_J, NC //  мог.ой → можной
	//, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R12 | K_R01 | K_R04),       CLF, RU_M, RU_O, RU_ZH, RU_N, RU_O, RU_S, RU_T, RU_MZ, NC //  мог.ость → можность
	//, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R12 | K_R02 | K_R03),       CLF, RU_M, RU_O, RU_ZH, RU_N, RU_O, RU_G, RU_O, NC //  мог.ого → можного
	//, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R01),                       CLF, RU_M, RU_O, RU_ZH, RU_N, RU_Y, NC //  мог.ы → можны
	//, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R01 | K_R03),               CLF, RU_M, RU_O, RU_ZH, RU_N, RU_Y, RU_J, NC //  мог.ый → можный
	//, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R01 | K_R02 | K_R04),       CLF, RU_M, RU_O, RU_ZH, RU_N, RU_Y, RU_H, NC //  мог.ых → можных
	//, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R01 | K_R02 | K_R03),       CLF, RU_M, RU_O, RU_ZH, RU_N, RU_Y, RU_E, NC //  мог.ые → можные
	//, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R01 | K_R04),               CLF, RU_M, RU_O, RU_ZH, RU_N, RU_Y, RU_M, NC //  мог.ым → можным
	//, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R11 | K_R02 | K_R03),       CLF, RU_M, RU_O, RU_ZH, RU_N, RU_U, RU_YU, NC //  мог.ую → можную
	//, CHORDE(K_RUS | K_L14 | K_L12 | K_L11 | K_R12 | K_R13 | K_R14),       CLF, RU_M, RU_O, RU_ZH, RU_N, RU_O, RU_E, NC //  мог.ое → можное
	
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R02),                       CLF, RU_S, RU_P, RU_R, RU_O, RU_W, RU_U, NC // спрос.у → спрошу
	
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R00 | K_R13 | K_R01),                              CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_J, NC // спрос.ивай → спрашивай
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R00 | K_R13 | K_R04),                              CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_T, RU_MZ, NC // спрос.ивать → спрашивать
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R00 | K_R13 | K_R14),                              CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_L, NC // спрос.ивал → спрашивал
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R00 | K_R13 | K_R01 | K_R02),                      CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_L, RU_I, NC // спрос.ивали → спрашивали
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R00 | K_R13 | K_R01 | K_R03),                      CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_Q, NC // спрос.ивая → спрашивая
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R00 | K_R13 | K_R01 | K_R02 | K_R03),              CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_L, RU_A, NC // спрос.ивала → спрашивала
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R00 | K_R13 | K_R01 | K_R04),                      CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_E, RU_T, NC // спрос.ивает → спрашивает
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R10 | K_R11 | K_R13 | K_R03),                      CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_YU, NC // спрос.иваю → спрашиваю
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R10 | K_R00 | K_R11 | K_R13 | K_R01 | K_R04),      CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_E, RU_T, RU_E, NC // спрос.иваете → спрашиваете
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R10 | K_R00 | K_R11 | K_R13 | K_R14 | K_R01),      CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_E, RU_M, NC // спрос.иваем → спрашиваем
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R10 | K_R00 | K_R11 | K_R13 | K_R01 | K_R03),      CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_YU, RU_T, NC // спрос.ивают → спрашивают
	, CHORDE(K_RUS | K_L04 | K_L01 | K_L00 | K_R10 | K_R11 | K_R12 | K_R13 | K_R14 | K_R00 | K_R01), CLF, RU_S, RU_P, RU_R, RU_A, RU_W, RU_I, RU_V, RU_A, RU_E, RU_W, RU_MZ, NC // срос.иваешь → спрашиваешь
	
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R13),                                             CLF, RU_K, RU_O, RU_N, RU_C, RU_A, NC // конец.а → конца
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R11 | K_R13 | K_R02),                             CLF, RU_K, RU_O, RU_N, RU_C, RU_A, RU_M, RU_I, NC // конец.ами → концами
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R13 | K_R02 | K_R03),                             CLF, RU_K, RU_O, RU_N, RU_C, RU_A, RU_H, NC // конец.ах → концах
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R11),                                             CLF, RU_K, RU_O, RU_N, RU_C, RU_E, NC // конец.е → конце
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R12 | K_R14 | K_R01),                             CLF, RU_K, RU_O, RU_N, RU_C, RU_O, RU_V, NC // конец.ов → концов
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R12 | K_R01),                                     CLF, RU_K, RU_O, RU_N, RU_C, RU_O, RU_M, NC // конец.ом → концом
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R02),                                             CLF, RU_K, RU_O, RU_N, RU_C, RU_U, NC // конец.у → концу
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R01),                                             CLF, RU_K, RU_O, RU_N, RU_C, RU_Y, NC // конец.ы → концы
	
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R13 | K_R01 | K_R03),                             CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_A, RU_Q, NC // конец.ая → конечная
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R13 | K_R04),                                     CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_I, NC // конец.и → конечни
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R12),                                             CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_O, NC // конец.о → конечно
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R05),                                             CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_O, RU_M, NC // конец.@ → конечном
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R12 | K_R14),                                     CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_O, RU_J, NC // конец.ой → конечной
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R12 | K_R02 | K_R03),                             CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_O, RU_G, RU_O, NC // конец.ого → конечного
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R12 | K_R01 | K_R02),                             CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_O, RU_M, RU_U, NC // конец.ому → конечному
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R12 | K_R01 | K_R04),                             CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_O, RU_S, RU_T, RU_MZ, NC // конец.ость → конечность
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R11 | K_R02 | K_R03),                             CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_U, RU_YU, NC // конец.ую → конечную
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R01 | K_R02 | K_R03),                             CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_Y, RU_E, NC // конец.ые → конечные
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R01 | K_R02 | K_R04),                             CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_Y, RU_H, NC // конец.ых → конечных
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R01 | K_R04),                                     CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_Y, RU_M, NC // конец.ым → конечным
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R01 | K_R03),                                     CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_Y, RU_J, NC // конец.ый → конечный
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L02 | K_R01 | K_R15),                                     CLF, RU_K, RU_O, RU_N, RU_E, RU_X, RU_N, RU_Y, NC // конец.иначе → конечны
	
	, CHORDE(K_RUS | K_L13 | K_L00 | K_R04),                                                     CLF, RU_Z, RU_D, RU_E, RU_S, RU_MZ, NC // здешн.ь → здесь

	, CHORDE(K_RUS | K_L13 | K_L11 | K_L04 | K_R11 | K_R12 | K_R02),                             CLF, RU_P, RU_O, RU_X, RU_E, RU_M, RU_U, NC // чт.ему → почему

	, CHORDE(K_RUS | K_L13 | K_L11 | K_L10 | K_L03 | K_R02),                                     CLF, RU_S, RU_K, RU_A, RU_ZH, RU_U, NC // сказ.у → скажу
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L10 | K_L03 | K_R14),                                     CLF, RU_S, RU_K, RU_A, RU_ZH, RU_I, NC // сказ.и → скажи
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L10 | K_L03 | K_R11 | K_R12 | K_R14),                     CLF, RU_S, RU_K, RU_A, RU_ZH, RU_E, RU_T, NC // сказ.ет → скажет
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L10 | K_L03 | K_R11 | K_R14),                             CLF, RU_S, RU_K, RU_A, RU_ZH, RU_E, RU_M, NC // сказ.ем → скажем
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L10 | K_L03 | K_R11 | K_R12 | K_R01 | K_R03),             CLF, RU_S, RU_K, RU_A, RU_ZH, RU_I, RU_T, RU_E, NC // сказ.ите → скажите
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L10 | K_L03 | K_R12 | K_R13 | K_R14 | K_R01),             CLF, RU_S, RU_K, RU_A, RU_ZH, RU_E, RU_W, RU_MZ, NC // сказ.ешь → скажешь
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L10 | K_L03 | K_R12 | K_R02 | K_R04),                     CLF, RU_S, RU_K, RU_A, RU_ZH, RU_U, RU_T, NC // сказ.ут → скажут
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L10 | K_L03 | K_R12 | K_R01 | K_R02 | K_R03),             CLF, RU_S, RU_K, RU_A, RU_ZH, RU_E, RU_T, RU_E, NC // сказ.ете → скажете
	
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R11 | K_R12 | K_R14),                             CLF, RU_K, RU_A, RU_ZH, RU_E, RU_T, NC // каз.ет → кажет
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R15),                                             CLF, RU_K, RU_A, RU_ZH, RU_U, NC // каз.$ → кажу
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R12 | K_R02 | K_R04),                             CLF, RU_K, RU_A, RU_ZH, RU_U, RU_T, NC // каз.ут → кажут
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R12 | K_R01 | K_R02 | K_R03),                     CLF, RU_K, RU_A, RU_ZH, RU_E, RU_T, RU_E, NC // каз.ете → кажете
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R14),                                             CLF, RU_K, RU_A, RU_ZH, RU_I, NC // каз.и → кажи
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R11 | K_R12 | K_R01 | K_R03),                     CLF, RU_K, RU_A, RU_ZH, RU_I, RU_T, RU_E, NC // каз.ите → кажите
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R12 | K_R13 | K_R14 | K_R01),                     CLF, RU_K, RU_A, RU_ZH, RU_E, RU_W, RU_MZ, NC // каз.ешь → кажешь
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R11 | K_R14),                                     CLF, RU_K, RU_A, RU_ZH, RU_E, RU_M, NC // каз.ем → кажем
	
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R01 | K_R03),                                     CLF, RU_K, RU_A, RU_ZH, RU_D, RU_Y, RU_J, NC // каз.ый → каждый
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R12 | K_R02 | K_R03),                             CLF, RU_K, RU_A, RU_ZH, RU_D, RU_O, RU_G, RU_O, NC // каз.ого → каждого
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R12 | K_R14),                                     CLF, RU_K, RU_A, RU_ZH, RU_D, RU_O, RU_J, NC // каз.ой → каждой
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R12 | K_R01 | K_R02),                             CLF, RU_K, RU_A, RU_ZH, RU_D, RU_O, RU_M, RU_U, NC // каз.ому → каждому
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R05),                                             CLF, RU_K, RU_A, RU_ZH, RU_D, RU_O, RU_M, NC // каз.@ → каждом
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R01 | K_R04),                                     CLF, RU_K, RU_A, RU_ZH, RU_D, RU_Y, RU_M, NC // каз.ым → каждым
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R11 | K_R02 | K_R03),                             CLF, RU_K, RU_A, RU_ZH, RU_D, RU_U, RU_YU, NC // каз.ую → каждую
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R12 | K_R13 | K_R14),                             CLF, RU_K, RU_A, RU_ZH, RU_D, RU_O, RU_E, NC // каз.ое → каждое
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R13 | K_R01 | K_R03),                             CLF, RU_K, RU_A, RU_ZH, RU_D, RU_A, RU_Q, NC // каз.ая → каждая
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R01 | K_R02 | K_R03),                             CLF, RU_K, RU_A, RU_ZH, RU_D, RU_Y, RU_E, NC // каз.ые → каждые
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_R01 | K_R02 | K_R04),                             CLF, RU_K, RU_A, RU_ZH, RU_D, RU_Y, RU_H, NC // каз.ых → каждых 

	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_L02 | K_R11 | K_R12 | K_R14),                     CLF, RU_Z, RU_A, RU_K, RU_A, RU_ZH, RU_E, RU_T, NC // заказ.ет → закажет
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_L02 | K_R15),                                     CLF, RU_Z, RU_A, RU_K, RU_A, RU_ZH, RU_U, NC // заказ.$ → закажу
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_L02 | K_R12 | K_R02 | K_R04),                     CLF, RU_Z, RU_A, RU_K, RU_A, RU_ZH, RU_U, RU_T, NC // заказ.ут → кажут
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_L02 | K_R12 | K_R01 | K_R02 | K_R03),             CLF, RU_Z, RU_A, RU_K, RU_A, RU_ZH, RU_E, RU_T, RU_E, NC // заказ.ете → кажете
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_L02 | K_R14),                                     CLF, RU_Z, RU_A, RU_K, RU_A, RU_ZH, RU_I, NC // заказ.и → кажи
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_L02 | K_R11 | K_R12 | K_R01 | K_R03),             CLF, RU_Z, RU_A, RU_K, RU_A, RU_ZH, RU_I, RU_T, RU_E, NC // заказ.ите → кажите
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_L02 | K_R12 | K_R13 | K_R14 | K_R01),             CLF, RU_Z, RU_A, RU_K, RU_A, RU_ZH, RU_E, RU_W, RU_MZ, NC // заказ.ешь → кажешь
	, CHORDE(K_RUS | K_L13 | K_L11 | K_L03 | K_L02 | K_R11 | K_R14),                             CLF, RU_Z, RU_A, RU_K, RU_A, RU_ZH, RU_E, RU_M, NC // заказ.ем → кажем

	, 0, 0, 0, 0, 0, 0
};

