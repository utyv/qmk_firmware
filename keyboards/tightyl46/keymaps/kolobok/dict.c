#include "dict.h"
#include "keycodes.h"

const uint8_t PROGMEM dict_t_ru[] = {

	  K_SPC, 0,       KC_SPC, NC
	#ifdef USE_ALTCODE
	, K_DOT, 0,       SFF, AC2(4, 6), ALF, KC_SPC, CMD, CFN, NC // .
	#else
	, K_DOT, 0,       SFF, RU_DOT, KC_SPC, CMD, CFN, NC // .
	#endif
	#ifdef USE_ALTCODE
	, K_COMM, 0,            SFF, AC2(4, 4), ALF, KC_SPC, NC // ,
	#else
	, K_COMM, 0,            SFN, RU_DOT, KC_SPC, NC // ,
	#endif
	, K_COMM | K_SPC, 0, 	SFF, KC_SPC, KC_EQL, KC_SPC, NC // =
	#ifdef USE_ALTCODE
	, K_SPC | K_DOT, 0,   SFN, KC_9, SFF, AC2(3, 4), ALF, NC // ("
 	#else
	, K_SPC | K_DOT, 0,   SFN, KC_9, SFN, KC_2, NC // ("
	#endif
	
	, 0, 0 // end
};

const uint8_t PROGMEM dict_t_en[] = {

	  K_SPC, 0,             KC_SPC, NC
	#ifdef USE_ALTCODE
	, K_DOT, 0,             SFF, AC2(4, 6), ALF, KC_SPC, CMD, CFN, NC // .
	#else
	, K_DOT, 0,             SFF, KC_DOT, KC_SPC, CMD, CFN, NC // .
	#endif
	#ifdef USE_ALTCODE
	, K_COMM, 0,       SFF, AC2(4, 4), ALF, KC_SPC, NC // ,
	#else
	, K_COMM, 0,       SFF, KC_COMM, KC_SPC, NC // ,
	#endif
	, K_COMM | K_SPC, 0, 	SFF, KC_SPC, KC_EQL, KC_SPC, NC // =
	#ifdef USE_ALTCODE
	, K_SPC | K_DOT, 0,   SFN, KC_9, SFF, AC2(3, 4), ALF, NC // ("
 	#else
	, K_SPC | K_DOT, 0,   SFN, KC_9, SFN, KC_QUOT, NC // ("
	#endif
	, 0, 0 // end
};

const uint8_t PROGMEM dict_t_ru_sft[] = {

	#ifdef USE_ALTCODE
	  K_DOT, 0,       SFF, AC2(4, 6), ALF, CMD, CFN, NC // .
	#else
	  K_DOT, 0,       SFF, RU_DOT, CMD, CFN, NC // .
	#endif
	#ifdef USE_ALTCODE
	, K_COMM, 0,            SFF, AC2(4, 4), ALF, KC_SPC, CMD, CFN, NC // ,
	#else
	, K_COMM, 0,            SFN, RU_DOT, KC_SPC, CMD, CFN, NC // ,
	#endif
	, K_COMM | K_SPC, 0, 	SFF, KC_SPC, KC_EQL, KC_SPC, CMD, CFN, NC // =
	#ifdef USE_ALTCODE
	, K_SPC | K_DOT, 0,   SFN, KC_9, SFF, AC2(3, 4), ALF, CMD, CFN, NC // ("
 	#else
	, K_SPC | K_DOT, 0,   SFN, KC_9, SFN, KC_2, CMD, CFN, NC // ("
	#endif
	, 0, 0 // end
};

const uint8_t PROGMEM dict_t_en_sft[] = {

	#ifdef USE_ALTCODE
	  K_DOT, 0,             SFF, AC2(4, 6), ALF, CMD, CFN, NC // .
	#else
	  K_DOT, 0,             SFF, KC_DOT, CMD, CFN, NC // .
	#endif
	#ifdef USE_ALTCODE
	, K_COMM, 0,       SFF, AC2(4, 4), ALF, KC_SPC, CMD, CFN, NC // ,
	#else
	, K_COMM, 0,       SFF, KC_COMM, KC_SPC, CMD, CFN, NC // ,
	#endif
	, K_COMM | K_SPC, 0, 	SFF, KC_SPC, KC_EQL, KC_SPC, CMD, CFN, NC // =
	#ifdef USE_ALTCODE
	, K_SPC | K_DOT, 0,   SFN, KC_9, SFF, AC2(3, 4), ALF, CMD, CFN, NC // ("
 	#else
	, K_SPC | K_DOT, 0,   SFN, KC_9, SFN, KC_QUOT, CMD, CFN, NC // ("
	#endif
	, 0, 0 // end
};

const uint8_t PROGMEM dict_l[] = {

	  0, K_BSPC,            KC_BSPC, NC
	, 0, K_ENT,             KC_ENT, NC
	, 0, K_DEL,             KC_DEL, NC
	, K_T, K_BSPC,          CLN, KC_BSPC, NC
	, K_N, K_ENT,           CLN, KC_ENT, NC
	, 0, K_8 | K_DEL,       CLN, KC_DEL, NC
	, 0, K_ENT | K_DEL,     KC_ESC, NC

	, 0, K_1, 	            SFF, KC_1, NC
	, 0, K_2,               SFF, KC_2, NC
	, 0, K_1 | K_2,         SFF, KC_3, NC
	, 0, K_4,               SFF, KC_4, NC
	, 0, K_1 | K_4,         SFF, KC_5, NC
	, 0, K_2 | K_4,         SFF, KC_6, NC
	, 0, K_1 | K_2 | K_4,   SFF, KC_7, NC
	, 0, K_8,               SFF, KC_8, NC
	, 0, K_8 | K_1,         SFF, KC_9, NC
	, 0, K_8 | K_2,         SFF, KC_0, NC

	, 0, 0 // end
};

const uint8_t PROGMEM dict_r[] = {
	  0, K_BSPC,   CMD, UND, NC
	#ifdef UTYUMOV
	, 0, K_ENT,    SFF, KC_MINS, NC
	#endif
	, 0, 0 // end
};

const uint8_t PROGMEM dict_l_ru[] = {
	  K_S, 0,      RU_S, NC
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
	, K_S | K_P, 0    , RU_TZ, NC // ъ
	
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4,         SFF, AC2(4, 6), NC // .
	#else
	, 0, K_8 | K_4,         SFF, RU_DOT, NC // .
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2,   SFF, AC2(4, 4), NC // ,
	#else
	, 0, K_8 | K_4 | K_2,   SFN, RU_DOT, NC // ,
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_4 | K_8,   SFF, AC3(2, 5, 2), NC // №
	#else
	, 0, K_1 | K_4 | K_8,   SFN, KC_3, NC // №
	#endif
	, 0, K_8 | K_4 | K_2 | K_1, SFF, KC_MINS, NC // -


	, 0, 0 // end
};

const uint8_t PROGMEM dict_l_en[] = {
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

	#ifdef USE_ALTCODE
	, 0, K_8 | K_4,         SFF, AC2(4, 6), NC // .
 	#else
	, 0, K_8 | K_4,         SFF, KC_DOT, NC // .
  	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2,   SFF, AC2(4, 4), NC // ,
	#else
	, 0, K_8 | K_4 | K_2,   SFF, KC_COMM, NC // ,
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_4 | K_8,   SFF, AC3(2, 5, 2), NC // №
	#else
	, 0, K_1 | K_4 | K_8,   CMD, LSW, SFN, KC_3, CMD, LSW, NC // №
	#endif
	, 0, K_8 | K_4 | K_2 | K_1, SFF, KC_MINS, NC // -
	
	, 0, 0 // end
};

