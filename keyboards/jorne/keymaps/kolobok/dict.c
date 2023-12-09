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
	, K_S | K_P, 0, RU_TZ, NC // ъ

	#ifdef KOLOBOK_LEVEL_1
	, K_S | K_T, 0      , RU_S, RU_T, NC // ст
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
	#endif
	
	#ifdef KOLOBOK_LEVEL_2
	, K_B | K_P, K_2 | K_4  , RU_B, RU_U, RU_D, NC // буд
	, K_S | K_D | K_N, 0,       RU_S, RU_N, NC // сн
	, K_S | K_V | K_B, 0,       RU_S, RU_V, NC // св
	, K_V | K_K | K_D | K_P, 0, RU_I, RU_S, NC // ис
	
	, K_P | K_N, K_8,           RU_P, RU_E, RU_R, NC // пер
	, K_S | K_B | K_P | K_N, 0, RU_S, RU_P, RU_R, NC // спр
	, K_S | K_B | K_N, 0,       RU_S, RU_R, NC // ср
	, K_S | K_T | K_N, 0,       RU_S, RU_T, RU_N, NC // стн
	, K_S | K_V | K_D, 0,       RU_S, RU_X, NC // сч
	, K_S | K_V | K_N, 0,       RU_V, RU_W, NC // вш
	, K_V | K_T, 0,             RU_T, RU_V, NC // тв
	, K_V | K_K | K_D, 0,       RU_X, RU_K, NC // чк
	, K_S | K_K | K_N, 0,       RU_W, RU_K, NC // шк
	, K_P | K_N, K_4,           RU_P, RU_L, NC // пл
	#endif
	
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

	, 0, K_8,       SFG, SFN, KC_1, NC // !
	#ifdef USE_ALTCODE
	, 0, K_8,       SFF, AC2(4, 6), NC // .
	#else
	, 0, K_8,       SFF, RU_DOT, NC // .
	#endif
	#ifdef USE_ALTCODE
	, 0, K_4,             SFG, SFF, AC2(6, 0), NC // <
	#else
	, 0, K_4,             SFG, LSW, SFN, KC_COMM, LSW, NC // <
	#endif
	, 0, K_4,             SFN, KC_9, NC // (
	#ifdef USE_ALTCODE
	, 0, K_2,             SFG, SFF, AC2(6, 2), NC // >
	#else
	, 0, K_2,             SFG, LSW, SFN, KC_DOT, LSW, NC // >
	#endif
	, 0, K_2,             SFN, KC_0, NC // )
	#ifdef USE_ALTCODE
	, 0, K_1,               SFG, SFF, AC2(3, 6), NC // $
	#else
	, 0, K_1,               SFG, LSW, SFN, KC_4, LSW, NC // $
	#endif
	, 0, K_1, 	            KC_EQL, NC // =
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4,       SFG, SFF, AC2(6, 3), NC // ?
	#else
	, 0, K_8 | K_4,       SFG, SFN, KC_7, NC // ?
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4,       SFF, AC2(4, 4), NC // ,
	#else
	, 0, K_8 | K_4,       SFN, RU_DOT, NC // ,
	#endif
	#ifdef USE_ALTCODE
	, 0, K_2 | K_4, SFG, SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	#else
	, 0, K_2 | K_4, SFG, LSW, SFN, KC_COMM, KC_DOT, LSW, NC // <>
	#endif
	, 0, K_2 | K_4, SFN, KC_9, KC_0, NC // ()
	#ifdef USE_ALTCODE
	, 0, K_1 | K_2,               SFG, SFF, AC2(9, 4), NC // ^
	#else
	, 0, K_1 | K_2,               SFG, LSW, SFN, KC_6, LSW, NC // ^
	#endif
	, 0, K_1 | K_2,         SFN, KC_EQL, NC // +
	#ifdef USE_ALTCODE
	, 0, K_8 | K_1,       SFG, SFF, AC2(3, 9), NC // '
 	#else
	, 0, K_8 | K_1,       SFG, LSW, KC_QUOT, LSW, NC // '
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_1,       SFF, AC2(3, 4), NC // "
 	#else
	, 0, K_8 | K_1,       SFN, KC_2, NC // "
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2,       SFG, SFF, AC2(6, 4), NC // @
	#else
	, 0, K_8 | K_2,       SFG, LSW, SFN, KC_2, LSW, NC // @
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2,       SFF, AC2(5, 9), NC // ;
	#else
	, 0, K_8 | K_2,       SFN, KC_4, NC // ;
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_4, SFG, SFF, AC2(3, 5), NC // #
	#else
	, 0, K_1 | K_4, SFG, LSW, SFN, KC_3, LSW, NC // #
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_4, SFF, AC2(5, 8), NC // :
	#else
	, 0, K_1 | K_4, SFN, KC_6, NC // :
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2,       SFG, SFF, AC2(9, 2), NC // \*
 	#else
	, 0, K_8 | K_4 | K_2,       SFG, SFF, KC_BSLS, NC // \*
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2,       SFF, AC2(4, 7), NC // /
 	#else
	, 0, K_8 | K_4 | K_2,       SFN, KC_BSLS, NC // /
	#endif
	, 0, K_1 | K_2 | K_4,       SFG, SFN, KC_MINS, NC // _
	, 0, K_1 | K_2 | K_4,       SFF, KC_MINS, NC // -
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_1,               SFG, SFF, AC3(1, 2, 6), NC // ~
	#else
	, 0, K_8 | K_4 | K_1,               SFG, LSW, SFN, KC_GRV, LSW, NC // ~
	#endif
	#ifdef USE_ALTCODE
    , 0, K_8 | K_4 | K_1,               SFF, AC2(3, 7), NC // %
	#else
    , 0, K_8 | K_4 | K_1,               SFN, KC_5, NC // %
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2 | K_1,               SFG, SFF, AC2(9, 6), NC // `
	#else
	, 0, K_8 | K_2 | K_1,               SFG, LSW, SFF, KC_GRV, LSW, NC // `
	#endif
    , 0, K_8 | K_2 | K_1,               SFN, KC_8, NC // *
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2 | K_1,       SFG, SFF, AC2(3, 8), NC // &
 	#else
	, 0, K_8 | K_4 | K_2 | K_1,       SFG, LSW, SFN, KC_7, LSW, NC // &
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2 | K_1,       SFF, AC3(1, 2, 4), NC // |
 	#else
	, 0, K_8 | K_4 | K_2 | K_1,       LSW, SFN, KC_BSLS, LSW, NC // |
	#endif

	, K_E | K_Q, 0, RU_YU, NC // ю
	, K_O | K_Q, 0, RU_EE, NC // э
	//, K_O | K_MZ, 0, RU_TZ, NC // ъ
	, K_E | K_I | K_U, 0, RU_YO, NC // ё
	
	, K_E | K_A, 0, RU_E, RU_J, NC // ей
	, K_O | K_I, 0, RU_O, RU_J, NC // ой
	, K_A | K_Y, 0, RU_A, RU_J, NC // ай
	, K_I | K_U, 0, RU_I, RU_J, NC // ий
	, K_Y | K_Q, 0,             RU_Y, RU_J, NC // ый
	, K_U | K_MZ, 0,                  RU_U, RU_J, NC // уй
	, K_O | K_Q | K_MZ, 0,          RU_Q, RU_J, NC // яй
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
	, K_I | K_Y | K_MZ, 0,      RU_I, RU_N, NC // ин
	, K_I | K_Q | K_MZ, 0,      RU_I, RU_H, NC // их
	, K_A | K_U | K_Q | K_MZ, 0, RU_A, RU_S, NC // ас
	, K_A | K_Y | K_U | K_Q | K_MZ, 0,  RU_A, RU_Z, NC // аз
	, K_E | K_A | K_I | K_Y, 0,       RU_E, RU_M, RU_U, NC // ему
	, K_A | K_I | K_U | K_MZ, 0,      RU_A, RU_M, RU_I, NC // ами
	, K_A | K_I | K_MZ, 0,            RU_A, RU_L, RU_MZ, NC // аль
	, K_I | K_U | K_Q | K_MZ, 0,      RU_I, RU_L, RU_A, NC // ила
	, K_O | K_I | K_Y | K_U, 0,       RU_O, RU_M, RU_U, NC // ому

	, K_E | K_A | K_I, 0,       RU_E, RU_L, RU_I, NC // ели
	, K_E | K_O | K_A | K_Y, 0, RU_E, RU_S, NC // ес
	, K_E | K_O | K_A | K_I | K_Y, 0, RU_E, RU_Z, NC // ез
	, K_O | K_I | K_U, 0,             RU_O, RU_Q, NC // оя
	, K_A | K_I | K_Y, 0,             RU_A, RU_E, NC // ае
	, K_I | K_U | K_MZ, 0,            RU_I, RU_Q, NC // ия
	, K_A | K_I | K_Q, 0,             RU_A, RU_R, NC // ар
	, K_E | K_I | K_Q, 0,             RU_I, RU_I, NC // ии
	, K_I | K_Y | K_Q, 0,             RU_I, RU_T, NC // ит
	
	#endif

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
	
	#ifdef USE_ALTCODE
    , 0, L_8,             SFG, SFF, AC3(1, 2, 5), NC // }
 	#else
    , 0, L_8,             SFG, SFN, KC_RBRC, NC // }
  	#endif
	, 0, L_8,               KC_8, NC
	#ifdef USE_ALTCODE
	, 0, L_4,             SFG, SFF, AC2(9, 3), NC // ]
 	#else
 	, 0, L_4,             SFG, SFF, KC_RBRC, NC // ]
 	#endif
	, 0, L_4,               KC_4, NC
	#ifdef USE_ALTCODE
	, 0, L_2,             SFG, SFF, AC2(9, 1), NC // [
 	#else
	, 0, L_2,             SFG, SFF, KC_LBRC, NC // [
  	#endif
	, 0, L_2,               KC_2, NC
	#ifdef USE_ALTCODE
	, 0, L_1,             SFG, SFF, AC3(1, 2, 3), NC // {
 	#else
	, 0, L_1,             SFG, SFN, KC_LBRC, NC // {
  	#endif
	, 0, L_1, 	            KC_1, NC
	#ifdef USE_ALTCODE
	, 0, L_8 | L_4,         SFF, AC2(4, 6), NC // .
 	#else
	, 0, L_8 | L_4,         SFF, KC_DOT, NC // .
  	#endif
	#ifdef USE_ALTCODE
	, 0, L_2 | L_4,         SFG, SFF, AC2(9, 1), ALF, AC2(9, 3), NC // []
 	#else
	, 0, L_2 | L_4,         SFG, SFF, KC_LBRC, KC_RBRC, NC // []
 	#endif
	, 0, L_2 | L_4,         KC_6, NC
	, 0, L_1 | L_2,         SFF, KC_3, NC
	#ifdef USE_ALTCODE
	, 0, L_8 | L_1,         SFG, SFF, AC3(1, 2, 3), ALF, AC3(1, 2, 5), NC // {}
 	#else
	, 0, L_8 | L_1,         SFG, SFN, KC_LBRC, KC_RBRC, NC // {}
 	#endif
	, 0, L_8 | L_1,         KC_9, NC
	, 0, L_8 | L_2,         SFF, KC_0, NC
	, 0, L_1 | L_4,         SFF, KC_5, NC
	#ifdef USE_ALTCODE
	, 0, L_8 | L_4 | L_2,   SFF, AC2(4, 4), NC // ,
	#else
	, 0, L_8 | L_4 | L_2,   SFF, KC_COMM, NC // ,
	#endif
	, 0, L_1 | L_2 | L_4,   SFF, KC_7, NC
	#ifdef USE_ALTCODE
	, 0, L_1 | L_4 | L_8,   SFF, AC3(2, 5, 2), NC // №
	#else
	, 0, L_1 | L_4 | L_8,   LSW, SFN, KC_3, LSW, NC // №
	#endif
	, 0, L_8 | L_4 | L_2 | L_1, SFF, KC_MINS, NC // -
	
	, L_S | L_T, 0, KC_O, NC
	, L_D | L_N, 0, KC_E, NC
	, L_V | L_T, 0, KC_A, NC
	, L_P | L_N, 0, KC_I, NC
	, L_S | L_K, 0, KC_U, NC
	, L_V | L_K, 0, KC_Q, NC
	, L_D | L_B, 0, KC_Y, NC

	, L_B | L_P | L_N, 0,       KC_SPC, NC
	, L_K | L_T | L_N, 0,       SFG, SFN, KC_1, NC // !
	#ifdef USE_ALTCODE
	, L_K | L_T | L_N, 0,       SFF, AC2(4, 6), NC // .
	#else
	, L_K | L_T | L_N, 0,         SFF, KC_DOT, NC // .
 	#endif
	#ifdef USE_ALTCODE
	, L_V | L_B, 0,             SFG, SFF, AC2(6, 0), NC // <
	#else
	, L_V | L_B, 0,             SFG, SFN, KC_COMM, NC // <
	#endif
	, L_V | L_B, 0,             SFN, KC_9, NC // (
	#ifdef USE_ALTCODE
	, L_K | L_P, 0,             SFG, SFF, AC2(6, 2), NC // >
	#else
	, L_K | L_P, 0,             SFG, SFN, KC_DOT, NC // >
	#endif
	, L_K | L_P, 0,             SFN, KC_0, NC // )
	#ifdef USE_ALTCODE
	, L_T | L_P | L_N, 0,               SFG, SFF, AC2(3, 6), NC // $
	#else
	, L_T | L_P | L_N, 0,               SFG, SFN, KC_4, NC // $
	#endif
	, L_T | L_P | L_N, 0,       SFF, KC_EQL, NC // =
	#ifdef USE_ALTCODE
	, L_K | L_P | L_N, 0,       SFG, SFF, AC2(6, 3), NC // ?
	#else
	, L_K | L_P | L_N, 0,       SFG, SFN, KC_SLSH, NC // ?
	#endif
	#ifdef USE_ALTCODE
	, L_K | L_P | L_N, 0,       SFF, AC2(4, 4), NC // ,
	#else
	, L_K | L_P | L_N, 0,       KC_COMM, NC // ,
	#endif
	#ifdef USE_ALTCODE
	, L_V | L_K | L_B | L_P, 0, SFG, SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	#else
	, L_V | L_K | L_B | L_P, 0, SFG, SFN, KC_COMM, KC_DOT, NC // <>
	#endif
	, L_V | L_K | L_B | L_P, 0, SFN, KC_9, KC_0, NC // ()
	#ifdef USE_ALTCODE
	, L_K | L_T | L_P, 0,               SFG, SFF, AC2(9, 4), NC // ^
	#else
	, L_K | L_T | L_P, 0,               SFG, SFN, KC_6, NC // ^
	#endif
	, L_K | L_T | L_P, 0,       SFN, KC_EQL, NC // +
	#ifdef USE_ALTCODE
	, L_T | L_D | L_N, 0,       SFG, SFF, AC2(3, 9), NC // '
 	#else
	, L_T | L_D | L_N, 0,       SFG, KC_QUOT, NC // '
	#endif
	#ifdef USE_ALTCODE
	, L_T | L_D | L_N, 0,       SFF, AC2(3, 4), NC // "
 	#else
	, L_T | L_D | L_N, 0,       SFN, KC_QUOT, NC // "
	#endif
	#ifdef USE_ALTCODE
	, L_K | L_B | L_N, 0,       SFG, SFF, AC2(6, 4), NC // @
	#else
	, L_K | L_B | L_N, 0,       SFG, SFN, KC_2, NC // @
	#endif
	#ifdef USE_ALTCODE
	, L_K | L_B | L_N, 0,       SFF, AC2(5, 9), NC // ;
	#else
	, L_K | L_B | L_N, 0,       KC_SCLN, NC // ;
	#endif
	#ifdef USE_ALTCODE
	, L_K | L_T | L_P | L_N, 0, SFG, SFF, AC2(3, 5), NC // #
	#else
	, L_K | L_T | L_P | L_N, 0, SFG, SFN, KC_3, NC // #
	#endif
	#ifdef USE_ALTCODE
	, L_K | L_T | L_P | L_N, 0, SFF, AC2(5, 8), NC // :
	#else
	, L_K | L_T | L_P | L_N, 0, SFN, KC_SCLN, NC // :
	#endif
	#ifdef USE_ALTCODE
	, L_V | L_K | L_T, 0,       SFG, SFF, AC2(9, 2), NC // \*
 	#else
	, L_V | L_K | L_T, 0,       SFG, SFF, KC_BSLS, NC // \*
	#endif
	#ifdef USE_ALTCODE
	, L_V | L_K | L_T, 0,       SFF, AC2(4, 7), NC // /
 	#else
	, L_V | L_K | L_T, 0,       SFF, KC_SLSH, NC // /
	#endif
	, L_D | L_B | L_P, 0,       KC_MINS, NC
	#ifdef USE_ALTCODE
	, L_D | L_P | L_N, 0,               SFG, SFF, AC3(1, 2, 6), NC // ~
	#else
	, L_D | L_P | L_N, 0,               SFG, SFN, KC_GRV, NC // ~
	#endif
	#ifdef USE_ALTCODE
    , L_D | L_P | L_N, 0,               SFF, AC2(3, 7), NC // %
	#else
    , L_D | L_P | L_N, 0,               SFN, KC_5, NC // %
	#endif
	#ifdef USE_ALTCODE
	, L_D | L_B | L_N, 0,               SFG, SFF, AC2(9, 6), NC // `
	#else
	, L_D | L_B | L_N, 0,               SFG, SFF, KC_GRV, NC // `
	#endif
	, L_D | L_B | L_N, 0,       SFN, KC_8, NC // *
	#ifdef USE_ALTCODE
	, L_S | L_V | L_K, 0,       SFG, SFF, AC2(3, 8), NC // &
 	#else
	, L_S | L_V | L_K, 0,       SFG, SFN, KC_7, NC // &
	#endif
	#ifdef USE_ALTCODE
	, L_S | L_V | L_K, 0,       SFF, AC3(1, 2, 4), NC // |
 	#else
	, L_S | L_V | L_K, 0,       SFN, KC_BSLS, NC // |
	#endif

	
	, 0, L_BSPC,            KC_BSPC, NC
	, 0, L_ENT,             KC_ENT, NC
	, 0, L_DEL,             KC_DEL, NC
	, L_T, L_BSPC,          CLN, KC_BSPC, NC
	, L_N, L_ENT,           CLN, KC_ENT, NC
	, 0, L_8 | L_DEL,       CLN, KC_DEL, NC
	, 0, L_ENT | L_DEL,     KC_ESC, NC

	#ifdef UTYUMOV
	
	#ifdef USE_ALTCODE
	, L_V | L_K | L_T | L_N, 0, SFF, AC2(4, 7), ALF, AC2(4, 7), NC // //
 	#else
	, L_V | L_K | L_T | L_N, 0, SFF, KC_SLSH, KC_SLSH, NC // //
	#endif
	
	#endif

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

	, 0, K_8,       SFG, SFN, KC_1, NC // !
	#ifdef USE_ALTCODE
	, 0, K_8,       SFF, AC2(4, 6), NC // .
	#else
	, 0, K_8,       SFF, KC_DOT, NC // .
	#endif
	#ifdef USE_ALTCODE
	, 0, K_4,             SFG, SFF, AC2(6, 0), NC // <
	#else
	, 0, K_4,             SFG, SFN, KC_COMM, NC // <
	#endif
	, 0, K_4,             SFN, KC_9, NC // (
	#ifdef USE_ALTCODE
	, 0, K_2,             SFG, SFF, AC2(6, 2), NC // >
	#else
	, 0, K_2,             SFG, SFN, KC_DOT, NC // >
	#endif
	, 0, K_2,             SFN, KC_0, NC // )
	#ifdef USE_ALTCODE
	, 0, K_1,               SFG, SFF, AC2(3, 6), NC // $
	#else
	, 0, K_1,               SFG, SFN, KC_4, NC // $
	#endif
	, 0, K_1, 	            KC_EQL, NC // =
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4,       SFG, SFF, AC2(6, 3), NC // ?
	#else
	, 0, K_8 | K_4,       SFG, SFN, KC_SLSH, NC // ?
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4,       SFF, AC2(4, 4), NC // ,
	#else
	, 0, K_8 | K_4,       KC_COMM, NC // ,
	#endif
	#ifdef USE_ALTCODE
	, 0, K_2 | K_4, SFG, SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	#else
	, 0, K_2 | K_4, SFG, SFN, KC_COMM, KC_DOT, NC // <>
	#endif
	, 0, K_2 | K_4, SFN, KC_9, KC_0, NC // ()
	#ifdef USE_ALTCODE
	, 0, K_1 | K_2,               SFG, SFF, AC2(9, 4), NC // ^
	#else
	, 0, K_1 | K_2,               SFG, SFN, KC_6, NC // ^
	#endif
	, 0, K_1 | K_2,         SFN, KC_EQL, NC // +
	#ifdef USE_ALTCODE
	, 0, K_8 | K_1,       SFG, SFF, AC2(3, 9), NC // '
 	#else
	, 0, K_8 | K_1,       SFG, SFF, KC_QUOT, NC // '
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_1,       SFF, AC2(3, 4), NC // "
 	#else
	, 0, K_8 | K_1,       SFN, KC_QUOT, NC // "
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2,       SFG, SFF, AC2(6, 4), NC // @
	#else
	, 0, K_8 | K_2,       SFG, SFN, KC_2, NC // @
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2,       SFF, AC2(5, 9), NC // ;
	#else
	, 0, K_8 | K_2,       KC_SCLN, NC // ;
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_4, SFG, SFF, AC2(3, 5), NC // #
	#else
	, 0, K_1 | K_4, SFG, SFN, KC_3, NC // #
	#endif
	#ifdef USE_ALTCODE
	, 0, K_1 | K_4, SFF, AC2(5, 8), NC // :
	#else
	, 0, K_1 | K_4, SFN, KC_SCLN, NC // :
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2,       SFG, SFF, AC2(9, 2), NC // \*
 	#else
	, 0, K_8 | K_4 | K_2,       SFG, SFF, KC_BSLS, NC // \*
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2,       SFF, AC2(4, 7), NC // /
 	#else
	, 0, K_8 | K_4 | K_2,       SFF, KC_SLSH, NC // /
	#endif
	, 0, K_1 | K_2 | K_4,       SFG, SFN, KC_MINS, NC // _
	, 0, K_1 | K_2 | K_4,       SFF, KC_MINS, NC // -
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_1,               SFG, SFF, AC3(1, 2, 6), NC // ~
	#else
	, 0, K_8 | K_4 | K_1,               SFG, SFN, KC_GRV, NC // ~
	#endif
	#ifdef USE_ALTCODE
    , 0, K_8 | K_4 | K_1,               SFF, AC2(3, 7), NC // %
	#else
    , 0, K_8 | K_4 | K_1,               SFN, KC_5, NC // %
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_2 | K_1,               SFG, SFF, AC2(9, 6), NC // `
	#else
	, 0, K_8 | K_2 | K_1,               SFG, SFF, KC_GRV, NC // `
	#endif
    , 0, K_8 | K_2 | K_1,               SFN, KC_8, NC // *
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2 | K_1,       SFG, SFF, AC2(3, 8), NC // &
 	#else
	, 0, K_8 | K_4 | K_2 | K_1,       SFG, SFN, KC_7, NC // &
	#endif
	#ifdef USE_ALTCODE
	, 0, K_8 | K_4 | K_2 | K_1,       SFF, AC3(1, 2, 4), NC // |
 	#else
	, 0, K_8 | K_4 | K_2 | K_1,       SFN, KC_BSLS, NC // |
	#endif



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
	
	#ifdef USE_ALTCODE
	, 0, L_8,               SFG, SFF, AC3(1, 2, 5), NC // }
	#else
	, 0, L_8,               SFG, LSW, SFN, KC_RBRC, LSW, NC // }
	#endif
	, 0, L_8,               KC_8, NC
	#ifdef USE_ALTCODE
	, 0, L_4,               SFG, SFF, AC2(9, 3), NC // ]
	#else
	, 0, L_4,               SFG, LSW, KC_RBRC, LSW, NC // ]
	#endif
	, 0, L_4,               KC_4, NC
	#ifdef USE_ALTCODE
	, 0, L_2,               SFG, SFF, AC2(9, 1), NC // [
	#else
	, 0, L_2,               SFG, LSW, KC_LBRC, LSW, NC // [
	#endif
	, 0, L_2,               KC_2, NC
	#ifdef USE_ALTCODE
    , 0, L_1,               SFG, SFF, AC3(1, 2, 3), NC // {
	#else
    , 0, L_1,               SFG, LSW, SFN, KC_LBRC, LSW, NC // {
	#endif
	, 0, L_1, 	            KC_1, NC
	#ifdef USE_ALTCODE
	, 0, L_8 | L_4,         SFF, AC2(4, 6), NC // .
	#else
	, 0, L_8 | L_4,         SFF, RU_DOT, NC // .
	#endif
	#ifdef USE_ALTCODE
	, 0, L_2 | L_4,         SFG, SFF, AC2(9, 1), ALF, AC2(9, 3), NC // []
 	#else
	, 0, L_2 | L_4,         SFG, LSW, KC_LBRC, KC_RBRC, LSW, NC // []
 	#endif
	, 0, L_2 | L_4,         KC_6, NC
	, 0, L_1 | L_2,         SFF, KC_3, NC
	#ifdef USE_ALTCODE
	, 0, L_8 | L_1,         SFG, SFF, AC3(1, 2, 3), ALF, AC3(1, 2, 5), NC // {}
 	#else
	, 0, L_8 | L_1,         SFG, LSW, SFN, KC_LBRC, KC_RBRC, LSW, NC // {}
 	#endif
	, 0, L_8 | L_1,         KC_9, NC
	, 0, L_8 | L_2,         SFF, KC_0, NC
	, 0, L_1 | L_4,         SFF, KC_5, NC
	#ifdef USE_ALTCODE
	, 0, L_8 | L_4 | L_2,   SFF, AC2(4, 4), NC // ,
	#else
	, 0, L_8 | L_4 | L_2,   SFN, RU_DOT, NC // ,
	#endif
	, 0, L_1 | L_2 | L_4,   SFF, KC_7, NC
	#ifdef USE_ALTCODE
	, 0, L_1 | L_4 | L_8,   SFF, AC3(2, 5, 2), NC // №
	#else
	, 0, L_1 | L_4 | L_8,   SFN, KC_3, NC // №
	#endif
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
	, K_V | K_T | K_B, 0    , RU_TZ, NC // ъ
	
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
	, L_S | L_B | L_N, 0, RU_YO, NC
	
	, L_B | L_P | L_N, 0,       KC_SPC, NC
	, L_K | L_T | L_N, 0,       SFG, SFN, KC_1, NC // !
	#ifdef USE_ALTCODE
	, L_K | L_T | L_N, 0,       SFF, AC2(4, 6), NC // .
	#else
	, L_K | L_T | L_N, 0,       SFF, RU_DOT, NC // .
	#endif
	#ifdef USE_ALTCODE
	, L_V | L_B, 0,             SFG, SFF, AC2(6, 0), NC // <
	#else
	, L_V | L_B, 0,             SFG, LSW, SFN, KC_COMM, LSW, NC // <
	#endif
	, L_V | L_B, 0,             SFN, KC_9, NC // (
	#ifdef USE_ALTCODE
	, L_K | L_P, 0,             SFG, SFF, AC2(6, 2), NC // >
	#else
	, L_K | L_P, 0,             SFG, LSW, SFN, KC_DOT, LSW, NC // >
	#endif
	, L_K | L_P, 0,             SFN, KC_0, NC // )
	#ifdef USE_ALTCODE
	, L_T | L_P | L_N, 0,               SFG, SFF, AC2(3, 6), NC // $
	#else
	, L_T | L_P | L_N, 0,               SFG, LSW, SFN, KC_4, LSW, NC // $
	#endif
	, L_T | L_P | L_N, 0,       SFF, KC_EQL, NC // =
	#ifdef USE_ALTCODE
	, L_K | L_P | L_N, 0,       SFG, SFF, AC2(6, 3), NC // ?
	#else
	, L_K | L_P | L_N, 0,       SFG, SFN, KC_7, NC // ?
	#endif
	#ifdef USE_ALTCODE
	, L_K | L_P | L_N, 0,       SFF, AC2(4, 4), NC // ,
	#else
	, L_K | L_P | L_N, 0,       SFN, RU_DOT, NC // ,
	#endif
	#ifdef USE_ALTCODE
	, L_V | L_K | L_B | L_P, 0, SFG, SFF, AC2(6, 0), ALF, AC2(6, 2), NC // <>
	#else
	, L_V | L_K | L_B | L_P, 0, SFG, LSW, SFN, KC_COMM, KC_DOT, LSW, NC // <>
	#endif
	, L_V | L_K | L_B | L_P, 0, SFN, KC_9, KC_0, NC // ()
	#ifdef USE_ALTCODE
	, L_K | L_T | L_P, 0,               SFG, SFF, AC2(9, 4), NC // ^
	#else
	, L_K | L_T | L_P, 0,               SFG, LSW, SFN, KC_6, LSW, NC // ^
	#endif
	, L_K | L_T | L_P, 0,       SFN, KC_EQL, NC // +
	#ifdef USE_ALTCODE
	, L_T | L_D | L_N, 0,       SFG, SFF, AC2(3, 9), NC // '
 	#else
	, L_T | L_D | L_N, 0,       SFG, LSW, KC_QUOT, LSW, NC // '
	#endif
	#ifdef USE_ALTCODE
	, L_T | L_D | L_N, 0,       SFF, AC2(3, 4), NC // "
 	#else
	, L_T | L_D | L_N, 0,       SFN, KC_2, NC // "
	#endif
	#ifdef USE_ALTCODE
	, L_K | L_B | L_N, 0,       SFG, SFF, AC2(6, 4), NC // @
	#else
	, L_K | L_B | L_N, 0,       SFG, LSW, SFN, KC_2, LSW, NC // @
	#endif
	#ifdef USE_ALTCODE
	, L_K | L_B | L_N, 0,       SFF, AC2(5, 9), NC // ;
	#else
	, L_K | L_B | L_N, 0,       SFN, KC_4, NC // ;
	#endif
	#ifdef USE_ALTCODE
	, L_K | L_T | L_P | L_N, 0, SFG, SFF, AC2(3, 5), NC // #
	#else
	, L_K | L_T | L_P | L_N, 0, SFG, LSW, SFN, KC_3, LSW, NC // #
	#endif
	#ifdef USE_ALTCODE
	, L_K | L_T | L_P | L_N, 0, SFF, AC2(5, 8), NC // :
	#else
	, L_K | L_T | L_P | L_N, 0, SFN, KC_6, NC // :
	#endif
	#ifdef USE_ALTCODE
	, L_V | L_K | L_T, 0,       SFG, SFF, AC2(9, 2), NC // \*
 	#else
	, L_V | L_K | L_T, 0,       SFG, SFF, KC_BSLS, NC // \*
	#endif
	#ifdef USE_ALTCODE
	, L_V | L_K | L_T, 0,       SFF, AC2(4, 7), NC // /
 	#else
	, L_V | L_K | L_T, 0,       SFN, KC_BSLS, NC // /
	#endif
	, L_D | L_B | L_P, 0,       KC_MINS, NC
	#ifdef USE_ALTCODE
	, L_D | L_P | L_N, 0,               SFG, SFF, AC3(1, 2, 6), NC // ~
	#else
	, L_D | L_P | L_N, 0,               SFG, LSW, SFN, KC_GRV, LSW, NC // ~
	#endif
	#ifdef USE_ALTCODE
    , L_D | L_P | L_N, 0,               SFF, AC2(3, 7), NC // %
	#else
    , L_D | L_P | L_N, 0,               SFN, KC_5, NC // %
	#endif
	#ifdef USE_ALTCODE
	, L_D | L_B | L_N, 0,               SFG, SFF, AC2(9, 6), NC // `
	#else
	, L_D | L_B | L_N, 0,               SFG, LSW, SFF, KC_GRV, LSW, NC // `
	#endif
	, L_D | L_B | L_N, 0,       SFN, KC_8, NC // *
	#ifdef USE_ALTCODE
	, L_S | L_V | L_K, 0,       SFG, SFF, AC2(3, 8), NC // &
 	#else
	, L_S | L_V | L_K, 0,       SFG, LSW, SFN, KC_7, LSW, NC // &
	#endif
	#ifdef USE_ALTCODE
	, L_S | L_V | L_K, 0,       SFF, AC3(1, 2, 4), NC // |
 	#else
	, L_S | L_V | L_K, 0,       LSW, SFN, KC_BSLS, LSW, NC // |
	#endif
	
	, 0, L_BSPC,            KC_BSPC, NC
	, 0, L_ENT,             KC_ENT, NC
	, 0, L_DEL,             KC_DEL, NC
	, L_T, L_BSPC,          CLN, KC_BSPC, NC
	, L_N, L_ENT,           CLN, KC_ENT, NC
	, 0, L_8 | L_DEL,       CLN, KC_DEL, NC
	, 0, L_ENT | L_DEL,     KC_ESC, NC
	//, 0, L_BSPC | L_ENT,    UND, NC

	#ifdef UTYUMOV
	
	#ifdef USE_ALTCODE
	, L_V | L_K | L_T | L_N, 0, SFF, AC2(4, 7), ALF, AC2(4, 7), NC // //
 	#else
	, L_V | L_K | L_T | L_N, 0, SFN, KC_BSLS, KC_BSLS, NC // //
	#endif

	#endif


	, 0, 0 // end
};

