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
	
	, 0, BM_AR(AR_0)			, RU_K
	, 0, BM_AR(AR_1)			, RU_U
	, 0, BM_AR(AR_2)			, RU_L
	, 0, BM_AR(AR_3)			, RU_Q
	, 0, BM_AR(AR_4)			, RU_B
	, 0, BM_AR(AR_5)			, RU_Y
	, 0, BM_AR(AR_6)			, RU_M
	, 0, BM_AR(AR_7)			, RU_YU
	
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

	, BM_AL(SL_S) + BM_AL(SL_T)									, BM_AR(SR_R) + BM_AR(SR_K) + BM_AR(SR_A)						, RU_S, RU_T, RU_R, RU_R, RU_O, RU_K, RU_A, NC

	, 0x00, 0x00 // end
	
};


bool is_alpha(uint16_t keycode) {
	if (keycode >= AL_0 && keycode <= AR_7) {
		return true;
	}
	return false;
}

bool process_alpha(uint16_t keycode, bool pressed) {
	if (!is_alpha(keycode)) {
		return true;
	}
	
	if (pressed) {
		++chord_counter;
		chord |= 1 << (keycode - AL_0);
		if (is_shift) {
			is_chord_shift = true;
		}
	} else {
		if (chord >= 0x10000) {
			// the chord contains betas
			return true;
		}
		--chord_counter;
		if (!chord_counter) {
			uint16_t i = 0;
			
			uint8_t chord_lo = (uint8_t) chord;
			uint8_t chord_hi = (uint8_t) (chord >> 8);
			uint8_t state = 0;
			uint8_t dict_lo = 0;
			uint8_t dict_hi = 0;
			uint8_t dict_key = 0;
			bool caps_first = is_chord_shift && !is_shift;
			bool is_first = true;
		
			while (true) {
				switch (state) {
				case 0:
					dict_lo = pgm_read_byte_near(alpha_dict+i);
					dict_hi = pgm_read_byte_near(alpha_dict+i+1);
				
					if (dict_lo == 0x00 && dict_hi == 0x00) {
						state = 9; // end
					} else if (dict_lo == chord_lo && dict_hi == chord_hi) {
						state = 2; // print word
						i += 2;
					} else {
						state = 1; // skip word
						i += 2;
					}
				break;
				case 1:
					dict_key = pgm_read_byte_near(alpha_dict+i);
					if (dict_key == NC) {
						state = 0; // check chord
					}
					i++;
				break;
				case 2:
					dict_key = pgm_read_byte_near(alpha_dict+i);
					if (dict_key == NC) {
						state = 9; // end
					} else {
						if (caps_first && is_first) {
							register_mods(MOD_BIT(KC_LSFT));
							wait_ms(MOD_DELAY);
							tap_code(dict_key);
							wait_ms(MOD_DELAY);
							unregister_mods(MOD_BIT(KC_LSFT));
							
						} else {
							tap_code(dict_key);
						}
						is_first = false;
					}
					i++;
				break;
				}
				if (state == 9) {
					break;
				}
				if (i > 0xfffd) {
					break;
				}
			}
		}
		chord = 0;
		is_chord_shift = false;
			
	}
		
	return false;
}