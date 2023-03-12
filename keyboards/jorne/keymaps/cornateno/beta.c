#include "beta.h"

const uint8_t PROGMEM beta_dict[] = {
	0, 0, BM_BL(0), 0 			, AC2(4, 6), TD, KC_BSPC, AC2(5, 8), TD, KC_BSPC, AC2(4, 6), ALF, AC2(4, 6), ALF, AC2(4, 6), NC // . : ...
	, 0, 0, 0, BM_BR(0) 			, AC2(4, 6), TD, KC_BSPC, AC2(5, 8), TD, KC_BSPC, AC2(4, 6), ALF, AC2(4, 6), ALF, AC2(4, 6), NC // . : ...
	, 0, 0, BM_BL(1), 0 			, AC2(4, 4), NC // ,
	, 0, 0, 0, BM_BR(1) 			, AC2(4, 4), NC // ,
	, 0, 0, BM_BL(2), 0 			, AC2(3, 9), TD, KC_BSPC, AC2(3, 4), NC // ' "
	, 0, 0, 0, BM_BR(2) 			, AC2(3, 9), TD, KC_BSPC, AC2(3, 4), NC // ' "
	, 0, 0, BM_BL(3), 0 			, KC_SPC, NC
	, 0, 0, 0, BM_BR(3) 			, KC_SPC, NC
	, 0, 0, BM_BL(4), 0 			, SFN, KC_0, NC // )
	, 0, 0, 0, BM_BR(4) 			, SFN, KC_9, NC // (
	, 0, 0, BM_BL(5), 0 			, SFN, KC_9, NC // (
	, 0, 0, 0, BM_BR(5) 			, SFN, KC_0, NC // )
	, 0, 0, BM_BL(6), 0 			, KC_MINS, NC // -
	, 0, 0, 0, BM_BR(6) 			, KC_MINS, NC // -
	, 0, 0, BM_BL(0) | BM_BL(1), 0 			, AC2(5, 9), NC // ;
	, 0, 0, 0, BM_BR(0) | BM_BR(1) 			, AC2(5, 9), NC // ;
	, 0, 0, BM_BL(4) | BM_BL(5), 0 			, SFN, KC_9, KC_0, NC // ()
	, 0, 0, 0, BM_BR(4) | BM_BR(5) 			, SFN, KC_9, KC_0, NC // ()
	, 0, 0, BM_BL(1) | BM_BL(2), 0 			, AC3(1, 2, 4), NC // |
	, 0, 0, 0, BM_BR(1) | BM_BR(2) 			, AC3(1, 2, 4), NC // |
	, 0, 0, BM_BL(3) | BM_BL(4), 0 			, KC_EQL, NC // =
	, 0, 0, 0, BM_BR(3) | BM_BR(4) 			, KC_EQL, NC // =
	, 0, 0, BM_BL(3) | BM_BL(5), 0 			, SFN, KC_EQL, NC // +
	, 0, 0, 0, BM_BR(3) | BM_BR(5) 			, SFN, KC_EQL, NC // +
	, 0, 0, BM_BL(3) | BM_BL(6), 0 			, SFN, KC_8, NC // *
	, 0, 0, 0, BM_BR(3) | BM_BR(6) 			, SFN, KC_8, NC // *

	, 0, 0, 0, 0 // end
	
};

const uint8_t PROGMEM beta_s_dict[] = {
	0, 0, BM_BL(0), 0 			, KC_1, TD, SFF, KC_BSPC, AC2(6, 3), NC // ! ?
	, 0, 0, 0, BM_BL(0) 			, SFF, AC2(6, 3), NC // ?
	, 0, 0, BM_BL(1), 0 			, SFF, AC2(4, 7), NC // /
	, 0, 0, 0, BM_BL(1) 			, SFF, AC2(9, 2), NC // \ //
	, 0, 0, BM_BL(2), 0 			, SFF, AC2(6, 4), TD, SFF, KC_BSPC, AC2(3, 5), TD, SFF, KC_BSPC, AC3(2, 5, 2), TD, SFF, KC_BSPC, AC2(3, 8), TD, SFF, KC_BSPC, AC2(3, 7), TD, SFF, KC_BSPC, AC2(3, 6), TD, SFF, KC_BSPC, AC2(9, 4), TD, SFF, KC_BSPC, AC3(1, 2, 6), TD, SFF, KC_BSPC, AC2(9, 6), NC // @ # № & $ ^ ~ `
	, 0, 0, 0, BM_BL(2) 			, SFF, AC2(3, 5), NC // #
	, 0, 0, BM_BL(3), 0 			, KC_SPC, NC
	, 0, 0, 0, BM_BL(3) 			, SFF, AC2(3, 8), NC // &
	, 0, 0, BM_BL(4), 0 			, SFF, AC2(6, 2), NC // >
	, 0, 0, 0, BM_BL(4) 			, SFF, AC2(3, 7), NC // %
	, 0, 0, BM_BL(5), 0 			, SFF, AC2(6, 0), NC // <
	, 0, 0, 0, BM_BL(5) 			, SFF, AC3(1, 2, 4), NC // |
	, 0, 0, BM_BL(6), 0 			, KC_MINS, NC // _
	, 0, 0, 0, BM_BL(6) 			, KC_MINS, NC // _
	, 0, 0, BM_BL(1) | BM_BL(2), 0 			, SFF, AC2(9, 2), NC // |
	, 0, 0, 0, BM_BR(1) | BM_BR(2) 			, SFF, AC2(9, 2), NC // |
	, 0, 0, BM_BL(4) | BM_BL(5), 0 			, SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	, 0, 0, 0, BM_BR(4) | BM_BR(5) 			, SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>

	, 0, 0, 0, 0 // end
	
};
