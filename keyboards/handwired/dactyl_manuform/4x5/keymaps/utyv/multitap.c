#include "multitap.h"

uint8_t key = 0;
uint16_t timer = 0;

#define MULTITAP_MS 300

bool is_multitap(void) {
	return key;
}

void start_multitap(uint8_t key1) {
	key = key1;
	timer = timer_read();
}

void stop_multitap(void) {
	key = 0;
	timer = 0;
}

void process_multitap(void) {
	if (key) {
		if (timer_elapsed(timer) > MULTITAP_MS) {
			ctl_off();
			tap_code(key);
			timer = timer_read();
			reset_mods(false);
		}
	}
}
