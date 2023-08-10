#include "dict.h"
#include "keycodes.h"

const uint8_t PROGMEM kolobok_left_dict[] = {
	K_S, 0,        RU_S, NC
	, K_V, 0,      RU_V, NC
	, K_K, 0,      RU_K, NC
	, K_T, 0,      RU_T, NC
	, K_D, 0,      RU_D, NC
	, K_B, 0,      RU_B, NC
	, K_P, 0,      RU_P, NC
	, K_N, 0,      RU_N, NC
	, K_B | K_N, 0, RU_R, NC
	, K_K | K_T, 0, RU_M, NC
	, K_B | K_P, 0, RU_L, NC
	, K_V | K_D, 0, RU_X, NC
	, K_V | K_P, 0, RU_Z, NC
	, K_K | K_N, 0, RU_G, NC
	, K_T | K_D, 0, RU_ZH, NC
	, K_S | K_N, 0, RU_W, NC
	, K_K | K_D, 0, RU_H, NC
	, K_T | K_P, 0, RU_C, NC
	, K_K | K_B, 0, RU_WW, NC
	, K_T | K_B, 0, RU_F, NC
	, K_S | K_B, 0, RU_J, NC
	
	, K_S | K_T, 0      , RU_S, RU_T, NC // ст
	, K_P | K_N, 0      , RU_P, RU_R, NC // пр
	, K_V | K_K | K_T, 0, RU_EE, RU_T, NC // эт
	, K_S | K_K, 0      , RU_S, RU_K, NC // ск
	, K_V | K_T | K_D, 0, RU_X, RU_T, NC // чт
	, K_V | K_K | K_B, 0, RU_K, RU_A, RU_K, NC // как
	, K_V | K_B | K_N, 0, RU_O, RU_N, NC // он
	, K_B | K_P, K_4        , RU_B, RU_Y, RU_L, NC // был
	, K_B | K_P, K_2 | K_4  , RU_B, RU_U, RU_D, NC // буд
	, K_S | K_V, 0          , RU_V, RU_S, NC // вс
	, K_S | K_B | K_P, 0    , RU_S, RU_L, NC // сл
	, K_V | K_T | K_B, 0    , RU_O, RU_T, NC // от
	, K_V | K_K | K_T | K_B, 0, RU_T, RU_A, RU_K, NC // так
	, K_K | K_T | K_B | K_N, 0, RU_K, RU_O, RU_T, RU_O, RU_R, NC // котор
	, K_K | K_B | K_N, 0,       RU_K, RU_R, NC // кр
	, K_T | K_B | K_N, 0,       RU_T, RU_R, NC // тр
	, K_D | K_N, 0,             RU_D, RU_N, NC // дн
	
	, K_V | K_K | K_P, 0,       RU_I, RU_Z, NC // из
	, K_S | K_V | K_B, 0,       RU_S, RU_V, NC // св
	, K_S | K_B | K_P, 0,       RU_S, RU_L, NC // сл
	, K_S | K_V | K_T, 0,       RU_S, RU_T, RU_V, NC // ств
	, K_S | K_T | K_B | K_N, 0, RU_S, RU_T, RU_R, NC // стр
	, K_V | K_N, 0,             RU_V, RU_N, NC // вн
	, K_D | K_B | K_N, 0,       RU_D, RU_R, NC // др
	, K_P | K_N, K_8,           RU_P, RU_E, RU_R, NC // пер
	, K_K | K_D | K_N, 0,       RU_G, RU_D, NC // гд
	, K_K | K_B | K_P | K_N, 0, RU_G, RU_L, NC // гл
	, K_V | K_P | K_N, 0,       RU_Z, RU_N, NC // зн
	
	, 0, 0 // end
};

