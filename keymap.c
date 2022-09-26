// Include keyboard-specific headers instead of <keyboard.h>
#include QMK_KEYBOARD_H

// Include headers for the keymap
#include "keymap.h"

#include "advanced.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Main
    [_MAI] = LAYOUT_split_3x6_3(

            RSQM,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
           COMMA,   A_CTL,   S_SFT,   D_OPT,   F_CMD,    KC_G,                    KC_H,   J_CMD,   K_OPT,   L_SFT,  SC_CTL,  PERIOD,
           QMARK,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   EMARK,
                                          KC_BSPC,MO(_CON),  KC_SPC,     KC_BSPC, _______,  KC_DEL

    ),

    // macOS controls and apps
    [_CON] = LAYOUT_split_3x6_3(

         KC_VOLU,    REDO,   SPC_L,   MCTRL,   SPC_R,   ALFRD,                  SS_OPT, MET_MIC, MET_CAM, MET_ALL, _______, KC_BRIU,
         KC_VOLD,  SELALL,  KC_ESC,  KC_TAB,  KC_ENT,   EMOJI,                 _______, KC_RCMD, KC_ROPT, KC_RSFT, KC_RCTL, KC_BRID,
         KC_MUTE,    UNDO,     CUT,    COPY,   PASTE,  PASTEX,                     DND, MET_HND, _______, _______, _______,  LCKSCR,
                                          _______, _______, _______,     _______, _______, _______

    ),

    // Numpad       
    [_NUM] = LAYOUT_split_3x6_3(

         KC_PAST, KC_PPLS,    KC_9,    KC_8,    KC_7,   COMMA,                 _______, _______, _______, _______, _______, _______,
         KC_PEQL,    KC_3,    KC_2,    KC_1,    KC_0,  PERIOD,                 _______, KC_RCMD, KC_ROPT, KC_RSFT, KC_RCTL, _______,
         KC_PSLS, KC_PMNS,    KC_6,    KC_5,    KC_4, KC_PENT,                 _______, _______, _______, _______, _______, _______,
                                          KC_BSPC,MO(_CON),  KC_SPC,     KC_BSPC, _______, KC_DEL

    ),

    // Navigation
    [_NAV] = LAYOUT_split_3x6_3(

           RESET,  SWRD_L,  MWRD_L,   KC_UP,  MWRD_R,  SWRD_R,                 _______, KC_LBRC, KC_RBRC, _______, _______, _______,
         _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP,                 _______, KC_LCMD, KC_LOPT, KC_LSFT, KC_LCTL, _______,
         _______,  KC_END,  MLIN_L, _______,  MLIN_R, KC_PGDN,                 _______, _______, _______, _______, _______, _______,
                                          KC_BSPC,MO(_CON),  KC_SPC,     KC_BSPC, _______, KC_DEL

    ),

    // Special characters
    [_SPE] = LAYOUT_split_3x6_3(

         GACCENT,   TILDE,   MDASH,   L_SQR,   R_SQR,   PRCNT,                    NMBR,   L_CUR,   R_CUR, _______,  APOSTR,   DQUOT,
         _______,   HLINE,   NDASH,   L_RND,   R_RND,   ATSGN,                   CARET,   L_ANG,   R_ANG, _______,   COLON, SMCOLON,
         _______,   VLINE,  BULLET,   MSIGN, KC_PSLS,   AMPRD,                    DLLR,   BSLSH,  UNDRSC, _______, _______, _______,
                                          KC_BSPC,MO(_CON),  KC_SPC,     KC_BSPC, _______, KC_DEL

    ),

    // Games without Mod-Tap
    [_GAM] = LAYOUT_split_3x6_3(

            RSQM,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
           COMMA,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  PERIOD,
         _______,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, _______,
                                          KC_BSPC,MO(_CON),  KC_SPC,     KC_BSPC, _______, KC_DEL

    )

};
