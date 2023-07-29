// Multiple-include optimization. Include a header file only a single time, no matter how many times it has been imported
#pragma once


// Short aliases for layers and priority
enum layers {
    _TXT = 0, // “Text“ input
    _NAV = 1, // Navigation
    _SPE = 2, // Special characters
    _NUM = 4, // Numpad. Should be above “Navigation” layer to be accessible
    _CON = 5, // macOS controls and apps. Should be above other layers to be accessible from any of them
    _NMT = 3, // No Mod-Taps
};


enum custom_keycodes {
    LANG_EN = SAFE_RANGE,
    LANG_UA,
};


// 8-symbol underscores for disabled keys instead of "KC_NO" and "XXXXXXX"
#define ________ KC_NO


//
// Navigation
//

    // Place the insertion point
    #define M_WRD_L  A(KC_LEFT) // To the beginning of the previous word
    #define M_WRD_R  A(KC_RGHT) // To the end of the next word
    #define M_LIN_L  G(KC_LEFT) // To the beginning of the line
    #define M_LIN_R  G(KC_RGHT) // To the end of the line


    // Select text
    #define SSYM_L   S(KC_LEFT) // Select a previous letter
    #define SSYM_R   S(KC_RGHT) // Select a next letter
    #define SWRD_L   S(A(KC_LEFT)) // Select a previous word
    #define SWRD_R   S(A(KC_RGHT)) // Select a next word


//
// Commands
//
#define UNDO     G(KC_Z)       // Undo
#define REDO     G(S(KC_Z))    // Redo
#define CUT      G(KC_X)       // Cut
#define COPY     G(KC_C)       // Copy
#define PASTE    G(KC_V)       // Paste
#define XPASTE   S(G(KC_V))    // Paste and Match Style
#define SELALL   G(KC_A)       // Select all


//
// Special characters
//
#define L_RND    MEH(KC_A)     // Left Parenthesis (round bracket)
#define R_RND    MEH(KC_B)     // Right Parenthesis (round bracket)
#define L_SQR    MEH(KC_C)     // Left Square Bracket
#define R_SQR    MEH(KC_D)     // Right Square Bracket
#define L_CUR    MEH(KC_E)     // Left Curly Bracket (brace)
#define R_CUR    MEH(KC_F)     // Right Curly Bracket (brace)
#define L_ANG    MEH(KC_G)     // Less-Than Sign (left angle bracket) (chevron)
#define R_ANG    MEH(KC_H)     // Greater-Than Sign (right angle bracket) (chevron)
//
#define COMMA    MEH(KC_I)     // Comma
#define PERIOD   MEH(KC_J)     // Period
#define QMARK    MEH(KC_K)     // Question mark
#define EMARK    MEH(KC_L)     // Exclamation mark
#define COLON    MEH(KC_M)     // Colon
#define SMCOLON  MEH(KC_N)     // Semicolon
//
#define APOSTR   MEH(KC_O)               // Apostrophe
#define DQUOT    MEH(KC_P)               // Quotation Mark
#define GACCENT  MEH(KC_Q)               // Grave Accent
#define L_SQM    MEH(KC_R)               // Left Single Quotation Mark
#define R_SQM    MEH(KC_S)               // Right Single Quotation Mark
#define L_DQM    MEH(KC_T)               // Left Double Quotation Mark
#define R_DQM    MEH(KC_U)               // Right Double Quotation Mark
//
#define SLSH     MEH(KC_V)               // Solidus (Slash)
#define BSLSH    MEH(KC_W)               // Reverse Solidus (Backslash)
#define VLINE    MEH(KC_X)               // Vertical Line
#define MSIGN    MEH(KC_Y)               // Multiplication Sign
#define TILDE    MEH(KC_Z)               // Tilde
//
#define HYPHEN   MEH(KC_0)               // Hyphen-Minus (Hyphen)
#define UNDRSC   MEH(KC_1)               // Low Line (Underscore)
#define NDASH    MEH(KC_2)               // En Dash
#define MDASH    MEH(KC_3)               // Em Dash
#define HLINE    MEH(KC_4)               // Horizontal Bar
#define MDOT     MEH(KC_5)               // Middle Dot
#define BUL      MEH(KC_6)               // Bullet
#define WBUL     MEH(KC_7)               // White Bullet
#define DEGREE   MEH(KC_8)               // Degree Sign
#define PRCNT    MEH(KC_9)               // Percent Sign
//
#define DLLR     MEH(KC_MINUS)           // Dollar Sign
#define HRVN     MEH(KC_SLASH)           // Hryvnia Sign
#define ATSGN    MEH(KC_BACKSLASH)       // Commercial At (at sign)
#define NMBR     MEH(KC_EQUAL)           // Number Sign
#define CARET    MEH(KC_LEFT_BRACKET)    // Circumflex Accent (Caret)
#define AMPRD    MEH(KC_RIGHT_BRACKET)   // Ampersand


//
// Home row mods (as Mod-Taps)
//
#define _CTL_A   LCTL_T(KC_A)
#define _SFT_S   LSFT_T(KC_S)
#define _OPT_D   LOPT_T(KC_D)
#define _CMD_F   LCMD_T(KC_F)
#define _CMD_J   RCMD_T(KC_J)
#define _CMD_K   ROPT_T(KC_K)
#define _SFT_L   RSFT_T(KC_L)
#define _CTL_SC  RCTL_T(KC_SCLN)


//
// macOS
//
#define SPTLT    HYPR(KC_N)              // Run Spotlight
#define SS_OPT   S(G(KC_5))              // Screenshot and recording options
#define DND      HYPR(KC_Y)              // Do Not Disturb
//
#define LCKSCR   C(G(KC_Q))              // Lock Screen
#define EMOJI    C(G(KC_SPC))            // Emoji & Symbols


//
// macOS: Mission Control
//
#define MCTRL    C(KC_UP) // Mission Control
#define SPC_L    C(KC_LEFT) // Move left a space
#define SPC_R    C(KC_RGHT) // Move right a space
#define DSKTP3   HYPR(KC_Q) // Switch to Desktop 3
#define DSKTP4   HYPR(KC_W) // Switch to Desktop 4
#define DSKTP5   HYPR(KC_E) // Switch to Desktop 5
#define DSKTP6   HYPR(KC_R) // Switch to Desktop 6
#define DSKTP7   HYPR(KC_T) // Switch to Desktop 7


//
// Chrome
//
#define TAB_L    G(S(KC_LBRC)) // Go to the previous tab
#define TAB_R    G(S(KC_RBRC)) // Go to the next tab