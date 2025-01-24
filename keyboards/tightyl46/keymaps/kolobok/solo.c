#include "solo.h"
#include "type.h"

const uint8_t PROGMEM dict_common[] = {
	  LO_HI(CC_DU), KC_ESC, NC
	, LO_HI(KC_BSPC), KC_BSPC, NC
	, LO_HI(CC_SD), KC_ENT, NC
	, LO_HI(CC_DD), KC_DEL, NC
	//, LO_HI(CC_W5), KC_MINS, NC // -
	, LO_HI(KC_SPC), KC_SPC, NC
	//, LO_HI(KC_F5),       
	
	, 0, 0
};


const uint8_t PROGMEM dict_ru[] = {
	  LO_HI(RU_S), RU_G, NC
	, LO_HI(RU_V), RU_MZ, NC
	, LO_HI(RU_K), RU_Q, NC
	#ifdef USE_ALTCODE
	, LO_HI(RU_T),            SFF, AC2(4, 6), ALF, NC // . 
	#else
	, LO_HI(RU_T),            SFF, RU_DOT, NC // . 
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
	
	, LO_HI(KC_1), KC_MINS, NC
	, LO_HI(KC_2), RU_EE, NC
	#ifdef USE_ALTCODE
	, LO_HI(KC_4),            SFF, AC2(5, 9), NC // ;
	#else
	, LO_HI(KC_4),            SFN, KC_4, NC // ;
	#endif
	, LO_HI(KC_8), RU_Y, NC
	, LO_HI(KC_DEL),          SFF, KC_SPC, KC_EQL, KC_SPC, NC // =
	, LO_HI(CC_W5), RU_B, NC
	, LO_HI(KC_F8), RU_M, NC
	, LO_HI(KC_F4), RU_P, NC
	, LO_HI(KC_F2), SFN, KC_9, NC // (
	, LO_HI(KC_F1), SFN, KC_0, NC // )
	, LO_HI(CC_PJ), RU_WW, NC
	
	#ifdef USE_ALTCODE
	, LO_HI(KC_F3),            SFF, AC2(4, 4), ALF, KC_SPC, NC // ,
	#else
	, LO_HI(KC_F3),            SFN, RU_DOT, KC_SPC, NC // ,
	#endif

	, 0, 0
};

const uint8_t PROGMEM dict_ru_sft[] = {
	#ifdef USE_ALTCODE
	  LO_HI(RU_T),             SFF, AC2(4, 7), NC // /
	#else
	  LO_HI(RU_T),             SFN, KC_BSLS, NC // /
	#endif
	, LO_HI(KC_1), SFN, KC_MINS, NC  // _
	#ifdef USE_ALTCODE
	, LO_HI(KC_4),            SFF, AC2(5, 8), NC // :
	#else
	, LO_HI(KC_4),            SFN, KC_6, NC // :
	#endif
	, LO_HI(KC_DEL), SFN, KC_EQL, NC // +
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
	#ifdef USE_ALTCODE
	, LO_HI(KC_F3),            SFF, AC2(3, 4), NC // " 
	#else
	, LO_HI(KC_F3),            SFN, KC_2, NC // " 
	#endif
	
	, 0, 0
};

const uint8_t PROGMEM dict_ru_sym[] = {
	#ifdef USE_ALTCODE
	  LO_HI(CC_DU),      SFF, AC2(9, 6), NC // `
 	#else
	  LO_HI(CC_DU),      CMD, LSW, SFF, KC_GRV, CMD, LSW, NC // `
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(RU_S),            SFF, AC2(4, 6), ALF, NC // . 
	#else
	, LO_HI(RU_S),            SFF, RU_DOT, NC // . 
	#endif
	, LO_HI(RU_V),            SFF, KC_7, NC
	, LO_HI(RU_K),            SFF, KC_8, NC
	, LO_HI(RU_T),            SFF, KC_9, NC
	, LO_HI(KC_BSPC), 	      CLN, KC_BSPC, NC
	
	, LO_HI(CC_SD), 		  RU_YO, NC
	, LO_HI(RU_D),            SFF, KC_0, NC
	, LO_HI(RU_B),            SFF, KC_1, NC
	, LO_HI(RU_P),            SFF, KC_2, NC
	, LO_HI(RU_N),            SFF, KC_3, NC
	, LO_HI(KC_ENT),          RU_TZ, NC
	
	#ifdef USE_ALTCODE
	, LO_HI(KC_1),            SFF, AC2(4, 4), NC // ,
	#else
	, LO_HI(KC_1),            SFN, RU_DOT, NC // ,
	#endif
	, LO_HI(KC_2),            SFF, KC_4, NC
	, LO_HI(KC_4),            SFF, KC_5, NC
	, LO_HI(KC_8),            SFF, KC_6, NC
	, LO_HI(KC_DEL),          SFN, KC_9, KC_0, NC // ()


	, LO_HI(KC_CNCL), RU_Z, RU_N, NC // зн
	, LO_HI(RU_E), RU_V, RU_N, NC // вн
	, LO_HI(RU_O), RU_K, RU_T, NC // кт
	, LO_HI(RU_A), RU_S, RU_D, NC // сд
	, LO_HI(RU_I), RU_F, NC
	
	, LO_HI(KC_LALT), RU_B, RU_L, NC // бл
	, LO_HI(RU_Y),            RU_H, NC
	, LO_HI(RU_U),            RU_YU, NC
	, LO_HI(RU_Q),            RU_C, NC
	, LO_HI(RU_MZ),           RU_ZH, NC
	
	, LO_HI(CC_W5), RU_B, RU_N, NC // бн
	, LO_HI(KC_F8), RU_M, RU_N, NC // мн
	, LO_HI(KC_F4), RU_V, RU_M, NC // вм
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
	
	, 0, 0
};