const uint8_t PROGMEM dict_r_ru[] = {
	  K_E, 0,      RU_E, NC
	, K_O, 0,      RU_O, NC
	, K_A, 0,      RU_A, NC
	, K_I, 0,      RU_I, NC
	, K_Y, 0,      RU_Y, NC
	, K_U, 0,      RU_U, NC
	, K_Q, 0,      RU_Q, NC
	, K_MZ, 0,     RU_MZ, NC

	, K_E | K_Q, 0, RU_YU, NC // ю
	, K_O | K_Q, 0, RU_EE, NC // э
	, K_E | K_I | K_U, 0, RU_YO, NC // ё
	
	, K_E | K_A, 0, RU_E, RU_J, NC // ей
	, K_O | K_I, 0, RU_O, RU_J, NC // ой
	, K_A | K_Y, 0, RU_A, RU_J, NC // ай
	, K_I | K_U, 0, RU_I, RU_J, NC // ий
	, K_Y | K_Q, 0,             RU_Y, RU_J, NC // ый
	, K_U | K_MZ, 0,            RU_U, RU_J, NC // уй
	, K_O | K_Q | K_MZ, 0,      RU_Q, RU_J, NC // яй
	, K_E | K_MZ, 0,            RU_E, RU_L, RU_MZ, NC // ель
	, K_O | K_MZ, 0,            RU_O, RU_L, RU_MZ, NC // оль
	, K_A | K_MZ, 0,            RU_A, RU_T, RU_MZ, NC // ать
	, K_I | K_MZ, 0,            RU_I, RU_T, RU_MZ, NC // ить
	
	
	#ifdef KOLOBOK_LEVEL_1
	, K_E | K_O, 0, RU_E, RU_L, NC // ел
	, K_O | K_A, 0, RU_O, RU_L, NC // ол
	, K_A | K_I, 0, RU_A, RU_L, NC // ал
	, K_I | K_Y, 0, RU_I, RU_L, NC // ил
	, K_E | K_U, 0,             RU_E, RU_G, RU_O, NC // его
	, K_O | K_U | K_Q, 0,       RU_O, RU_G, RU_O, NC // ого  
	, K_E | K_I, 0, RU_E, RU_M, NC // ем
	, K_O | K_Y, 0, RU_O, RU_M, NC // ом
	, K_O | K_A | K_Y, 0,       RU_O, RU_T, NC // от
	, K_E | K_O | K_Y, 0,       RU_E, RU_R, NC // ер
	, K_E | K_Y, 0, RU_E, RU_N, NC // ен
	, K_O | K_U, 0, RU_O, RU_N, NC // он
	, K_E | K_O | K_I, 0,       RU_E, RU_T, NC // ет
	, K_A | K_Y | K_U, 0,       RU_A, RU_L, RU_I, NC //али
	, K_A | K_Y | K_Q, 0,       RU_A, RU_Q, NC // ая
	, K_A | K_Y | K_U | K_Q, 0, RU_A, RU_L, RU_A, NC // ала
	, K_A | K_Q, 0, RU_A, RU_N, NC // ан
	, K_U | K_Q | K_MZ, 0,       RU_I, RU_L, RU_I, NC // или
	, K_O | K_I | K_Y, 0,       RU_O, RU_V, NC // ов
	, K_O | K_A | K_I, 0,       RU_O, RU_E, NC // ое
	, K_A | K_Y | K_MZ, 0,            RU_A, RU_E, RU_T, NC // ает
	, K_O | K_A | K_Y | K_U, 0,       RU_O, RU_D, NC // од
	, K_E | K_O | K_A, 0,       RU_E, RU_E, NC // ее
	, K_Y | K_U | K_Q, 0,       RU_Y, RU_E, NC // ые
	, K_O | K_A | K_MZ, 0,      RU_I, RU_M, NC // им
	, K_E | K_O | K_MZ, 0,      RU_I, RU_E, NC // ие
	, K_O | K_A | K_U, 0,       RU_O, RU_R, NC // ор
	, K_A | K_U, 0, RU_A, RU_M, NC // ам
	, K_E | K_I | K_Y, 0,             RU_E, RU_H, NC // ех
	, K_E | K_U | K_Q, 0,             RU_U, RU_YU, NC // ую
	, K_Y | K_U | K_MZ, 0,            RU_Y, RU_H, NC // ых
	, K_Q | K_MZ, 0,                  RU_Q, RU_T, RU_MZ, NC // ять
	, K_U | K_Q, 0,                   RU_U, RU_L, NC // ул
	, K_Y | K_MZ, 0,                  RU_Y, RU_M, NC // ым
	, K_E | K_O | K_A | K_I, 0,       RU_E, RU_D, NC // ед
	, K_A | K_U | K_Q, 0,             RU_A, RU_H, NC // ах
	, K_Y | K_Q | K_MZ, 0,            RU_Y, RU_T, RU_MZ, NC // ыть
	, K_Y | K_U, 0,                   RU_Y, RU_L, NC // ыл
	#endif

	#ifdef KOLOBOK_LEVEL_2
	, K_E | K_A | K_I, 0,             RU_I, RU_H, NC // их
	, K_O | K_A | K_Q, 0,             RU_O, RU_Z, NC // оз
	, K_E | K_A | K_U, 0,             RU_A, RU_M, RU_I, NC // ами
	, K_E | K_Y | K_U | K_Q, 0,       RU_E, RU_N, RU_I, RU_E, NC // ение
	, K_E | K_O | K_U, 0,             RU_E, RU_M, RU_U, NC // ему
	, K_E | K_A | K_MZ, 0,            RU_A, RU_L, RU_MZ, NC // аль
	, K_E | K_O | K_Q, 0,             RU_I, RU_T, NC // ит
	, K_E | K_Y | K_Q, 0,             RU_I, RU_L, RU_A, NC // ила
	, K_A | K_U | K_MZ, 0,            RU_A, RU_R, NC // ар
	, K_O | K_Y | K_U, 0,             RU_O, RU_M, RU_U, NC // ому
	, K_E | K_O | K_A | K_Q, 0,       RU_E, RU_N, RU_I, RU_Q, NC // ения
	, K_E | K_U | K_MZ, 0,            RU_E, RU_L, RU_I, NC // ели
	, K_O | K_Y | K_MZ, 0,            RU_O, RU_S, RU_T, RU_MZ, NC // ость
	, K_E | K_A | K_Y, 0,             RU_I, RU_N, NC // ин
	, K_Y | K_U | K_Q | K_MZ, 0,      RU_I, RU_Q, NC // ия
	, K_E | K_O | K_A | K_Y, 0,       RU_E, RU_S, RU_T, RU_MZ, NC // есть
	, K_E | K_A | K_Q, 0,             RU_A, RU_YU, NC // аю
	, K_O | K_U | K_MZ, 0,            RU_U, RU_T, NC // ут
	, K_O | K_Y | K_Q, 0,             RU_E, RU_Z, NC // ез
	, K_E | K_Y | K_U, 0,             RU_I, RU_L, RU_O, NC // ило
	, K_A | K_I | K_U, 0,             RU_A, RU_S, NC // ас
	, K_E | K_Q | K_MZ, 0,            RU_Q, RU_L, NC // ял
	, K_O | K_Y | K_U | K_MZ, 0,      RU_E, RU_T, RU_MZ, NC // еть
	, K_O | K_U | K_Q | K_MZ, 0,      RU_U, RU_T, RU_MZ, NC // уть
	, K_E | K_Y | K_MZ, 0,            RU_I, RU_L, RU_MZ, NC // иль
	, K_E | K_O | K_Y | K_Q, 0,       RU_I, RU_T, RU_E, NC // ите
	, K_O | K_I | K_U, 0,             RU_O, RU_I, NC // ои
	, K_A | K_I | K_Y, 0,             RU_A, RU_E, NC // ае
	, K_O | K_Y | K_U | K_Q, 0,       RU_E, RU_T, RU_E, NC // ете
	, K_E | K_A | K_Y | K_MZ, 0,      RU_A, RU_E, RU_T, RU_E, NC // аете
	, K_E | K_A | K_I | K_Y, 0,       RU_A, RU_E, RU_M, NC // аем
	, K_E | K_A | K_Y | K_Q, 0,       RU_A, RU_YU, RU_T, NC // ают
	#endif

	#ifdef UTYUMOV
	, K_E | K_O | K_Y | K_U | K_Q, 0,       RU_A, RU_N, RU_I, RU_E, NC // ание
	, K_E | K_O | K_A | K_U | K_Q, 0,       RU_A, RU_N, RU_I, RU_Q, NC // ания
	, K_U, K_8,                             CMD, LSW, KC_U, KC_T, KC_Y, KC_V, CMD, LSW, NC // utyv
	#endif

	#ifdef USE_ALTCODE
	, 0, K_8,       SFF, AC2(4, 6), NC // .
	#else
	, 0, K_8,       SFF, RU_DOT, NC // .
	#endif
	, 0, K_4,       SFN, KC_9, NC // (
	, 0, K_2,       SFN, KC_0, NC // )
	, 0, K_1, 	    SFF, KC_EQL, NC // =
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4,            SFF, AC2(4, 4), NC // ,
	#else
	, 0, K_8 | K_4,            SFN, RU_DOT, NC // ,
	#endif
	, 0, K_2 | K_4,            SFN, KC_9, KC_0, NC // ()
	, 0, K_1 | K_2,            SFN, KC_EQL, NC // +
	#ifdef USE_ALTCODE
	, 0, K_8 | K_1,            SFF, AC2(3, 4), NC // "
 	#else
	, 0, K_8 | K_1,            SFN, KC_2, NC // "
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2,            SFF, AC2(5, 9), NC // ;
	#else
	, 0, K_8 | K_2,            SFN, KC_4, NC // ;
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_4,            SFF, AC2(5, 8), NC // :
	#else
	, 0, K_1 | K_4,            SFN, KC_6, NC // :
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2,       SFF, AC2(4, 7), NC // /
 	#else
	, 0, K_8 | K_4 | K_2,       SFN, KC_BSLS, NC // /
	#endif
	, 0, K_1 | K_2 | K_4,       SFF, KC_MINS, NC // -
	#ifdef USE_ALTCODE
    , 0, K_8 | K_4 | K_1,       SFF, AC2(3, 7), NC // %
	#else
    , 0, K_8 | K_4 | K_1,       SFN, KC_5, NC // %
	#endif
    , 0, K_8 | K_2 | K_1,       SFN, KC_8, NC // *
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2 | K_1, SFF, AC3(1, 2, 4), NC // |
 	#else
	, 0, K_8 | K_4 | K_2 | K_1, CMD, LSW, SFN, KC_BSLS, CMD, LSW, NC // |
	#endif

	#ifdef UTYUMOV
	#ifdef USE_ALTCODE
	, K_U, K_8 | K_2,            SFF, AC2(5, 9), ALF, KC_ENT, NC // ;
	#else
	, K_U, K_8 | K_2,            SFN, KC_4, SFF, KC_ENT, NC // ;
	#endif
	#ifdef USE_ALTCODE
	, K_Y, K_2,            SFN, KC_0, SFF, AC2(5, 9), NC // );
	#else
	, K_Y, K_2,            SFN, KC_0, KC_4, NC // );
	#endif
	#ifdef USE_ALTCODE
	, K_Y | K_U, K_2,            SFN, KC_0, SFF, AC2(5, 9), ALF, KC_ENT, NC // );
	#else
	, K_Y | K_U, K_2,            SFN, KC_0, KC_4, SFF, KC_ENT, NC // );
	#endif
	#ifdef USE_ALTCODE
	, K_Q, K_8,            SFF, AC2(3, 4), ALF, SFN, KC_0, NC // ")
 	#else
	, K_Q, K_8,            SFN, KC_2, KC_0, NC // ")
	#endif
	#ifdef USE_ALTCODE
	, K_Y, K_8 | K_2,            SFF, AC2(3, 4), ALF, SFN, KC_0, SFF, AC2(5, 9), NC // ");
 	#else
	, K_Y, K_8 | K_2,            SFN, KC_2, KC_0, KC_4, NC // ");
	#endif
	#ifdef USE_ALTCODE
	, K_Y | K_U, K_8 | K_2,      SFF, AC2(3, 4), ALF, SFN, KC_0, SFF, AC2(5, 9), ALF, KC_ENT, NC // ");
 	#else
	, K_Y | K_U, K_8 | K_2,      SFN, KC_2, KC_0, KC_4, SFF, KC_ENT, NC // ");
	#endif
	#ifdef USE_ALTCODE
	, K_Y, K_2 | K_1,            SFF, KC_SPC, SFN, KC_EQL, SFF, KC_SPC, KC_1, AC2(5, 9), NC // + 1;
	#else
	, K_Y, K_2 | K_1,            SFF, KC_SPC, SFN, KC_EQL, SFF, KC_SPC, KC_1, SFN, KC_4, NC // ;
	#endif
	#ifdef USE_ALTCODE
	, K_Y | K_U, K_2 | K_1,            SFF, KC_SPC, SFN, KC_EQL, SFF, KC_SPC, KC_1, AC2(5, 9), ALF, KC_ENT, NC // + 1;
	#else
	, K_Y | K_U, K_2 | K_1,            SFF, KC_SPC, SFN, KC_EQL, SFF, KC_SPC, KC_1, SFN, KC_4, SFF, KC_ENT, NC // ;
	#endif
	#endif

	, 0, 0 // end
};