const uint8_t PROGMEM kolobok_rght_dict[] = {
	K_E, 0,        RU_E, NC
	, K_O, 0,      RU_O, NC
	, K_A, 0,      RU_A, NC
	, K_I, 0,      RU_I, NC
	, K_Y, 0,      RU_Y, NC
	, K_U, 0,      RU_U, NC
	, K_Q, 0,      RU_Q, NC
	, K_MZ, 0,     RU_MZ, NC

	, 0, K_1, 	            KC_1, NC
	, 0, K_2,               KC_2, NC
	, 0, K_1 | K_2,         KC_3, NC
	, 0, K_4,               KC_4, NC
	, 0, K_1 | K_4,         KC_5, NC
	, 0, K_2 | K_4,         KC_6, NC
	, 0, K_1 | K_2 | K_4,   KC_7, NC
	, 0, K_8,               KC_8, NC
	, 0, K_8 | K_1,         KC_9, NC
	, 0, K_8 | K_2,         KC_0, NC
	, 0, K_8 | K_4,         SFF, AC2(4, 6), NC // .
	, 0, K_8 | K_4 | K_2,   SFF, AC2(4, 4), NC // ,
	, 0, K_8 | K_4 | K_2 | K_1, SFF, KC_MINS, NC // -

	, K_E | K_Q, 0, RU_YU, NC // ю
	, K_O | K_Q, 0, RU_EE, NC // э
	, K_O | K_MZ, 0, RU_TZ, NC // ъ
	, K_O | K_Q | K_MZ, 0, RU_YO, NC // ё
	
	
	, K_E | K_O, 0, RU_E, RU_L, NC // ел
	, K_O | K_A, 0, RU_O, RU_L, NC // ол
	, K_A | K_I, 0, RU_A, RU_L, NC // ал
	, K_I | K_Y, 0, RU_I, RU_L, NC // ил
	, K_E | K_A, 0, RU_E, RU_J, NC // ей
	, K_O | K_I, 0, RU_O, RU_J, NC // ой
	, K_A | K_Y, 0, RU_A, RU_J, NC // ай
	, K_I | K_U, 0, RU_I, RU_J, NC // ий
	, K_E | K_I, 0, RU_E, RU_M, NC // ем
	, K_O | K_Y, 0, RU_O, RU_M, NC // ом
	, K_A | K_U, 0, RU_A, RU_M, NC // ам
	, K_I | K_Q, 0, RU_I, RU_M, NC // им
	, K_E | K_Y, 0, RU_E, RU_N, NC // ен
	, K_O | K_U, 0, RU_O, RU_N, NC // он
	, K_A | K_Q, 0, RU_A, RU_N, NC // ан
	, K_I | K_MZ, 0     , RU_I, RU_N, NC // ин
	, K_E | K_U, 0      , RU_E, RU_G, RU_O, NC // его
	, K_O | K_U | K_Q, 0, RU_O, RU_G, RU_O, NC // ого  
	, K_A | K_MZ, 0     , RU_A, RU_T, RU_MZ, NC // ать
	, K_I | K_Y | K_Q | K_MZ, 0, RU_I, RU_T, RU_MZ, NC // ить
	, K_E | K_O | K_Y, 0, RU_E, RU_R, NC // ер
	, K_O | K_A | K_U, 0, RU_O, RU_R, NC // ор
	, K_E | K_O | K_MZ, 0, RU_E, RU_L, RU_MZ, NC // ель
	, K_O | K_A | K_MZ, 0, RU_O, RU_L, RU_MZ, NC // оль
	, K_E | K_O | K_I, 0, RU_E, RU_T, NC // ет
	, K_O | K_A | K_Y, 0, RU_O, RU_T, NC // от
	
	, K_Y | K_Q, 0, RU_Y, RU_J, NC // ый
	, K_E | K_O | K_A, 0, RU_E, RU_E, NC // ее
	, K_O | K_A | K_I, 0, RU_O, RU_E, NC // ое
	, K_O | K_I | K_Y, 0, RU_O, RU_V, NC // ов
	, K_A | K_Y | K_U, 0, RU_A, RU_L, RU_I, NC //али
	, K_A | K_Y | K_Q, 0, RU_A, RU_Q, NC // ая
	, K_A | K_Y | K_U | K_Q, 0, RU_A, RU_L, RU_A, NC // ала
	, K_A | K_I | K_Y | K_Q, 0, RU_A, RU_S, NC // ас
	, K_I | K_U | K_Q, 0,       RU_I, RU_L, RU_I, NC // или
	, K_I | K_Q | K_MZ, 0,      RU_I, RU_H, NC // их
	

	, 0, 0 // end
};

