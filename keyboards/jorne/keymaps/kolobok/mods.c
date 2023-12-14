#include "mods.h"
#include QMK_KEYBOARD_H
#include "chordes.h"


enum mod_flag {
	FLAG_SFK = 0x00000001, // shift on the keyboard
	FLAG_SFC = 0x00000002, // shift with a chorde
	FLAG_SFS = 0x00000004, // shift in the system
	FLAG_WCK = 0x00000008, // weak control on the keyboard
	FLAG_WCC = 0x00000010, // weak control with a chorde
	FLAG_CLK = 0x00000020, // normal control on the system
	FLAG_CLC = 0x00000040, // normal control with a chorde
	FLAG_CLS = 0x00000080, // control in the system
	FLAG_ALK = 0x00000100, // alt on the keyboard
	FLAG_ALC = 0x00000200, // alt with a chorde
	FLAG_ALS = 0x00000400, // alt in the system
	FLAG_ALT_HOLD = 0x00000800, // holding alt in the system while weak control pressed
	FLAG_CPK = 0x00001000, // caps on the keyboard
	FLAG_CPC = 0x00002000, // caps with a chorde
	FLAG_WDK = 0x00004000, // word mode on the keyboard
	FLAG_WDC = 0x00008000, // word mode with the chorde
	FLAG_PHO = 0x00010000, // phonetic mode
	FLAG_OHD = 0x00020000, // one hand mode
	FLAG_WNK = 0x00040000, // win on the keyboard
	FLAG_WNC = 0x00080000, // win with a chorde
	FLAG_WNS = 0x00100000, // win in the system
};

uint32_t mods = 0;

bool is_shift(void) {
	return ((mods & (FLAG_SFC)) || (mods & (FLAG_CPC)));
}

void shift_on(void) {
	if (! (mods & FLAG_SFS)) {
		wait_ms(MOD_DELAY);
		register_mods(MOD_BIT(KC_LSFT));
		wait_ms(MOD_DELAY);
		mods |= FLAG_SFS;
	}
}

void shift_off(void) {
	if (mods & FLAG_SFS) {
		wait_ms(MOD_DELAY);
		unregister_mods(MOD_BIT(KC_LSFT));
		wait_ms(MOD_DELAY);
		mods &= ~FLAG_SFS;
	}
}

bool is_wcl(void) {
	return mods & (FLAG_WCC);
}

bool is_ctl(void) {
	return mods & (FLAG_CLC);
}

void ctl_on(void) {
	if (! (mods & FLAG_CLS)) {
		wait_ms(MOD_DELAY);
		register_mods(MOD_BIT(KC_LCTL));
		wait_ms(MOD_DELAY);
		mods |= FLAG_CLS;
	}
}

void ctl_off(void) {
	if (mods & FLAG_CLS) {
		wait_ms(MOD_DELAY);
		unregister_mods(MOD_BIT(KC_LCTL));
		wait_ms(MOD_DELAY);
		mods &= ~FLAG_CLS;
	}
}

bool is_alt(void) {
	return mods & (FLAG_ALC);
}

void alt_on(void) {
	if (!(mods & FLAG_ALS)) {
		wait_ms(MOD_DELAY);
		register_mods(MOD_BIT(KC_LEFT_ALT));
		wait_ms(MOD_DELAY);
		mods |= FLAG_ALS;
	}
}

void alt_off(void) {

	if (mods & FLAG_ALS) {
		wait_ms(MOD_DELAY);
		unregister_mods(MOD_BIT(KC_LEFT_ALT));
		wait_ms(MOD_DELAY);
		mods &= ~FLAG_ALS;
		
	}
}

void alt_hold(void) {
	if (mods & FLAG_WCK) {
		mods |= FLAG_ALT_HOLD;
	}
}

bool is_caps(void) {
	return mods & (FLAG_CPC);
}

bool is_word(void) {
	return mods & (FLAG_WDC);
}

bool is_phonetic(void) {
	return mods & FLAG_PHO;
}

void phonetic_on(void) {
	if (!(mods & FLAG_PHO)) {
		mods |= FLAG_PHO;
	}
}

void phonetic_off(void) {
	if (mods & FLAG_PHO) {
		mods &= ~FLAG_PHO;
	}
}

void swap_lang(void) {
	alt_on();
	shift_on();
	shift_off();
	alt_off();
}

bool is_onehand(void) {
	#ifdef ONEHAND
	return true;
	#else
	return mods & FLAG_OHD;
	#endif
}

void onehand_on(void) {
	if (!(mods & FLAG_OHD)) {
		mods |= FLAG_OHD;
	}
}

void onehand_off(void) {
	if ((mods & FLAG_OHD)) {
		mods &= ~FLAG_OHD;
	}
}

bool is_win(void) {
	return mods & (FLAG_WNC);
}