const uint8_t PROGMEM dict_ru_sym_sft[] = {
	#ifdef USE_ALTCODE
	  LO_HI(CC_DU),       SFF, AC3(1, 2, 6), NC // ~
 	#else
	  LO_HI(CC_DU),       CMD, LSW, SFN, KC_GRV, CMD, LSW, NC // ~
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(RU_S),             SFF, AC2(9, 2), NC // \*
	#else
	, LO_HI(RU_S),             SFF, KC_BSLS, NC // \*
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(RU_V),             SFF, AC2(3, 8), NC // &
	#else
	, LO_HI(RU_V),             CMD, LSW, SFN, KC_7, CMD, LSW, NC // &
	#endif
	, LO_HI(RU_K), SFN, KC_8, NC // *
	#ifdef USE_ALTCODE
	, LO_HI(RU_T),             SFF, AC3(1, 2, 4), NC // |
	#else
	, LO_HI(RU_T),             CMD, LSW, SFN, KC_BSLS, CMD, LSW, NC // |
	#endif
	
	#ifdef USE_ALTCODE
	, LO_HI(RU_D),             SFF, AC2(3, 9), NC // '
	#else
	, LO_HI(RU_D),             CMD, LSW, KC_QUOT, CMD, LSW, NC // '
	#endif
	, LO_HI(RU_B),             SFN, KC_1, NC // !
	#ifdef USE_ALTCODE
	, LO_HI(RU_P),             SFF, AC2(6, 3), NC // ?
	#else
	, LO_HI(RU_P),             SFN, KC_7, NC // ?
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(RU_N),             SFF, AC2(3, 5), NC // #
	#else
	, LO_HI(RU_N),             CMD, LSW, SFN, KC_3, CMD, LSW, NC // #
	#endif
	
	, LO_HI(KC_1),          SFF, KC_EQL, NC // =
	#ifdef USE_ALTCODE
	, LO_HI(KC_2),             SFF, AC2(3, 6), NC // $
	#else
	, LO_HI(KC_2),             CMD, LSW, SFN, KC_4, CMD, LSW, NC // $
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_4),       SFF, AC2(3, 7), NC // %
 	#else
	, LO_HI(KC_4),       SFN, KC_5, NC // %
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_8),      SFF, AC3(2, 5, 2), NC // №
 	#else
	, LO_HI(KC_8),      SFN, KC_3, NC // №
	#endif
	#ifdef USE_ALTCODE
	, LO_HI(KC_DEL),       SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	#else
	, LO_HI(KC_DEL),       CMD, LSW, SFN, KC_COMM, KC_DOT, CMD, LSW, NC // <>
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
	
	, 0, 0
};

