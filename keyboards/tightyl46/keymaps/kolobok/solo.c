#include "solo.h"
#include "type.h"

const uint8_t PROGMEM dict_common[] = {
	  LO_HI(CC_DU), KC_ESC, NC
	, LO_HI(KC_BSPC), KC_BSPC, NC
	, LO_HI(CC_SD), KC_ENT, NC
	, LO_HI(CC_DD), KC_DEL, NC
	, LO_HI(KC_DEL), KC_MINS, NC
	, LO_HI(KC_F2), SFN, KC_9, NC // (
	, LO_HI(KC_F1), SFN, KC_0, NC // )
	, LO_HI(KC_SPC), KC_SPC, NC
	
	, 0, 0
};


const uint8_t PROGMEM dict_ru[] = {
	  LO_HI(RU_S), RU_G, NC
	, LO_HI(RU_V), RU_MZ, NC
	, LO_HI(RU_K), RU_Q, NC
	#ifdef USE_ALTCODE
	, LO_HI(RU_T),            SFF, AC2(5, 9), NC // ;
	#else
	, LO_HI(RU_T),            SFN, KC_4, NC // ;
	#endif
	, LO_HI(KC_CNCL), RU_Z, NC
	, LO_HI(RU_E), RU_V, NC
	, LO_HI(RU_O), RU_K, NC
	, LO_HI(RU_A), RU_D, NC
	, LO_HI(RU_I), RU_X, NC
	, LO_HI(CC_DV), RU_W, NC
	
	, LO_HI(RU_D), RU_U, NC
	, LO_HI(RU_B), RU_I, NC
	, LO_HI(RU_P), RU_E, NC
	, LO_HI(RU_N), RU_O, NC
	, LO_HI(KC_ENT), RU_A, NC
	, LO_HI(KC_LALT), RU_L, NC
	, LO_HI(RU_Y), RU_N, NC
	, LO_HI(RU_U), RU_T, NC
	, LO_HI(RU_Q), RU_S, NC
	, LO_HI(RU_MZ), RU_R, NC
	, LO_HI(CC_IMZ), RU_J, NC
	
	, LO_HI(KC_1), RU_F, NC
	, LO_HI(KC_2), RU_EE, NC
	, LO_HI(KC_4), RU_H, NC
	, LO_HI(KC_8), RU_Y, NC
	, LO_HI(CC_W5), RU_B, NC
	, LO_HI(KC_F8), RU_M, NC
	, LO_HI(KC_F4), RU_P, NC
	, LO_HI(CC_PJ), RU_ZH, NC
	
	#ifdef USE_ALTCODE
	, LO_HI(KC_F3),            SFF, AC2(4, 4), ALF, KC_SPC, NC // ,
	#else
	, LO_HI(KC_F3),            SFN, RU_DOT, KC_SPC, NC // ,
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F5),       SFF, AC2(4, 6), ALF, NC // .
	#else
	, LO_HI(KC_F5),       SFF, RU_DOT, NC // .
	#endif

	, 0, 0
};

const uint8_t PROGMEM dict_ru_sft[] = {
	#ifdef USE_ALTCODE
	  LO_HI(RU_T),            SFF, AC2(5, 8), NC // :
	#else
	  LO_HI(RU_T),            SFN, KC_6, NC // :
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F2),             SFF, AC2(6, 0), NC // <
	#else
	, LO_HI(KC_F2),             CMD, LSW, SFN, KC_COMM, CMD, LSW, NC // <
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F1),             SFF, AC2(6, 2), NC // >
	#else
	, LO_HI(KC_F1),             CMD, LSW, SFN, KC_DOT, CMD, LSW, NC // >
	#endif
	, LO_HI(KC_F3), SFF, KC_EQL, NC
	#ifdef USE_ALTCODE
	, LO_HI(KC_F5),       SFF, AC2(3, 4), NC // "
 	#else
	, LO_HI(KC_F5),       SFN, KC_2, NC // "
	#endif
	
	, 0, 0
};

