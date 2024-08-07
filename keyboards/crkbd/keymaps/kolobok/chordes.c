#include "chordes.h"
#include "keycodes.h"
#include "mods.h"
#include "type.h"
#include "dict.h"
#include "multitap.h"

uint16_t left_chorde = 0;
uint16_t rght_chorde = 0;
uint16_t thmb_chorde = 0;
uint8_t chorde_counter = 0;

bool is_chorde(void) {
	return chorde_counter;
}

uint16_t get_left_bit(uint16_t keycode) {

	uint16_t bit = 0;
	
	switch (keycode) {
		
		case RU_S:
			bit = K_S;
		break;
		case RU_V:
			bit = K_V;
		break;
		case RU_K:
			bit = K_K;
		break;
		case RU_T:
			bit = K_T;
		break;
		case RU_D:
			bit = K_D;
		break;
		case RU_B:
			bit = K_B;
		break;
		case RU_P:
			bit = K_P;
		break;
		case RU_N:
			bit = K_N;
		break;
		case KC_1:
			bit = K_1 << 8;
		break;
		case KC_2:
			bit = K_2 << 8;
		break;
		case KC_4:
			bit = K_4 << 8;
		break;
		case KC_8:
			bit = K_8 << 8;
		break;
		case KC_BSPC:
			bit = K_BSPC << 8;
		break;
		case KC_ENT:
			bit = K_ENT << 8;
		break;
		case KC_DEL:
			bit = K_DEL << 8;
		break;
	}
		
	return bit;
}

uint16_t get_rght_bit(uint16_t keycode) {

	uint16_t bit = 0;
	
	switch (keycode) {
		
		case RU_E:
			bit = K_E;
		break;
		case RU_O:
			bit = K_O;
		break;
		case RU_A:
			bit = K_A;
		break;
		case RU_I:
			bit = K_I;
		break;
		case RU_Y:
			bit = K_Y;
		break;
		case RU_U:
			bit = K_U;
		break;
		case RU_Q:
			bit = K_Q;
		break;
		case RU_MZ:
			bit = K_MZ;
		break;
		case KC_F1:
			bit = K_1 << 8;
		break;
		case KC_F2:
			bit = K_2 << 8;
		break;
		case KC_F4:
			bit = K_4 << 8;
		break;
		case KC_F8:
			bit = K_8 << 8;
		break;
		case KC_CNCL:
			bit = K_BSPC << 8;
		break;
		case KC_LALT:
		    #ifdef UTYUMOV
			bit = K_ENT << 8;
			#endif
		break;
		case KC_LGUI:
		    #ifdef UTYUMOV
			bit = K_DEL << 8;
			#endif
		break;
	}
		
	return bit;
}

uint16_t get_thmb_bit(uint16_t keycode) {
	
	uint16_t bit = 0;
	
	switch (keycode) {
		case KC_SPC:
			bit = K_SPC;
		break;
		case KC_F5:
			bit = K_DOT;
		break;
		case KC_F3:
			bit = K_COMM;
		break;
	}
		
	return bit;
	
}