const uint8_t PROGMEM dict_word[] = {
	  LO_HI(CC_DU)
		, RU_D, RU_O, RU_B, RU_R, RU_O, RU_E, KC_SPACE, RU_U, RU_T, RU_R, RU_O, NC // доброе утро
	, LO_HI(RU_S)
		, RU_A, RU_N, RU_I, RU_YU, NC // анию
	, LO_HI(RU_V)
		, RU_A, RU_N, RU_I, RU_I, NC // ании
	, LO_HI(RU_K)
		, RU_A, RU_N, RU_I, RU_Q, NC // ания
	, LO_HI(RU_T)
		, RU_A, RU_N, RU_I, RU_E, NC // ание
	, LO_HI(KC_BSPC)
		, RU_A, RU_N, RU_I, RU_J, NC // аний
	
	, LO_HI(CC_SD)
		, RU_Z, RU_D, RU_R, RU_A, RU_V, RU_S, RU_T, RU_V, RU_U, RU_J, RU_T, RU_E, NC // здравствуйте
	, LO_HI(RU_D)
		, RU_E, RU_N, RU_I, RU_YU, NC // ению
	, LO_HI(RU_B)
		, RU_E, RU_N, RU_I, RU_I, NC // ении
	, LO_HI(RU_P)
		, RU_E, RU_N, RU_I, RU_Q, NC // ения
	, LO_HI(RU_N)
		, RU_E, RU_N, RU_I, RU_E, NC // ение
	, LO_HI(KC_ENT)
		, RU_E, RU_N, RU_I, RU_J, NC // ений
	
	, LO_HI(CC_DD)
		, RU_D, RU_O, RU_B, RU_R, RU_Y, RU_J, KC_SPC, RU_D, RU_E, RU_N, RU_MZ, NC // добрый день
	, LO_HI(KC_1)
		, RU_Q, RU_N, RU_I, RU_YU, NC // янию
	, LO_HI(KC_2)
		, RU_Q, RU_N, RU_I, RU_I, NC // янии
	, LO_HI(KC_4)
		, RU_Q, RU_N, RU_I, RU_Q, NC // яния
	, LO_HI(KC_8)
		, RU_Q, RU_N, RU_I, RU_E, NC // яние
	, LO_HI(KC_DEL)
		, RU_Q, RU_N, RU_I, RU_J, NC // яний
	
	#ifdef UTYUMOV
	, LO_HI(KC_CNCL)
		, CMD, LSW, KC_U, KC_T, KC_Y, KC_V, CMD, LSW, NC // utyv
	#endif
	, LO_HI(RU_E)
		, RU_S, RU_K, RU_A, RU_Z, NC // сказ
	, LO_HI(RU_O)
		, RU_K, RU_O, RU_T, RU_O, RU_R, NC // котор
	, LO_HI(RU_A)
		, RU_E, RU_S, RU_T, RU_MZ, NC // есть
	, LO_HI(RU_I)
		, RU_X, RU_E, RU_L, RU_O, RU_V, RU_E, NC // челове
	, LO_HI(CC_DV)
		, RU_D, RU_O, RU_B, RU_R, RU_Y, RU_J, KC_SPACE, RU_V, RU_E, RU_X, RU_E, RU_R, NC // добрый вечер
	, LO_HI(KC_LALT)
		, RU_EE, RU_L, RU_E, RU_K, RU_T, RU_R, NC // электр
	, LO_HI(RU_Y)
		, RU_H, RU_O, RU_R, RU_O, RU_W, NC // хорош
	, LO_HI(RU_U)	
		, RU_O, RU_B, RU_TZ, RU_E, RU_K, RU_T, NC // объект
	, LO_HI(RU_Q)
		, RU_S, RU_K, RU_O, RU_L, RU_MZ, RU_K, NC // скольк
	, LO_HI(RU_MZ)
		, RU_G, RU_O, RU_V, RU_O, RU_R, NC // говор
	, LO_HI(CC_IMZ)
		, RU_S, RU_P, RU_A, RU_S, RU_I, RU_B, RU_O, NC // спасибо
	, LO_HI(KC_F8)
		, RU_F,  RU_U, RU_N, RU_K, RU_C, RU_I, NC // функци
	, LO_HI(KC_F4)
		, RU_P, RU_R, RU_O, RU_C, RU_E, RU_D, RU_U, RU_R, NC // процедур
	, LO_HI(KC_F2)
		, RU_E, RU_WW, RU_E, NC // еще
	, LO_HI(KC_F1)
		, RU_K, RU_O, RU_N, RU_E, RU_C, NC // конец
	, LO_HI(CC_PJ)
		, RU_P, RU_O, RU_ZH, RU_A, RU_L, RU_U, RU_J, RU_S, RU_T, RU_A, NC // пожалуйста
	
	, 0, 0
};

void process_solo(uint16_t keycode, bool pressed) {
	
	if (pressed) {
		const uint8_t *p_word = 0;

		if (!p_word && is_word()) {
			p_word = find_word16(keycode, dict_word);
		}
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
			reset_chorde_mods();
			reset_mods();
			
		}
	}
}