const uint8_t PROGMEM dict_r_en[] = {
	  K_E, 0,      KC_E, NC
	, K_O, 0,      KC_O, NC
	, K_A, 0,      KC_A, NC
	, K_I, 0,      KC_I, NC
	, K_Y, 0,      KC_Y, NC
	, K_U, 0,      KC_U, NC
	, K_Q, 0,      KC_Q, NC

	#ifdef USE_ALTCODE
	, 0, K_8,             SFF, AC2(4, 6), NC // .
	#else
	, 0, K_8,             SFF, KC_DOT, NC // .
	#endif
	, 0, K_4,             SFN, KC_9, NC // (
	, 0, K_2,             SFN, KC_0, NC // )
	, 0, K_1, 	          SFF, KC_EQL, NC // =
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4,       SFF, AC2(4, 4), NC // ,
	#else
	, 0, K_8 | K_4,       SFF, KC_COMM, NC // ,
	#endif
	, 0, K_2 | K_4,       SFN, KC_9, KC_0, NC // ()
	, 0, K_1 | K_2,       SFN, KC_EQL, NC // +
	#ifdef USE_ALTCODE
	, 0, K_8 | K_1,       SFF, AC2(3, 4), NC // "
 	#else
	, 0, K_8 | K_1,       SFN, KC_QUOT, NC // "
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2,       SFF, AC2(5, 9), NC // ;
	#else
	, 0, K_8 | K_2,       SFF, KC_SCLN, NC // ;
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_4,      SFF, AC2(5, 8), NC // :
	#else
	, 0, K_1 | K_4,      SFN, KC_SCLN, NC // :
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2, SFF, AC2(4, 7), NC // /
 	#else
	, 0, K_8 | K_4 | K_2, SFF, KC_SLSH, NC // /
	#endif
	, 0, K_1 | K_2 | K_4, SFF, KC_MINS, NC // -
	#ifdef USE_ALTCODE
    , 0, K_8 | K_4 | K_1, SFF, AC2(3, 7), NC // %
	#else
    , 0, K_8 | K_4 | K_1, SFN, KC_5, NC // %
	#endif
    , 0, K_8 | K_2 | K_1, SFN, KC_8, NC // *
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2 | K_1,  SFF, AC3(1, 2, 4), NC // |
 	#else
	, 0, K_8 | K_4 | K_2 | K_1,  SFN, KC_BSLS, NC // |
	#endif

	#ifdef UTYUMOV
	#ifdef USE_ALTCODE
	, K_U, K_8 | K_2,       SFF, AC2(5, 9), ALF, KC_ENT, NC // ;
	#else
	, K_U, K_8 | K_2,       SFF, KC_SCLN, KC_ENT, NC // ;
	#endif
	#ifdef USE_ALTCODE
	, K_Y, K_2,       SFN, KC_0, SFF, AC2(5, 9), NC // );
	#else
	, K_Y, K_2,       SFN, KC_0, SFF, KC_SCLN, NC // );
	#endif
	#ifdef USE_ALTCODE
	, K_Y | K_U, K_2,       SFN, KC_0, SFF, AC2(5, 9), ALF, KC_ENT, NC // );
	#else
	, K_Y | K_U, K_2,       SFN, KC_0, SFF, KC_SCLN, KC_ENT, NC // );
	#endif
	#ifdef USE_ALTCODE
	, K_Q, K_8,       SFF, AC2(3, 4), ALF, SFN, KC_0, NC // ")
 	#else
	, K_Q, K_8,       SFN, KC_QUOT, KC_0, NC // ")
	#endif
	#ifdef USE_ALTCODE
	, K_Y, K_8 | K_2,       SFF, AC2(3, 4), ALF, SFN, KC_0, SFF, AC2(5, 9), NC // ");
 	#else
	, K_Y, K_8 | K_2,       SFN, KC_QUOT, KC_0, SFF, KC_SCLN, NC // ");
	#endif
	#ifdef USE_ALTCODE
	, K_Y | K_U, K_8 | K_2,       SFF, AC2(3, 4), ALF, SFN, KC_0, SFF, AC2(5, 9), ALF, KC_ENT, NC // ");
 	#else
	, K_Y | K_U, K_8 | K_2,       SFN, KC_QUOT, KC_0, SFF, KC_SCLN, KC_ENT, NC // ");
	#endif
	#ifdef USE_ALTCODE
	, K_Y, K_2 | K_1,       SFF, KC_SPC, SFN, KC_EQL, SFF, KC_SPC, KC_1, AC2(5, 9), NC // + 1;
	#else
	, K_Y, K_2 | K_1,       SFF, KC_SPC, SFN, KC_EQL, SFF, KC_SPC, KC_1, KC_SCLN, NC // + 1;
	#endif
	#ifdef USE_ALTCODE
	, K_Y | K_U, K_2 | K_1,       SFF, KC_SPC, SFN, KC_EQL, SFF, KC_SPC, KC_1, AC2(5, 9), ALF, KC_ENT, NC // + 1;
	#else
	, K_Y | K_U, K_2 | K_1,       SFF, KC_SPC, SFN, KC_EQL, SFF, KC_SPC, KC_1, KC_SCLN, KC_ENT, NC // + 1;
	#endif
	#endif

	, 0, 0 // end
};
	
