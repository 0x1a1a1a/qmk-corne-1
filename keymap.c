#include QMK_KEYBOARD_H
#include <stdio.h>

// Home row mods (mod-taps)
#define HOME_A LCTL_T(KC_A)
#define HOME_S LSFT_T(KC_S)
#define HOME_D LOPT_T(KC_D)
#define HOME_F LCMD_T(KC_F)
#define HOME_J LCMD_T(KC_J)
#define HOME_K LOPT_T(KC_K)
#define HOME_L LSFT_T(KC_L)
#define HOME_SC LCTL_T(KC_SCLN)

#define LANG_P LCTL(KC_SPC) // macOS: Select the previous input source
#define LANG_N LCTL(LOPT(KC_SPC)) // macOS: Select next source in Input menu
#define EMOJI LCTL(LCMD(KC_SPC)) // macOS: Shortcut for Emoji&Symbols
#define DND HYPR(KC_Z) // macOS: Shortcut for Do Not Disturb
#define SPC_L LCTL(KC_LEFT) // macOS: Shortcut for move right a space
#define SPC_R LCTL(KC_RGHT) // macOS: Shortcut for move left a space
#define MCTRL HYPR(KC_V) // macOS: Shortcut for Mission Control
#define ALFRD HYPR(KC_S) // macOS: Shortcut for Alfred

#define RDBRC_L LSFT(KC_9) // Left round bracket
#define RDBRC_R LSFT(KC_0) // Right round bracket
#define UNDRSC LSFT(KC_MINS) // Underscore
#define NDASH LOPT(KC_MINS) // En dash
#define MDASH LSFT(LOPT(KC_MINS)) // Em dash
#define D_QUOT LSFT(KC_QUOT) // Double quote
#define COLON LSFT(KC_SCLN) // Colon

#define SS_OPT LSFT(LCMD(KC_5)) // macOS: Screenshot and recording options
#define SS_C_A LCTL(LSFT(LCMD(KC_4))) // macOS: Copy picture of selected area to the clipboard
#define SS_C_S LCTL(LSFT(LCMD(KC_3))) // macOS: Copy picture of screen to the clipboard
#define SS_F_A LSFT(LCMD(KC_4)) // macOS: Save picture of selected area as a file
#define SS_F_S LSFT(LCMD(KC_3)) // macOS: Save picture of screen as a file

#define TAB_N LCMD(LSFT(KC_RBRC)) // Chrome: Next tab
#define TAB_P LCMD(LSFT(KC_LBRC)) // Chrome: Previous tab

#define M_ENT LT(1, KC_ENT) // Momentarily activates Layer 2 when held, and sends Enter when tapped
#define M_TAB LT(4, KC_TAB) // Momentarily activates Layer 4 when held, and sends Tab when tapped

#define CYR_CM LSFT(KC_SLSH) // Cyrillic: Comma
#define CYR_PD KC_SLSH // Cyrillic: Period
#define CYR_E KC_QUOT // Cyrillic: E
#define CYR_KH KC_LBRC // Cyrillic: Kh
#define CYR_II KC_RBRC // Cyrillic: Hard sign
#define CYR_EXLM LSFT(KC_1) // Cyrillic: Exclamation mark
#define CYR_QUES LSFT(KC_7) // Cyrillic: Question mark
#define CYR_CLN LSFT(KC_6) // Cyrillic: Colon
#define CYR_SCLN LSFT(KC_4) // Cyrillic: Semicolon
#define CYR_QUOT LOPT(KC_O) // Cyrillic: Quote
#define CYR_DQT LSFT(KC_2) // Cyrillic: Double quote


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
    // EMPTY
    [N] = LAYOUT_split_3x6_3(

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX

    ),
*/

    // MAIN
    [0] = LAYOUT_split_3x6_3(

          KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, XXXXXXX,
         XXXXXXX,  HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,            KC_H,  HOME_J,  HOME_K,  HOME_L, HOME_SC, KC_QUOT,
         XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
                                      M_ENT,  KC_SPC,   MO(2),           MO(3), KC_BSPC,   M_TAB

    ),

    // LEFT SIDE MOD: Additional special characters (CYR)
    [1] = LAYOUT_split_3x6_3(

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CYR_DQT, XXXXXXX,          CYR_KH,  CYR_II, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX,CYR_QUES,CYR_EXLM, XXXXXXX,           CYR_E, KC_MINS,   NDASH,   MDASH, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX,CYR_SCLN, CYR_CLN, XXXXXXX,         XXXXXXX, XXXXXXX,  CYR_CM,  CYR_PD, XXXXXXX, XXXXXXX,
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX

    ),

/*
    // LEFT SIDE MOD: M_ENT, Mouse keys, system and RGB controls
    [1] = LAYOUT_split_3x6_3(

         XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_TOG,         XXXXXXX, XXXXXXX, KC_MS_U, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX,  HOME_A,  HOME_S,  HOME_D,  HOME_F, XXXXXXX,         XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX,
         XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_MOD,         XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX,
                                    XXXXXXX, XXXXXXX, XXXXXXX,         KC_BTN1, KC_BTN2, KC_BTN3

    ),
*/

    // LEFT SIDE MOD: Arrows and macOS-specific controls
    [2] = LAYOUT_split_3x6_3(

         XXXXXXX,   TAB_P,   TAB_N,   KC_UP,   ALFRD,  LANG_N,          LANG_P, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE,
         XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT,   EMOJI,         XXXXXXX,  HOME_J,  HOME_K,  HOME_L, HOME_SC, KC_VOLU,
         XXXXXXX, XXXXXXX, XXXXXXX,   SPC_L,   MCTRL,   SPC_R,          SS_OPT,  SS_C_A,  SS_C_S,  SS_F_A,  SS_F_S, KC_VOLD,
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX

    ),

    // RIGHT SIDE MOD: Numpad
    [3] = LAYOUT_split_3x6_3(

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         KC_COMM,    KC_7,    KC_8,    KC_9, KC_PLUS, KC_MINS,
         XXXXXXX,  HOME_A,  HOME_S,  HOME_D,  HOME_F, XXXXXXX,          KC_DOT,    KC_4,    KC_5,    KC_6, KC_ASTR, KC_SLSH,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            KC_0,    KC_1,    KC_2,    KC_3, KC_BSLS,  KC_EQL,
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX

    ),

    // RIGHT SIDE MOD: Additional special characters (EN)
    [4] = LAYOUT_split_3x6_3(

             DND, XXXXXXX, XXXXXXX, KC_QUOT,  D_QUOT, RDBRC_L,         RDBRC_R,  KC_GRV, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS,
         XXXXXXX, XXXXXXX, XXXXXXX, KC_QUES, KC_EXLM, KC_LBRC,         KC_RBRC, KC_MINS,   NDASH,   MDASH, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, KC_SCLN,   COLON, KC_LCBR,         KC_RCBR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                    XXXXXXX, XXXXXXX,  UNDRSC,         XXXXXXX, XXXXXXX, XXXXXXX

    )

};