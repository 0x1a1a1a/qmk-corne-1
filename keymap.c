#include QMK_KEYBOARD_H
#include <stdio.h>
#include "glossary.c"
#include "advanced.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // MAIN
    [MAI] = LAYOUT_split_3x6_3(

            RSQM,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
           COMMA,  HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,                    KC_H,  HOME_J,  HOME_K,  HOME_L, HOME_SC,  PERIOD,
         XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
                                          TO(NUM), TO(CON),  KC_SPC,     KC_BSPC, LANG_EN, LANG_UA

    ),

    // MACOS CONTROLS AND APPS
    [CON] = LAYOUT_split_3x6_3(

         KC_VOLU,    UNDO,   SPC_L,   MCTRL,   SPC_R,   ALFRD,                  SS_OPT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BRIU,
         KC_VOLD,    REDO,  KC_ESC,  KC_TAB,  KC_ENT,   EMOJI,                 XXXXXXX, KC_RCMD, KC_ROPT, KC_RSFT, KC_RCTL, KC_BRID,
         KC_MUTE, XXXXXXX,     CUT,    COPY,   PASTE, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     DND,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),

    // NUMPAD       
    [NUM] = LAYOUT_split_3x6_3(

            SLSH, KC_MINS,    KC_9,    KC_8,    KC_7,   COMMA,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
          KC_EQL,    KC_3,    KC_2,    KC_1,    KC_0,  PERIOD,                 XXXXXXX, KC_RCMD, KC_ROPT, KC_RSFT, KC_RCTL, XXXXXXX,
         KC_ASTR, KC_PLUS,    KC_6,    KC_5,    KC_4, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),

    // ARROWS
    [ARR] = LAYOUT_split_3x6_3(

         XXXXXXX, XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,                 XXXXXXX, KC_LCMD, KC_LOPT, KC_LSFT, KC_LCTL, XXXXXXX,
           RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),

    // SPECIAL CHARACTERS
    [SPE] = LAYOUT_split_3x6_3(

         GACCENT,   TILDE,   L_SQR,   R_SQR,   NDASH,   PRCNT,                    NMBR,   MDASH,   L_CUR,   R_CUR,  APOSTR,   DQUOT,
         XXXXXXX,   HLINE,   L_RND,   R_RND,   EMARK,   ATSGN,                   CARET,   QMARK,   L_ANG,   R_ANG,   COLON, SMCOLON,
         XXXXXXX,   VLINE,  BULLET,   MSIGN,    SLSH,   AMPRD,                    DLLR,   BSLSH,  UNDRSC, XXXXXXX, XXXXXXX, XXXXXXX,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),

    // RISATENO
    [RIS] = LAYOUT_split_3x6_3(

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX,    KC_L,    KC_D,    KC_R,    KC_J, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX,    KC_U,    KC_V,    KC_M,    KC_F, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                          KC_TRNS, KC_BSPC,  KC_SPC,     KC_TRNS, KC_TRNS, KC_TRNS

    ),

    // GAMES
    [GAM] = LAYOUT_split_3x6_3(

            RSQM,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
           COMMA,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  PERIOD,
         XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
                                          LANG_EN,  KC_TAB,  KC_SPC,     KC_BSPC,   TO(2), LANG_UA

    )

};