const uint8_t PROGMEM dict_l_ru_sft[] = {

	#ifdef USE_ALTCODE
	  0, K_8,               SFF, AC3(1, 2, 5), NC // }
	#else
	  0, K_8,               CMD, LSW, SFN, KC_RBRC, CMD, LSW, NC // }
	#endif
	#ifdef USE_ALTCODE
	, 0, K_4,               SFF, AC2(9, 3), NC // ]
	#else
	, 0, K_4,               CMD, LSW, KC_RBRC, CMD, LSW, NC // ]
	#endif
	#ifdef USE_ALTCODE
	, 0, K_2,               SFF, AC2(9, 1), NC // [
	#else
	, 0, K_2,               CMD, LSW, KC_LBRC, CMD, LSW, NC // [
	#endif
	#ifdef USE_ALTCODE
    , 0, K_1,               SFF, AC3(1, 2, 3), NC // {
	#else
    , 0, K_1,               CMD, LSW, SFN, KC_LBRC, CMD, LSW, NC // {
	#endif
	#ifdef USE_ALTCODE
	, 0, K_2 | K_4,         SFF, AC2(9, 1), ALF, AC2(9, 3), NC // []
 	#else
	, 0, K_2 | K_4,         CMD, LSW, KC_LBRC, KC_RBRC, CMD, LSW, NC // []
 	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_1,         SFF, AC3(1, 2, 3), ALF, AC3(1, 2, 5), NC // {}
 	#else
	, 0, K_8 | K_1,         CMD, LSW, SFN, KC_LBRC, KC_RBRC, CMD, LSW, NC // {}
 	#endif

	#ifdef UTYUMOV
	
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2,   SFF, AC2(4, 7), ALF, AC2(4, 7), NC // //
 	#else
	, 0, K_8 | K_4 | K_2,   SFN, KC_BSLS, KC_BSLS, NC // //
	#endif

	#endif

	, 0, 0 // end
};

const uint8_t PROGMEM dict_l_en_sft[] = {
	#ifdef USE_ALTCODE
      0, K_8,             SFF, AC3(1, 2, 5), NC // }
 	#else
      0, K_8,             SFN, KC_RBRC, NC // }
  	#endif
	#ifdef USE_ALTCODE
	, 0, K_4,             SFF, AC2(9, 3), NC // ]
 	#else
 	, 0, K_4,             SFF, KC_RBRC, NC // ]
 	#endif
	#ifdef USE_ALTCODE
	, 0, K_2,             SFF, AC2(9, 1), NC // [
 	#else
	, 0, K_2,             SFF, KC_LBRC, NC // [
  	#endif
	#ifdef USE_ALTCODE
	, 0, K_1,             SFF, AC3(1, 2, 3), NC // {
 	#else
	, 0, K_1,             SFN, KC_LBRC, NC // {
  	#endif
	#ifdef USE_ALTCODE
	, 0, K_2 | K_4,         SFF, AC2(9, 1), ALF, AC2(9, 3), NC // []
 	#else
	, 0, K_2 | K_4,         SFF, KC_LBRC, KC_RBRC, NC // []
 	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_1,         SFF, AC3(1, 2, 3), ALF, AC3(1, 2, 5), NC // {}
 	#else
	, 0, K_8 | K_1,         SFN, KC_LBRC, KC_RBRC, NC // {}
 	#endif
	#ifdef UTYUMOV
	
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2,   SFF, AC2(4, 7), ALF, AC2(4, 7), NC // //
 	#else
	, 0, K_8 | K_4 | K_2,   SFF, KC_SLSH, KC_SLSH, NC // //
	#endif
	
	#endif
	, 0, 0 // end
};

const uint8_t PROGMEM dict_r_ru_sft[] = {
	  0, K_8,             SFN, KC_1, NC // !
	#ifdef USE_ALTCODE
	, 0, K_4,             SFF, AC2(6, 0), NC // <
	#else
	, 0, K_4,             CMD, LSW, SFN, KC_COMM, CMD, LSW, NC // <
	#endif
	#ifdef USE_ALTCODE
	, 0, K_2,             SFF, AC2(6, 2), NC // >
	#else
	, 0, K_2,             CMD, LSW, SFN, KC_DOT, CMD, NC // >
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1,             SFF, AC2(3, 6), NC // $
	#else
	, 0, K_1,             CMD, LSW, SFN, KC_4, CMD, LSW, NC // $
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4,       SFF, AC2(6, 3), NC // ?
	#else
	, 0, K_8 | K_4,       SFN, KC_7, NC // ?
	#endif
	#ifdef USE_ALTCODE
	, 0, K_2 | K_4,       SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	#else
	, 0, K_2 | K_4,       CMD, LSW, SFN, KC_COMM, KC_DOT, CMD, LSW, NC // <>
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_2,       SFF, AC2(9, 4), NC // ^
	#else
	, 0, K_1 | K_2,       CMD, LSW, SFN, KC_6, CMD, LSW, NC // ^
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_1,       SFF, AC2(3, 9), NC // '
 	#else
	, 0, K_8 | K_1,       CMD, LSW, KC_QUOT, CMD, LSW, NC // '
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2,       SFF, AC2(6, 4), NC // @
	#else
	, 0, K_8 | K_2,       CMD, LSW, SFN, KC_2, CMD, LSW, NC // @
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_4,       SFF, AC2(3, 5), NC // #
	#else
	, 0, K_1 | K_4,       CMD, LSW, SFN, KC_3, CMD, LSW, NC // #
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2, SFF, AC2(9, 2), NC // \*
 	#else
	, 0, K_8 | K_4 | K_2, SFF, KC_BSLS, NC // \*
	#endif
	, 0, K_1 | K_2 | K_4, SFN, KC_MINS, NC // _
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_1, SFF, AC3(1, 2, 6), NC // ~
	#else
	, 0, K_8 | K_4 | K_1, CMD, LSW, SFN, KC_GRV, CMD, LSW, NC // ~
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2 | K_1, SFF, AC2(9, 6), NC // `
	#else
	, 0, K_8 | K_2 | K_1, CMD, LSW, SFF, KC_GRV, CMD, LSW, NC // `
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2 | K_1, SFF, AC2(3, 8), NC // &
 	#else
	, 0, K_8 | K_4 | K_2 | K_1, CMD, LSW, SFN, KC_7, CMD, LSW, NC // &
	#endif

	, 0, 0 // end
};