bool process_chorde(uint16_t keycode, bool pressed) {
	
		
	uint16_t left_bit = get_left_bit(keycode);
	uint16_t rght_bit = get_rght_bit(keycode);
	uint16_t thmb_bit = get_thmb_bit(keycode);
	
	if ((!left_bit) && (!rght_bit) && (!thmb_bit)) {
		return true;
	}
	
	if (pressed) {
		++chorde_counter;
		left_chorde |= left_bit;
		rght_chorde |= rght_bit;
		thmb_chorde |= thmb_bit;
		set_chorde_mods();
	} else {
		--chorde_counter;
		if (!chorde_counter) {
			
			const uint8_t *p_left_word = 0;
			const uint8_t *p_rght_word = 0;
			const uint8_t *p_thmb_word = 0;
			
			bool is_text = true;
			uint8_t type_count = 0;
			bool caps_first = is_shift();
			bool caps_all = is_caps();
			bool do_ctl_off = false;
			
			if (is_wcl()) {
				
				is_text = false;
				caps_first = false;
				caps_all = false;
				
				if (left_chorde && is_shift() && !p_left_word) {
					p_left_word = find_word16(left_chorde, dict_l_cmd_sft);
				}
				if (left_chorde && !p_left_word) {
					p_left_word = find_word16(left_chorde, dict_l_cmd);
				}
				if (rght_chorde && !p_rght_word) {
					p_rght_word = find_word16(rght_chorde, dict_r_cmd);
					
				}
				
				if (p_left_word || p_rght_word) {
					clear_undo_history();
					if (!is_ctl()) {
						do_ctl_off = true;
					}
				}
				
				
            } else if (is_word()) {
				
				if (!is_phonetic() && !is_onehand()) {
					const uint16_t wrd_chorde = (left_chorde & 0x0011) | (rght_chorde << 8);
					
					if (wrd_chorde && !p_left_word) {
						p_left_word = find_word16(wrd_chorde, dict_wrd);
						if (p_left_word) {
							left_chorde = wrd_chorde;
							rght_chorde = 0;
						}
					}
					
					if (left_chorde && !p_left_word) {
						p_left_word = find_word16(left_chorde, dict_wrd);
						if (p_left_word && rght_chorde && !p_rght_word) {
							p_rght_word = find_word16(rght_chorde, dict_r_ru);
						}	
					}
					
					if (thmb_chorde && !p_thmb_word) {
						p_thmb_word = find_word16(thmb_chorde, dict_t_ru);
					}
					
				}
				
			} else {

				#ifdef KOLOBOK_ONE_SHOT
				if (!(caps_first) && !(caps_all)) {
					shift_off();
				}
				#endif
				
				if (is_phonetic()) { // en
					
					if (is_shift()) {
						if (thmb_chorde && !p_thmb_word) {
						    p_thmb_word = find_word16(thmb_chorde, dict_t_en_sft);
						}
					}
					if (thmb_chorde && !p_thmb_word) {
						p_thmb_word = find_word16(thmb_chorde, dict_t_en);
					}
					
					if (is_onehand()) {
						
						if (is_shift()) {
							if (left_chorde && !p_left_word) {
								p_left_word = find_word16(left_chorde, dict_l_en_oh_sft);
							}
						}
							
						if (left_chorde && !p_left_word) {
							p_left_word = find_word16(left_chorde, dict_l_en_oh);
						}
					}

					if (is_shift()) {
						if (left_chorde && !p_left_word) {
							p_left_word = find_word16(left_chorde, dict_l_en_sft);
						}
						if (rght_chorde && !p_rght_word) {
							p_rght_word = find_word16(rght_chorde, dict_r_en_sft);
						}
					}
						
					if (left_chorde && !p_left_word) {
						p_left_word = find_word16(left_chorde, dict_l_en);
					}
					if (rght_chorde && !p_rght_word) {
						p_rght_word = find_word16(rght_chorde, dict_r_en);
					}
					
				} else { // ru
					
					if (is_shift()) {
						if (thmb_chorde && !p_thmb_word) {
						    p_thmb_word = find_word16(thmb_chorde, dict_t_ru_sft);
						}
					}
					if (thmb_chorde && !p_thmb_word) {
						p_thmb_word = find_word16(thmb_chorde, dict_t_ru);
					}

					if (is_onehand()) {
						
						if (is_shift()) {
							if (left_chorde && !p_left_word) {
								p_left_word = find_word16(left_chorde, dict_l_ru_oh_sft);
							}
						}
							
						if (left_chorde && !p_left_word) {
							p_left_word = find_word16(left_chorde, dict_l_ru_oh);
						}
					
					} else { // two hands
						
						if (left_chorde && !p_left_word) {
							p_left_word = find_word16(left_chorde, dict_l_ru_th);
						}
						
					}
					
					if (is_shift()) {
						if (left_chorde && !p_left_word) {
							p_left_word = find_word16(left_chorde, dict_l_ru_sft);
						}
						if (rght_chorde && !p_rght_word) {
							p_rght_word = find_word16(rght_chorde, dict_r_ru_sft);
						}
					}

					if (left_chorde && !p_left_word) {
						p_left_word = find_word16(left_chorde, dict_l_ru);
					}
					if (rght_chorde && !p_rght_word) {
						p_rght_word = find_word16(rght_chorde, dict_r_ru);
					}
					
				}	
				
				if (left_chorde && !p_left_word) {
					p_left_word = find_word16(left_chorde, dict_l);
				}
				if (rght_chorde && !p_rght_word) {
					p_rght_word = find_word16(rght_chorde, dict_r);
				}
				
			}
			
			if (
				(left_chorde && !p_left_word)
				|| (rght_chorde && !p_rght_word)
				|| (thmb_chorde && !p_thmb_word)
			) {
				// error
			} else {
				
				if (p_thmb_word) {
					type_count += type_word(p_thmb_word, &caps_first, false, do_ctl_off);
				}
				if (p_left_word) {
					type_count += type_word(p_left_word, &caps_first, caps_all, do_ctl_off);
					caps_first = false;
					do_ctl_off = false;
				}
				if (p_rght_word) {
					type_count += type_word(p_rght_word, &caps_first, caps_all, do_ctl_off);
				}
				
				if (type_count && is_text) {
					add_undo(type_count);
				}
			
			}
			
			left_chorde = 0;
			rght_chorde = 0;
			thmb_chorde = 0;
			reset_chorde_mods();
			reset_mods();
			
		}
	}
	
	return false;
	
}
		