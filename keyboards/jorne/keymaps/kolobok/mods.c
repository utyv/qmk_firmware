#include "mods.h"
#include QMK_KEYBOARD_H


enum mod_flag {
	FLAG_SFT = 0x0001,
	FLAG_SFC = 0x0002,
	FLAG_SFL = 0x0004,
	FLAG_CTL = 0x0008, 
	FLAG_CLC = 0x0010, 
	FLAG_CLL = 0x0020, 
	FLAG_ALT = 0x0040,
	FLAG_ALT_HOLD = 0x0080,
	FLAG_CPC = 0x0100,
	FLAG_CPR = 0x0200,
	FLAG_WDC = 0x0400,
	FLAG_WDR = 0x0800,
	FLAG_PHO = 0x8000,
};

uint16_t mods = 0;

bool is_shift(void) {
	return mods & (FLAG_SFL);
}

bool is_chorde_shift(void) {
	return mods & (FLAG_SFC);
}

void shift_on(void) {
	if (! (mods & FLAG_SFT)) {
		wait_ms(MOD_DELAY);
		register_mods(MOD_BIT(KC_LSFT));
		wait_ms(MOD_DELAY);
		mods |= FLAG_SFT;
	}
}

void shift_off(void) {
	if (mods & FLAG_SFT) {
		wait_ms(MOD_DELAY);
		unregister_mods(MOD_BIT(KC_LSFT));
		wait_ms(MOD_DELAY);
		mods &= ~FLAG_SFT;
	}
}

bool is_ctl(void) {
	return mods & (FLAG_CLL);
}

bool is_chorde_ctl(void) {
	return mods & (FLAG_CLC);
}

void ctl_on(void) {
	if (! (mods & FLAG_CTL)) {
		wait_ms(MOD_DELAY);
		register_mods(MOD_BIT(KC_LCTL));
		wait_ms(MOD_DELAY);
		mods |= FLAG_CTL;
	}
}

void ctl_off(void) {
	if (mods & FLAG_CTL) {
		wait_ms(MOD_DELAY);
		unregister_mods(MOD_BIT(KC_LCTL));
		wait_ms(MOD_DELAY);
		mods &= ~FLAG_CTL;
	}
}

void alt_on(void) {
	
	if (!(mods & FLAG_ALT)) {

		wait_ms(MOD_DELAY);
		register_mods(MOD_BIT(KC_LEFT_ALT));
		wait_ms(MOD_DELAY);
		mods |= FLAG_ALT;
	}
}

void alt_off(void) {

	if (mods & FLAG_ALT) {
		
		wait_ms(MOD_DELAY);
		unregister_mods(MOD_BIT(KC_LEFT_ALT));
		wait_ms(MOD_DELAY);
		mods &= ~FLAG_ALT;
		
	}
}

void alt_hold(void) {
	if (is_ctl()) {
		mods |= FLAG_ALT_HOLD;
	}
}

bool is_caps(void) {
	return mods & (FLAG_CPR);
}

bool is_chorde_caps(void) {
	return mods & (FLAG_CPC);
}

bool is_word(void) {
	return mods & (FLAG_WDR);
}

bool is_chorde_word(void) {
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

void reset_mods(void) {
	if (!is_shift()) {
		shift_off();
	}

	if (!is_ctl()) {
		ctl_off();
	}
	
	if (!(mods & FLAG_ALT_HOLD)) {
		alt_off();
	}

	if (is_shift()) {
		shift_on();
	}
	
	if (is_ctl()) {
		ctl_on();
	}
	
}

void set_chorde_mods(void) {
	if (is_shift()) {
		mods |= FLAG_SFC;
	}
	if (is_ctl()) {
		mods |= FLAG_CLC;
	}
	if (is_caps()) {
		mods |= FLAG_CPC;
	}
	if (is_word()) {
		mods |= FLAG_WDC;
	}
}
	
void reset_chorde_mods(void) {
	mods &= ~FLAG_SFC;
	mods &= ~FLAG_CLC;
	mods &= ~FLAG_CPC;
	mods &= ~FLAG_WDC;
	
}

bool process_mods(uint16_t keycode, bool pressed) {

	bool processed = false;
	
	if (pressed) {
		switch (keycode) {
			case KC_LSFT:
				mods |= FLAG_SFL;
				processed = true;
			break;
			case KC_LCTL:
				mods |= FLAG_CLL;
				processed = true;
			break;
			case KC_RSFT:
				mods |= FLAG_CPR;
				processed = true;
			break;
			case KC_RCTL:
				mods |= FLAG_WDR;
				processed = true;
			break;
			
		}
	} else {
		switch (keycode) {
			case KC_LSFT:
				mods &= ~FLAG_SFL;
				processed = true;
			break;
			case KC_LCTL:
				mods &= ~FLAG_CLL;
				mods &= ~FLAG_ALT_HOLD;
				processed = true;
			break;
			case KC_RSFT:
				mods &= ~FLAG_CPR;
				processed = true;
			break;
			case KC_RCTL:
				mods &= ~FLAG_WDR;
				processed = true;
			break;
		}
	}
	
	reset_mods();
	
	return !processed;
}