const uint8_t PROGMEM dict_r_en_sft[] = {
	  0, K_8,             SFN, KC_1, NC // !
	#ifdef USE_ALTCODE
	, 0, K_4,             SFF, AC2(6, 0), NC // <
	#else
	, 0, K_4,             SFN, KC_COMM, NC // <
	#endif
	#ifdef USE_ALTCODE
	, 0, K_2,             SFF, AC2(6, 2), NC // >
	#else
	, 0, K_2,             SFN, KC_DOT, NC // >
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1,             SFF, AC2(3, 6), NC // $
	#else
	, 0, K_1,             SFN, KC_4, NC // $
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4,       SFF, AC2(6, 3), NC // ?
	#else
	, 0, K_8 | K_4,       SFN, KC_SLSH, NC // ?
	#endif
	#ifdef USE_ALTCODE
	, 0, K_2 | K_4,       SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	#else
	, 0, K_2 | K_4,       SFN, KC_COMM, KC_DOT, NC // <>
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_2,       SFF, AC2(9, 4), NC // ^
	#else
	, 0, K_1 | K_2,       SFN, KC_6, NC // ^
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_1,       SFF, AC2(3, 9), NC // '
 	#else
	, 0, K_8 | K_1,       SFF, KC_QUOT, NC // '
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2,       SFF, AC2(6, 4), NC // @
	#else
	, 0, K_8 | K_2,       SFN, KC_2, NC // @
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_4,       SFF, AC2(3, 5), NC // #
	#else
	, 0, K_1 | K_4,       SFN, KC_3, NC // #
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2, SFF, AC2(9, 2), NC // \*
 	#else
	, 0, K_8 | K_4 | K_2, SFF, KC_BSLS, NC // \*
	#endif
	, 0, K_1 | K_2 | K_4, SFN, KC_MINS, NC // _
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_1, SFF, AC3(1, 2, 6), NC // ~
	#else
	, 0, K_8 | K_4 | K_1, SFN, KC_GRV, NC // ~
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2 | K_1, SFF, AC2(9, 6), NC // `
	#else
	, 0, K_8 | K_2 | K_1, SFF, KC_GRV, NC // `
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2 | K_1, SFF, AC2(3, 8), NC // &
 	#else
	, 0, K_8 | K_4 | K_2 | K_1, SFN, KC_7, NC // &
	#endif

	, 0, 0 // end
};

const uint8_t PROGMEM dict_l_ru_oh[] = { // one hand
	  K_S | K_T, 0, RU_O, NC
	, K_D | K_N, 0, RU_E, NC
	, K_V | K_T, 0, RU_A, NC
	, K_P | K_N, 0, RU_I, NC
	, K_S | K_K, 0, RU_U, NC
	, K_V | K_K, 0, RU_Q, NC
	, K_D | K_B, 0, RU_Y, NC
	, K_S | K_V, 0, RU_YU, NC
	, K_D | K_P, 0, RU_EE, NC
	, K_V | K_N, 0, RU_MZ, NC
	, K_S | K_P, 0, RU_TZ, NC
	, K_S | K_B | K_N, 0, RU_YO, NC
	
	, K_B | K_P | K_N, 0,       KC_SPC, NC
	#ifdef USE_ALTCODE
	, K_K | K_T | K_N, 0,       SFF, AC2(4, 6), NC // .
	#else
	, K_K | K_T | K_N, 0,       SFF, RU_DOT, NC // .
	#endif
	, K_V | K_B, 0,             SFN, KC_9, NC // (
	, K_K | K_P, 0,             SFN, KC_0, NC // )
	, K_T | K_P | K_N, 0,       SFF, KC_EQL, NC // =
	#ifdef USE_ALTCODE
	, K_K | K_P | K_N, 0,       SFF, AC2(4, 4), NC // ,
	#else
	, K_K | K_P | K_N, 0,       SFN, RU_DOT, NC // ,
	#endif
	, K_V | K_K | K_B | K_P, 0, SFN, KC_9, KC_0, NC // ()
	, K_K | K_T | K_P, 0,       SFN, KC_EQL, NC // +
	#ifdef USE_ALTCODE
	, K_T | K_D | K_N, 0,       SFF, AC2(3, 4), NC // "
 	#else
	, K_T | K_D | K_N, 0,       SFN, KC_2, NC // "
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_B | K_N, 0,       SFF, AC2(5, 9), NC // ;
	#else
	, K_K | K_B | K_N, 0,       SFN, KC_4, NC // ;
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_T | K_P | K_N, 0, SFF, AC2(5, 8), NC // :
	#else
	, K_K | K_T | K_P | K_N, 0, SFN, KC_6, NC // :
	#endif
	#ifdef USE_ALTCODE
	, K_V | K_K | K_T, 0,       SFF, AC2(4, 7), NC // /
 	#else
	, K_V | K_K | K_T, 0,       SFN, KC_BSLS, NC // /
	#endif
	, K_D | K_B | K_P, 0,       SFF, KC_MINS, NC // -
	#ifdef USE_ALTCODE
    , K_D | K_P | K_N, 0,       SFF, AC2(3, 7), NC // %
	#else
    , K_D | K_P | K_N, 0,       SFN, KC_5, NC // %
	#endif
	, K_D | K_B | K_N, 0,       SFN, KC_8, NC // *
	#ifdef USE_ALTCODE
	, K_S | K_V | K_K, 0,       SFF, AC3(1, 2, 4), NC // |
 	#else
	, K_S | K_V | K_K, 0,       CMD, LSW, SFN, KC_BSLS, CMD, LSW, NC // |
	#endif
	

	, 0, 0 // end
};

const uint8_t PROGMEM dict_l_ru_oh_sft[] = { // one hand
	  K_K | K_T | K_N, 0,       SFN, KC_1, NC // !
	#ifdef USE_ALTCODE
	, K_V | K_B, 0,             SFF, AC2(6, 0), NC // <
	#else
	, K_V | K_B, 0,             CMD, LSW, SFN, KC_COMM, CMD, LSW, NC // <
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_P, 0,             SFF, AC2(6, 2), NC // >
	#else
	, K_K | K_P, 0,             CMD, LSW, SFN, KC_DOT, CMD, LSW, NC // >
	#endif
	#ifdef USE_ALTCODE
	, K_T | K_P | K_N, 0,       SFF, AC2(3, 6), NC // $
	#else
	, K_T | K_P | K_N, 0,       CMD, LSW, SFN, KC_4, CMD, LSW, NC // $
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_P | K_N, 0,       SFF, AC2(6, 3), NC // ?
	#else
	, K_K | K_P | K_N, 0,       SFN, KC_7, NC // ?
	#endif
	#ifdef USE_ALTCODE
	, K_V | K_K | K_B | K_P, 0, SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	#else
	, K_V | K_K | K_B | K_P, 0, CMD, LSW, SFN, KC_COMM, KC_DOT, CMD, LSW, NC // <>
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_T | K_P, 0,       SFF, AC2(9, 4), NC // ^
	#else
	, K_K | K_T | K_P, 0,       CMD, LSW, SFN, KC_6, CMD, LSW, NC // ^
	#endif
	#ifdef USE_ALTCODE
	, K_T | K_D | K_N, 0,       SFF, AC2(3, 9), NC // '
 	#else
	, K_T | K_D | K_N, 0,       CMD, LSW, KC_QUOT, CMD, LSW, NC // '
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_B | K_N, 0,       SFF, AC2(6, 4), NC // @
	#else
	, K_K | K_B | K_N, 0,       CMD, LSW, SFN, KC_2, CMD, LSW, NC // @
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_T | K_P | K_N, 0, SFF, AC2(3, 5), NC // #
	#else
	, K_K | K_T | K_P | K_N, 0, CMD, LSW, SFN, KC_3, CMD, LSW, NC // #
	#endif
	#ifdef USE_ALTCODE
	, K_V | K_K | K_T, 0,       SFF, AC2(9, 2), NC // \*
 	#else
	, K_V | K_K | K_T, 0,       SFF, KC_BSLS, NC // \*
	#endif
	, K_D | K_B | K_P, 0,       SFN, KC_MINS, NC // _
	#ifdef USE_ALTCODE
	, K_D | K_P | K_N, 0,       SFF, AC3(1, 2, 6), NC // ~
	#else
	, K_D | K_P | K_N, 0,       CMD, LSW, SFN, KC_GRV, CMD, LSW, NC // ~
	#endif
	#ifdef USE_ALTCODE
	, K_D | K_B | K_N, 0,       SFF, AC2(9, 6), NC // `
	#else
	, K_D | K_B | K_N, 0,       CMD, LSW, SFF, KC_GRV, CMD, LSW, NC // `
	#endif
	#ifdef USE_ALTCODE
	, K_S | K_V | K_K, 0,       SFF, AC2(3, 8), NC // &
 	#else
	, K_S | K_V | K_K, 0,       CMD, LSW, SFN, KC_7, CMD, LSW, NC // &
	#endif
	, 0, 0 // end
};

