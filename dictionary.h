
// Multiple-include optimization. Include a header file only a single time, no matter how many times it has been imported
#pragma once


// Short aliases for layers and priority
enum layers {
    _TXT = 0,
    _CON = 1,
    _NUM = 2,
    _NAV = 3,
    _SPE = 4,
    _NMT = 5,
};


enum custom_keycodes {
    LANG_EN = SAFE_RANGE,
    LANG_UA,
};


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
#define DND      HYPR(KC_Y) // Do Not Disturb
#define SS_OPT   S(G(KC_5)) // Screenshot and recording options
#define SPTLT    HYPR(KC_N) // Run Spotlight

#define MCTRL    C(KC_UP) // Mission Control
#define SPC_L    C(KC_LEFT) // Move left a space
#define SPC_R    C(KC_RGHT) // Move right a space

#define DSKTP3   HYPR(KC_Q) // Switch to Desktop 3
#define DSKTP4   HYPR(KC_W) // Switch to Desktop 4
#define DSKTP5   HYPR(KC_E) // Switch to Desktop 5
#define DSKTP6   HYPR(KC_R) // Switch to Desktop 6
#define DSKTP7   HYPR(KC_T) // Switch to Desktop 7

#define LCKSCR   C(G(KC_Q)) // Lock Screen
#define NOTIF    HYPR(KC_H) // Show Notification Centre


// Chrome
#define TABL     G(S(KC_LBRC)) // Go to the previous tab
#define TABR     G(S(KC_RBRC)) // Go to the next tab


// Commands
#define UNDO     G(KC_Z) // Undo
#define REDO     G(S(KC_Z)) // Redo
#define CUT      G(KC_X) // Cut
#define COPY     G(KC_C) // Copy
#define PASTE    G(KC_V) // Paste
#define XPASTE   S(G(KC_V)) // Paste and Match Style
#define SELALL   G(KC_A) // Select all


// Special characters
#define L_RND    A(KC_Q) // Left round bracket (parenthes)
#define R_RND    A(KC_A) // Right round bracket (parenthes)
#define L_SQR    A(KC_W) // Left square bracket
#define R_SQR    A(KC_S) // Right square bracket
#define L_ANG    A(KC_E) // Left angle bracket (chevron)
#define R_ANG    A(KC_D) // Right angle bracket (chevron)
#define L_CUR    A(KC_R) // Left curly bracket (brace)
#define R_CUR    A(KC_F) // Right curly bracket (brace)

#define L_SQM    A(KC_Z) // Left Single Quotation Mark
#define R_SQM    A(KC_X) // Right Single Quotation Mark
#define L_DQM    A(KC_C) // Left Double Quotation Mark
#define R_DQM    A(KC_V) // Right Double Quotation Mark

#define PERIOD   A(KC_Y) // Period
#define COMMA    A(KC_H) // Comma
#define COLON    A(KC_U) // Colon
#define SMCOLON  A(KC_J) // Semicolon
#define APOSTR   A(KC_I) // Apostrophe
#define DQUOT    A(KC_K) // Double quote
#define EMARK    A(KC_O) // Exclamation mark
#define QMARK    A(KC_L) // Question mark
#define GACCENT  A(KC_P) // Grave accent
#define TILDE    A(KC_SCLN) // Tilde
#define VLINE    A(KC_LBRC) // Vertical line
#define BUL      A(KC_MINS) // Bullet
#define WBUL     A(KC_B) // White bullet
#define MSIGN    A(KC_EQL) // Multiplication sign
#define HYPHEN   A(KC_1) // Hyphen
#define NDASH    A(KC_2) // En Dash
#define MDASH    A(KC_3) // Em Dash
#define HLINE    A(KC_4) // Horizontal Bar
// #define SLSH     A(KC_T) // Slash
#define BSLSH    A(KC_G) // Backslash
#define ATSGN    S(KC_2) // At sign
#define NMBR     S(KC_3) // Number sign
#define DLLR     S(KC_4) // Dollar sign
#define PRCNT    S(KC_5) // Percent sign
#define CARET    S(KC_6) // Caret
#define AMPRD    S(KC_7) // Ampersand
#define UNDRSC   S(KC_MINS) // Underscore


// Place the insertion point
#define MWRD_L   A(KC_LEFT) // To the beginning of the previous word
#define MWRD_R   A(KC_RGHT) // To the end of the next word
#define MLIN_L   G(KC_LEFT) // To the beginning of the line
#define MLIN_R   G(KC_RGHT) // To the end of the line


// Select text
#define SSYM_L   S(KC_LEFT) // Select a previous letter
#define SSYM_R   S(KC_RGHT) // Select a next letter
#define SWRD_L   S(A(KC_LEFT)) // Select a previous word
#define SWRD_R   S(A(KC_RGHT)) // Select a next word