#include QMK_KEYBOARD_H
#include <stdio.h>



// Home row mods (as Mod-Taps)
#define HOME_A LCTL_T(KC_A)
#define HOME_S LSFT_T(KC_S)
#define HOME_D LOPT_T(KC_D)
#define HOME_F LCMD_T(KC_F)
#define HOME_J LCMD_T(KC_J)
#define HOME_K LOPT_T(KC_K)
#define HOME_L LSFT_T(KC_L)
#define HOME_SC LCTL_T(KC_SCLN)

#define LANG LCTL(LOPT(KC_SPC)) // macOS: Select next source in Input menu
#define EMOJI LCTL(LCMD(KC_SPC)) // macOS: Shortcut for Emoji&Symbols
#define DND HYPR(KC_Z) // macOS: Shortcut for Do Not Disturb
#define SPC_L LCTL(KC_LEFT) // macOS: Shortcut for move right a space
#define SPC_R LCTL(KC_RGHT) // macOS: Shortcut for move left a space
#define MCTRL HYPR(KC_V) // macOS: Shortcut for Mission Control
#define ALFRD HYPR(KC_S) // macOS: Shortcut for Alfred
#define ONEP HYPR(KC_T) // macOS: Shortcut for 1Password

#define RDBRC_L LSFT(KC_9) // Left round bracket
#define RDBRC_R LSFT(KC_0) // Right round bracket
#define UNDRSC LSFT(KC_MINS) // Underscore
#define NDASH LOPT(KC_MINS) // En dash
#define MDASH LSFT(LOPT(KC_MINS)) // Em dash
#define D_QUOT LSFT(KC_QUOT) // Double quote
#define COLON LSFT(KC_SCLN) // Colon
#define ATSGN LSFT(KC_2) // At sign
#define NMBR LSFT(KC_3) // Number sign
#define DLLR LSFT(KC_4) // Dollar sign
#define PRCNT LSFT(KC_5) // Percent sign
#define CARET LSFT(KC_6) // Caret
#define AMPRD LSFT(KC_7) // Ampersand

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
#define CYR_QT LOPT(KC_O) // Cyrillic: Quote
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
                                      TO(1),  KC_SPC,   TO(2),           TO(3), KC_BSPC,   TO(4)

    ),

    // LEFT SIDE MOD: Special characters (CYR)
    [1] = LAYOUT_split_3x6_3(

          KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          CYR_PD,  KC_GRV,  CYR_KH,  CYR_II,  CYR_II, XXXXXXX,
         XXXXXXX, XXXXXXX, RDBRC_L,CYR_EXLM,CYR_QUES, RDBRC_R,          CYR_CM, KC_MINS,   NDASH,   MDASH,   CYR_E, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         CYR_CLN,CYR_SCLN,  CYR_QT, CYR_DQT,  UNDRSC, XXXXXXX,
                                      TO(0),  KC_SPC,   TO(0),         XXXXXXX, KC_BSPC, XXXXXXX

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

          KC_ESC,   TAB_P,   TAB_N,   KC_UP,    ONEP,   ALFRD,             DND, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE,
         XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT,   EMOJI,         XXXXXXX,  HOME_J,  HOME_K,  HOME_L, HOME_SC, KC_VOLU,
         XXXXXXX, XXXXXXX, XXXXXXX,   SPC_L,   MCTRL,   SPC_R,          SS_OPT,  SS_C_A,  SS_C_S,  SS_F_A,  SS_F_S, KC_VOLD,
                                     KC_ENT,  KC_SPC,   TO(0),            LANG, KC_BSPC,  KC_TAB

    ),
    
    // RIGHT SIDE MOD: Numpad
    [3] = LAYOUT_split_3x6_3(

          KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ASTR,         KC_PLUS,    KC_7,    KC_8,    KC_9, XXXXXXX, XXXXXXX,
         XXXXXXX,  HOME_A,  HOME_S,  HOME_D,  HOME_F, KC_SLSH,         KC_MINS,    KC_4,    KC_5,    KC_6, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_EQL,            KC_0,    KC_1,    KC_2,    KC_3, XXXXXXX, XXXXXXX,
                                    XXXXXXX,  KC_SPC,   TO(0),           TO(0), KC_BSPC, KC_COMM

    ),

    // RIGHT SIDE MOD: Special characters (EN)
    [4] = LAYOUT_split_3x6_3(

          KC_ESC,   DLLR, KC_LBRC,    ATSGN,    NMBR, KC_RBRC,          KC_DOT,  KC_GRV, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS,
         XXXXXXX,   CARET, RDBRC_L, KC_EXLM, KC_QUES, RDBRC_R,         KC_COMM, KC_MINS,   NDASH,   MDASH, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, KC_LCBR,   PRCNT,   AMPRD, KC_RCBR,           COLON, KC_SCLN, KC_QUOT,  D_QUOT,  UNDRSC, XXXXXXX,
                                    XXXXXXX,  KC_SPC,   TO(0),         XXXXXXX, KC_BSPC,   TO(0)
    )

};




// Mod-Tap: Cut, Copy and Paste with hold
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(0,KC_X):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(G(KC_X));
                return false;
            }
            return true;
        case LT(0,KC_C):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(G(KC_C));
                return false;
            }
            return true;
        case LT(0,KC_V):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(G(KC_V));
                return false;
            }
            return true;
    }
    return true;
};


enum {
    CT_SE,
    CT_CLN,
    CT_EGG,
    CT_FLSH,
    X_TAP_DANCE
};

void dance_cln_finished(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code16(KC_COLN);
    } else {
        register_code(KC_SCLN);
    }
}

void dance_cln_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code16(KC_COLN);
    } else {
        unregister_code(KC_SCLN);
    }
}

// All tap dance functions would go here. Only showing this one.
qk_tap_dance_action_t tap_dance_actions[] = {
    [CT_CLN] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_cln_finished, dance_cln_reset),
};