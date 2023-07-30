// Combos


const uint16_t PROGMEM navigation[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM numpad[] = {KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM special[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM nomodtap[] = {KC_U, KC_I, COMBO_END};

// v1: const uint16_t PROGMEM lockscreen[] = {__CNTRL, __NMBRS, COMBO_END};
// v2:
const uint16_t PROGMEM lockscreen[] = {MO(_CON), MO(_NUM), COMBO_END};

// v1: const uint16_t PROGMEM mute[] = {LANG_EN, LANG_UA, COMBO_END};
// v2:
const uint16_t PROGMEM mute[] = {TO(_TXT), TO(_TXT), COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
    COMBO(navigation, TO(_NAV)), // Switch to Layer: NAV
    COMBO(numpad, TO(_NUM)), // Switch to Layer: NUM
    COMBO(special, TO(_SPE)), // Switch to Layer: SPE
    COMBO(nomodtap, TO(_NMT)), // Switch to Layer: NMT

    COMBO(lockscreen, LCKSCR), // Enable the Lock Screen function
    COMBO(mute, KC_MUTE), // Enable Mute/Unmute function
};