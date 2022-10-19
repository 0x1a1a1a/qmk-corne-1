
// Multiple-include optimization. Include a header file only a single time, no matter how many times it has been imported
#pragma once


// Layers aliases
enum layers {
    _MAI = 0,
    _NUM,
    _NAV,
    _SPE,
    _GAM,
    _CON,
};


enum custom_keycodes {
	// Language layouts switchers
    LANG_EN = SAFE_RANGE,
    LANG_UA,
};



// 2-symbol underscores for disabled keys instead of "KC_NO" and "XXXXXXX"
#define __       KC_NO


// Home row mods (as Mod-Taps)
#define A_CTL    LCTL_T(KC_A)
#define S_SFT    LSFT_T(KC_S)
#define D_OPT    LOPT_T(KC_D)
#define F_CMD    LCMD_T(KC_F)
#define J_CMD    LCMD_T(KC_J)
#define K_OPT    LOPT_T(KC_K)
#define L_SFT    LSFT_T(KC_L)
#define SC_CTL   LCTL_T(KC_SCLN)


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


//macOS: Google Meet contols
#define MET_MIC  HYPR(KC_U) // Toggle microphone
#define MET_CAM  HYPR(KC_I) // Toggle camera
#define MET_ALL  HYPR(KC_O) // Toggle microphone and camera
#define MET_HND  HYPR(KC_M) // Raise hand


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
#define PERIOD   A(KC_Y) // Period
#define COMMA    A(KC_H) // Comma
#define COLON    A(KC_U) // Colon
#define SMCOLON  A(KC_J) // Semicolon
#define APOSTR   A(KC_I) // Apostrophe
#define DQUOT    A(KC_K) // Double quote
#define RSQM     A(KC_8) // Right Single Quotation Mark
#define EMARK    A(KC_O) // Exclamation mark
#define QMARK    A(KC_L) // Question mark
#define GACCENT  A(KC_P) // Grave accent
#define TILDE    A(KC_SCLN) // Tilde
#define VLINE    A(KC_LBRC) // Vertical line
#define BULLET   A(KC_MINS) // Bullet
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
#define SWRD_L   S(A(KC_LEFT)) // Previous word
#define SWRD_R   S(A(KC_RGHT)) // Next word