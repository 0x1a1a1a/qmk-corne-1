#include QMK_KEYBOARD_H
#include <stdio.h>
#include "macros.c"
// #include "letters_cyr.c"


// Home row mods (as Mod-Taps)
#define HOME_A   LCTL_T(KC_A)
#define HOME_S   LSFT_T(KC_S)
#define HOME_D   LOPT_T(KC_D)
#define HOME_F   LCMD_T(KC_F)
#define HOME_J   LCMD_T(KC_J)
#define HOME_K   LOPT_T(KC_K)
#define HOME_L   LSFT_T(KC_L)
#define HOME_SC  LCTL_T(KC_SCLN)


#define EMOJI    LCTL(LCMD(KC_SPC)) // macOS: Shortcut for Emoji&Symbols
#define DND      HYPR(KC_Z) // macOS: Shortcut for Do Not Disturb
#define ALFRD    HYPR(KC_S) // macOS: Shortcut for Alfred
#define SS_OPT   LSFT(LCMD(KC_5)) // macOS: Shortcut for screenshot and recording options
#define MCTRL    HYPR(KC_V) // macOS: Shortcut for Mission Control
#define SPC_L    LCTL(KC_LEFT) // macOS: Shortcut for move right a space
#define SPC_R    LCTL(KC_RGHT) // macOS: Shortcut for move left a space


#define UNDO     LCMD(KC_Z) // Undo
#define REDO     LCMD(LSFT(KC_Z)) // Redo
#define CUT      LCMD(KC_X) // Cut
#define COPY     LCMD(KC_C) // Copy
#define PASTE    LCMD(KC_V) // Paste


#define L_RND    LSFT(KC_PPLS) // Left round bracket (parenthes)
#define R_RND    LSFT(KC_QUOT) // Right round bracket (parenthes)
#define L_ANG    LSFT(KC_LBRC) // Left angle bracket (chevron)
#define R_ANG    LSFT(KC_RBRC) // Right angle bracket (chevron)
#define L_CUR    LOPT(KC_LBRC) // Left curly bracket (brace)
#define R_CUR    LOPT(KC_RBRC) // Right curly bracket (brace)
#define L_SQR    KC_LBRC // Left square bracket
#define R_SQR    KC_RBRC // Right square bracket


#define COLON    KC_PMNS // Colon
#define HYPHEN   KC_PAST // Hyphen
#define COMMA    KC_PPLS // Comma
#define PERIOD   KC_QUOT // Period
#define SLSH     LSFT(LOPT(KC_LBRC)) // Slash
#define BSLSH    LSFT(LOPT(KC_RBRC)) // Backslash
#define ATSGN    LSFT(KC_2) // At sign
#define NMBR     LSFT(KC_3) // Number sign
#define DLLR     LSFT(KC_4) // Dollar sign
#define PRCNT    LSFT(KC_5) // Percent sign
#define CARET    LSFT(KC_6) // Caret
#define AMPRD    LSFT(KC_7) // Ampersand
#define UNDRSC   LSFT(KC_MINS) // Underscore



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/*
    // EMPTY TEMPLATE
    [N] = LAYOUT_split_3x6_3(

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX

    ),
*/


    // MAIN
    [0] = LAYOUT_split_3x6_3(

           COLON,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
           COMMA,  HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,            KC_H,  HOME_J,  HOME_K,  HOME_L, HOME_SC,  PERIOD,
         LANG_EN,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   TO(4),
                                      TO(3),  KC_SPC,   TO(1),           TO(2), KC_BSPC, LANG_UA

    ),


    // MACOS CONTROLS AND APPS
    [1] = LAYOUT_split_3x6_3(

           L_CUR,    SLSH,   SPC_L,   MCTRL,   SPC_R,   ALFRD,         KC_MUTE, KC_BRIU, KC_SLEP, XXXXXXX,   BSLSH,   R_CUR,
           L_SQR,     DND,  KC_ESC,  KC_TAB,  KC_ENT,   EMOJI,         KC_VOLU, KC_RCMD, KC_ROPT, KC_RSFT, KC_RCTL,   R_SQR,
         LANG_EN,    REDO,    UNDO,     CUT,    COPY,   PASTE,         KC_VOLD, KC_BRID, XXXXXXX, XXXXXXX,  SS_OPT,   TO(4),
                                      TO(3),  KC_SPC,   TO(1),           TO(2), KC_BSPC, LANG_UA

    ),


    // NUMPAD       
    [2] = LAYOUT_split_3x6_3(

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         KC_PLUS,    KC_4,    KC_5,    KC_6, KC_ASTR,  KC_EQL,
         XXXXXXX, KC_LCTL, KC_LSFT, KC_LOPT, KC_LCMD, XXXXXXX,           COMMA,    KC_0,    KC_1,    KC_2,    KC_3,  PERIOD,
         LANG_EN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         KC_MINS,    KC_7,    KC_8,    KC_9,    SLSH,   TO(4),
                                      TO(3),  KC_SPC,   TO(1),           TO(2), KC_BSPC, LANG_UA

    ),


    // ARROWS
    [3] = LAYOUT_split_3x6_3(

           RESET, XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,         XXXXXXX, KC_LCMD, KC_LOPT, KC_LSFT, KC_LCTL, XXXXXXX,
         LANG_EN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TO(4),
                                      TO(3),  KC_SPC,   TO(1),           TO(2), KC_BSPC, LANG_UA

    ),


    // SPECIAL CHARACTERS
    [4] = LAYOUT_split_3x6_3(

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   L_CUR,    SLSH,           BSLSH,   R_CUR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX,   PRCNT,   ATSGN,   L_RND,   L_SQR,           R_SQR,   R_RND,    NMBR,   CARET,  UNDRSC, XXXXXXX,
         LANG_EN, XXXXXXX, XXXXXXX,   AMPRD,   L_ANG, XXXXXXX,         XXXXXXX,   R_ANG,    DLLR, XXXXXXX, XXXXXXX,   TO(4),
                                      TO(3),  KC_SPC,   TO(1),           TO(2), KC_BSPC, LANG_UA

    )


};
