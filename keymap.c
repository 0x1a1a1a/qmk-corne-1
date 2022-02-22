#include QMK_KEYBOARD_H
#include <stdio.h>

/*

Next steps
      - Remap Alfred away from the thumb (thumbs indicating current layer should be empty to avoid double clicking
      - Implement Unicode support for special characters to use one layer for latin and cyrillic special characters
      - 
      - 

*/

// Home row mods (as Mod-Taps)
#define HOME_A   LCTL_T(KC_A)
#define HOME_S   LSFT_T(KC_S)
#define HOME_D   LOPT_T(KC_D)
#define HOME_F   LCMD_T(KC_F)
#define HOME_J   LCMD_T(KC_J)
#define HOME_K   LOPT_T(KC_K)
#define HOME_L   LSFT_T(KC_L)
#define HOME_SC  LCTL_T(KC_SCLN)


#define LANG     LCTL(LOPT(KC_SPC)) // macOS: Select next source in Input menu
#define EMOJI    LCTL(LCMD(KC_SPC)) // macOS: Shortcut for Emoji&Symbols
#define DND      HYPR(KC_Z) // macOS: Shortcut for Do Not Disturb
#define ALFRD    HYPR(KC_S) // macOS: Shortcut for Alfred
#define ONEPS    HYPR(KC_T) // macOS: Shortcut for 1Password


#define MCTRL    HYPR(KC_V) // macOS: Shortcut for Mission Control
#define SPC_L    LCTL(KC_LEFT) // macOS: Shortcut for move right a space
#define SPC_R    LCTL(KC_RGHT) // macOS: Shortcut for move left a space
#define DSK1     HYPR(KC_Y) // macOS: Switch to Desktop 1
#define DSK2     HYPR(KC_U) // macOS: Switch to Desktop 2
#define DSK3     HYPR(KC_I) // macOS: Switch to Desktop 3
#define DSK4     HYPR(KC_O) // macOS: Switch to Desktop 4
#define DSK5     HYPR(KC_P) // macOS: Switch to Desktop 5
#define DSK6     HYPR(KC_LBRC) // macOS: Switch to Desktop 6


#define RDBRC_L  LSFT(KC_9) // Left round bracket
#define RDBRC_R  LSFT(KC_0) // Right round bracket
#define UNDRSC   LSFT(KC_MINS) // Underscore
#define NDASH    LOPT(KC_MINS) // En dash
#define MDASH    LSFT(LOPT(KC_MINS)) // Em dash
#define D_QUOT   LSFT(KC_QUOT) // Double quote
#define COLON    LSFT(KC_SCLN) // Colon
#define ATSGN    LSFT(KC_2) // At sign
#define NMBR     LSFT(KC_3) // Number sign
#define DLLR     LSFT(KC_4) // Dollar sign
#define PRCNT    LSFT(KC_5) // Percent sign
#define CARET    LSFT(KC_6) // Caret
#define AMPRD    LSFT(KC_7) // Ampersand


#define SS_OPT   LSFT(LCMD(KC_5)) // macOS: Screenshot and recording options
#define SS_C_A   LCTL(LSFT(LCMD(KC_4))) // macOS: Copy picture of selected area to the clipboard
#define SS_C_S   LCTL(LSFT(LCMD(KC_3))) // macOS: Copy picture of screen to the clipboard
#define SS_F_A   LSFT(LCMD(KC_4)) // macOS: Save picture of selected area as a file
#define SS_F_S   LSFT(LCMD(KC_3)) // macOS: Save picture of screen as a file


#define CYR_CM   LSFT(KC_SLSH) // Cyrillic: Comma
#define CYR_PD   KC_SLSH // Cyrillic: Period
#define CYR_E    KC_QUOT // Cyrillic: E
#define CYR_KH   KC_LBRC // Cyrillic: Kh
#define CYR_II   KC_RBRC // Cyrillic: Hard sign
#define CYR_EXLM LSFT(KC_1) // Cyrillic: Exclamation mark
#define CYR_QUES LSFT(KC_7) // Cyrillic: Question mark
#define CYR_CLN  LSFT(KC_6) // Cyrillic: Colon
#define CYR_SCLN LSFT(KC_4) // Cyrillic: Semicolon
#define CYR_QT   LOPT(KC_P) // Cyrillic: Quote
#define CYR_DQT  LSFT(KC_2) // Cyrillic: Double quote


#define CMDZ     LCMD(KC_Z) // Redo
#define CMDX     LCMD(KC_X) // Cut
#define CMDC     LCMD(KC_C) // Copy
#define CMDV     LCMD(KC_V) // Paste




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

          KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC,
          KC_ENT,  HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,            KC_H,  HOME_J,  HOME_K,  HOME_L, HOME_SC, KC_QUOT,
          KC_TAB,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RBRC,
                                    XXXXXXX,  KC_SPC,   TO(1),           MO(2), KC_BSPC,   TO(3)

    ),

    // ARROWS AND MACOS-SPECIFIC CONTROLS
    [1] = LAYOUT_split_3x6_3(

          KC_ESC, XXXXXXX,   SPC_L,   KC_UP,   SPC_R,   ALFRD,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     DND, KC_MUTE,
          KC_ENT,   MCTRL, KC_LEFT, KC_DOWN, KC_RGHT,   EMOJI,         XXXXXXX,  HOME_J,  HOME_K,  HOME_L, HOME_SC, KC_VOLU,
          KC_TAB,    DSK1,    DSK2,    DSK3,    DSK4,    DSK5,         XXXXXXX, XXXXXXX, XXXXXXX,  SS_OPT,   ONEPS, KC_VOLD,
                                      TO(0),  KC_SPC, XXXXXXX,           MO(2), KC_BSPC,   TO(3)

    ),

    // SPECIAL CHARACTERS
    [2] = LAYOUT_split_3x6_3(

          KC_ESC,    DLLR, KC_LBRC,   ATSGN, KC_RBRC, KC_EXLM,        CYR_EXLM, KC_QUOT,  D_QUOT,   COLON, KC_SCLN,  KC_GRV,
          KC_ENT,   AMPRD, RDBRC_L,    NMBR, RDBRC_R, KC_QUES,        CYR_QUES, KC_MINS,   NDASH,   MDASH,  CYR_QT, KC_SLSH,
          KC_TAB,   CARET, KC_LCBR,   PRCNT, KC_RCBR,  UNDRSC,            LANG,  CYR_QT, CYR_DQT, CYR_CLN,CYR_SCLN, KC_BSLS,
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX
    ),

    // NUMPAD       
    [3] = LAYOUT_split_3x6_3(

          KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            KC_7,    KC_8,    KC_9, KC_PLUS, KC_MINS,  KC_DOT,
          KC_ENT,  HOME_A,  HOME_S,  HOME_D,  HOME_F, XXXXXXX,            KC_4,    KC_5,    KC_6, KC_ASTR, KC_SLSH, KC_COMM,
          KC_TAB, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            KC_1,    KC_2,    KC_3, XXXXXXX, XXXXXXX,  KC_EQL,
                                      TO(0),  KC_SPC,   TO(1),           MO(2), KC_BSPC,    KC_0

    )

};