const uint8_t PROGMEM phonetic_left_dict[] = {
	K_S, 0,        KC_S, NC
	, K_V, 0,      KC_V, NC
	, K_K, 0,      KC_K, NC
	, K_T, 0,      KC_T, NC
	, K_D, 0,      KC_D, NC
	, K_B, 0,      KC_B, NC
	, K_P, 0,      KC_P, NC
	, K_N, 0,      KC_N, NC
	, K_B | K_N, 0, KC_R, NC
	, K_K | K_T, 0, KC_M, NC
	, K_B | K_P, 0, KC_L, NC
	, K_V | K_D, 0, KC_X, NC
	, K_V | K_P, 0, KC_Z, NC
	, K_K | K_N, 0, KC_G, NC
	, K_S | K_N, 0, KC_W, NC
	, K_K | K_D, 0, KC_H, NC
	, K_T | K_P, 0, KC_C, NC
	, K_T | K_B, 0, KC_F, NC
	, K_S | K_B, 0, KC_J, NC
	
	, 0, L_1,               SFG, SFN, KC_5, NC // %
	, 0, L_1, 	            KC_1, NC
	, 0, L_2,               SFG, SFN, KC_4, NC // $
	, 0, L_2,               KC_2, NC
	, 0, L_1 | L_2,         KC_3, NC
	, 0, L_4,               SFG, SFN, KC_6, NC // ^
	, 0, L_4,               KC_4, NC
	, 0, L_1 | L_4,         KC_5, NC
	, 0, L_2 | L_4,         KC_6, NC
	, 0, L_1 | L_2 | L_4,   KC_7, NC
	, 0, L_8,               SFG, SFN, KC_GRV, NC // ~
	, 0, L_8,               KC_8, NC
	, 0, L_8 | L_1,         KC_9, NC
	, 0, L_8 | L_2,         KC_0, NC
	, 0, L_8 | L_4,         SFF, KC_DOT, NC // .
	, 0, L_8 | L_4 | L_2,   SFF, KC_COMM, NC // ,
	, 0, L_8 | L_4 | L_2 | L_1, SFF, KC_MINS, NC // -
	
	, L_S | L_T, 0, KC_O, NC
	, L_D | L_N, 0, KC_E, NC
	, L_V | L_T, 0, KC_A, NC
	, L_P | L_N, 0, KC_I, NC
	, L_S | L_K, 0, KC_U, NC
	, L_V | L_K, 0, KC_Q, NC
	, L_D | L_B, 0, KC_Y, NC
	
	, L_B | L_P | L_N, 0,       KC_SPC, NC
	, L_D | L_B | L_P | L_N, 0, SFF, CLN, KC_SPC, NC
	, L_D | L_B | L_P, 0,       KC_MINS, NC
	, L_K | L_T | L_N, 0,       SFG, SFN, KC_1, NC // !
	, L_K | L_T | L_N, 0,       KC_DOT, NC // .
	, L_K | L_P | L_N, 0,       SFG, SFN, KC_SLSH, NC // ?
	, L_K | L_P | L_N, 0,       KC_COMM, NC // ,
	, L_K | L_B | L_N, 0,       SFG, SFN, KC_2, NC // @
	, L_K | L_B | L_N, 0,       KC_SCLN, NC // ;
	, L_K | L_T | L_P | L_N, 0, SFG, SFN, KC_3, NC // #
	, L_K | L_T | L_P | L_N, 0, SFN, KC_SCLN, NC // :
	, L_V | L_B, 0,             SFG, SFN, KC_COMM, NC // <
	, L_V | L_B, 0,             SFN, KC_9, NC // (
	, L_K | L_P, 0,             SFG, SFN, KC_DOT, NC // >
	, L_K | L_P, 0,             SFN, KC_0, NC // )
	, L_V | L_K | L_B | L_P, 0, SFG, SFN, KC_COMM, KC_DOT, NC // <>
	, L_V | L_K | L_B | L_P, 0, SFN, KC_9, KC_0, NC // ()
	, L_S | L_D, 0,             SFG, SFN, KC_LBRC, NC // {
    , L_S | L_D, 0,             KC_LBRC, NC // [
    , L_T | L_N, 0,             SFG, SFN, KC_RBRC, NC // }
	, L_T | L_N, 0,             KC_RBRC, NC // ]
	, L_S | L_T | L_D | L_N, 0, SFG, SFN, KC_LBRC, KC_RBRC, NC // {}
	, L_S | L_T | L_D | L_N, 0, KC_LBRC, KC_RBRC, NC // []
	, L_T | L_D | L_N, 0,       SFG, SFF, KC_QUOT, NC // '
	, L_T | L_D | L_N, 0,       SFN, KC_QUOT, NC // "
	, L_V | L_K | L_T, 0,       SFG, SFF, KC_BSLS, NC // \*
	, L_V | L_K | L_T, 0,       SFF, KC_SLSH, NC // /
	, L_V | L_K | L_T | L_N, 0, SFF, KC_SLSH, KC_SLSH, NC // //
	, L_S | L_V | L_K, 0,       SFG, SFN, KC_7, NC // &
	, L_S | L_V | L_K, 0,       SFN, KC_BSLS, NC // |
	, L_D | L_B | L_N, 0,       SFN, KC_8, NC // *
	, L_T | L_P | L_N, 0,       SFF, KC_EQL, NC
	, L_K | L_T | L_P, 0,       SFN, KC_EQL, NC // +
	
	, L_V | L_T | L_P, 0,   CLN, KC_V, NC
	, L_N, L_8,             CLN, KC_Z, NC
	, L_P, L_4,             CLN, KC_X, NC
	
	, 0, L_BSPC,            KC_BSPC, NC
	, 0, L_ENT,             KC_ENT, NC
	, 0, L_DEL,             KC_DEL, NC
	, L_T, L_BSPC,          CLN, KC_BSPC, NC
	, L_N, L_ENT,           CLN, KC_ENT, NC
	, 0, L_8 | L_DEL,       CLN, KC_DEL, NC
	, 0, L_ENT | L_DEL,     KC_ESC, NC
	, 0, L_BSPC | L_ENT,    UND, NC

	, 0, 0 // end
};

const uint8_t PROGMEM phonetic_rght_dict[] = {
	K_E, 0,        KC_E, NC
	, K_O, 0,      KC_O, NC
	, K_A, 0,      KC_A, NC
	, K_I, 0,      KC_I, NC
	, K_Y, 0,      KC_Y, NC
	, K_U, 0,      KC_U, NC
	, K_Q, 0,      KC_Q, NC

	, 0, K_1, 	            KC_1, NC
	, 0, K_2,               KC_2, NC
	, 0, K_1 | K_2,         KC_3, NC
	, 0, K_4,               KC_4, NC
	, 0, K_1 | K_4,         KC_5, NC
	, 0, K_2 | K_4,         KC_6, NC
	, 0, K_1 | K_2 | K_4,   KC_7, NC
	, 0, K_8,               KC_8, NC
	, 0, K_8 | K_1,         KC_9, NC
	, 0, K_8 | K_2,         KC_0, NC
	, 0, K_8 | K_4,         SFF, KC_DOT, NC // .
	, 0, K_8 | K_4 | K_2,   SFF, KC_COMM, NC // ,
	, 0, K_8 | K_4 | K_2 | K_1, SFF, KC_MINS, NC // -


	, 0, 0 // end
};

