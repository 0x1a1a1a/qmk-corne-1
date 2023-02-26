// Combos



// Left half
const uint16_t PROGMEM arrows[] = {KC_W, KC_E, COMBO_END};
// const uint16_t PROGMEM en[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM navigation[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM special[] = {KC_Z, KC_X, COMBO_END};
// const uint16_t PROGMEM ua[] = {KC_C, KC_V, COMBO_END};


// Right half
const uint16_t PROGMEM numpad[] = {KC_M, KC_KC_COMMA, COMBO_END};
const uint16_t PROGMEM games[] = {KC_U, KC_I, COMBO_END};



combo_t key_combos[COMBO_COUNT] = {
    // COMBO(en, LANG_EN), // Switch to Layer: MAI + English layout
    // COMBO(ua, LANG_UA), // Switch to Layer: MAI + Ukrainian layout
    COMBO(numpad, TO(_NUM)), // Switch to Layer: NUM
    COMBO(navigation, TO(_NAV)), // Switch to Layer: NAV
    COMBO(special, TO(_SPE)), // Switch to Layer: SPE
    COMBO(games, TO(_GAM)), // Switch to Layer: GAM
};