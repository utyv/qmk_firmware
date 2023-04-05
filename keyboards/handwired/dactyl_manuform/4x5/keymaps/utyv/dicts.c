#include "dicts.h"

const uint8_t PROGMEM short_dict[] = {
	BM_AL(0), 0			, RU_R, NC
	, BM_AL(1), 0		, RU_I, NC
	, BM_AL(2), 0		, RU_S, NC
	, BM_AL(3), 0		, RU_A, NC
	, BM_AL(4), 0		, RU_T, NC
	, BM_AL(5), 0		, RU_E, NC
	, BM_AL(6), 0		, RU_N, NC
	, BM_AL(7), 0		, RU_O, NC
	
	, 0, BM_AR(0)			, RU_K, NC
	, 0, BM_AR(1)			, RU_U, NC
	, 0, BM_AR(2)			, RU_L, NC
	, 0, BM_AR(3)			, RU_Q, NC
	, 0, BM_AR(4)			, RU_B, NC
	, 0, BM_AR(5)			, RU_Y, NC
	, 0, BM_AR(6)			, RU_M, NC
	, 0, BM_AR(7)			, RU_YU, NC
	
	, BM_AL(0) | BM_AL(6), 0			, RU_L, NC
	, BM_AL(1) | BM_AL(7), 0			, RU_V, NC
	, BM_AL(2) | BM_AL(6), 0			, RU_MZ, NC
	, BM_AL(3) | BM_AL(7), 0			, RU_Z, NC
	, BM_AL(4) | BM_AL(6), 0			, RU_M, NC
	, BM_AL(5) | BM_AL(7), 0			, RU_P, NC
	, BM_AL(0) | BM_AL(4), 0			, RU_Y, NC
	, BM_AL(1) | BM_AL(5), 0			, RU_G, NC
	, BM_AL(2) | BM_AL(4), 0			, RU_U, NC
	, BM_AL(3) | BM_AL(5), 0			, RU_Q, NC
	, BM_AL(0) | BM_AL(2), 0			, RU_K, NC
	, BM_AL(1) | BM_AL(3), 0			, RU_D, NC
	, BM_AL(0) | BM_AL(7), 0			, RU_X, NC
	, BM_AL(1) | BM_AL(6), 0			, RU_B, NC
	, BM_AL(2) | BM_AL(7), 0			, RU_H, NC
	, BM_AL(3) | BM_AL(6), 0			, RU_W, NC
	, BM_AL(4) | BM_AL(7), 0			, RU_C, NC
	, BM_AL(5) | BM_AL(6), 0			, RU_F, NC
	, BM_AL(0) | BM_AL(5), 0			, RU_ZH, NC
	, BM_AL(1) | BM_AL(4), 0			, RU_J, NC
	, BM_AL(2) | BM_AL(5), 0			, RU_EE, NC
	, BM_AL(3) | BM_AL(4), 0			, RU_WW, NC
	, BM_AL(0) | BM_AL(3), 0			, RU_TZ, NC
	, BM_AL(1) | BM_AL(2), 0			, RU_YU, NC
	
	, 0, BM_AR(1) | BM_AR(7)			, RU_J, NC
	, 0, BM_AR(0) | BM_AR(6)			, RU_H, NC
	, 0, BM_AR(1) | BM_AR(3)			, RU_D, NC
	, 0, BM_AR(0) | BM_AR(2)			, RU_ZH, NC
	, 0, BM_AR(3) | BM_AR(5)			, RU_EE, NC
	, 0, BM_AR(2) | BM_AR(4)			, RU_C, NC
	, 0, BM_AR(1) | BM_AR(5)			, RU_G, NC
	, 0, BM_AR(0) | BM_AR(4)			, RU_WW, NC
	, 0, BM_AR(0) | BM_AR(3)			, RU_YO, NC

	, BM_AL(2) | BM_AL(4) | BM_AL(6), 0							, KC_SPC, NC
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(4)							, KC_SPC, NC
	, BM_AL(0) | BM_AL(2) | BM_AL(4) | BM_AL(6), 0				, SFF, CLN, KC_SPC, NC
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(4) | BM_AR(6)				, SFF, CLN, KC_SPC, NC
	, BM_AL(0) | BM_AL(2) | BM_AL(4), 0							, KC_MINS, NC
	, 0, BM_AR(2) | BM_AR(4) | BM_AR(6)							, KC_MINS, NC
	, BM_AL(0) | BM_AL(2) | BM_AL(4) | BM_AL(7), 0				, SFG, SFN, KC_SPC, KC_MINS, KC_SPC, NC
	, 0, BM_AR(1) | BM_AR(2) | BM_AR(4) | BM_AR(6)				, SFG, SFN, KC_SPC, KC_MINS, KC_SPC, NC
	, BM_AL(0) | BM_AL(2) | BM_AL(4) | BM_AL(7), 0				, SFF, KC_SPC, KC_MINS, KC_SPC, NC
	, 0, BM_AR(1) | BM_AR(2) | BM_AR(4) | BM_AR(6)				, SFF, KC_SPC, KC_MINS, KC_SPC, NC
	, BM_AL(4) | BM_AL(6) | BM_AL(7), 0							, SFG, SFN, KC_1, NC // !
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2)							, SFG, SFN, KC_1, NC // !
	, BM_AL(4) | BM_AL(6) | BM_AL(7), 0							, AC2(4, 6), NC // .
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2)							, AC2(4, 6), NC // .
	, BM_AL(2) | BM_AL(4) | BM_AL(6) | BM_AL(7), 0				, SFG, SFN, KC_1, KC_SPC, NC // !
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2)	| BM_AR(4)				, SFG, SFN, KC_1, KC_SPC, NC // !
	, BM_AL(2) | BM_AL(4) | BM_AL(6) | BM_AL(7), 0				, AC2(4, 6), ALF, KC_SPC, NC // .
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2)	| BM_AR(4)				, AC2(4, 6), ALF, KC_SPC, NC // .
	, BM_AL(4) | BM_AL(5) | BM_AL(6), 0							, SFG, SFF, AC2(6, 3), NC // ?
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(3)							, SFG, SFF, AC2(6, 3), NC // ?
	, BM_AL(4) | BM_AL(5) | BM_AL(6), 0							, AC2(4, 4), NC // ,
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(3)							, AC2(4, 4), NC // ,
	, BM_AL(2) | BM_AL(4) | BM_AL(5) | BM_AL(6), 0				, SFG, SFF, AC2(6, 3), ALF, KC_SPC, NC // ?
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(3) | BM_AR(4)				, SFG, SFF, AC2(6, 3), ALF, KC_SPC, NC // ?
	, BM_AL(2) | BM_AL(4) | BM_AL(5) | BM_AL(6), 0				, AC2(4, 4), ALF, KC_SPC, NC // ,
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(3) | BM_AR(4)				, AC2(4, 4), ALF, KC_SPC, NC // ,
	, BM_AL(2) | BM_AL(5) | BM_AL(6), 0							, SFG, SFF, AC2(6, 4), NC // @
	, 0, BM_AR(0) | BM_AR(3) | BM_AR(4)							, SFG, SFF, AC2(6, 4), NC // @
	, BM_AL(2) | BM_AL(5) | BM_AL(6), 0							, AC2(5, 9), NC // ;
	, 0, BM_AR(0) | BM_AR(3) | BM_AR(4)							, AC2(5, 9), NC // ;
	, BM_AL(4) | BM_AL(5) | BM_AL(6) | BM_AL(7), 0				, SFG, SFF, AC2(3, 5), NC // #
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2) | BM_AR(3)				, SFG, SFF, AC2(3, 5), NC // #
	, BM_AL(4) | BM_AL(5) | BM_AL(6) | BM_AL(7), 0				, AC2(5, 8), NC // :
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2) | BM_AR(3)				, AC2(5, 8), NC // :
	, BM_AL(2) | BM_AL(4) | BM_AL(5) | BM_AL(6) | BM_AL(7), 0	, SFG, SFF, AC3(2, 5, 2), NC // №
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2) | BM_AR(3) | BM_AR(4)	, SFG, SFF, AC3(2, 5, 2), NC // №
	, BM_AL(2) | BM_AL(4) | BM_AL(5) | BM_AL(6) | BM_AL(7), 0	, AC2(5, 8), ALF, KC_SPC, NC // :
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2) | BM_AR(3) | BM_AR(4)	, AC2(5, 8), ALF, KC_SPC, NC // :
	, BM_AL(2) | BM_AL(3), 0									, SFG, SFF, AC2(6, 0), NC // <
	, 0, BM_AR(2) | BM_AR(3)									, SFG, SFF, AC2(6, 0), NC // <
	, BM_AL(2) | BM_AL(3), 0									, SFN, KC_9, NC // (
	, 0, BM_AR(2) | BM_AR(3)									, SFN, KC_9, NC // (
	, BM_AL(4) | BM_AL(5), 0									, SFG, SFF, AC2(6, 2), NC // >
	, 0, BM_AR(4) | BM_AR(5)									, SFG, SFF, AC2(6, 2), NC // >
	, BM_AL(4) | BM_AL(5), 0									, SFN, KC_0, NC // )
	, 0, BM_AR(4) | BM_AR(5)									, SFN, KC_0, NC // )
	, BM_AL(0) | BM_AL(1), 0									, SFG, SFF, AC3(1, 2, 3), NC // {
	, 0, BM_AR(0) | BM_AR(1)									, SFG, SFF, AC3(1, 2, 3), NC // {
	, BM_AL(0) | BM_AL(1), 0									, AC2(9, 1), NC // [
	, 0, BM_AR(0) | BM_AR(1)									, AC2(9, 1), NC // [
	, BM_AL(6) | BM_AL(7), 0									, SFG, SFF, AC3(1, 2, 5), NC // }
	, 0, BM_AR(6) | BM_AR(7)									, SFG, SFF, AC3(1, 2, 5), NC // }
	, BM_AL(6) | BM_AL(7), 0									, AC2(9, 3), NC // ]
	, 0, BM_AR(6) | BM_AR(7)									, AC2(9, 3), NC // ]
	, BM_AL(0) | BM_AL(6) | BM_AL(7), 0							, SFG, SFF, AC2(3, 9), NC // '
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(6)							, SFG, SFF, AC2(3, 9), NC // '
	, BM_AL(0) | BM_AL(6) | BM_AL(7), 0							, AC2(3, 4), NC // "
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(6)							, AC2(3, 4), NC // "
	, BM_AL(3) | BM_AL(5) | BM_AL(7), 0							, SFG, SFF, AC2(9, 2), NC // \*
	, 0, BM_AR(1) | BM_AR(3) | BM_AR(5)							, SFG, SFF, AC2(9, 2), NC // \*
	, BM_AL(3) | BM_AL(5) | BM_AL(7), 0							, SFF, AC2(4, 7), NC // /
	, 0, BM_AR(1) | BM_AR(3) | BM_AR(5)							, SFF, AC2(4, 7), NC // /
	, BM_AL(3) | BM_AL(5) | BM_AL(6) | BM_AL(7), 0				, SFF, AC2(4, 7), ALF, AC2(4, 7), ALF, KC_SPC, NC // //
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(3) | BM_AR(5)				, SFF, AC2(4, 7), ALF, AC2(4, 7), ALF, KC_SPC, NC // //
	, BM_AL(2) | BM_AL(3) | BM_AL(4) | BM_AL(5), 0				, CLN, KC_PSLS, NC // /
	, 0, BM_AR(2) | BM_AR(3) | BM_AR(4) | BM_AR(5)				, CLN, KC_PSLS, NC // /
	, BM_AL(1) | BM_AL(3) | BM_AL(5), 0							, SFG, SFF, AC2(3, 8), NC // &
	, 0, BM_AR(3) | BM_AR(5) | BM_AR(7)							, SFG, SFF, AC2(3, 8), NC // &
	, BM_AL(1) | BM_AL(3) | BM_AL(5), 0							, AC3(1, 2, 4), NC // |
	, 0, BM_AR(3) | BM_AR(5) | BM_AR(7)							, AC3(1, 2, 4), NC // |
	, BM_AL(0) | BM_AL(2) | BM_AL(6), 0							, SFN, KC_8, NC // *
	, 0, BM_AR(0) | BM_AR(4) | BM_AR(6)							, SFN, KC_8, NC // *


	, BM_AL(3) | BM_AL(4) | BM_AL(7), 0							, CLN, KC_V, NC
	, 0, BM_AR(1) | BM_AR(2) | BM_AR(5)							, CLN, KC_V, NC

	
	// promokl
	, SL_T | SL_P | SL_R
	, SR_T | SR_R
	, RU_D, RU_O, RU_B, RU_R, RU_O, RU_E, KC_SPACE, RU_U, RU_T, RU_R, RU_O, NC // доброе^утро
	, SL_T | SL_P | SL_R
	, SR_T | SR_N
	, RU_D, RU_O, RU_B, RU_R, RU_Y, RU_J, KC_SPACE, RU_D, RU_E, RU_N, RU_MZ, NC // добрый^день
	, SL_T | SL_P | SL_R
	, SR_V | SR_S | SR_R
	, RU_D, RU_O, RU_B, RU_R, RU_Y, RU_J, KC_SPACE, RU_V, RU_E, RU_X, RU_E, RU_R, NC // добрый^вечер
	, SL_S | SL_T
	, SR_R | SR_K
	, RU_S, RU_T, RU_R, RU_O, RU_K, NC // строк
	, SL_S | SL_T
	, SR_R | SR_K | SR_A
	, RU_S, RU_T, RU_R, RU_O, RU_K, RU_A, NC // строка
	, SL_S | SL_T
	, SR_R | SR_K | SR_I
	, RU_S, RU_T, RU_R, RU_O, RU_K, RU_I, NC // строки
	, SL_K
	, SR_N | SR_K
	, RU_K, RU_O, RU_N, RU_E, RU_C, NC // конец
	, SL_S | SL_L
	, SR_I
	, RU_E, RU_S, RU_L, RU_I, NC // если
	, SL_T | SL_K
	, SR_T
	, RU_T, RU_O, RU_G, RU_D, RU_A, NC // тогда
	, SL_M
	, SR_K
	, RU_I, RU_N, RU_A, RU_X, RU_E, NC // иначе
	, SL_S | SL_P | SL_R
	, SR_S
	, RU_Z, RU_A, RU_P, RU_R, RU_O, RU_S, NC // запрос
	, SL_M
	, SR_V
	, RU_N, RU_O, RU_V, RU_Y, RU_J, NC // новый
	, SL_M
	, SR_V | SR_A
	, RU_N, RU_O, RU_V, RU_A, RU_Q, NC // новая
	, SL_K
	, SR_K
	, RU_C, RU_I, RU_K, RU_L, NC // цикл
	, SL_K
	, SR_K | SR_A
	, RU_C, RU_I, RU_K, RU_L, RU_A, NC // цикла
	, SL_K
	, SR_S | SR_T | SR_K
	, RU_K, RU_A, RU_ZH, RU_D, RU_O, RU_G, RU_O, NC // каждого
	, SL_P
	, SR_K
	, RU_P, RU_O, RU_K, RU_A, NC // пока
	, SL_M
	, SR_V | SR_S
	, RU_M, RU_A, RU_S, RU_S, RU_I, RU_V, NC // массив
	, SL_M | SL_K
	, SR_T | SR_R
	, RU_N, RU_O, RU_M, RU_E, RU_N, RU_K, RU_L, RU_A, RU_T, RU_U, RU_R, NC // номенклатур
	, SL_M | SL_K
	, SR_T | SR_R | SR_A
	, RU_N, RU_O, RU_M, RU_E, RU_N, RU_K, RU_L, RU_A, RU_T, RU_U, RU_R, RU_A, NC // номенклатура
	, SL_M | SL_K
	, SR_T | SR_R | SR_I
	, RU_N, RU_O, RU_M, RU_E, RU_N, RU_K, RU_L, RU_A, RU_T, RU_U, RU_R, RU_Y, NC // номенклатуры
	, SL_K | SL_L
	, SR_S | SR_T
	, RU_K, RU_O, RU_L, RU_I, RU_X, RU_E, RU_S, RU_T, RU_V, RU_O, NC // количество
	, SL_P | SL_R | SL_M
	, SR_T | SR_R | SR_I
	, RU_P, RU_A, RU_R, RU_A, RU_M, RU_E, RU_T, RU_R, RU_Y, NC // параметры
	, SL_P | SL_R | SL_M
	, SR_T | SR_R
	, RU_P, RU_A, RU_R, RU_A, RU_M, RU_E, RU_T, RU_R, NC // параметр
	, SL_T | SL_P
	, SR_V | SR_T
	, RU_D, RU_O, RU_B, RU_A, RU_V, RU_I, RU_T, RU_MZ, NC // добавить
	, SL_V | SL_S | SL_T
	, SR_V | SR_T
	, RU_V, RU_S, RU_T, RU_A, RU_V, RU_I, RU_T, RU_MZ, NC // вставить
	, SL_K | SL_L
	, SR_N | SR_K
	, RU_K, RU_O, RU_L, RU_O, RU_N, RU_K, NC // колонк
	, SL_K | SL_L
	, SR_N | SR_K | SR_A
	, RU_K, RU_O, RU_L, RU_O, RU_N, RU_K, RU_A, NC // колонка
	, SL_K | SL_L
	, SR_N | SR_K | SR_I
	, RU_K, RU_O, RU_L, RU_O, RU_N, RU_K, RU_I, NC // колонки
	, SL_T | SL_P | SL_R
	, SR_S | SR_T | SR_N
	, RU_P, RU_O, RU_D, RU_R, RU_A, RU_Z, RU_D, RU_E, RU_L, RU_E, RU_N, RU_I, RU_E, NC // подразделение
	, SL_P
	, SR_T | SR_K
	, RU_O, RU_B, RU_TZ, RU_E, RU_K, RU_T, NC // объект
	, SL_P | SL_L
	, SR_S | SR_T
	, RU_O, RU_B, RU_L, RU_A, RU_S, RU_T, RU_MZ, NC // область
	, SL_T
	, SR_N
	, RU_D, RU_A, RU_N, RU_N, RU_Y, RU_E, NC // данные
	, SL_S | SL_L
	, SR_K
	, RU_S, RU_S, RU_Y, RU_L, RU_K, NC // ссылк
	, SL_S | SL_L
	, SR_K | SR_A
	, RU_S, RU_S, RU_Y, RU_L, RU_K, RU_A, NC // ссылка
	, SL_P | SL_L
	, SR_T
	, RU_P, RU_O, RU_L, RU_U, RU_X, RU_I, RU_T, RU_MZ, NC // получить
	, SL_S | SL_T | SL_R | SL_K
	, SR_T | SR_R
	, RU_S, RU_T, RU_R, RU_U, RU_K, RU_T, RU_U, RU_R, NC // структур
	, SL_S | SL_T | SL_R | SL_K
	, SR_T | SR_R | SR_A
	, RU_S, RU_T, RU_R, RU_U, RU_K, RU_T, RU_U, RU_R, RU_A, NC // структура
	, SL_P | SL_R
	, SR_T | SR_N
	, RU_N, RU_E, RU_O, RU_P, RU_R, RU_E, RU_D, RU_E, RU_L, RU_E, RU_N, RU_O, NC // неопределено
	, SL_T | SL_M | SL_K
	, SR_T
	, RU_D, RU_O, RU_K, RU_U, RU_M, RU_E, RU_N, RU_T, NC // документ
	, SL_T | SL_M | SL_K
	, SR_T | SR_I
	, RU_D, RU_O, RU_K, RU_U, RU_M, RU_E, RU_N, RU_T, RU_Y, NC // документы
	, SL_S | SL_P | SL_R
	, SR_V | SR_N | SR_K
	, RU_S, RU_P, RU_R, RU_A, RU_V, RU_O, RU_X, RU_N, RU_I, RU_K, NC // справочник
	, SL_S | SL_P | SL_R
	, SR_V | SR_N | SR_K | SR_I
	, RU_S, RU_P, RU_R, RU_A, RU_V, RU_O, RU_X, RU_N, RU_I, RU_K, RU_I, NC // справочники
	, SL_S | SL_P | SL_L
	, SR_T | SR_N
	, RU_Z, RU_A, RU_P, RU_O, RU_L, RU_N, RU_I, RU_T, RU_MZ, NC // заполнить
	, SL_M
	, SR_T
	, RU_N, RU_A, RU_J, RU_T, RU_I, NC // найти
	, SL_T
	, SR_T | SR_K
	, RU_O, RU_T, RU_X, RU_E, RU_T, NC // отчет
	, SL_T
	, SR_T | SR_K | SR_A
	, RU_O, RU_T, RU_X, RU_E, RU_T, RU_A, NC // отчета
	, SL_T
	, SR_T | SR_K | SR_I
	, RU_O, RU_T, RU_X, RU_E, RU_T, RU_Y, NC // отчеты
		
	, 0x00, 0x00 // end
	
};