const uint8_t PROGMEM left_dict[] = {
	L_S, 0,        RU_S, NC
	, L_V, 0,      RU_V, NC
	, L_K, 0,      RU_K, NC
	, L_T, 0,      RU_T, NC
	, L_D, 0,      RU_D, NC
	, L_B, 0,      RU_B, NC
	, L_P, 0,      RU_P, NC
	, L_N, 0,      RU_N, NC
	
    , 0, L_1,               SFG, SFF, AC2(3, 7), NC // %
	, 0, L_1, 	            KC_1, NC
	, 0, L_2,               SFG, SFF, AC2(3, 6), NC // $
	, 0, L_2,               KC_2, NC
	, 0, L_1 | L_2,         KC_3, NC
	, 0, L_4,               SFG, SFF, AC2(9, 4), NC // ^
	, 0, L_4,               KC_4, NC
	, 0, L_1 | L_4,         KC_5, NC
	, 0, L_2 | L_4,         KC_6, NC
	, 0, L_1 | L_2 | L_4,   KC_7, NC
	, 0, L_8,               SFG, SFF, AC3(1, 2, 6), NC // ~
	, 0, L_8,               KC_8, NC
	, 0, L_8 | L_1,         KC_9, NC
	, 0, L_8 | L_2,         KC_0, NC
	, 0, L_8 | L_4,         SFF, AC2(4, 6), NC // .
	, 0, L_8 | L_4 | L_2,   SFF, AC2(4, 4), NC // ,
	, 0, L_8 | L_4 | L_2 | L_1, SFF, KC_MINS, NC // -
	
	, L_B | L_N, 0, RU_R, NC
	, L_K | L_T, 0, RU_M, NC
	, L_B | L_P, 0, RU_L, NC
	, L_V | L_D, 0, RU_X, NC
	, L_V | L_P, 0, RU_Z, NC
	, L_K | L_N, 0, RU_G, NC
	, L_T | L_D, 0, RU_ZH, NC
	, L_S | L_N, 0, RU_W, NC
	, L_K | L_D, 0, RU_H, NC
	, L_T | L_P, 0, RU_C, NC
	, L_K | L_B, 0, RU_WW, NC
	, L_T | L_B, 0, RU_F, NC
	, L_S | L_B, 0, RU_J, NC
	
	, L_S | L_T, 0, RU_O, NC
	, L_D | L_N, 0, RU_E, NC
	, L_V | L_T, 0, RU_A, NC
	, L_P | L_N, 0, RU_I, NC
	, L_S | L_K, 0, RU_U, NC
	, L_V | L_K, 0, RU_Q, NC
	, L_D | L_B, 0, RU_Y, NC
	, L_S | L_V, 0, RU_YU, NC
	, L_D | L_P, 0, RU_EE, NC
	, L_V | L_N, 0, RU_MZ, NC
	, L_S | L_P, 0, RU_TZ, NC
	, L_D | L_P | L_N, 0, RU_YO, NC
	
	, L_B | L_P | L_N, 0,       KC_SPC, NC
	, L_D | L_B | L_P | L_N, 0, SFF, CLN, KC_SPC, NC
	, L_D | L_B | L_P, 0,       KC_MINS, NC
	, L_K | L_T | L_N, 0,       SFG, SFN, KC_1, NC // !
	, L_K | L_T | L_N, 0,       AC2(4, 6), NC // .
	, L_K | L_P | L_N, 0,       SFG, SFF, AC2(6, 3), NC // ?
	, L_K | L_P | L_N, 0,       AC2(4, 4), NC // ,
	, L_K | L_B | L_N, 0,       SFG, SFF, AC2(6, 4), NC // @
	, L_K | L_B | L_N, 0,       AC2(5, 9), NC // ;
	, L_K | L_T | L_P | L_N, 0, SFG, SFF, AC2(3, 5), NC // #
	, L_K | L_T | L_P | L_N, 0, AC2(5, 8), NC // :
	, L_V | L_T | L_D | L_P, 0, AC3(2, 5, 2), NC // №
	, L_V | L_B, 0,             SFG, SFF, AC2(6, 0), NC // <
	, L_V | L_B, 0,             SFN, KC_9, NC // (
	, L_K | L_P, 0,             SFG, SFF, AC2(6, 2), NC // >
	, L_K | L_P, 0,             SFN, KC_0, NC // )
	, L_V | L_K | L_B | L_P, 0, SFG, SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	, L_V | L_K | L_B | L_P, 0, SFN, KC_9, KC_0, NC // ()
	, L_S | L_D, 0,             SFG, SFF, AC3(1, 2, 3), NC // {
    , L_S | L_D, 0,             AC2(9, 1), NC // [
    , L_T | L_N, 0,             SFG, SFF, AC3(1, 2, 5), NC // }
	, L_T | L_N, 0,             AC2(9, 3), NC // ]
	, L_S | L_T | L_D | L_N, 0, SFG, SFF, AC3(1, 2, 3), ALF, AC3(1, 2, 5), NC // {}
	, L_S | L_T | L_D | L_N, 0, AC2(9, 1), ALF, AC2(9, 3), NC // []
	, L_T | L_D | L_N, 0,       SFG, SFF, AC2(3, 9), NC // '
	, L_T | L_D | L_N, 0,       AC2(3, 4), NC // "
	, L_V | L_K | L_T, 0,       SFG, SFF, AC2(9, 2), NC // \*
	, L_V | L_K | L_T, 0,       SFF, AC2(4, 7), NC // /
	, L_V | L_K | L_T | L_N, 0, SFF, AC2(4, 7), ALF, AC2(4, 7), NC // //
	, L_V | L_K | L_T | L_P, 0, CLN, KC_PSLS, NC // /
	, L_S | L_V | L_K, 0,       SFG, SFF, AC2(3, 8), NC // &
	, L_S | L_V | L_K, 0,       AC3(1, 2, 4), NC // |
	, L_D | L_B | L_N, 0,       SFN, KC_8, NC // *
	, L_T | L_P | L_N, 0,       SFF, KC_EQL, NC
	, L_K | L_T | L_P, 0,       SFN, KC_EQL, NC // +
	
	, L_V | L_T | L_P, 0,   CLN, KC_V, NC
	, L_N, L_8,             CLN, KC_Z, NC
	, L_P, L_4,             CLN, KC_X, NC
	
	, 0, L_BSPC,            KC_BSPC, NC
	, 0, L_ENT,             KC_ENT, NC
	, 0, L_DEL,             KC_DEL, NC
	, L_T, L_BSPC,          CLN, KC_BSPC, NC
	, L_N, L_ENT,           CLN, KC_ENT, NC
	, 0, L_8 | L_DEL,       CLN, KC_DEL, NC
	, 0, L_ENT | L_DEL,     KC_ESC, NC
	, 0, L_BSPC | L_ENT,    UND, NC

	, 0, 0 // end
};