const uint8_t PROGMEM dict_ru_sym[] = {
	  LO_HI(RU_S),            RU_TZ, NC
	, LO_HI(RU_V),            SFF, KC_7, NC
	, LO_HI(RU_K),            SFF, KC_8, NC
	, LO_HI(RU_T),            SFF, KC_9, NC
	, LO_HI(RU_D),            RU_YO, NC
	, LO_HI(RU_B),            SFF, KC_4, NC
	, LO_HI(RU_P),            SFF, KC_5, NC
	, LO_HI(RU_N),            SFF, KC_6, NC
	, LO_HI(KC_ENT),          SFF, KC_0, NC
	, LO_HI(KC_2),            SFF, KC_1, NC
	, LO_HI(KC_4),            SFF, KC_2, NC
	, LO_HI(KC_8),            SFF, KC_3, NC
	, LO_HI(KC_BSPC),  CLN, KC_BSPC, NC


	#ifdef USE_ALTCODE
	, LO_HI(RU_E),             SFF, AC2(4, 7), NC // /
	#else
	, LO_HI(RU_E),             SFN, KC_BSLS, NC // /
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(RU_O),             SFF, AC3(1, 2, 4), NC // |
	#else
	, LO_HI(RU_O),             CMD, LSW, SFN, KC_BSLS, CMD, LSW, NC // |
	#endif
	, LO_HI(RU_A), SFN, KC_EQL, NC // +
	#ifdef USE_ALTCODE
	, LO_HI(RU_I),       SFF, AC2(3, 7), NC // %
 	#else
	, LO_HI(RU_I),       SFN, KC_5, NC // %
	#endif
	, LO_HI(RU_Y),            RU_H, NC
	, LO_HI(RU_U),            RU_YU, NC
	, LO_HI(RU_Q),            RU_C, NC
	, LO_HI(RU_MZ),           RU_WW, NC
	, LO_HI(KC_F8),           SFN, KC_1, NC // !
	#ifdef USE_ALTCODE
	, LO_HI(KC_F4),             SFF, AC2(6, 3), NC // ?
	#else
	, LO_HI(KC_F4),             SFN, KC_7, NC // ?
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F2),             SFF, AC2(9, 1), NC // [
	#else
	, LO_HI(KC_F2),             CMD, LSW, KC_LBRC, CMD, LSW, NC // [
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F1),             SFF, AC2(9, 3), NC // ]
	#else
	, LO_HI(KC_F1),             CMD, LSW, KC_RBRC, CMD, LSW, NC // ]
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F3),             SFF, AC2(6, 4), NC // @
	#else
	, LO_HI(KC_F3),             CMD, LSW, SFN, KC_2, CMD, LSW, NC // @
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F5),             SFF, AC2(3, 5), NC // #
	#else
	, LO_HI(KC_F5),             CMD, LSW, SFN, KC_3, CMD, LSW, NC // #
	#endif
	
	, 0, 0
};

const uint8_t PROGMEM dict_ru_sym_sft[] = {
	#ifdef USE_ALTCODE
	  LO_HI(RU_E),             SFF, AC2(9, 2), NC // \*
	#else
	  LO_HI(RU_E),             SFF, KC_BSLS, NC // \*
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(RU_O),             SFF, AC2(3, 8), NC // &
	#else
	, LO_HI(RU_O),             CMD, LSW, SFN, KC_7, CMD, LSW, NC // &
	#endif
	, LO_HI(RU_A), SFN, KC_8, NC // *
	#ifdef USE_ALTCODE
	, LO_HI(RU_I),       SFF, AC3(1, 2, 6), NC // ~
 	#else
	, LO_HI(RU_I),       CMD, LSW, SFN, KC_GRV, CMD, LSW, NC // ~
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F8),      SFF, AC3(2, 5, 2), NC // №
 	#else
	, LO_HI(KC_F8),      CMD, LSW, SFN, KC_3, CMD, LSW, NC // №
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F4),      SFF, AC2(9, 6), NC // `
 	#else
	, LO_HI(KC_F4),      CMD, LSW, SFF, KC_GRV, CMD, LSW, NC // `
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F2),             SFF, AC3(1, 2, 3), NC // {
	#else
	, LO_HI(KC_F2),             CMD, LSW, SFN, KC_LBRC, CMD, LSW, NC // {
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F1),             SFF, AC3(1, 2, 5), NC // }
	#else
	, LO_HI(KC_F1),             CMD, LSW, SFN, KC_RBRC, CMD, LSW, NC // }
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F3),             SFF, AC2(9, 4), NC // ^
	#else
	, LO_HI(KC_F3),             CMD, LSW, SFN, KC_6, CMD, LSW, NC // ^
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_F5),             SFF, AC2(3, 9), NC // '
	#else
	, LO_HI(KC_F5),             CMD, LSW, KC_QUOT, CMD, LSW, NC // '
	#endif
	
	, 0, 0
};

void process_solo(uint16_t keycode, bool pressed) {
	
	if (pressed) {
		const uint8_t *p_word = 0;

		if (!p_word && is_sym() && is_shift()) {
			p_word = find_word16(keycode, dict_ru_sym_sft);
		}
		
		if (!p_word && is_sym()) {
			p_word = find_word16(keycode, dict_ru_sym);
		}
			
		if (!p_word && is_shift()) {
			p_word = find_word16(keycode, dict_ru_sft);
		}

		if (!p_word) {
			p_word = find_word16(keycode, dict_ru);
		}

		if (!p_word) {
			p_word = find_word16(keycode, dict_common);
		}
		
		if (!p_word) {
			// do nothing
		} else {
			
			if (is_shift()) {
				shift_on();
			} else {
				shift_off();
			}
			type_word(p_word, SA_SUPRESS_2, false);
			shift_done();
			reset_mods();
			
		}
	}
}