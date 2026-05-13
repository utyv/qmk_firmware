#include "mods.h"
#include QMK_KEYBOARD_H
#include "chordes.h"


enum mod_flag {
	FLAG_SFK = 0x0001, // shift on the keyboard
	FLAG_SFC = 0x0002, // shift with a chorde
	FLAG_SFA = 0x0004, // shift for aphas
	FLAG_SFS = 0x0008, // shift in the system
	FLAG_CLK = 0x0010, // control on the keyboard
	FLAG_CLC = 0x0020, // control with a chorde
	FLAG_CLS = 0x0040, // control in the system
	FLAG_ALS = 0x0080, // alt in the system
	FLAG_ALT_HOLD = 0x0100, // holding alt in the system while weak control pressed
	FLAG_CPK = 0x0200, // caps on the keyboard
	FLAG_CPC = 0x0400, // caps with a chorde
	FLAG_WNS = 0x0800, // win in the system
};


uint16_t mods = 0;
uint8_t lang = 0;

bool is_shift(void) {
	return ((mods & (FLAG_SFC)) || (mods & (FLAG_CPC)));
}

bool is_shift_alpha(void) {
	return ((mods & (FLAG_SFA)) || (mods & (FLAG_CPC)));
}

void supress_shift_alpha(void) {
	mods &= ~FLAG_SFA;
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
	if (mods & FLAG_CLK) {
		mods |= FLAG_ALT_HOLD;
	}
}

bool is_caps(void) {
	return mods & (FLAG_CPC);
}

void swap_lang(void) {
	alt_on();
	shift_on();
	shift_off();
	alt_off();
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
	// mods on the keyboard → mods in the system
	if (!((mods & FLAG_SFK) || (mods & FLAG_SFC) || (mods & FLAG_CPK) || (mods & FLAG_CPC))) {
		shift_off();
	}

	if (!((mods & FLAG_CLK) || (mods & FLAG_CLC))) {
		ctl_off();
	}
	
	if (!(mods & FLAG_ALT_HOLD)) {
		alt_off();
	}

	win_off();

	if ((mods & FLAG_SFK) || (mods & FLAG_SFC) || (mods & FLAG_CPK) || (mods & FLAG_CPC)) {
		shift_on();
	}
	
	if ((mods & FLAG_CLK) || (mods & FLAG_CLC)) {
		ctl_on();
	}

	
}

void set_chorde_mods(void) {
	// mods on the keyboard → mods in the chorde
	if (mods & FLAG_CLK) {
		mods |= FLAG_CLC;
	}
	if (mods & FLAG_SFK) {
		mods |= FLAG_SFC;
	}
	if (mods & FLAG_CPK) {
		mods |= FLAG_CPC;
	}
}
	
void reset_chorde_mods(void) {
	// mods in the chorde → false
	mods &= ~FLAG_SFC;
	mods &= ~FLAG_CLC;
	mods &= ~FLAG_CPC;
}

uint8_t get_lang(void) {
    return lang;
}

void set_lang(uint8_t new_lang) {
	lang = new_lang;
}

bool process_mods(uint16_t keycode, bool pressed) {

	bool processed = false;
	
	if (pressed) {
		switch (keycode) {
			case CC_L31:
				mods |= FLAG_CLK;
				processed = true;
			break;
			case CC_L32:
				mods |= FLAG_SFK;
				mods |= FLAG_SFA; 
				processed = true;
			break;
			case CC_L33:
				mods |= FLAG_CPK;
				processed = true;
			break;	
		}
		if (is_chorde()) {
			set_chorde_mods();
		}
		
	} else {
		switch (keycode) {
			case CC_L31:
				mods &= ~FLAG_CLK;
				mods &= ~FLAG_ALT_HOLD;
				stop_multitap();
				processed = true;
			break;
			case CC_L32:
				mods &= ~FLAG_SFK;
				processed = true;
			break;
			case CC_L33:
				mods &= ~FLAG_CPK;
				processed = true;
			break;
		}
	}
	
	reset_mods();
	
	return !processed;
}