const uint8_t PROGMEM phonetic_dict[] = {
	BM_AL(0), 0			, KC_R, NC
	, BM_AL(1), 0		, KC_I, NC
	, BM_AL(2), 0		, KC_S, NC
	, BM_AL(3), 0		, KC_A, NC
	, BM_AL(4), 0		, KC_T, NC
	, BM_AL(5), 0		, KC_E, NC
	, BM_AL(6), 0		, KC_N, NC
	, BM_AL(7), 0		, KC_O, NC
	
	, 0, BM_AR(0)			, KC_K, NC
	, 0, BM_AR(1)			, KC_U, NC
	, 0, BM_AR(2)			, KC_L, NC
	, 0, BM_AR(3)			, KC_Q, NC
	, 0, BM_AR(4)			, KC_B, NC
	, 0, BM_AR(5)			, KC_Y, NC
	, 0, BM_AR(6)			, KC_M, NC
	
	, BM_AL(0) | BM_AL(6), 0			, KC_L, NC
	, BM_AL(1) | BM_AL(7), 0			, KC_V, NC
	, BM_AL(3) | BM_AL(7), 0			, KC_Z, NC
	, BM_AL(4) | BM_AL(6), 0			, KC_M, NC
	, BM_AL(5) | BM_AL(7), 0			, KC_P, NC
	, BM_AL(0) | BM_AL(4), 0			, KC_Y, NC
	, BM_AL(1) | BM_AL(5), 0			, KC_G, NC
	, BM_AL(2) | BM_AL(4), 0			, KC_U, NC
	, BM_AL(3) | BM_AL(5), 0			, KC_Q, NC
	, BM_AL(0) | BM_AL(2), 0			, KC_K, NC
	, BM_AL(1) | BM_AL(3), 0			, KC_D, NC
	, BM_AL(0) | BM_AL(7), 0			, KC_X, NC
	, BM_AL(1) | BM_AL(6), 0			, KC_B, NC
	, BM_AL(2) | BM_AL(7), 0			, KC_H, NC
	, BM_AL(3) | BM_AL(6), 0			, KC_W, NC
	, BM_AL(4) | BM_AL(7), 0			, KC_C, NC
	, BM_AL(5) | BM_AL(6), 0			, KC_F, NC
	, BM_AL(1) | BM_AL(4), 0			, KC_J, NC
	
	, 0, BM_AR(1) | BM_AR(7)			, KC_J, NC
	, 0, BM_AR(0) | BM_AR(6)			, KC_H, NC
	, 0, BM_AR(1) | BM_AR(3)			, KC_D, NC
	, 0, BM_AR(2) | BM_AR(4)			, KC_C, NC
	, 0, BM_AR(1) | BM_AR(5)			, KC_G, NC


	, BM_AL(2) | BM_AL(4) | BM_AL(6), 0							, KC_SPC, NC
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(4)							, KC_SPC, NC
	, BM_AL(0) | BM_AL(2) | BM_AL(4) | BM_AL(6), 0				, SFF, CLN, KC_SPC, NC
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(4) | BM_AR(6)				, SFF, CLN, KC_SPC, NC
	, BM_AL(0) | BM_AL(2) | BM_AL(4), 0							, KC_MINS, NC
	, 0, BM_AR(2) | BM_AR(4) | BM_AR(6)							, KC_MINS, NC
	, BM_AL(0) | BM_AL(2) | BM_AL(4) | BM_AL(7), 0				, SFG, SFN, KC_SPC, KC_MINS, KC_SPC, NC
	, 0, BM_AR(1) | BM_AR(2) | BM_AR(4) | BM_AR(6)				, SFG, SFN, KC_SPC, KC_MINS, KC_SPC, NC
	, BM_AL(0) | BM_AL(2) | BM_AL(4) | BM_AL(7), 0				, SFF, KC_SPC, KC_MINS, KC_SPC, NC
	, 0, BM_AR(1) | BM_AR(2) | BM_AR(4) | BM_AR(6)				, SFF, KC_SPC, KC_MINS, KC_SPC, NC
	, BM_AL(4) | BM_AL(6) | BM_AL(7), 0							, SFG, SFN, KC_1, NC // !
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2)							, SFG, SFN, KC_1, NC // !
	, BM_AL(4) | BM_AL(6) | BM_AL(7), 0							, AC2(4, 6), NC // .
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2)							, AC2(4, 6), NC // .
	, BM_AL(2) | BM_AL(4) | BM_AL(6) | BM_AL(7), 0				, SFG, SFN, KC_1, KC_SPC, NC // !
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2)	| BM_AR(4)				, SFG, SFN, KC_1, KC_SPC, NC // !
	, BM_AL(2) | BM_AL(4) | BM_AL(6) | BM_AL(7), 0				, AC2(4, 6), ALF, KC_SPC, NC // .
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2)	| BM_AR(4)				, AC2(4, 6), ALF, KC_SPC, NC // .
	, BM_AL(4) | BM_AL(5) | BM_AL(6), 0							, SFG, SFF, AC2(6, 3), NC // ?
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(3)							, SFG, SFF, AC2(6, 3), NC // ?
	, BM_AL(4) | BM_AL(5) | BM_AL(6), 0							, AC2(4, 4), NC // ,
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(3)							, AC2(4, 4), NC // ,
	, BM_AL(2) | BM_AL(4) | BM_AL(5) | BM_AL(6), 0				, SFG, SFF, AC2(6, 3), ALF, KC_SPC, NC // ?
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(3) | BM_AR(4)				, SFG, SFF, AC2(6, 3), ALF, KC_SPC, NC // ?
	, BM_AL(2) | BM_AL(4) | BM_AL(5) | BM_AL(6), 0				, AC2(4, 4), ALF, KC_SPC, NC // ,
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(3) | BM_AR(4)				, AC2(4, 4), ALF, KC_SPC, NC // ,
	, BM_AL(2) | BM_AL(5) | BM_AL(6), 0							, SFG, SFF, AC2(6, 4), NC // @
	, 0, BM_AR(0) | BM_AR(3) | BM_AR(4)							, SFG, SFF, AC2(6, 4), NC // @
	, BM_AL(2) | BM_AL(5) | BM_AL(6), 0							, AC2(5, 9), NC // ;
	, 0, BM_AR(0) | BM_AR(3) | BM_AR(4)							, AC2(5, 9), NC // ;
	, BM_AL(4) | BM_AL(5) | BM_AL(6) | BM_AL(7), 0				, SFG, SFF, AC2(3, 5), NC // #
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2) | BM_AR(3)				, SFG, SFF, AC2(3, 5), NC // #
	, BM_AL(4) | BM_AL(5) | BM_AL(6) | BM_AL(7), 0				, AC2(5, 8), NC // :
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2) | BM_AR(3)				, AC2(5, 8), NC // :
	, BM_AL(2) | BM_AL(4) | BM_AL(5) | BM_AL(6) | BM_AL(7), 0	, SFG, SFF, AC3(2, 5, 2), NC // №
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2) | BM_AR(3) | BM_AR(4)	, SFG, SFF, AC3(2, 5, 2), NC // №
	, BM_AL(2) | BM_AL(4) | BM_AL(5) | BM_AL(6) | BM_AL(7), 0	, AC2(5, 8), ALF, KC_SPC, NC // :
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(2) | BM_AR(3) | BM_AR(4)	, AC2(5, 8), ALF, KC_SPC, NC // :
	, BM_AL(2) | BM_AL(3), 0									, SFG, SFF, AC2(6, 0), NC // <
	, 0, BM_AR(2) | BM_AR(3)									, SFG, SFF, AC2(6, 0), NC // <
	, BM_AL(2) | BM_AL(3), 0									, SFN, KC_9, NC // (
	, 0, BM_AR(2) | BM_AR(3)									, SFN, KC_9, NC // (
	, BM_AL(4) | BM_AL(5), 0									, SFG, SFF, AC2(6, 2), NC // >
	, 0, BM_AR(4) | BM_AR(5)									, SFG, SFF, AC2(6, 2), NC // >
	, BM_AL(4) | BM_AL(5), 0									, SFN, KC_0, NC // )
	, 0, BM_AR(4) | BM_AR(5)									, SFN, KC_0, NC // )
	, BM_AL(0) | BM_AL(1), 0									, SFG, SFF, AC3(1, 2, 3), NC // {
	, 0, BM_AR(0) | BM_AR(1)									, SFG, SFF, AC3(1, 2, 3), NC // {
	, BM_AL(0) | BM_AL(1), 0									, AC2(9, 1), NC // [
	, 0, BM_AR(0) | BM_AR(1)									, AC2(9, 1), NC // [
	, BM_AL(6) | BM_AL(7), 0									, SFG, SFF, AC3(1, 2, 5), NC // }
	, 0, BM_AR(6) | BM_AR(7)									, SFG, SFF, AC3(1, 2, 5), NC // }
	, BM_AL(6) | BM_AL(7), 0									, AC2(9, 3), NC // ]
	, 0, BM_AR(6) | BM_AR(7)									, AC2(9, 3), NC // ]
	, BM_AL(0) | BM_AL(6) | BM_AL(7), 0							, SFG, SFF, AC2(3, 9), NC // '
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(6)							, SFG, SFF, AC2(3, 9), NC // '
	, BM_AL(0) | BM_AL(6) | BM_AL(7), 0							, AC2(3, 4), NC // "
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(6)							, AC2(3, 4), NC // "
	, BM_AL(3) | BM_AL(5) | BM_AL(7), 0							, SFG, SFF, AC2(9, 2), NC // \*
	, 0, BM_AR(1) | BM_AR(3) | BM_AR(5)							, SFG, SFF, AC2(9, 2), NC // \*
	, BM_AL(3) | BM_AL(5) | BM_AL(7), 0							, SFF, AC2(4, 7), NC // /
	, 0, BM_AR(1) | BM_AR(3) | BM_AR(5)							, SFF, AC2(4, 7), NC // /
	, BM_AL(3) | BM_AL(5) | BM_AL(6) | BM_AL(7), 0				, SFF, AC2(4, 7), ALF, AC2(4, 7), ALF, KC_SPC, NC // //
	, 0, BM_AR(0) | BM_AR(1) | BM_AR(3) | BM_AR(5)				, SFF, AC2(4, 7), ALF, AC2(4, 7), ALF, KC_SPC, NC // //
	, BM_AL(2) | BM_AL(3) | BM_AL(4) | BM_AL(5), 0				, CLN, KC_PSLS, NC // /
	, 0, BM_AR(2) | BM_AR(3) | BM_AR(4) | BM_AR(5)				, CLN, KC_PSLS, NC // /
	, BM_AL(1) | BM_AL(3) | BM_AL(5), 0							, SFG, SFF, AC2(3, 8), NC // &
	, 0, BM_AR(3) | BM_AR(5) | BM_AR(7)							, SFG, SFF, AC2(3, 8), NC // &
	, BM_AL(1) | BM_AL(3) | BM_AL(5), 0							, AC3(1, 2, 4), NC // |
	, 0, BM_AR(3) | BM_AR(5) | BM_AR(7)							, AC3(1, 2, 4), NC // |
	, BM_AL(0) | BM_AL(2) | BM_AL(6), 0							, SFN, KC_8, NC // *
	, 0, BM_AR(0) | BM_AR(4) | BM_AR(6)							, SFN, KC_8, NC // *


	, BM_AL(3) | BM_AL(4) | BM_AL(7), 0							, CLN, KC_V, NC
	, 0, BM_AR(1) | BM_AR(2) | BM_AR(5)							, CLN, KC_V, NC
	
	, 0x00, 0x00 // end
	
};