const uint8_t PROGMEM nav_dict[] = {
	L_S, 0,        CLN, KC_HOME, NC
	, L_V, 0,      CLF, KC_UP, NC
	, L_K, 0,      CLF, KC_DOWN, NC
	, L_T, 0,      CLN, KC_END, NC
	, L_D, 0,      CLF, KC_HOME, NC
	, L_B, 0,      CLF, KC_LEFT, NC
	, L_P, 0,      CLF, KC_RIGHT, NC
	, L_N, 0,      CLF, KC_END, NC
	
	, 0, L_1,      CLN, KC_A, NC
	, 0, L_2,      CLN, KC_S, NC
	, 0, L_4,      CLN, KC_C, NC
	, 0, L_8,      CLN, KC_F, NC
	
	, L_S | L_V, 0,   CLF, KC_PGUP, NC
	, L_K | L_T, 0,   CLF, KC_PGDN, NC
	, L_D | L_B, 0,   CLN, KC_LEFT, NC
	, L_P | L_N, 0,   CLN, KC_RIGHT, NC
	, L_D | L_P, 0,   CLN, KC_LBRC, NC // Ctl {
	, L_B | L_N, 0,   CLN, KC_RBRC, NC // Ctl }
	
	, L_V | L_K, 0,   CLF, KC_APP, NC
	, L_B | L_P, 0,   SFG, SFF, CLN, KC_MINS, NC
	, L_B | L_P, 0,   CLF, KC_F12, NC
	
	, L_S | L_D, 0,   CLF, KC_F2, NC
	, L_V | L_B, 0,   CLF, KC_F3, NC
	, L_K | L_P, 0,   CLF, KC_F4, NC
	, L_T | L_N, 0,   CLF, KC_F5, NC
	, L_K | L_T | L_P | L_N, 0, CLF, KC_F9, NC
	
	, L_P, L_4,       CLF, KC_PSCR, NC
	, L_N, L_8,       CLN, KC_PAUS, NC
	
	, 0, L_BSPC,      CLF, KC_TAB, NC
	, 0, L_ENT,       CLF, ALN, KC_TAB, ALH, NC
	, 0, L_DEL,       CLN, KC_TAB, NC
	
	, 0, 0 // end
};