const uint8_t PROGMEM nav_dict[] = {
	
	L_S, 0,        CLN, KC_HOME, NC
	, L_V, 0,      SFG, CLF, SFN, KC_UP, NC
	, L_V, 0,      CLF, KC_UP, NC
	, L_K, 0,      SFG, CLF, SFN, KC_DOWN, NC
	, L_K, 0,      CLF, KC_DOWN, NC
	, L_T, 0,      CLN, KC_END, NC
	, L_D, 0,      CLF, KC_HOME, NC
	, L_B, 0,      SFG, CLF, SFN, KC_LEFT, NC
	, L_B, 0,      CLF, KC_LEFT, NC
	, L_P, 0,      SFG, CLF, SFN, KC_RIGHT, NC
	, L_P, 0,      CLF, KC_RIGHT, NC
	, L_N, 0,      CLF, KC_END, NC
	
	, L_S | L_V, 0,   CLF, KC_PGUP, NC
	, L_K | L_T, 0,   CLF, KC_PGDN, NC
	, L_D | L_B, 0,   CLN, KC_LEFT, NC
	, L_P | L_N, 0,   CLN, KC_RIGHT, NC
	, L_D | L_P, 0,   CLN, KC_LBRC, NC // Ctl {
	, L_B | L_N, 0,   CLN, KC_RBRC, NC // Ctl }
	
	, L_V | L_K, 0,   CLF, KC_APP, NC
	
	, 0, L_BSPC,      CLF, KC_TAB, NC
	, 0, L_ENT,       CLF, ALN, KC_TAB, ALH, NC
	, 0, L_DEL,       CLN, KC_TAB, NC
	
	, 0, L_1,      CLN, KC_Z, NC
	, 0, L_2,      CLN, KC_X, NC
	, 0, L_4,      CLN, KC_C, NC
	, 0, L_8,      CLN, KC_V, NC
	
	, L_D, L_1,       CLN, KC_A, NC
	, L_B, L_2,       CLN, KC_S, NC
	, L_P, L_4,       CLF, KC_PSCR, NC
	, L_N, L_8,       CLN, KC_F, NC

	, L_K | L_N, 0,   MTS, NC
	
	#ifdef UTYUMOV
	
	, 0, L_1 | L_2,   CLN, KC_PAUS, NC
	, L_B | L_P | L_N, 0, SFF, CLN, KC_SPC, NC
	, L_V | L_K | L_T | L_P, 0, SFG, SFN, CLN, KC_PSLS, NC // /
	, L_V | L_K | L_T | L_P, 0, CLN, KC_PSLS, NC // /
	
	, L_S | L_D, 0,   CLF, KC_F2, NC
	, L_V | L_B, 0,   CLF, KC_F3, NC
	, L_K | L_P, 0,   CLF, KC_F4, NC
	, L_T | L_N, 0,   CLF, KC_F5, NC
	, L_K | L_T | L_P | L_N, 0, CLF, KC_F9, NC
	
	, L_B | L_P, 0,   SFG, SFF, CLN, KC_MINS, NC
	, L_B | L_P, 0,   CLF, KC_F12, NC

	, L_B | L_P | L_N, 0, SFF, CLN, KC_SPC, NC

	#else
		
	, L_S | L_D, 0,   CLF, KC_F1, NC
	, L_V | L_B, 0,   CLF, KC_F2, NC
	, L_S | L_D | L_V | L_B, 0,   CLF, KC_F3, NC
	, L_K | L_P, 0,   CLF, KC_F4, NC
	, L_S | L_D | L_K | L_P, 0,   CLF, KC_F5, NC
	, L_V | L_B | L_K | L_P, 0,   CLF, KC_F6, NC
	, L_S | L_D | L_V | L_B | L_K | L_P, 0,   CLF, KC_F7, NC
	, L_T | L_N, 0,   CLF, KC_F8, NC
	, L_S | L_D | L_T | L_N, 0,   CLF, KC_F9, NC
	, L_V | L_B | L_T | L_N, 0,   CLF, KC_F10, NC
	, L_S | L_D | L_V | L_B | L_T | L_N, 0,   CLF, KC_F11, NC
	, L_K | L_P | L_T | L_N, 0,   CLF, KC_F12, NC
	, L_S | L_D | L_K | L_P | L_T | L_N, 0,   CLF, KC_F13, NC
	, L_V | L_B | L_K | L_P | L_T | L_N, 0,   CLF, KC_F14, NC
	, L_S | L_D | L_V | L_B | L_K | L_P | L_T | L_N, 0,   CLF, KC_F15, NC
	
	
	#endif
	, 0, 0 // end
};