const uint8_t PROGMEM long_dict[] = {
	BM_AL(1), 0, BM_BL(6), 0			, MCR, NC
	, BM_AL(3), 0, BM_BL(7), 0			, MCR, NC
	
	, 0, 0, 0, BM_BR(7)                 , KC_SPC, NC
	, 0, 0, BM_BL(0), 0					, KC_BSPC, NC
	, 0, 0, 0, BM_BR(0)					, KC_BSPC, NC
	, 0, 0, BM_BL(1), 0					, KC_ENT, NC
	, 0, 0, 0, BM_BR(1)					, KC_ENT, NC
	, 0, 0, BM_BL(2), 0					, KC_DEL, NC
	, 0, 0, 0, BM_BR(2)					, KC_DEL, NC
	, BM_AL(7), 0, BM_BL(0), 0			, CLN, KC_BSPC, NC
	, 0, BM_AR(1), 0, BM_BR(0)			, CLN, KC_BSPC, NC
	, BM_AL(6), 0, BM_BL(1), 0			, CLN, KC_ENT, NC
	, 0, BM_AR(0), 0, BM_BR(1)			, CLN, KC_ENT, NC
	, 0, 0, BM_BL(2) | BM_BL(3), 0		, CLN, KC_DEL, NC
	, 0, 0, 0, BM_BR(1) | BM_BR(3)		, CLN, KC_DEL, NC
	, 0, 0, BM_BL(0) | BM_BL(1), 0		, MCR, NC
	, 0, 0, 0, BM_BR(0) | BM_BR(1)		, MCR, NC
	, 0, 0, BM_BL(1) | BM_BL(2), 0		, KC_ESC, NC
	, 0, 0, 0, BM_BR(1) | BM_BR(2)		, KC_ESC, NC
	
	, 0, 0, BM_BL(6), 0					, SFG, SFF, AC2(3, 7), NC // %
	, 0, 0, 0, BM_BR(6)					, SFG, SFF, AC2(3, 7), NC // % 
	, 0, 0, BM_BL(6), 0					, KC_1, NC
	, 0, 0, 0, BM_BR(6)					, KC_1, NC 
	, 0, 0, BM_BL(5), 0					, SFG, SFF, AC2(3, 6), NC // $
	, 0, 0, 0, BM_BR(5)					, SFG, SFF, AC2(3, 6), NC // $ 
	, 0, 0, BM_BL(5), 0					, KC_2, NC
	, 0, 0, 0, BM_BR(5)					, KC_2, NC 
	, 0, 0, BM_BL(5) | BM_BL(6), 0		, SFF, KC_3, NC
	, 0, 0, 0, BM_BR(5) | BM_BR(6)		, SFF, KC_3, NC 
	, 0, 0, BM_BL(4), 0					, SFG, SFF, AC2(9, 4), NC // ^
	, 0, 0, 0, BM_BR(4)					, SFG, SFF, AC2(9, 4), NC // ^ 
	, 0, 0, BM_BL(4), 0					, KC_4, NC
	, 0, 0, 0, BM_BR(4)					, KC_4, NC 
	, 0, 0, BM_BL(4) | BM_BL(6), 0		, SFF, KC_5, NC
	, 0, 0, 0, BM_BR(4) | BM_BR(6)		, SFF, KC_5, NC 
	, 0, 0, BM_BL(4) | BM_BL(5), 0		, SFF, KC_6, NC
	, 0, 0, 0, BM_BR(4) | BM_BR(5)		, SFF, KC_6, NC 
	, 0, 0, BM_BL(4) | BM_BL(5) | BM_BL(6), 0		, SFF, KC_7, NC
	, 0, 0, 0, BM_BR(4) | BM_BR(5) | BM_BR(6)		, SFF, KC_7, NC 
	, 0, 0, BM_BL(3), 0					, SFG, SFF, AC3(1, 2, 6), NC // ~
	, 0, 0, 0, BM_BR(3)					, SFG, SFF, AC3(1, 2, 6), NC // ~ 
	, 0, 0, BM_BL(3), 0					, KC_8, NC
	, 0, 0, 0, BM_BR(3)					, KC_8, NC 
	, 0, 0, BM_BL(3) | BM_BL(6), 0		, SFF, KC_9, NC
	, 0, 0, 0, BM_BR(3) | BM_BR(6)		, SFF, KC_9, NC 
	, 0, 0, BM_BL(3) | BM_BL(5), 0		, SFF, KC_0, NC
	, 0, 0, 0, BM_BR(3) | BM_BR(5)		, SFF, KC_0, NC 
	, BM_AL(4) | BM_AL(6), 0, BM_BL(3), 0		, SFF, KC_EQL, NC
	, 0, BM_AR(0) | BM_AR(2), 0, BM_BR(3)		, SFF, KC_EQL, NC 
	, BM_AL(2) | BM_AL(4) | BM_AL(6), 0, BM_BL(3), 0		, SFF, KC_SPC, KC_EQL, KC_SPC, NC
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(4), 0, BM_BR(3)		, SFF, KC_SPC, KC_EQL, KC_SPC, NC 
	, BM_AL(4) | BM_AL(6), 0, BM_BL(4), 0		, SFN, KC_EQL, NC // +
	, 0, BM_AR(0) | BM_AR(2), 0, BM_BR(4)		, SFN, KC_EQL, NC // +
	, BM_AL(2) | BM_AL(4) | BM_AL(6), 0, BM_BL(4), 0		, SFF, KC_SPC, SFN, KC_EQL, SFF, KC_SPC, NC // +
	, 0, BM_AR(0) | BM_AR(2) | BM_AR(4), 0, BM_BR(4)		, SFF, KC_SPC, SFN, KC_EQL, SFF, KC_SPC, NC // +
	, 0, 0, BM_BL(3) | BM_BL(4), 0		, SFF, AC2(4, 6), NC // .
	, 0, 0, 0, BM_BR(3) | BM_BR(4)		, SFF, AC2(4, 6), NC // .
	, 0, 0, BM_BL(3) | BM_BL(4) | BM_BL(5), 0		, SFF, AC2(4, 4), NC // ,
	, 0, 0, 0, BM_BR(3) | BM_BR(4) | BM_BR(5)		, SFF, AC2(4, 4), NC // ,
	, 0, 0, BM_BL(3) | BM_BL(4) | BM_BL(5) | BM_BL(6), 0		, SFF, KC_MINS, NC // -
	, 0, 0, 0, BM_BR(3) | BM_BR(4) | BM_BR(5) | BM_BR(6)		, SFF, KC_MINS, NC // -

	, BM_AL(6), 0, BM_BL(3), 0							, CLN, KC_Z, NC
	, 0, BM_AR(0), 0, BM_BR(3)							, CLN, KC_Z, NC
	, BM_AL(4), 0, BM_BL(4), 0							, CLN, KC_X, NC
	, 0, BM_AR(2), 0, BM_BR(4)							, CLN, KC_X, NC

	, 0x00, 0x00, 0x00, 0x00 // end
	
};
	
