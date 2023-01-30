// Include keyboard-specific headers instead of <keyboard.h>
#include QMK_KEYBOARD_H

// Include headers for the keymap
#include "advanced.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {




    // Main
    [_MAI] = LAYOUT_split_3x6_3(

          HYPHEN,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    RSQM,
           COMMA,  _CTL_A,  _SFT_S,  _OPT_D,  _CMD_F,    KC_G,                    KC_H,  _CMD_J,  _CMD_J,  _SFT_L, _CTL_SC,  PERIOD,
           /* QMARK */,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   EMARK,
                                          LANG_EN, __CNTRL,  KC_SPC,     KC_BSPC, __NMBRS, LANG_UA

    ),




    // macOS controls and apps
    [_CON] = LAYOUT_split_3x6_3(

         KC_MUTE,    REDO,   SPC_L,   MCTRL,   SPC_R,   ALFRD,                  SS_OPT,________,________,________,________,  LCKSCR,
         KC_VOLU,  SELALL,  KC_ESC,  KC_TAB,  KC_ENT,   EMOJI,                   NOTIF, KC_RCMD, KC_ROPT, KC_RSFT, KC_RCTL, KC_BRIU,
         KC_VOLD,    UNDO,     CUT,    COPY,   PASTE,  XPASTE,                     DND,________,________,________, KC_CAPS, KC_BRID,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),




    // Numpad       
    [_NUM] = LAYOUT_split_3x6_3(

        ________,________,________,________,________,________,                 KC_PPLS,    KC_7,    KC_8,    KC_9,   COMMA, KC_PAST,
        ________, KC_RCTL, KC_RSFT, KC_ROPT, KC_RCMD,________,                 KC_PMNS,    KC_0,    KC_1,    KC_2,    KC_3, KC_PSLS,
        ________,________,________,________,________,________,                ________,    KC_4,    KC_5,    KC_6,  PERIOD, KC_PEQL,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),




    // Navigation
    [_NAV] = LAYOUT_split_3x6_3(

           RESET,  SWRD_L,  MWRD_L,   KC_UP,  MWRD_R,  SWRD_R,                ________, KC_LBRC, KC_RBRC,________,________,________,
        ________, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP,                ________, KC_LCMD, KC_LOPT, KC_LSFT, KC_LCTL,________,
        ________,  KC_END,  MLIN_L,________,  MLIN_R, KC_PGDN,                ________,________,________,________,________,________,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),




    // Special characters
    [_SPE] = LAYOUT_split_3x6_3(

         GACCENT,   TILDE,________,   L_SQR,   R_SQR,   PRCNT,                    NMBR,   L_CUR,   R_CUR,________,  APOSTR,   DQUOT,
           HLINE,   MSIGN,  BULLET,   L_RND,   R_RND,   ATSGN,                   CARET,   L_ANG,   R_ANG,________,   COLON, SMCOLON,
           VLINE,________,________,   MDASH,   NDASH,   AMPRD,                    DLLR,   BSLSH,  UNDRSC,________,________,________,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),




    // Games without Mod-Tap
    [_GAM] = LAYOUT_split_3x6_3(

          HYPHEN,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    RSQM,
           COMMA,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  PERIOD,
        ________,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,________,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    )




};