const uint8_t PROGMEM dict_l_ru_th[] = { // two hands
	#ifdef KOLOBOK_LEVEL_1
	  K_S | K_T, 0      , RU_S, RU_T, NC // ст
	, K_P | K_N, 0      , RU_P, RU_R, NC // пр
	, K_V | K_K | K_B, 0, RU_K, RU_A, RU_K, NC // как
	, K_V | K_B | K_N, 0, RU_O, RU_N, NC // он
	, K_V | K_T | K_D, 0, RU_X, RU_T, NC // чт
	, K_D | K_B | K_P | K_N, 0        , RU_B, RU_Y, RU_L, NC // был
	, K_V | K_K | K_T, 0, RU_EE, RU_T, NC // эт
	, K_S | K_V, 0          , RU_V, RU_S, NC // вс
	, K_S | K_V | K_K, 0    , RU_S, RU_L, NC // сл
	, K_S | K_K, 0      , RU_S, RU_K, NC // ск
	, K_V | K_K | K_T | K_B, 0, RU_T, RU_A, RU_K, NC // так
	, K_K | K_T | K_B | K_N, 0, RU_K, RU_O, RU_T, RU_O, RU_R, NC // котор
	, K_K | K_B | K_N, 0,       RU_K, RU_R, NC // кр
	, K_T | K_B | K_N, 0,       RU_T, RU_R, NC // тр
	, K_D | K_N, 0,             RU_D, RU_N, NC // дн
	, K_S | K_V | K_T, 0,       RU_S, RU_T, RU_V, NC // ств
	, K_V | K_P | K_N, 0,       RU_Z, RU_N, NC // зн
	, K_S | K_V | K_K | K_T, 0, RU_S, RU_T, RU_R, NC // стр
	, K_V | K_K | K_P, 0,       RU_I, RU_Z, NC // из
	, K_K | K_D | K_N, 0,       RU_G, RU_D, NC // гд
	, K_V | K_N, 0,             RU_V, RU_N, NC // вн
	, K_B | K_P | K_N, 0,       RU_B, RU_R, NC // бр
	, K_D | K_B | K_N, 0,       RU_D, RU_R, NC // др
	, K_K | K_P, 0,             RU_G, RU_R, NC // гр
	, K_T | K_D | K_N, 0,       RU_ZH, RU_N, NC // жн
	, K_K | K_T | K_N, 0,       RU_M, RU_N, NC // мн
	, K_K | K_B | K_P | K_N, 0, RU_G, RU_L, NC // гл
	, K_D | K_B, 0,             RU_D, RU_V, NC // дв
	, K_V | K_D | K_N, 0,       RU_X, RU_N, NC // чн
	, K_V | K_B, 0,             RU_O, RU_B, NC // об
	, K_V | K_T | K_B | K_N, 0, RU_V, RU_R, NC // вр
	, K_S | K_K | K_T, 0,       RU_S, RU_M, NC // см
	, K_K | K_T | K_P, 0,       RU_K, RU_T, NC // кт
	, K_T | K_D | K_B | K_P, 0, KC_MINS, RU_T, NC // -т
	, K_V | K_B | K_P, 0,       RU_V, RU_L, NC // вл
	, K_T | K_N, 0,             RU_T, RU_N, NC // тн
	, K_D | K_B | K_P, 0,       RU_D, RU_L, NC // дл
	, K_K | K_B | K_P, 0,       RU_K, RU_L, NC // кл
	,
	#endif
	#ifdef KOLOBOK_LEVEL_2
	  K_S | K_P | K_N, 0,       RU_S, RU_P, RU_R, NC // спр
	, K_S | K_K | K_N, 0,       RU_S, RU_X, NC // сч
	, K_V | K_D | K_P, 0,       RU_Z, RU_D, NC // зд
	, K_V | K_K, 0,             RU_S, RU_V, NC // св
	, K_V | K_T | K_B | K_P, 0, RU_S, RU_K, RU_A, RU_Z, NC // сказ
	, K_V | K_K | K_B | K_N, 0, RU_G, RU_O, RU_V, RU_O, RU_R, NC // говор
	, K_V | K_T | K_N, 0,       RU_R, RU_A, RU_Z, NC // раз
	, K_S | K_T | K_N, 0,       RU_V, RU_S, RU_T, NC // вст
	, K_D | K_P | K_N, 0,       RU_D, RU_E, RU_L, NC // дел
	, K_V | K_D | K_B, 0,       RU_B, RU_U, RU_D, NC // буд
	, K_S | K_V | K_P, 0,       RU_S, RU_N, NC // сн
	, K_T | K_P | K_N, 0,       RU_P, RU_E, RU_R, NC // пер
	, K_S | K_V | K_N, 0,       RU_V, RU_W, NC // вш
	, K_V | K_T, 0,             RU_V, RU_I, RU_D, NC // вид
	, K_S | K_D, 0,             RU_S, RU_R, NC // ср
	, K_V | K_T | K_B, 0,       RU_K, RU_A, RU_Z, NC // каз
	, K_S | K_V | K_K, 0,       RU_S, RU_A, RU_M, NC // сам
    , K_D | K_P, 0,             RU_P, RU_L, NC // пл
    , K_T | K_D | K_B, 0,       RU_ZH, RU_D, NC // жд
    , K_S | K_K | K_P, 0,       RU_S, RU_P, NC // сп
    , K_V | K_K | K_D | K_N, 0, RU_O, RU_D, RU_N, NC // одн
    , K_V | K_K | K_T | K_N, 0, RU_S, RU_K, RU_O, RU_L, RU_MZ, RU_K, NC // скольк
    , K_T | K_B | K_P | K_N, 0, RU_H, RU_O, RU_R, RU_O, RU_W, NC // хорош
    , K_K | K_T | K_B, 0,       RU_B, RU_L, NC // бл
    , K_K | K_P | K_N, 0,       RU_K, RU_N, NC // кн
    , K_V | K_K | K_D, 0,       RU_X, RU_K, NC // чк
    , K_S | K_V | K_T | K_N, 0, RU_V, RU_S, RU_T, RU_V, NC // вств
    , K_S | K_V | K_K | K_T | K_N, 0, RU_V, RU_S, RU_T, RU_R, NC // встр
    , K_V | K_K | K_N, 0,       RU_B, RU_N, NC // бн
    , K_V | K_T | K_P, 0,       RU_S, RU_K, RU_R, NC // скр
    , K_V | K_K | K_T | K_P, 0, RU_S, RU_K, RU_L, NC // скл
    , K_T | K_D | K_P, 0,       RU_S, RU_H, NC // сх
    ,	
	#endif
	
	#ifdef UTYUMOV
	  K_S | K_D | K_P | K_N, 0,       RU_S, RU_D, RU_E, RU_L, NC // сдел
    , K_B, K_8,                       RU_O, RU_B, RU_TZ, RU_E, RU_K, RU_T, NC // объект	
	,
	#endif

	 0, 0 // end
};

const uint8_t PROGMEM dict_l_en_oh[] = { // one hand
	  K_S | K_T, 0, KC_O, NC
	, K_D | K_N, 0, KC_E, NC
	, K_V | K_T, 0, KC_A, NC
	, K_P | K_N, 0, KC_I, NC
	, K_S | K_K, 0, KC_U, NC
	, K_V | K_K, 0, KC_Q, NC
	, K_D | K_B, 0, KC_Y, NC

	, K_B | K_P | K_N, 0,       KC_SPC, NC
	#ifdef USE_ALTCODE
	, K_K | K_T | K_N, 0,       SFF, AC2(4, 6), NC // .
	#else
	, K_K | K_T | K_N, 0,       SFF, KC_DOT, NC // .
 	#endif
	, K_V | K_B, 0,             SFN, KC_9, NC // (
	, K_K | K_P, 0,             SFN, KC_0, NC // )
	, K_T | K_P | K_N, 0,       SFF, KC_EQL, NC // =
	#ifdef USE_ALTCODE
	, K_K | K_P | K_N, 0,       SFF, AC2(4, 4), NC // ,
	#else
	, K_K | K_P | K_N, 0,       SFF, KC_COMM, NC // ,
	#endif
	, K_V | K_K | K_B | K_P, 0, SFN, KC_9, KC_0, NC // ()
	, K_K | K_T | K_P, 0,       SFN, KC_EQL, NC // +
	#ifdef USE_ALTCODE
	, K_T | K_D | K_N, 0,       SFF, AC2(3, 4), NC // "
 	#else
	, K_T | K_D | K_N, 0,       SFN, KC_QUOT, NC // "
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_B | K_N, 0,       SFF, AC2(5, 9), NC // ;
	#else
	, K_K | K_B | K_N, 0,       SFF, KC_SCLN, NC // ;
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_T | K_P | K_N, 0, SFF, AC2(5, 8), NC // :
	#else
	, K_K | K_T | K_P | K_N, 0, SFN, KC_SCLN, NC // :
	#endif
	#ifdef USE_ALTCODE
	, K_V | K_K | K_T, 0,       SFF, AC2(4, 7), NC // /
 	#else
	, K_V | K_K | K_T, 0,       SFF, KC_SLSH, NC // /
	#endif
	, K_D | K_B | K_P, 0,       SFF, KC_MINS, NC // -
	#ifdef USE_ALTCODE
    , K_D | K_P | K_N, 0,       SFF, AC2(3, 7), NC // %
	#else
    , K_D | K_P | K_N, 0,       SFN, KC_5, NC // %
	#endif
	, K_D | K_B | K_N, 0,       SFN, KC_8, NC // *
	#ifdef USE_ALTCODE
	, K_S | K_V | K_K, 0,       SFF, AC3(1, 2, 4), NC // |
 	#else
	, K_S | K_V | K_K, 0,       SFN, KC_BSLS, NC // |
	#endif


	, 0, 0 // end
};