const uint8_t PROGMEM wrd_dict[] = {
	K_D, K_MZ                    
		, RU_D, RU_O, RU_B, RU_R, RU_Y, RU_J, KC_SPC, RU_D, RU_E, RU_N, RU_MZ, NC // 1. добрый день
	, K_D, K_U
		, RU_D, RU_O, RU_B, RU_R, RU_O, RU_E, KC_SPACE, RU_U, RU_T, RU_R, RU_O, NC // 2. доброе утро
	, K_D, K_E
		, RU_D, RU_O, RU_B, RU_R, RU_Y, RU_J, KC_SPACE, RU_V, RU_E, RU_X, RU_E, RU_R, NC // 3. добрый вечер
	, K_T | K_D | K_P, 0
		, RU_P, RU_O, RU_ZH, RU_A, RU_L, RU_U, RU_J, RU_S, RU_T, RU_A, NC // 4. пожалуйста
	, K_S, K_I
		, RU_E, RU_S, RU_L, RU_I, NC // 5. если
	, K_V | K_D, 0
		, RU_I, RU_N, RU_A, RU_X, RU_E, NC // 6. иначе
	, K_T, 0
		, RU_T, RU_O, RU_G, RU_D, RU_A, NC // 7. тогда
	, K_T | K_P, 0
		, RU_C, RU_I, RU_K, RU_L, NC // 8. цикл
	, K_K, 0
		, RU_K, RU_O, RU_N, RU_E, RU_C, NC // 9. конец
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
	, K_K | K_T | K_B, 0
		, RU_O, RU_B, RU_TZ, RU_E, RU_K, RU_T, NC // 39. объект
	, K_S | K_K, 0
		, RU_S, RU_S, RU_Y, RU_L, RU_K, NC // 40. ссылк
	, K_P, K_MZ
		, RU_P, RU_O, RU_L, RU_U, RU_X, RU_I, RU_T, RU_MZ, NC // 41. получить
	, K_P | K_N, 0
		, RU_N, RU_E, RU_O, RU_P, RU_R, RU_E, RU_D, RU_E, RU_L, RU_E, RU_N, RU_O, NC // 41. неопределено
	, K_K | K_T | K_D, 0
		, RU_K, RU_A, RU_ZH, RU_D, RU_O, RU_G, RU_O, NC // 42. каждого
	, K_T | K_N, 0
		, RU_N, RU_A, RU_J, RU_T, RU_I, NC // 44. найти
	, K_S | K_V | K_B, 0
		, RU_S, RU_V, RU_O, RU_J, RU_S, RU_T, RU_V, NC // 45. свойств
	, K_V, 0
		, RU_V, RU_O, RU_Z, RU_V, RU_R, RU_A, RU_T, NC // 46. возврат
	, 0, 0 // end
	
};
