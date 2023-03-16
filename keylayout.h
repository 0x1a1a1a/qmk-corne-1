
// Multiple-include optimization. Include a header file only a single time, no matter how many times it has been imported
#pragma once


// Short aliases for layers and priority
enum layers {
    _ENG = 0,
    _UKR = 1,
    _NAV = 2,
    _SPE = 3,
    _GAM = 4,
    _CON = 5,
    _NUM = 6,
};


enum custom_keycodes {
    LANG_EN = SAFE_RANGE,
    LANG_UA,
    CTAB0,
};


// Advanced Command+Tab
bool is_cmdtab1_active = false;
bool is_cmdtab2_active = false;
uint16_t cmdtab1_timer = 0;
uint16_t cmdtab2_timer = 0;
bool in_tab = false;


// Full aliases for layers
#define __CNTRL  MO(_CON)
#define __NMBRS  MO(_NUM)


// 8-symbol underscores for disabled keys instead of "KC_NO" and "XXXXXXX"
#define ________ KC_NO


// Home row mods (as Mod-Taps)
#define _CTL_A   LCTL_T(KC_A)
#define _SFT_S   LSFT_T(KC_S)
#define _OPT_D   LOPT_T(KC_D)
#define _CMD_F   LCMD_T(KC_F)
#define _CMD_J   RCMD_T(KC_J)
#define _CMD_K   ROPT_T(KC_K)
#define _SFT_L   RSFT_T(KC_L)
#define _CTL_SC  RCTL_T(KC_SCLN)


// macOS
#define EMOJI    C(G(KC_SPC)) // Emoji & Symbols
#define DND      HYPR(KC_N) // Do Not Disturb
#define ALFRD    HYPR(KC_S) // Alfred
#define SS_OPT   S(G(KC_5)) // Screenshot and recording options
#define MCTRL    C(KC_UP) // Mission Control
#define SPC_L    C(KC_LEFT) // Move left a space
#define SPC_R    C(KC_RGHT) // Move right a space
#define LCKSCR   C(G(KC_Q)) // Lock Screen
#define NOTIF    HYPR(KC_H) // Show Notification Centre


// Letters: English
#define UA_A     S(KC_F17)
#define UA_B     S(KC_PDOT)
#define UA_V     S(KC_PAST)
#define UA_G     S(KC_PPLS) 
#define UA_GG    S(KC_NUM) 
#define UA_D     S(KC_PSLS)
#define UA_E     S(KC_PENT)
#define UA_JE    S(KC_PMNS)
#define UA_ZH    S(KC_F18)
#define UA_Z     S(KC_F19)
#define UA_Y     S(KC_PEQL)
#define UA_I     S(KC_P0)
#define UA_JI    S(KC_P1)
#define UA_J     S(KC_P2)
#define UA_K     S(KC_P3)
#define UA_L     S(KC_P4)
#define UA_M     S(KC_P5)
#define UA_N     S(KC_P6)
#define UA_O     S(KC_P7)
#define UA_P     S(KC_F20)
#define UA_R     S(KC_P8)
#define UA_S     S(KC_P9)
#define UA_T     S(KC_F5)
#define UA_U     S(KC_F6)
#define UA_F     S(KC_F7)
#define UA_H     S(KC_F3)
#define UA_C     S(KC_F8)
#define UA_CH    S(KC_F9)
#define UA_SH    S(KC_F11)
#define UA_SHCH  S(KC_F13)
#define UA_MZ    S(KC_F16)
#define UA_JU    S(KC_F14)
#define UA_JA    S(KC_F10)




// Commands
#define UNDO     G(KC_Z) // Undo
#define REDO     G(S(KC_Z)) // Redo
#define CUT      G(KC_X) // Cut
#define COPY     G(KC_C) // Copy
#define PASTE    G(KC_V) // Paste
#define XPASTE   S(G(KC_V)) // Paste and Match Style
#define SELALL   G(KC_A) // Select all


// Special characters
#define L_RND    KC_F10  // Left round bracket (parenthes)
#define R_RND    KC_F11  // Right round bracket (parenthes)
#define L_SQR    KC_LBRC // Left square bracket
#define R_SQR    KC_RBRC // Right square bracket
#define L_ANG    KC_F18  // Left angle bracket (chevron)
#define R_ANG    KC_F19  // Right angle bracket (chevron)
#define L_CUR    KC_F4   // Left curly bracket (brace)
#define R_CUR    KC_F5   // Right curly bracket (brace)
#define PERIOD   KC_DOT  // Period
#define COMMA    KC_COMM // Comma
#define COLON    KC_PPLS // Colon
#define SMCOLON  KC_PMNS // Semicolon
#define APOSTR   KC_QUOT // Apostrophe
#define DQUOT    KC_F6   // Double quote
#define RSQM     KC_F7   // Right Single Quotation Mark
#define EMARK    KC_END  // Exclamation mark
#define QMARK    KC_HOME // Question mark
#define GACCENT  KC_GRV  // Grave accent
#define TILDE    KC_F1   // Tilde
#define VLINE    KC_PSLS // Vertical line
#define BULLET   KC_F9   // Bullet
#define MSIGN    KC_F8   // Multiplication sign
#define HYPHEN   KC_MINS // Hyphen
#define NDASH    KC_PGUP // En Dash
#define MDASH    KC_PGDN // Em Dash
#define HLINE    KC_PAST // Horizontal Bar
// #define SLSH     A(KC_T) // Slash
#define BSLSH    KC_BSLS // Backslash
#define ATSGN    KC_F12  // At sign
#define NMBR     KC_F3   // Number sign
#define DLLR     KC_F15  // Dollar sign
#define EURO     KC_F16  // Euro Sign
#define GRN      KC_F17  // Hryvnia Sign
#define PRCNT    KC_F2   // Percent sign
#define CARET    KC_F13  // Caret
#define AMPRD    KC_F14  // Ampersand
#define UNDRSC   KC_F20  // Underscore


// Place the insertion point
#define MWRD_L   A(KC_LEFT) // To the beginning of the previous word
#define MWRD_R   A(KC_RGHT) // To the end of the next word
#define MLIN_L   G(KC_LEFT) // To the beginning of the line
#define MLIN_R   G(KC_RGHT) // To the end of the line


// Select text
#define SWRD_L   S(A(KC_LEFT)) // Previous word
#define SWRD_R   S(A(KC_RGHT)) // Next word