void win_on(void) {
	if (! (mods & FLAG_WNS)) {
		wait_ms(MOD_DELAY);
		register_mods(MOD_BIT(KC_LGUI));
		wait_ms(MOD_DELAY);
		mods |= FLAG_WNS;
	}
}

void win_off(void) {
	if (mods & FLAG_WNS) {
		wait_ms(MOD_DELAY);
		unregister_mods(MOD_BIT(KC_LGUI));
		wait_ms(MOD_DELAY);
		mods &= ~FLAG_WNS;
	}
}


void reset_mods(void) {
	if (!((mods & FLAG_SFK) || (mods & FLAG_SFC) || (mods & FLAG_CPK) || (mods & FLAG_CPC))) {
		shift_off();
	}

	if (!((mods & FLAG_WCK) || (mods & FLAG_CLK) || (mods & FLAG_WCC) || (mods & FLAG_CLC))) {
		ctl_off();
	}
	
	if (!((mods & FLAG_ALK) || (mods & FLAG_ALC) || (mods & FLAG_ALT_HOLD))) {
		alt_off();
	}

	if (!((mods & FLAG_WNK) || (mods & FLAG_WNC))) {
		win_off();
	}

	if ((mods & FLAG_SFK) || (mods & FLAG_SFC) || (mods & FLAG_CPK) || (mods & FLAG_CPC)) {
		shift_on();
	}
	
	if ((mods & FLAG_WCK) || (mods & FLAG_CLK) || (mods & FLAG_WCC) || (mods & FLAG_CLC)) {
		ctl_on();
	}

	if ((mods & FLAG_ALK) || (mods & FLAG_ALC)) {
		alt_on();
	}
	
	if ((mods & FLAG_WNK) || (mods & FLAG_WNC)) {
		win_on();
	}
	
}

void set_chorde_mods(void) {
	if (mods & FLAG_SFK) {
		mods |= FLAG_SFC;
	}
	if (mods & FLAG_WCK) {
		mods |= FLAG_WCC;
	}
	if (mods & FLAG_CLK) {
		mods |= FLAG_CLC;
	}
	if (mods & FLAG_ALK) {
		mods |= FLAG_ALC;
	}
	if (mods & FLAG_CPK) {
		mods |= FLAG_CPC;
	}
	if (mods & FLAG_WDK) {
		mods |= FLAG_WDC;
	}
	if (mods & FLAG_WNK) {
		mods |= FLAG_WNC;
	}
}
	
void reset_chorde_mods(void) {
	mods &= ~FLAG_SFC;
	mods &= ~FLAG_WCC;
	mods &= ~FLAG_CLC;
	mods &= ~FLAG_ALC;
	mods &= ~FLAG_CPC;
	mods &= ~FLAG_WDC;
	mods &= ~FLAG_WNC;
	
}

bool process_mods(uint16_t keycode, bool pressed) {

	bool processed = false;
	
	if (pressed) {
		switch (keycode) {
			case KC_LSFT:
				mods |= FLAG_SFK;
				processed = true;
			break;
			case KC_LCTL:
				mods |= FLAG_WCK;
				processed = true;
			break;
			case KC_CAPS:
				mods |= FLAG_CPK;
				processed = true;
			break;
			case KC_RCTL:
				#ifndef UTYUMOV
				mods |= FLAG_CLK;
				#endif
				processed = true;
			break;
			case KC_RSFT:
				mods |= FLAG_WDK;
				processed = true;
			break;
			case KC_LALT:
				#ifndef UTYUMOV
				mods |= FLAG_ALK;
				#endif
				processed = true;
 			break;
			case KC_LGUI:
				#ifndef UTYUMOV
				mods |= FLAG_WNK;
				#endif
				processed = true;
			break;
			
		}
		if (is_chorde()) {
			set_chorde_mods();
		}
		
	} else {
		switch (keycode) {
			case KC_LSFT:
				mods &= ~FLAG_SFK;
				processed = true;
			break;
			case KC_LCTL:
				mods &= ~FLAG_WCK;
				mods &= ~FLAG_ALT_HOLD;
				stop_multitap();
				processed = true;
			break;
			case KC_CAPS:
				mods &= ~FLAG_CPK;
				processed = true;
			break;
			case KC_RCTL:
				#ifndef UTYUMOV
				mods &= ~FLAG_CLK;
				#endif
				processed = true;
			break;
			case KC_RSFT:
				mods &= ~FLAG_WDK;
				processed = true;
			break;
			case KC_LALT:
				#ifndef UTYUMOV
				mods &= ~FLAG_ALK;
				processed = true;
				#endif
			break;
			case KC_LGUI:
				#ifndef UTYUMOV
				mods &= ~FLAG_WNK;
				#endif
				processed = true;
			break;
		}
	}
	
	reset_mods();
	
	return !processed;
}