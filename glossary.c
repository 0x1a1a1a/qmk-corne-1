// Home row mods (as Mod-Taps)
#define HOME_A   LCTL_T(KC_A)
#define HOME_S   LSFT_T(KC_S)
#define HOME_D   LOPT_T(KC_D)
#define HOME_F   LCMD_T(KC_F)
#define HOME_J   LCMD_T(KC_J)
#define HOME_K   LOPT_T(KC_K)
#define HOME_L   LSFT_T(KC_L)
#define HOME_SC  LCTL_T(KC_SCLN)


// Modifiers
// C(kc)         Hold Left Control and press kc
// S(kc)         Hold Left Shift and press kc
// A(kc)         Hold Left Alt and press kc
// G(kc)         Hold Left GUI and press kc


#define EMOJI    C(G(KC_SPC)) // macOS: Shortcut for Emoji&Symbols
#define DND      HYPR(KC_Z) // macOS: Shortcut for Do Not Disturb
#define ALFRD    HYPR(KC_S) // macOS: Shortcut for Alfred
#define SS_OPT   S(G(KC_5)) // macOS: Shortcut for screenshot and recording options
#define MCTRL    C(KC_UP) // macOS: Shortcut for Mission Control
#define SPC_L    C(KC_LEFT) // macOS: Shortcut for move left a space
#define SPC_R    C(KC_RGHT) // macOS: Shortcut for move right a space


#define UNDO     G(KC_Z) // Undo
#define REDO     G(S(KC_Z)) // Redo
#define CUT      G(KC_X) // Cut
#define COPY     G(KC_C) // Copy
#define PASTE    G(KC_V) // Paste


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


#define SLSH     A(KC_T) // Slash
#define BSLSH    A(KC_G) // Backslash
#define ATSGN    S(KC_2) // At sign
#define NMBR     S(KC_3) // Number sign
#define DLLR     S(KC_4) // Dollar sign
#define PRCNT    S(KC_5) // Percent sign
#define CARET    S(KC_6) // Caret
#define AMPRD    S(KC_7) // Ampersand
#define UNDRSC   S(KC_MINS) // Underscore


#define MWRD_L   A(KC_LEFT) // Move the insertion point to the beginning of the previous word
#define MWRD_R   A(KC_RGHT) // Move the insertion point to the end of the next word


// #define TEST 0x10 // m, key code 46




/*
    // EMPTY TEMPLATE
    [N] = LAYOUT_split_3x6_3(

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX

    ),
*/