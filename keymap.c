/*

BACKLOG


Next tab in Chrome: command + shift + close bracket
Previous tab in Chrome: command + shift + open bracket
Shortcuts for Zoom: mute audio, leave call (Command+W?)
Screenshots on macOS
Figma-specific layer

*/




#include QMK_KEYBOARD_H
#include <stdio.h>



// Home row mod-taps
#define HOME_A LCTL_T(KC_A)
#define HOME_S LOPT_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LCMD_T(KC_F)
#define HOME_J LCMD_T(KC_J)
#define HOME_K LSFT_T(KC_K)
#define HOME_L LOPT_T(KC_L)
#define HOME_SC LCTL_T(KC_SCLN)

#define LANG_P LCTL(KC_SPC) // Select the previous input source (macOS)
#define LANG_N LCTL(LOPT(KC_SPC)) // Select next source in Input menu (macOS)
#define EMOJI LCTL(LCMD(KC_SPC)) // Shortcut for Emoji&Symbols (macOS)
#define DND HYPR(KC_Z) // Shortcut for Do Not Disturb (macOS)
#define SPC_L LCTL(KC_LEFT) // Shortcut for move right a space (macOS)
#define SPC_R LCTL(KC_RGHT) // Shortcut for move left a space (macOS)
#define MCTRL HYPR(KC_V) // Shortcut for Mission Control (macOS)
#define ALFRD HYPR(KC_S) // Shortcut for Alfred

#define RBRC_L LSFT(KC_9) // Left round bracket
#define RBRC_R LSFT(KC_0) // Right round bracket
#define UNDRSC LSFT(KC_MINS) // Underscore
#define NDASH LOPT(KC_MINS) // En dash
#define MDASH LSFT(LOPT(KC_MINS)) // Em dash

#define SS_OPT LSFT(LCMD(KC_5)) // Screenshot and recording options (macOS)
#define SS_C_A LCTL(LSFT(LCMD(KC_4))) // Copy picture of selected area to the clipboard (macOS)
#define SS_C_S LCTL(LSFT(LCMD(KC_3))) // Copy picture of screen to the clipboard (macOS)
#define SS_F_A LSFT(LCMD(KC_4)) // Save picture of selected area as a file (macOS)
#define SS_F_S LSFT(LCMD(KC_3)) // Save picture of screen as a file (macOS)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(

          KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
          KC_ENT,  HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,            KC_H,  HOME_J,  HOME_K,  HOME_L, HOME_SC, KC_QUOT,
          KC_TAB,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
                                     KC_SPC, XXXXXXX,   MO(1),            TO(2), XXXXXXX, KC_BSPC

    ),

  [1] = LAYOUT_split_3x6_3(

             DND, KC_LBRC, KC_RBRC,   KC_UP, XXXXXXX,  LANG_P,          LANG_N,  RBRC_L,  RBRC_R, XXXXXXX, KC_LBRC, KC_RBRC,
         XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT,   EMOJI,         XXXXXXX,  HOME_J,  HOME_K,  HOME_L, HOME_SC, XXXXXXX,
           ALFRD, XXXXXXX, XXXXXXX,   SPC_L,   MCTRL,   SPC_R,          SS_OPT,  SS_C_A,  SS_C_S,  SS_F_A,  SS_F_S, XXXXXXX,
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX

  ),

  [2] = LAYOUT_split_3x6_3(

          KC_GRV, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  UNDRSC,         KC_COMM,    KC_7,    KC_8,    KC_9, KC_PLUS, KC_MINS,
          KC_ENT,  HOME_A,  HOME_S,  HOME_D,  HOME_F, KC_QUES,          KC_DOT,    KC_4,    KC_5,    KC_6, KC_ASTR, KC_SLSH,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_EXLM,            KC_0,    KC_1,    KC_2,    KC_3,  KC_EQL, KC_BSLS,
                                    _______, XXXXXXX,   TO(0),           TO(3), XXXXXXX, _______
 
  ),

  [3] = LAYOUT_split_3x6_3(

           RESET, BL_TOGG, BL_STEP, BL_BRTG, XXXXXXX, XXXXXXX,          RBRC_L,  RBRC_R, XXXXXXX, KC_MINS,   NDASH,   MDASH,
         RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX,         KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX,         KC_LCBR, KC_RCBR, KC_PIPE, XXXXXXX, XXXXXXX, XXXXXXX,
                                    _______, XXXXXXX,   TO(0),         XXXXXXX, XXXXXXX, _______

  )
};