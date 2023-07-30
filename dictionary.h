// Multiple-include optimization. Include a header file only a single time, no matter how many times it has been imported
#pragma once


// Layers: aliases and priority
enum layers {
    _LET = 0,                                      // Letters
    _NAV = 1,                                      // Navigation
    _SPE = 2,                                      // Special characters
    _NMT = 3,                                      // A layer without mod-taps
    _S01 = 4,                                      // Service layer 1 (new switch to English and Ukrainian)
    _S02 = 5,                                      // Service layer 2 (new switch to English and Ukrainian)
    _NUM = 6,                                      // Numpad. Should be above “Navigation” layer for accessibiIty
    _CON = 7,                                      // macOS shortcuts. Should be above other layers for accessibility from any of them
};


// Language switch: aliases
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
    #define M_WRD_L  A(KC_LEFT)                    // To the beginning of the previous word
    #define M_WRD_R  A(KC_RGHT)                    // To the end of the next word
    #define M_LIN_L  G(KC_LEFT)                    // To the beginning of the line
    #define M_LIN_R  G(KC_RGHT)                    // To the end of the line


    // Select text
    #define SSYM_L   S(KC_LEFT)                    // Select a previous letter
    #define SSYM_R   S(KC_RGHT)                    // Select a next letter
    #define SWRD_L   S(A(KC_LEFT))                 // Select a previous word
    #define SWRD_R   S(A(KC_RGHT))                 // Select a next word

    // Chrome
    #define TAB_L    G(S(KC_LBRC))                 // Go to the previous tab
    #define TAB_R    G(S(KC_RBRC))                 // Go to the next tab


//
// Special characters
//

    //
    #define L_RND    MEH(KC_A)                     // Left Parenthesis (round bracket)
    #define R_RND    MEH(KC_B)                     // Right Parenthesis (round bracket)
    #define L_SQR    MEH(KC_C)                     // Left Square Bracket
    #define R_SQR    MEH(KC_D)                     // Right Square Bracket
    #define L_CUR    MEH(KC_E)                     // Left Curly Bracket (brace)
    #define R_CUR    MEH(KC_F)                     // Right Curly Bracket (brace)
    #define L_ANG    MEH(KC_G)                     // Less-Than Sign (left angle bracket) (chevron)
    #define R_ANG    MEH(KC_H)                     // Greater-Than Sign (right angle bracket) (chevron)

    //
    #define COMMA    MEH(KC_I)                     // Comma
    #define PERIOD   MEH(KC_J)                     // Period
    #define QMARK    MEH(KC_K)                     // Question mark
    #define EMARK    MEH(KC_L)                     // Exclamation mark
    #define COLON    MEH(KC_M)                     // Colon
    #define SMCOLON  MEH(KC_N)                     // Semicolon

    //
    #define APOSTR   MEH(KC_O)                     // Apostrophe
    #define DQUOT    MEH(KC_P)                     // Quotation Mark
    #define GACCENT  MEH(KC_Q)                     // Grave Accent
    #define L_SQM    MEH(KC_R)                     // Left Single Quotation Mark
    #define R_SQM    MEH(KC_S)                     // Right Single Quotation Mark
    #define L_DQM    MEH(KC_T)                     // Left Double Quotation Mark
    #define R_DQM    MEH(KC_U)                     // Right Double Quotation Mark

    //
    #define SOL      MEH(KC_V)                     // Solidus (Slash)
    #define RSOL     MEH(KC_W)                     // Reverse Solidus (Backslash)
    #define VLINE    MEH(KC_X)                     // Vertical Line
    #define MSIGN    MEH(KC_Y)                     // Multiplication Sign
    #define TILDE    MEH(KC_Z)                     // Tilde

    //
    #define HYPHEN   MEH(KC_0)                     // Hyphen-Minus (Hyphen)
    #define UNDRSC   MEH(KC_1)                     // Low Line (Underscore)
    #define NDASH    MEH(KC_2)                     // En Dash
    #define MDASH    MEH(KC_3)                     // Em Dash
    #define HLINE    MEH(KC_4)                     // Horizontal Bar
    #define MDOT     MEH(KC_5)                     // Middle Dot
    #define BUL      MEH(KC_6)                     // Bullet
    #define WBUL     MEH(KC_7)                     // White Bullet
    #define DEGREE   MEH(KC_8)                     // Degree Sign
    #define PRCNT    MEH(KC_9)                     // Percent Sign

    //
    #define DLLR     MEH(KC_MINS)                  // Dollar Sign
    #define HRVN     MEH(KC_SLSH)                  // Hryvnia Sign
    #define ATSGN    MEH(KC_BSLS)                  // Commercial At (at sign)
    #define NMBR     MEH(KC_EQL)                   // Number Sign
    #define CARET    MEH(KC_LBRC)                  // Circumflex Accent (Caret)
    #define AMPRD    MEH(KC_RBRC)                  // Ampersand


//
// Home row mods (as mod-taps)
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
// macOS shortcuts
//

    //
    #define SPTLT    MEH(KC_PPLS)                  // Run Spotlight
    #define SS_OPT   MEH(KC_PMNS)                  // Screenshot and recording options
    #define DND      MEH(KC_PAST)                  // Do Not Disturb

    //
    #define LCKSCR   C(G(KC_Q))                    // Lock Screen. Not reassignable
    #define EMOJI    C(G(KC_SPC))                  // Emoji & Symbols. Not reassignable

    // Mission Control
    #define MCTRL    MEH(KC_KP_0)                  // Mission Control
    #define SPC_L    MEH(KC_KP_1)                  // Move left a space
    #define SPC_R    MEH(KC_KP_2)                  // Move right a space
    #define DSKTP1   MEH(KC_KP_3)                  // Switch to Desktop 1
    #define DSKTP2   MEH(KC_KP_4)                  // Switch to Desktop 2
    #define DSKTP3   MEH(KC_KP_5)                  // Switch to Desktop 3
    #define DSKTP4   MEH(KC_KP_6)                  // Switch to Desktop 4
    #define DSKTP5   MEH(KC_KP_7)                  // Switch to Desktop 5

    //
    #define UNDO     G(KC_Z)                       // Undo
    #define REDO     G(S(KC_Z))                    // Redo
    #define CUT      G(KC_X)                       // Cut
    #define COPY     G(KC_C)                       // Copy
    #define PASTE    G(KC_V)                       // Paste
    #define XPASTE   S(G(KC_V))                    // Paste and Match Style
    #define SELALL   G(KC_A)                       // Select all