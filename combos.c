//
// Combos
//


const uint16_t PROGMEM navigation[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM numpad[] = {KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM special[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM nomodtap[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM lockscreen[] = {TO(_CTR), TO(_NUM), COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
    COMBO(navigation, TO(_NAV)), // Switch to Layer: NAV
    COMBO(numpad, TO(_NUM)), // Switch to Layer: NUM
    COMBO(special, TO(_SPC)), // Switch to Layer: SPE
    COMBO(nomodtap, TO(_NMT)), // Switch to Layer: NMT
    COMBO(lockscreen, LCKSCR), // Enable the Lock Screen function
};