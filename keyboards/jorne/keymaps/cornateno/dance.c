#include "dance.h"

uint32_t dance_chorde = 0;
uint8_t dance_count = 0;

void start_dance(uint32_t chorde) {
	if (chorde == dance_chorde) {
		++dance_count;
	} else {
		dance_chorde = chorde;
		dance_count = 1;
	}
}
uint8_t check_dance(uint32_t chorde) {
	if (chorde == dance_chorde) {
		return dance_count;
	}
	stop_dance();
	return 0;
}

void stop_dance(void) {
	dance_chorde = 0;
	dance_count = 0;
}