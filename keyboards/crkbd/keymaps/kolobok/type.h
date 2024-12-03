#pragma once

// shift action
#define SA_NO 0 
#define SA_SUPRESS_ALL 1 
#define SA_SUPRESS_2 2


const uint8_t *find_word16(uint16_t chorde, const uint8_t *dict);
uint8_t type_word(const uint8_t *dict, uint8_t sa, bool do_ctl_off);
void add_undo(uint8_t type_count);
void undo(void);
void clear_undo_history(void);
