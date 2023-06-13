#include "mods.h"
#include QMK_KEYBOARD_H


enum mod_flag {
	FLAG_SFT = 0x0001,
	FLAG_SFC = 0x0002,
	FLAG_SFL = 0x0004,
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

void reset_mods(void) {
	if (!is_shift()) {
		shift_off();
	}

	if (is_shift()) {
		shift_on();
	}
}

void set_chorde_mods(void) {
	if (is_shift()) {
		mods |= FLAG_SFC;
	}
}
	
void reset_chorde_mods(void) {
	mods &= ~FLAG_SFC;
}

bool process_mods(uint16_t keycode, bool pressed) {

	bool processed = false;
	
	if (pressed) {
		switch (keycode) {
			case KC_LSFT:
				mods |= FLAG_SFL;
				processed = true;
			break;
			
		}
	} else {
		switch (keycode) {
			case KC_LSFT:
				mods &= ~FLAG_SFL;
				processed = true;
			break;
		}
	}
	
	reset_mods();
	
	return !processed;
}