/*

BACKLOG


Move \ and / to a second layer
Set Do Not Disturb to Mode1+Enter (instead of Mode1+Z)
Move Switch Space and Mission Control to Mode1+CVB
Move , (Unicode) to Mode1+,
Move . (Unicode) to Mode1+.
? Captilized letters by double tap
Add symbols: hypen, n dash, m dash
Next tab in Chrome: command + shift + close bracket
Previous tab in Chrome: command + shift + open bracket
Research QMK configuration
Shortcuts for Zoom: mute audio, leave call (Command+W?)
Shift+Arrows for text selection
Screenshots on macOS
Figma-specific layer

*/




#include QMK_KEYBOARD_H
#include <stdio.h>




#define HOME_A LCTL_T(KC_A)
#define HOME_S LOPT_T(KC_S)
#define HOME_D LCMD_T(KC_D)
#define HOME_F LSFT_T(KC_F)
#define HOME_J LSFT_T(KC_J)
#define HOME_K LCMD_T(KC_K)
#define HOME_L LOPT_T(KC_L)
#define HOME_SC LCTL_T(KC_SCLN)

#define LANG_P LCTL(KC_SPC)
#define LANG_N LCTL(LOPT(KC_SPC))
#define EMOJI LCTL(LCMD(KC_SPC))
#define DND HYPR(KC_Z)
#define SPC_L LCTL(KC_LEFT)
#define SPC_R LCTL(KC_RGHT)
#define MCTRL HYPR(KC_V)
#define ALFRD HYPR(KC_S)

#define RBRC_L LSFT(KC_9)
#define RBRC_R LSFT(KC_0)
#define UNDRSC LSFT(KC_MINS)




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(

          KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
          KC_ENT,  HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,                    KC_H,  HOME_J,  HOME_K,  HOME_L, HOME_SC, KC_QUOT,
          KC_TAB,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RCTL,
                                    KC_BSPC, XXXXXXX,   MO(1),                   TO(2),  XXXXXXX, KC_SPC

    ),

  [1] = LAYOUT_split_3x6_3(

             DND, XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX,  LANG_P,                  LANG_N, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC,
         XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT,   EMOJI,                 XXXXXXX,  HOME_J,  HOME_K,  HOME_L, HOME_SC, XXXXXXX,
           ALFRD, XXXXXXX, XXXXXXX,   SPC_L,   MCTRL,   SPC_R,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                    XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX, XXXXXXX

  ),

  [2] = LAYOUT_split_3x6_3(

          KC_GRV, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                 KC_COMM,    KC_7,    KC_8,    KC_9, KC_PLUS, KC_MINS,
          KC_ENT,  HOME_A,  HOME_S,  HOME_D,  HOME_F, KC_QUES,                  KC_DOT,    KC_4,    KC_5,    KC_6, KC_ASTR, KC_SLSH,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_EXLM,                    KC_0,    KC_1,    KC_2,    KC_3,  KC_EQL, KC_BSLS,
                                    _______, XXXXXXX,   TO(0),                   TO(3), XXXXXXX, _______
 
  ),

  [3] = LAYOUT_split_3x6_3(

           RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  RBRC_L,  RBRC_R, XXXXXXX, XXXXXXX, XXXXXXX,  UNDRSC,
         RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                 KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                    _______, XXXXXXX,   TO(0),                 XXXXXXX, XXXXXXX, _______

  )
};