const uint8_t PROGMEM dict_l_en_oh_sft[] = { // one hand
	  K_K | K_T | K_N, 0,       SFN, KC_1, NC // !
	#ifdef USE_ALTCODE
	, K_V | K_B, 0,             SFF, AC2(6, 0), NC // <
	#else
	, K_V | K_B, 0,             SFN, KC_COMM, NC // <
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_P, 0,             SFF, AC2(6, 2), NC // >
	#else
	, K_K | K_P, 0,             SFN, KC_DOT, NC // >
	#endif
	#ifdef USE_ALTCODE
	, K_T | K_P | K_N, 0,       SFF, AC2(3, 6), NC // $
	#else
	, K_T | K_P | K_N, 0,       SFN, KC_4, NC // $
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_P | K_N, 0,       SFF, AC2(6, 3), NC // ?
	#else
	, K_K | K_P | K_N, 0,       SFN, KC_SLSH, NC // ?
	#endif
	#ifdef USE_ALTCODE
	, K_V | K_K | K_B | K_P, 0, SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	#else
	, K_V | K_K | K_B | K_P, 0, SFN, KC_COMM, KC_DOT, NC // <>
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_T | K_P, 0,       SFF, AC2(9, 4), NC // ^
	#else
	, K_K | K_T | K_P, 0,       SFN, KC_6, NC // ^
	#endif
	#ifdef USE_ALTCODE
	, K_T | K_D | K_N, 0,       SFF, AC2(3, 9), NC // '
 	#else
	, K_T | K_D | K_N, 0,       SFF, KC_QUOT, NC // '
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_B | K_N, 0,       SFF, AC2(6, 4), NC // @
	#else
	, K_K | K_B | K_N, 0,       SFN, KC_2, NC // @
	#endif
	#ifdef USE_ALTCODE
	, K_K | K_T | K_P | K_N, 0, SFF, AC2(3, 5), NC // #
	#else
	, K_K | K_T | K_P | K_N, 0, SFN, KC_3, NC // #
	#endif
	#ifdef USE_ALTCODE
	, K_V | K_K | K_T, 0,       SFF, AC2(9, 2), NC // \*
 	#else
	, K_V | K_K | K_T, 0,       SFF, KC_BSLS, NC // \*
	#endif
	, K_D | K_B | K_P, 0,       SFN, KC_MINS, NC // _
	#ifdef USE_ALTCODE
	, K_D | K_P | K_N, 0,       SFF, AC3(1, 2, 6), NC // ~
	#else
	, K_D | K_P | K_N, 0,       SFN, KC_GRV, NC // ~
	#endif
	#ifdef USE_ALTCODE
	, K_D | K_B | K_N, 0,       SFF, AC2(9, 6), NC // `
	#else
	, K_D | K_B | K_N, 0,       SFF, KC_GRV, NC // `
	#endif
	#ifdef USE_ALTCODE
	, K_S | K_V | K_K, 0,       SFF, AC2(3, 8), NC // &
 	#else
	, K_S | K_V | K_K, 0,       SFN, KC_7, NC // &
	#endif

	, 0, 0 // end
};
	
const uint8_t PROGMEM dict_l_cmd[] = {
	
	  K_S, 0,      CLN, KC_HOME, NC
	, K_V, 0,      KC_UP, NC
	, K_K, 0,      KC_DOWN, NC
	, K_T, 0,      CLN, KC_END, NC
	, K_D, 0,      KC_HOME, NC
	, K_B, 0,      KC_LEFT, NC
	, K_P, 0,      KC_RIGHT, NC
	, K_N, 0,      KC_END, NC
	
	, K_S | K_V, 0,   KC_PGUP, NC
	, K_K | K_T, 0,   KC_PGDN, NC
	, K_D | K_B, 0,   CLN, KC_LEFT, NC
	, K_P | K_N, 0,   CLN, KC_RIGHT, NC
	
	, K_V | K_K, 0,   KC_APP, NC
	
	, 0, K_BSPC,      KC_TAB, NC
	, 0, K_ENT,       ALN, KC_TAB, CMD, ALH, NC
	, 0, K_DEL,       CLN, KC_TAB, NC
	
	, 0, K_1,      CLN, KC_Z, NC
	, 0, K_2,      CLN, KC_X, NC
	, 0, K_4,      CLN, KC_C, NC
	, 0, K_8,      CLN, KC_V, NC
	
	, K_D, K_1,       CLN, KC_A, NC
	, K_B, K_2,       CLN, KC_S, NC
	, K_P, K_4,       KC_PSCR, NC
	, K_N, K_8,       CLN, KC_F, NC

	, K_K | K_N, 0,   CMD, MTS, NC
	
	, K_D | K_N, 0,   CMD, LSW, CMD, PHF, NC
	, K_S | K_T, 0,   CMD, LSW, CMD, PHN, NC
	
	
	#ifdef UTYUMOV

	, K_D | K_P, 0,   CLN, KC_LBRC, NC // Ctl {
	, K_B | K_N, 0,   CLN, KC_RBRC, NC // Ctl }
	
	, 0, K_1 | K_2,   CLN, KC_PAUS, NC
	, K_B | K_P | K_N, 0, SFF, CLN, KC_SPC, NC
	, K_V | K_K | K_T | K_P, 0, CLN, KC_PSLS, NC // /
	
	, K_S | K_D, 0,   KC_F2, NC
	, K_V | K_B, 0,   KC_F3, NC
	, K_K | K_P, 0,   KC_F4, NC
	, K_T | K_N, 0,   KC_F5, NC
	, K_K | K_T | K_P | K_N, 0, KC_F9, NC
	
	, K_B | K_P, 0,   KC_F12, NC

	, K_B | K_P | K_N, 0, SFF, CLN, KC_SPC, NC
	
	, K_V | K_K | K_T, 0, CLN, ALN, KC_PAUS, NC

	, K_K | K_B | K_N, 0, CLN, ALN, KC_P, NC
	, K_V | K_T | K_P, 0, CLN, KC_F7, NC

	#else
		
	, K_S | K_D, 0,   KC_F1, NC
	, K_V | K_B, 0,   KC_F2, NC
	, K_S | K_D | K_V | K_B, 0,   KC_F3, NC
	, K_K | K_P, 0,   KC_F4, NC
	, K_S | K_D | K_K | K_P, 0,   KC_F5, NC
	, K_V | K_B | K_K | K_P, 0,   KC_F6, NC
	, K_S | K_D | K_V | K_B | K_K | K_P, 0,   KC_F7, NC
	, K_T | K_N, 0,   KC_F8, NC
	, K_S | K_D | K_T | K_N, 0,   KC_F9, NC
	, K_V | K_B | K_T | K_N, 0,   KC_F10, NC
	, K_S | K_D | K_V | K_B | K_T | K_N, 0,   KC_F11, NC
	, K_K | K_P | K_T | K_N, 0,   KC_F12, NC
	, K_S | K_D | K_K | K_P | K_T | K_N, 0,   KC_F13, NC
	, K_V | K_B | K_K | K_P | K_T | K_N, 0,   KC_F14, NC
	, K_S | K_D | K_V | K_B | K_K | K_P | K_T | K_N, 0,   KC_F15, NC
	
	#endif
	, K_D | K_B | K_P, 0, CMD, OHN, NC
	, 0, 0 // end
};

const uint8_t PROGMEM dict_l_cmd_sft[] = {
	#ifdef UTYUMOV
	  K_B | K_P, 0,   SFF, CLN, KC_MINS, NC
	  ,
	#endif
	  0, 0 // end
};

const uint8_t PROGMEM dict_r_cmd[] = {
      K_U | K_Q| K_MZ, 0, CMD, OHF, NC
	, 0, 0 // end
};