const uint8_t PROGMEM layer_dict[] = {
	BM_AL(0), 0, 0, 0					, CLF, KC_HOME, NC
	, 0, BM_AR(0), 0, 0					, CLF, KC_HOME, NC
	, BM_AL(1), 0, 0, 0					, CLN, KC_HOME, NC // Ctl Home
	, 0, BM_AR(1), 0, 0					, CLN, KC_HOME, NC // Ctl Home
	, BM_AL(2), 0, 0, 0					, CLF, KC_LEFT, NC
	, 0, BM_AR(2), 0, 0					, CLF, KC_LEFT, NC
	, BM_AL(3), 0, 0, 0					, CLF, KC_UP, NC
	, 0, BM_AR(3), 0, 0					, CLF, KC_UP, NC
	, BM_AL(4), 0, 0, 0					, CLF, KC_RIGHT, NC
	, 0, BM_AR(4), 0, 0					, CLF, KC_RIGHT, NC
	, BM_AL(5), 0, 0, 0					, CLF, KC_DOWN, NC
	, 0, BM_AR(5), 0, 0					, CLF, KC_DOWN, NC
	, BM_AL(6), 0, 0, 0					, CLF, KC_END, NC
	, 0, BM_AR(6), 0, 0					, CLF, KC_END, NC
	, BM_AL(7), 0, 0, 0					, CLN, KC_END, NC // Ctl End
	, 0, BM_AR(7), 0, 0					, CLN, KC_END, NC // Ctl End
	, BM_AL(0) | BM_AL(2), 0, 0, 0		, CLN, KC_LEFT, NC // Ctl Left
	, 0, BM_AR(0) | BM_AR(2), 0, 0		, CLN, KC_LEFT, NC // Ctl Left
	, BM_AL(4) | BM_AL(6), 0, 0, 0		, CLN, KC_RIGHT, NC // Ctl Right
	, 0, BM_AR(4) | BM_AR(6), 0, 0		, CLN, KC_RIGHT, NC // Ctl Right
	, BM_AL(1) | BM_AL(3), 0, 0, 0		, CLF, KC_PGUP, NC 
	, 0, BM_AR(1) | BM_AR(3), 0, 0		, CLF, KC_PGUP, NC
	, BM_AL(5) | BM_AL(7), 0, 0, 0		, CLF, KC_PGDN, NC
	, 0, BM_AR(5) | BM_AR(7), 0, 0		, CLF, KC_PGDN, NC
	, BM_AL(0) | BM_AL(4), 0, 0, 0		, CLN, KC_LBRC, NC // Ctl {
	, 0, BM_AR(0) | BM_AR(4), 0, 0		, CLN, KC_LBRC, NC // Ctl {
	, BM_AL(2) | BM_AL(6), 0, 0, 0		, CLN, KC_RBRC, NC // Ctl }
	, 0, BM_AR(2) | BM_AR(6), 0, 0		, CLN, KC_RBRC, NC // Ctl }

	, 0, 0, BM_BL(0), 0					, CLF, KC_TAB, NC
	, 0, 0, 0, BM_BR(0)					, CLF, KC_TAB, NC
	, 0, 0, BM_BL(1), 0					, CLF, ALN, KC_TAB, ALH, NC
	, 0, 0, 0, BM_BR(1)					, CLF, ALN, KC_TAB, ALH, NC
	, 0, 0, BM_BL(2), 0					, CLN, KC_TAB, NC
	, 0, 0, 0, BM_BR(2)					, CLN, KC_TAB, NC
	
	, 0, 0, BM_BL(3), 0					, CLN, KC_F, NC
	, 0, 0, 0, BM_BR(3)					, CLN, KC_F, NC
	, 0, 0, BM_BL(4), 0					, CLN, KC_C, NC
	, 0, 0, 0, BM_BR(4)					, CLN, KC_C, NC
	, 0, 0, BM_BL(5), 0					, CLN, KC_S, NC
	, 0, 0, 0, BM_BR(5)					, CLN, KC_S, NC
	, 0, 0, BM_BL(6), 0					, CLN, KC_A, NC
	, 0, 0, 0, BM_BR(6)					, CLN, KC_A, NC
	

	, BM_AL(0) | BM_AL(1), 0, 0, 0					, CLF, KC_F2, NC
	, 0, BM_AR(6) | BM_AR(7), 0, 0					, CLF, KC_F2, NC
	, BM_AL(2) | BM_AL(3), 0, 0, 0					, CLF, KC_F3, NC
	, 0, BM_AR(4) | BM_AR(5), 0, 0					, CLF, KC_F3, NC
	, BM_AL(4) | BM_AL(5), 0, 0, 0					, CLF, KC_F4, NC
	, 0, BM_AR(2) | BM_AR(3), 0, 0					, CLF, KC_F4, NC
	, BM_AL(6) | BM_AL(7), 0, 0, 0					, CLF, KC_F5, NC
	, 0, BM_AR(0) | BM_AR(1), 0, 0					, CLF, KC_F5, NC

	, BM_AL(0) | BM_AL(6), 0, 0, 0					, CLF, ALN, SFN, SFF, ALF, NC
	, 0, BM_AR(0) | BM_AR(6), 0, 0					, CLF, ALN, SFN, SFF, ALF, NC
	, BM_AL(3) | BM_AL(5), 0, 0, 0					, CLF, KC_APP, NC
	, 0, BM_AR(3) | BM_AR(5), 0, 0					, CLF, KC_APP, NC
	, BM_AL(2) | BM_AL(4), 0, 0, 0					, SFG, SFF, CLN, KC_MINS, NC
	, 0, BM_AR(2) | BM_AR(4), 0, 0					, SFG, SFF, CLN, KC_MINS, NC
	, BM_AL(2) | BM_AL(4), 0, 0, 0					, CLF, KC_F12, NC
	, 0, BM_AR(2) | BM_AR(4), 0, 0					, CLF, KC_F12, NC
	
	, BM_AL(4), 0, BM_BL(4), 0					, CLF, KC_PSCR, NC
	, 0, BM_AR(4), 0, BM_BR(4)					, CLF, KC_PSCR, NC
	, BM_AL(6), 0, BM_BL(3), 0					, CLN, KC_PAUS, NC
	, 0, BM_AR(6), 0, BM_BR(3)					, CLN, KC_PAUS, NC

	
	, 0x00, 0x00, 0x00, 0x00 // end
	
};