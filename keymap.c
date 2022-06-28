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


#define L_RND    A(KC_Q) // Left round bracket (parenthes)
#define R_RND    A(KC_A) // Right round bracket (parenthes)
#define L_SQR    A(KC_W) // Left square bracket
#define R_SQR    A(KC_S) // Right square bracket
#define L_ANG    A(KC_E) // Left angle bracket (chevron)
#define R_ANG    A(KC_D) // Right angle bracket (chevron)
#define L_CUR    A(KC_R) // Left curly bracket (brace)
#define R_CUR    A(KC_F) // Right curly bracket (brace)


#define PERIOD   A(KC_Y) // Period
#define COMMA    A(KC_H) // Comma
#define COLON    A(KC_U) // Colon
#define SMCOLON  A(KC_J) // Semicolon
#define APOSTR   A(KC_I) // Apostrophe
#define DQUOT    A(KC_K) // Double quote
#define RSQM     A(KC_8) // Right Single Quotation Mark
#define EMARK    A(KC_O) // Exclamation mark
#define QMARK    A(KC_L) // Question mark
#define GACCENT  A(KC_P) // Grave accent
#define TILDE    A(KC_SCLN) // Tilde
#define VLINE    A(KC_LBRC) // Vertical line


#define BULLET   A(KC_MINS) // Bullet
#define MSIGN    A(KC_EQL) // Multiplication sign


#define HYPHEN   A(KC_1) // Hyphen
#define NDASH    A(KC_2) // En Dash
#define MDASH    A(KC_3) // Em Dash
#define HLINE    A(KC_4) // Horizontal Bar


#define SLSH     A(KC_T) // Slash
#define BSLSH    A(KC_G) // Backslash
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

            RSQM,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
           COMMA,  HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,            KC_H,  HOME_J,  HOME_K,  HOME_L, HOME_SC,  PERIOD,
         XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
                                    LANG_EN,  KC_SPC,   TO(1),           TO(2), KC_BSPC, LANG_UA

    ),


    // MACOS CONTROLS AND APPS
    [1] = LAYOUT_split_3x6_3(

            UNDO, XXXXXXX,   SPC_L,   MCTRL,   SPC_R,   ALFRD,         KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BRIU,
            REDO, XXXXXXX,  KC_ESC,  KC_TAB,  KC_ENT,   EMOJI,         KC_VOLD, KC_RCMD, KC_ROPT, KC_RSFT, KC_RCTL, KC_BRID,
         XXXXXXX, XXXXXXX,     CUT,    COPY,   PASTE,     DND,         KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX,  SS_OPT, XXXXXXX,
                                    LANG_EN,  KC_SPC,   TO(3),           TO(2), KC_BSPC, LANG_UA

    ),


    // NUMPAD       
    [2] = LAYOUT_split_3x6_3(

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         KC_PLUS,    KC_4,    KC_5,    KC_6, KC_ASTR,  KC_EQL,
         XXXXXXX, KC_LCTL, KC_LSFT, KC_LOPT, KC_LCMD, XXXXXXX,           COMMA,    KC_0,    KC_1,    KC_2,    KC_3,  PERIOD,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         KC_MINS,    KC_7,    KC_8,    KC_9,    SLSH, XXXXXXX,
                                    LANG_EN,  KC_SPC,   TO(1),           TO(4), KC_BSPC, LANG_UA

    ),


    // ARROWS
    [3] = LAYOUT_split_3x6_3(

           RESET, XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,         XXXXXXX, KC_LCMD, KC_LOPT, KC_LSFT, KC_LCTL, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                    LANG_EN,  KC_SPC,   TO(1),           TO(2), KC_BSPC, LANG_UA

    ),


    // SPECIAL CHARACTERS
    [4] = LAYOUT_split_3x6_3(

         GACCENT,   TILDE,   PRCNT,   L_SQR,   R_SQR,   NDASH,           MDASH,   L_CUR,   R_CUR,    NMBR,  APOSTR,   DQUOT,
         XXXXXXX,   HLINE,   ATSGN,   L_RND,   R_RND,   EMARK,           QMARK,   L_ANG,   R_ANG,   CARET,   COLON, SMCOLON,
         XXXXXXX,   VLINE,   AMPRD,   MSIGN,  BULLET,    SLSH,           BSLSH, XXXXXXX, XXXXXXX,    DLLR,  UNDRSC, XXXXXXX,
                                    LANG_EN,  KC_SPC,   TO(1),           TO(2), KC_BSPC, LANG_UA

    )


};