const uint8_t PROGMEM dict_wrd[] = {
	K_D, K_MZ                    
		, RU_D, RU_O, RU_B, RU_R, RU_Y, RU_J, KC_SPC, RU_D, RU_E, RU_N, RU_MZ, NC // 1. добрый день
	, K_D, K_U
		, RU_D, RU_O, RU_B, RU_R, RU_O, RU_E, KC_SPACE, RU_U, RU_T, RU_R, RU_O, NC // 2. доброе утро
	, K_D, K_E
		, RU_D, RU_O, RU_B, RU_R, RU_Y, RU_J, KC_SPACE, RU_V, RU_E, RU_X, RU_E, RU_R, NC // 3. добрый вечер
	, K_T | K_D | K_P, 0
		, RU_P, RU_O, RU_ZH, RU_A, RU_L, RU_U, RU_J, RU_S, RU_T, RU_A, NC // 4. пожалуйста
	#ifdef UTYUMOV
	, 0, K_O
		, RU_O, RU_B, RU_TZ, RU_E, RU_K, RU_T, NC // 5. объект
	, 0, K_U
		, CMD, LSW, KC_U, KC_T, KC_Y, KC_V, CMD, LSW, NC // 6. utyv CMD, LSW, 
	, K_T | K_P, 0
		, RU_K, RU_O, RU_N, RU_E, RU_C, NC // 7. конец
	, K_V | K_D, 0
		, RU_I, RU_N, RU_A, RU_X, RU_E, NC // 8. иначе
	, K_V | K_T | K_D | K_P, 0
		, RU_K, RU_A, RU_ZH, RU_D, RU_O, RU_G, RU_O, NC // 9. каждого
	, K_K, 0
		, RU_C, RU_I, RU_K, RU_L, NC // 10. цикл
	, K_P, 0
		, RU_P, RU_R, RU_O, RU_C, RU_E, RU_D, RU_U, RU_R, NC // 12. процедур
	, K_K | K_P, 0
		, RU_F,  RU_U, RU_N, RU_K, RU_C, RU_I, NC // 14. функци
	, 0, K_U | K_Q
	#ifdef USE_ALTCODE
		, SFF, AC2(9, 1), ALF, KC_0, AC2(9, 3), NC // [0]
 	#else
		, CMD, LSW, KC_LBRC, KC_0, KC_RBRC, CMD, LSW, NC // [0]
 	#endif
	#endif
	/*, K_S, K_I
		, RU_E, RU_S, RU_L, RU_I, NC // 5. если
	, K_T, 0
		, RU_T, RU_O, RU_G, RU_D, RU_A, NC // 7. тогда
	, K_T | K_P, 0
		, RU_C, RU_I, RU_K, RU_L, NC // 7. цикл
	, K_T | K_P, K_A
		, RU_C, RU_I, RU_K, RU_L, RU_A, NC // 8. циклa
	, K_S | K_T, 0
		, RU_S, RU_T, RU_R, RU_O, RU_K, NC // 10. строк
	, K_V | K_P, 0
		, RU_Z, RU_A, RU_P, RU_R, RU_O, RU_S, NC // 11. запрос
	, K_N, 0
		, RU_N, RU_O, RU_V, NC // 12. нов
	, K_S | K_K | K_T, 0
		, RU_T, RU_E, RU_K, RU_S, RU_T, NC // 13. текст
	, K_T | K_B | K_P | K_N, 0
		, RU_P, RU_A, RU_R, RU_A, RU_M, RU_E, RU_T, RU_R, NC // 14. параметр
	, K_S | K_V | K_T, K_MZ
		, RU_V, RU_S, RU_T, RU_A, RU_V, RU_I, RU_T, RU_MZ, NC // 15. вставить
	, K_V | K_P, K_MZ
		, RU_V, RU_Y, RU_P, RU_O, RU_L, RU_N, RU_I, RU_T, RU_MZ, NC // 16. выполнить
	, K_V | K_B, K_MZ
		, RU_V, RU_Y, RU_B, RU_R, RU_A, RU_T, RU_MZ, NC // 17. выбрать
	, K_V | K_K | K_N, K_MZ
		, RU_V, RU_Y, RU_G, RU_R, RU_U, RU_Z, RU_I, RU_T, RU_MZ, NC // 18. выгрузить
	, K_S, K_A
		, RU_I, RU_S, RU_T, RU_I, RU_N, RU_A, NC // 19. истина
	, K_B | K_P, K_MZ
		, RU_L, RU_O, RU_ZH, RU_MZ, NC // 20. ложь
	, K_K | K_N, 0
		, RU_K, RU_O, RU_L, RU_O, RU_N, RU_K, NC // 21. колонк
	, K_D | K_T, K_MZ
		, RU_D, RU_O, RU_B, RU_A, RU_V, RU_I, RU_T, RU_MZ, NC // 22. добавить
	, K_K | K_T, 0
		, RU_M, RU_A, RU_S, RU_S, RU_I, RU_V, NC // 23. массив
	, K_K | K_T | K_N, 0
		, RU_N, RU_O, RU_M, RU_E, RU_N, RU_K, RU_L, RU_A, RU_T, RU_U, RU_R, NC // 24. номенклатур
	, K_S | K_V | K_K | K_T, 0
		, RU_S, RU_T, RU_R, RU_U, RU_K, RU_T, RU_U, RU_R, NC // 25. структур
	, K_S | K_V | K_T, 0
		, RU_S, RU_O, RU_O, RU_T, RU_V, RU_E, RU_T, RU_S, RU_T, RU_V, NC // 26. соответств
	, K_T | K_B, 0
		, RU_T, RU_A, RU_B, RU_L, RU_I, RU_C, NC // 27. таблиц
	, K_S | K_D, 0
		, RU_S, RU_L, RU_E, RU_D, RU_U, RU_YU, RU_WW, NC // 28. следующ
	, K_V | K_B, 0
		, RU_V, RU_Y, RU_B, RU_O, RU_R, RU_K, NC // 29. выборк
	, K_V | K_K, 0
		, RU_K, RU_O, RU_L, RU_I, RU_X, RU_E, RU_S, RU_T, RU_V, NC // 30. количеств
	, K_S | K_N, 0
		, RU_S, RU_U, RU_M, RU_M, NC // 31. сумм
	, K_T | K_D, 0
		, RU_D, RU_O, RU_K, RU_U, RU_M, RU_E, RU_N, RU_T, NC // 32. документ
	, K_S | K_P, 0
		, RU_S, RU_P, RU_R, RU_A, RU_V, RU_O, RU_X, RU_N, RU_I, RU_K, NC // 33. справочник
	, K_S | K_K | K_T | K_N, 0
		, RU_K, RU_O, RU_N, RU_S, RU_T, RU_A, RU_N, RU_T, NC // 34. констант
	, K_K | K_B | K_P | K_N, 0
		, RU_G, RU_R, RU_U, RU_P, RU_P, NC // 35. групп
	, K_V | K_D | K_P, 0
		, RU_Z, RU_N, RU_A, RU_X, RU_E, RU_N, NC // 36. значен
	, K_V | K_B | K_P | K_N, 0
		, RU_Z, RU_A, RU_P, RU_O, RU_L, RU_N, NC // 37. заполн
	, K_S | K_K | K_T | K_P | K_N, 0
		, RU_K, RU_O, RU_N, RU_S, RU_U, RU_L, RU_MZ, RU_T, RU_A, RU_C, NC // 38. консультац
	, K_S | K_K, 0
		, RU_S, RU_S, RU_Y, RU_L, RU_K, NC // 40. ссылк
	, K_P, K_MZ
		, RU_P, RU_O, RU_L, RU_U, RU_X, RU_I, RU_T, RU_MZ, NC // 41. получить
	, K_P | K_N, 0
		, RU_N, RU_E, RU_O, RU_P, RU_R, RU_E, RU_D, RU_E, RU_L, RU_E, RU_N, RU_O, NC // 41. неопределено
	, K_T | K_N, 0
		, RU_N, RU_A, RU_J, RU_T, RU_I, NC // 44. найти
	, K_S | K_V | K_B, 0
		, RU_S, RU_V, RU_O, RU_J, RU_S, RU_T, RU_V, NC // 45. свойств
	, K_V, 0
		, RU_V, RU_O, RU_Z, RU_V, RU_R, RU_A, RU_T, NC // 46. возврат*/
	, 0, 0 // end
	
};