const uint8_t PROGMEM promokl_dict[] = {
	SL_T | SL_P | SL_R
	, SR_T | SR_R
	, RU_D, RU_O, RU_B, RU_R, RU_O, RU_E, KC_SPACE, RU_U, RU_T, RU_R, RU_O, NC // 1. доброе^утро
	, SL_T | SL_P | SL_R
	, SR_T | SR_N
	, RU_D, RU_O, RU_B, RU_R, RU_Y, RU_J, KC_SPACE, RU_D, RU_E, RU_N, RU_MZ, NC // 2. добрый^день
	, SL_T | SL_P | SL_R
	, SR_V | SR_S | SR_R
	, RU_D, RU_O, RU_B, RU_R, RU_Y, RU_J, KC_SPACE, RU_V, RU_E, RU_X, RU_E, RU_R, NC // 3. добрый^вечер
	, SL_S | SL_T
	, SR_R | SR_K
	, RU_S, RU_T, RU_R, RU_O, RU_K, NC // 4. строк
	, SL_S | SL_T
	, SR_R | SR_K | SR_A
	, RU_S, RU_T, RU_R, RU_O, RU_K, RU_A, NC // 5. строка
	, SL_S | SL_T
	, SR_R | SR_K | SR_I
	, RU_S, RU_T, RU_R, RU_O, RU_K, RU_I, NC // 6. строки
	, SL_K
	, SR_N | SR_K
	, RU_K, RU_O, RU_N, RU_E, RU_C, NC // 7. конец
	, SL_S | SL_L
	, SR_I
	, RU_E, RU_S, RU_L, RU_I, NC // 8. если
	, SL_T | SL_K
	, SR_T
	, RU_T, RU_O, RU_G, RU_D, RU_A, NC // 9. тогда
	, SL_M
	, SR_K
	, RU_I, RU_N, RU_A, RU_X, RU_E, NC // 10. иначе
	, SL_S | SL_P | SL_R
	, SR_S
	, RU_Z, RU_A, RU_P, RU_R, RU_O, RU_S, NC // 11. запрос
	, SL_M
	, SR_V
	, RU_N, RU_O, RU_V, RU_Y, RU_J, NC // 12. новый
	, SL_M
	, SR_V | SR_A
	, RU_N, RU_O, RU_V, RU_A, RU_Q, NC // 13. новая
	, SL_K
	, SR_K
	, RU_C, RU_I, RU_K, RU_L, NC // 14. цикл
	, SL_K
	, SR_K | SR_A
	, RU_C, RU_I, RU_K, RU_L, RU_A, NC // 15. цикла
	, SL_K
	, SR_S | SR_T | SR_K
	, RU_K, RU_A, RU_ZH, RU_D, RU_O, RU_G, RU_O, NC // 16. каждого
	, SL_P
	, SR_K
	, RU_P, RU_O, RU_K, RU_A, NC // 17. пока
	, SL_M
	, SR_V | SR_S
	, RU_M, RU_A, RU_S, RU_S, RU_I, RU_V, NC // 18. массив
	, SL_M | SL_K
	, SR_T | SR_R
	, RU_N, RU_O, RU_M, RU_E, RU_N, RU_K, RU_L, RU_A, RU_T, RU_U, RU_R, NC // 19. номенклатур
	, SL_M | SL_K
	, SR_T | SR_R | SR_A
	, RU_N, RU_O, RU_M, RU_E, RU_N, RU_K, RU_L, RU_A, RU_T, RU_U, RU_R, RU_A, NC // 20. номенклатура
	, SL_M | SL_K
	, SR_T | SR_R | SR_I
	, RU_N, RU_O, RU_M, RU_E, RU_N, RU_K, RU_L, RU_A, RU_T, RU_U, RU_R, RU_Y, NC // 21. номенклатуры
	, SL_K | SL_L
	, SR_S | SR_T
	, RU_K, RU_O, RU_L, RU_I, RU_X, RU_E, RU_S, RU_T, RU_V, RU_O, NC // 22. количество
	, SL_P | SL_R | SL_M
	, SR_T | SR_R | SR_I
	, RU_P, RU_A, RU_R, RU_A, RU_M, RU_E, RU_T, RU_R, RU_Y, NC // 23. параметры
	, SL_P | SL_R | SL_M
	, SR_T | SR_R
	, RU_P, RU_A, RU_R, RU_A, RU_M, RU_E, RU_T, RU_R, NC // 24. параметр
	, SL_T | SL_P
	, SR_V | SR_T
	, RU_D, RU_O, RU_B, RU_A, RU_V, RU_I, RU_T, RU_MZ, NC // 25. добавить
	, SL_V | SL_S | SL_T
	, SR_V | SR_T
	, RU_V, RU_S, RU_T, RU_A, RU_V, RU_I, RU_T, RU_MZ, NC // 26. вставить
	, SL_K | SL_L
	, SR_N | SR_K
	, RU_K, RU_O, RU_L, RU_O, RU_N, RU_K, NC // 27. колонк
	, SL_K | SL_L
	, SR_N | SR_K | SR_A
	, RU_K, RU_O, RU_L, RU_O, RU_N, RU_K, RU_A, NC // 28. колонка
	, SL_K | SL_L
	, SR_N | SR_K | SR_I
	, RU_K, RU_O, RU_L, RU_O, RU_N, RU_K, RU_I, NC // 29. колонки
	, SL_T | SL_P | SL_R
	, SR_S | SR_T | SR_N
	, RU_P, RU_O, RU_D, RU_R, RU_A, RU_Z, RU_D, RU_E, RU_L, RU_E, RU_N, RU_I, RU_E, NC // 30. подразделение
	, SL_P
	, SR_T | SR_K
	, RU_O, RU_B, RU_TZ, RU_E, RU_K, RU_T, NC // 31. объект
	, SL_P | SL_L
	, SR_S | SR_T
	, RU_O, RU_B, RU_L, RU_A, RU_S, RU_T, RU_MZ, NC // 32. область
	, SL_T
	, SR_N
	, RU_D, RU_A, RU_N, RU_N, RU_Y, RU_E, NC // 33. данные
	, SL_S | SL_L
	, SR_K
	, RU_S, RU_S, RU_Y, RU_L, RU_K, NC // 34. ссылк
	, SL_S | SL_L
	, SR_K | SR_A
	, RU_S, RU_S, RU_Y, RU_L, RU_K, RU_A, NC // 35. ссылка
	, SL_P | SL_L
	, SR_T
	, RU_P, RU_O, RU_L, RU_U, RU_X, RU_I, RU_T, RU_MZ, NC // 36. получить
	, SL_S | SL_T | SL_R | SL_K
	, SR_T | SR_R
	, RU_S, RU_T, RU_R, RU_U, RU_K, RU_T, RU_U, RU_R, NC // 37. структур
	, SL_S | SL_T | SL_R | SL_K
	, SR_T | SR_R | SR_A
	, RU_S, RU_T, RU_R, RU_U, RU_K, RU_T, RU_U, RU_R, RU_A, NC // 38. структура
	, SL_P | SL_R
	, SR_T | SR_N
	, RU_N, RU_E, RU_O, RU_P, RU_R, RU_E, RU_D, RU_E, RU_L, RU_E, RU_N, RU_O, NC // 39. неопределено
	, SL_T | SL_M | SL_K
	, SR_T
	, RU_D, RU_O, RU_K, RU_U, RU_M, RU_E, RU_N, RU_T, NC // 40. документ
	, SL_T | SL_M | SL_K
	, SR_T | SR_I
	, RU_D, RU_O, RU_K, RU_U, RU_M, RU_E, RU_N, RU_T, RU_Y, NC // 41. документы
	, SL_S | SL_P | SL_R
	, SR_V | SR_N | SR_K
	, RU_S, RU_P, RU_R, RU_A, RU_V, RU_O, RU_X, RU_N, RU_I, RU_K, NC // 42. справочник
	, SL_S | SL_P | SL_R
	, SR_V | SR_N | SR_K | SR_I
	, RU_S, RU_P, RU_R, RU_A, RU_V, RU_O, RU_X, RU_N, RU_I, RU_K, RU_I, NC // 43. справочники
	, SL_S | SL_P | SL_L
	, SR_T | SR_N
	, RU_Z, RU_A, RU_P, RU_O, RU_L, RU_N, RU_I, RU_T, RU_MZ, NC // 44. заполнить
	, SL_M
	, SR_T
	, RU_N, RU_A, RU_J, RU_T, RU_I, NC // 45. найти
	, SL_T
	, SR_T | SR_K
	, RU_O, RU_T, RU_X, RU_E, RU_T, NC // 46. отчет
	, SL_T
	, SR_T | SR_K | SR_A
	, RU_O, RU_T, RU_X, RU_E, RU_T, RU_A, NC // 47. отчета
	, SL_T
	, SR_T | SR_K | SR_I
	, RU_O, RU_T, RU_X, RU_E, RU_T, RU_Y, NC // 48. отчеты
	, SL_T | SL_M | SL_L
	, SR_K | SR_A
	, RU_T, RU_E, RU_H, RU_N, RU_O, RU_L, RU_O, RU_G, RU_I, RU_X, RU_E, RU_S, RU_K, RU_A, RU_Q, NC // 49. технологическая
	, SL_V | SL_P
	, SR_S | SR_K
	, RU_V,  RU_Y, RU_P, RU_U, RU_S, RU_K, NC // 50. выпуск
	, SL_S | SL_T
	, SR_N
	, RU_Z, RU_A, RU_D, RU_A, RU_N, RU_I, RU_E, NC // 51. задание
	, SL_P | SL_R
	, SR_V | SR_S | SR_T
	, RU_P, RU_R, RU_O, RU_I, RU_Z, RU_V, RU_O, RU_D, RU_S, RU_T, RU_V, RU_O, NC // 52. производство
	, SL_P | SL_R
	, SR_V | SR_S | SR_T | SR_A
	, RU_P, RU_R, RU_O, RU_I, RU_Z, RU_V, RU_O, RU_D, RU_S, RU_T, RU_V, RU_A, NC // 53. производствa
	, SL_T | SL_P | SL_L
	, SR_K
	, RU_T, RU_A, RU_B, RU_L, RU_I, RU_C, NC // 54. таблиц
	, SL_T | SL_P | SL_L
	, SR_K | SR_A
	, RU_T, RU_A, RU_B, RU_L, RU_I, RU_C, RU_A, NC // 55. таблица
	, SL_V | SL_P | SL_L
	, SR_T | SR_N
	, RU_V, RU_Y, RU_P, RU_O, RU_L, RU_N, RU_I, RU_T, RU_MZ, NC // 56. выполнить
	, SL_V | SL_R | SL_K
	, SR_S | SR_T
	, RU_V, RU_Y, RU_G, RU_R, RU_U, RU_Z, RU_I, RU_T, RU_MZ, NC // 57. выгрузить
	, SL_V | SL_P | SL_R
	, SR_T
	, RU_V, RU_Y, RU_B, RU_R, RU_A, RU_T, RU_MZ, NC // 58. выбрать
	, SL_S | SL_L
	, SR_T
	, RU_S, RU_L, RU_E, RU_D, RU_U, RU_YU, RU_WW, RU_I, RU_J, NC // 59. следующий
	, SL_V | SL_P | SL_R
	, SR_K | SR_A
	, RU_V, RU_Y, RU_B, RU_O, RU_R, RU_K, RU_A, NC // 60. выборка
	, SL_P | SL_R
	, SR_K
	, RU_G, RU_R, RU_U, RU_P, RU_P, NC // 61. групп
	, SL_P | SL_R
	, SR_K | SR_A
	, RU_G, RU_R, RU_U, RU_P, RU_P, RU_A, NC // 62. группа
	, SL_K
	, SR_S | SR_T | SR_N
	, RU_K, RU_O, RU_N, RU_S, RU_T, RU_A, RU_N, RU_T, NC // 63. констант
	, SL_K
	, SR_S | SR_T | SR_N | SR_A
	, RU_K, RU_O, RU_N, RU_S, RU_T, RU_A, RU_N, RU_T, RU_A, NC // 64. константа
	, SL_K
	, SR_S | SR_T | SR_N | SR_I
	, RU_K, RU_O, RU_N, RU_S, RU_T, RU_A, RU_N, RU_T, RU_Y, NC // 65. константы
	, SL_P | SL_K
	, SR_S | SR_T
	, RU_P, RU_O, RU_ZH, RU_A, RU_L, RU_U, RU_J, RU_S, RU_T, RU_A, NC // 66. пожалуйста
	, SL_K | SL_L
	, SR_T | SR_K | SR_A
	, RU_K, RU_O, RU_N, RU_S, RU_U, RU_L, RU_MZ, RU_T, RU_A, RU_C, RU_I, RU_Q, NC // 67. консультация
	, SL_T
	, SR_T | SR_A
	, RU_D, RU_A, RU_T, RU_A, NC // 68. дата
	, SL_S | SL_M
	, SR_A
	, RU_S, RU_U, RU_M, RU_M, RU_A, NC // 69. сумма
	, SL_S | SL_T
	, SR_N | SR_A
	, RU_I, RU_S, RU_T, RU_I, RU_N, RU_A, NC // 70. истина
	, SL_P | SL_R
	, SR_T | SR_K | SR_A
	, RU_O, RU_B, RU_R, RU_A, RU_B, RU_O, RU_T, RU_K, RU_A, NC // 71. обработка
	, SL_P | SL_R
	, SR_T | SR_K | SR_I
	, RU_O, RU_B, RU_R, RU_A, RU_B, RU_O, RU_T, RU_K, RU_I, NC // 72. обработки
	, SL_P | SL_R
	, SR_T | SR_K
	, RU_O, RU_B, RU_R, RU_A, RU_B, RU_O, RU_T, RU_K, NC // 73. обработк
	, SL_V | SL_S | SL_T
	, SR_V | SR_S | SR_T
	, RU_S, RU_O, RU_O, RU_T, RU_V, RU_E, RU_T, RU_S, RU_T, RU_V, RU_I, RU_E, NC // 74. соответствие
	, SL_S
	, SR_N | SR_K
	, RU_Z, RU_N, RU_A, RU_X, RU_E, RU_N, RU_I, RU_E, NC // 75. значение
	, SL_S
	, SR_N | SR_K | SR_A
	, RU_Z, RU_N, RU_A, RU_X, RU_E, RU_N, RU_I, RU_Q, NC // 76. значения
	, SL_S | SL_P | SL_L
	, SR_N
	, RU_Z, RU_A, RU_P, RU_O, RU_L, RU_N, RU_E, RU_N, RU_O, NC // 77. заполнено
	, SL_L
	, SR_K
	, RU_L, RU_O, RU_ZH, RU_MZ, NC // 78. ложь
	, SL_V | SL_S
	, SR_V | SR_S | SR_T
	, RU_S, RU_V, RU_O, RU_J, RU_S, RU_T, RU_V, RU_O, NC // 79. свойство
	, SL_R | SL_M | SL_K
	, SR_S | SR_K | SR_A
	, RU_O, RU_R, RU_G, RU_A, RU_N, RU_I, RU_Z, RU_A, RU_C, RU_I, RU_Q, NC // 80. организация
	, SL_T | SL_L
	, SR_T
	, RU_U, RU_D, RU_A, RU_L, RU_I, RU_T, RU_MZ, NC // 81. удалить
	
	, 0, 0 // end
};
