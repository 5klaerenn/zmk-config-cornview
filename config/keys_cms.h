#pragma once
#include "keycodes.h"
// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ / │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ ç │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ è │ à │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ù │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ é │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define CA_SLSH KC_GRV  // /
#define CA_1    KC_1    // 1
#define CA_2    KC_2    // 2
#define CA_3    KC_3    // 3
#define CA_4    KC_4    // 4
#define CA_5    KC_5    // 5
#define CA_6    KC_6    // 6
#define CA_7    KC_7    // 7
#define CA_8    KC_8    // 8
#define CA_9    KC_9    // 9
#define CA_0    KC_0    // 0
#define CA_MINS KC_MINS // -
#define CA_EQL  KC_EQL  // =

// Row 2
#define CA_Q    KC_Q    // Q
#define CA_W    KC_W    // W
#define CA_E    KC_E    // E
#define CA_R    KC_R    // R
#define CA_T    KC_T    // T    
#define CA_Y    KC_Y    // Y
#define CA_U    KC_U    // U
#define CA_I    KC_I    // I
#define CA_O    KC_O    // O
#define CA_P    KC_P    // P
#define CA_CIRC KC_LBRC // ^ (dead)
#define CA_CCED KC_RBRC // Ç

// Row 3
#define CA_A    KC_A    // A
#define CA_S    KC_S    // S
#define CA_D    KC_D    // D
#define CA_F    KC_F    // F
#define CA_G    KC_G    // G
#define CA_H    KC_H    // H
#define CA_J    KC_J    // J
#define CA_K    KC_K    // K
#define CA_L    KC_L    // L
#define CA_SCLN KC_SCLN // ;
#define CA_EGRV KC_QUOT // É
#define CA_AGRV KC_NUHS // À

// Row 4
#define CA_UGRV KC_NUBS // Ù
#define CA_Z    KC_Z    // Z
#define CA_X    KC_X    // X
#define CA_C    KC_C    // C
#define CA_V    KC_V    // V
#define CA_B    KC_B    // B
#define CA_N    KC_N    // N
#define CA_M    KC_M    // M
#define CA_COMM KC_COMM // ,
#define CA_DOT  KC_DOT  // .
#define CA_EACU KC_SLSH // É

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ \ │ ! │ @ │ # │ $ │ % │ ? │ & │ * │ ( │ ) │ _ │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ : │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │ ' │ " │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define CA_BSLS S(CA_SLSH) // (backslash)
#define CA_EXLM S(CA_1)    // !
#define CA_AT   S(CA_2)    // @
#define CA_HASH S(CA_3)    // #
#define CA_DLR  S(CA_4)    // $
#define CA_PERC S(CA_5)    // %
#define CA_QUES S(CA_6)    // ?
#define CA_AMPR S(CA_7)    // &
#define CA_ASTR S(CA_8)    // *
#define CA_LPRN S(CA_9)    // (
#define CA_RPRN S(CA_0)    // )
#define CA_UNDS S(CA_MINS) // _
#define CA_PLUS S(CA_EQL)  // +

// Row 2
#define CA_DIAE S(CA_CIRC) // ¨ (dead)

// Row 3
#define CA_COLN S(CA_SCLN) // :

// Row 4
#define CA_QUOT S(CA_COMM) // '
#define CA_DQUO S(CA_DOT)  // "


/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ | │   │   │   │ ¤ │   │   │ { │ } │ [ │ ] │   │ ¬ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │ ` │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ° │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │ « │ » │   │   │   │   │   │ < │ > │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1

#define CA_PIPE ALGR(CA_SLSH) // |
#define CA_CURR ALGR(CA_4)    // ¤
#define CA_LCBR ALGR(CA_7)    // {
#define CA_RCBR ALGR(CA_8)    // }
#define CA_LBRC ALGR(CA_9)    // [
#define CA_RBRC ALGR(CA_0)    // ]
#define CA_NOT  ALGR(CA_EQL)  // ¬

// Row 2
#define CA_EURO ALGR(CA_E)    // €
#define CA_GRV  ALGR(CA_CIRC) // ` (dead)
#define CA_DTIL ALGR(CA_CCED) // ~ (dead)

// Row 3
#define CA_DEG  ALGR(CA_SCLN) // °

// Row 4 
#define CA_LDAQ ALGR(CA_Z)    // «
#define CA_RDAQ ALGR(CA_X)    // »
#define CA_LABK ALGR(CA_COMM) // <
#define CA_RABK ALGR(CA_DOT)  // >

