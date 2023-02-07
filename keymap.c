// Include keyboard-specific headers instead of <keyboard.h>
#include QMK_KEYBOARD_H


// Include headers for the keymap
#include "dictionary.h"
#include "macros.c"
#include "combos.c"
#include "tapdance.c"




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    // English layout
    [_ENG] = LAYOUT_split_3x6_3(

          HYPHEN,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  R_SQM,
           COMMA,  _CTL_A,  _SFT_S,  _OPT_D,  _CMD_F,    KC_G,                    KC_H,  _CMD_J,  _CMD_K,  _SFT_L, _CTL_SC,  PERIOD,
           QMARK,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   EMARK,
                                          LANG_EN,TD(__CN),  KC_SPC,     KC_BSPC, __NMBRS, LANG_UA

    ),


//     // Ukrainian layout
//     [_UKR] = LAYOUT_split_3x6_3(
// 
//           HYPHEN,   UA_JU,   UA_MZ,    UA_U,    UA_E,   UA_CH,                    UA_H,    UA_P,    UA_K,    UA_D,   UA_SH,    RSQM,
//            COMMA,   UA_JI,    UA_I,    UA_A,    UA_N,    UA_G,                    UA_Z,    UA_O,    UA_V,    UA_Y,    UA_C,  PERIOD,
//            QMARK,   UA_ZH,   UA_JA,    UA_M,    UA_S,    UA_J,                    UA_N,    UA_T,    UA_L,    UA_P,   UA_JE,   EMARK,
//                                           LANG_EN, __CNTRL,  KC_SPC,     KC_BSPC, __NMBRS, LANG_UA
// 
//     ),


    // macOS controls and apps
    [_CON] = LAYOUT_split_3x6_3(

         KC_MUTE,    REDO,   SPC_L,   MCTRL,   SPC_R,   ALFRD,                  SS_OPT,________,________,________,________,  LCKSCR,
         KC_VOLU,  SELALL,  KC_ESC,  KC_TAB,  KC_ENT,   EMOJI,                   NOTIF, KC_RCMD, KC_ROPT, KC_RSFT, KC_RCTL, KC_BRIU,
         KC_VOLD,    UNDO,     CUT,    COPY,   PASTE,   CTAB0,                     DND,________,________,________, KC_CAPS, KC_BRID,
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

         KC_PGUP, KC_HOME,  MWRD_L,   KC_UP,  MWRD_R,  KC_END,                ________, KC_LBRC, KC_RBRC,________,________,   RESET,
         KC_PGDN,  SWRD_L, KC_LEFT, KC_DOWN, KC_RGHT,  SWRD_R,                ________, KC_LCMD, KC_LOPT, KC_LSFT, KC_LCTL,________,
        ________,________,  MLIN_L,________,  MLIN_R,________,                ________,________,________,________,________,________,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // Special characters
    [_SPE] = LAYOUT_split_3x6_3(

           L_SQM, GACCENT,   TILDE,   DQUOT,  APOSTR,   PRCNT,                    NMBR,   COLON, SMCOLON,    WBUL,   MDASH,   R_SQM,
           L_DQM,   L_CUR,   L_ANG,   L_SQR,   L_RND,   ATSGN,                   CARET,   R_RND,   R_SQR,   R_ANG,   R_CUR,   R_DQM,
          UNDRSC,   VLINE,________, KC_PSLS,     BUL,   AMPRD,                    DLLR,    WBUL,   BSLSH,   HLINE,   MDASH,   NDASH,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    ),


    // Games without Mod-Tap
    [_GAM] = LAYOUT_split_3x6_3(

          HYPHEN,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   R_SQM,
           COMMA,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  PERIOD,
        ________,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,________,
                                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS

    )


};
