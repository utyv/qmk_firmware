#include "beta.h"

const uint8_t PROGMEM beta_dict[] = {
	0, 0, BM_BL(BL_0), 0 			, ALN, KC_KP_4, KC_KP_6, TD, KC_BSPC, ALN, KC_KP_5, KC_KP_8, TD, KC_BSPC, ALN, KC_KP_4, KC_KP_6, ALF, ALN, KC_KP_4, KC_KP_6, ALF, ALN, KC_KP_4, KC_KP_6, ALF, NC // . : ...
	, 0, 0, 0, BM_BL(BL_0) 			, ALN, KC_KP_4, KC_KP_6, TD, KC_BSPC, ALN, KC_KP_5, KC_KP_8, TD, KC_BSPC, ALN, KC_KP_4, KC_KP_6, ALF, ALN, KC_KP_4, KC_KP_6, ALF, ALN, KC_KP_4, KC_KP_6, ALF, NC // . : ...
	, 0, 0, BM_BL(BL_1), 0 			, ALN, KC_KP_4, KC_KP_4, NC // ,
	, 0, 0, 0, BM_BL(BL_1) 			, ALN, KC_KP_4, KC_KP_4, NC // ,
	, 0, 0, BM_BL(BL_2), 0 			, ALN, KC_KP_3, KC_KP_9, NC // '
	, 0, 0, 0, BM_BL(BL_2) 			, ALN, KC_KP_3, KC_KP_9, NC // '
	, 0, 0, BM_BL(BL_3), 0 			, KC_SPC, NC
	, 0, 0, 0, BM_BL(BL_3) 			, KC_SPC, NC
	, 0, 0, BM_BL(BL_4), 0 			, SFN, KC_0, NC // )
	, 0, 0, 0, BM_BL(BL_4) 			, SFN, KC_9, NC // (
	, 0, 0, BM_BL(BL_5), 0 			, SFN, KC_9, NC // (
	, 0, 0, 0, BM_BL(BL_5) 			, SFN, KC_0, NC // )
	, 0, 0, BM_BL(BL_6), 0 			, KC_MINS, NC // -
	, 0, 0, 0, BM_BL(BL_6) 			, KC_MINS, NC // -

	, 0, 0, 0, 0 // end
	
};

const uint8_t PROGMEM beta_s_dict[] = {
	0, 0, BM_BL(BL_0), 0 			, KC_1, NC // !
	, 0, 0, 0, BM_BL(BL_0) 			, SFF, ALN, KC_KP_6, KC_KP_3, NC // ?
	, 0, 0, BM_BL(BL_1), 0 			, SFF, ALN, KC_KP_4, KC_KP_7, NC // /
	, 0, 0, 0, BM_BL(BL_1) 			, SFF, ALN, KC_KP_9, KC_KP_2, NC // \ //
	, 0, 0, BM_BL(BL_2), 0 			, SFF, ALN, KC_KP_6, KC_KP_4, NC // @
	, 0, 0, 0, BM_BL(BL_2) 			, SFF, ALN, KC_KP_3, KC_KP_5, NC // #
	, 0, 0, BM_BL(BL_3), 0 			, KC_SPC, NC
	, 0, 0, 0, BM_BL(BL_3) 			, SFF, ALN, KC_KP_3, KC_KP_8, NC // &
	, 0, 0, BM_BL(BL_4), 0 			, SFF, ALN, KC_KP_6, KC_KP_2, NC // >
	, 0, 0, 0, BM_BL(BL_4) 			, SFF, ALN, KC_KP_3, KC_KP_7, NC // %
	, 0, 0, BM_BL(BL_5), 0 			, SFF, ALN, KC_KP_6, KC_KP_0, NC // <
	, 0, 0, 0, BM_BL(BL_5) 			, SFF, ALN, KC_KP_1, KC_KP_2, KC_KP_4, NC // |
	, 0, 0, BM_BL(BL_6), 0 			, KC_MINS, NC // _
	, 0, 0, 0, BM_BL(BL_6) 			, KC_MINS, NC // _

	, 0, 0, 0, 0 // end
	
};
