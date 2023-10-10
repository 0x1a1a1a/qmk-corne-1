//
// Keymap
// Location: /repos/qmk_firmware/keyboards/crkbd/keymaps/qmk-corne-1
//


// Include keyboard-specific headers instead of <keyboard.h>
#include QMK_KEYBOARD_H


// Include headers and other components
#include "dictionary.h"
#include "macros.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    // Letters
    [_LTR] = LAYOUT_split_3x6_3(

           R_SQM,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
           COMMA,  _CTL_A,  _SFT_S,  _OPT_D,  _CMD_F,    KC_G,                    KC_H,  _CMD_J,  _CMD_K,  _SFT_L, _CTL_SC,  PERIOD,
           QMARK,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   EMARK,
                                           LTR_EN,TO(_CTL),  KC_SPC,     KC_BSPC,TO(_CTR),  LTR_UA

    ),


    // Navigation
    [_NAV] = LAYOUT_split_3x6_3(

        ________, M_LIN_L, M_WRD_L,   KC_UP, M_WRD_R, M_LIN_R,                ________,________,________,________,________,________,
        ________,________, KC_LEFT, KC_DOWN, KC_RGHT,________,                ________, KC_LCMD, KC_LOPT, KC_LSFT, KC_LCTL,________,
        ________,  SWRD_L,  SSYM_L,________,  SSYM_R,  SWRD_L,                ________,________,________,________,________,________,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // Special characters
    [_SPC] = LAYOUT_split_3x6_3(

         GACCENT,   L_CUR,   R_CUR,   L_SQM,   R_SQM,    RSOL,                    MDOT,   DQUOT,   COLON,   PRCNT,   CARET,   NDASH,
           TILDE,   L_SQR,   R_SQR,   L_RND,   R_RND,     SOL,                     BUL,  APOSTR, SMCOLON,   ATSGN,    NMBR,   MDASH,
           HLINE,   L_ANG,   R_ANG,   L_DQM,   R_DQM,   VLINE,                    WBUL,  UNDRSC,   AMPRD,    DLLR,    HRVN,   MSIGN,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // Without mod-taps
    [_NMT] = LAYOUT_split_3x6_3(

           R_SQM,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
           COMMA,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  PERIOD,
           QMARK,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   EMARK,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // Numpad
    [_NUM] = LAYOUT_split_3x6_3(

        ________,________,________,________,________,________,                 KC_PPLS,    KC_7,    KC_8,    KC_9,   COMMA, KC_PAST,
        ________, KC_RCTL, KC_RSFT, KC_ROPT, KC_RCMD,________,                 KC_PMNS,    KC_0,    KC_1,    KC_2,    KC_3, KC_PSLS,
        ________,________,________,________,________,________,                ________,    KC_4,    KC_5,    KC_6,  PERIOD, KC_PEQL,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // Controls left
    [_CTL] = LAYOUT_split_3x6_3(

         KC_VOLU,    REDO,    HIDE,   MCTRL,TO(_NAV),   RCAST,                ________,________,________,________,________, KC_BRIU,
         KC_VOLD,  SELALL,  KC_ESC,  KC_TAB,  KC_ENT,   EMOJI,                ________, KC_RCMD, KC_ROPT, KC_RSFT, KC_RCTL, KC_BRID,
             DND,    UNDO,     CUT,    COPY,   PASTE,  XPASTE,                ________,________,________,________,________,________,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // Controls right
    [_CTR] = LAYOUT_split_3x6_3(

        ________,________,________,________,________,________,                ________,TO(_SPC),   TAB_L,   TAB_R,________,________,
        ________,________,________,________,________,________,                  SS_OPT,TO(_NUM),________,________,________,________,
        ________,________,________,________,________,________,                  KC_DEL, LTR_CMD, LTR_OPT, LTR_SFT, LTR_CTL,________,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


};