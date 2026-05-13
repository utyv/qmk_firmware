#pragma once

// shift action
#define SA_NO 0 
#define SA_SUPRESS_ALL 1 
#define SA_SUPRESS_2 2


void find_word(uint64_t *chordes, const uint8_t **found, uint8_t search_sz);
uint8_t type_word(const uint8_t *dict, uint8_t sa);
void add_undo(uint8_t type_count);
void undo(void);
void clear_undo_history(void);
