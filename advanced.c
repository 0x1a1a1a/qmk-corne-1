bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {


    case LANG_EN:
        if (record->event.pressed) {
            register_code16(LCMD(LOPT(LSFT(LCTL(KC_V)))));
        }
        else {
            unregister_code16(LCMD(LOPT(LSFT(LCTL(KC_V)))));
            layer_move(_MAI);
        }
        break;


    case LANG_UA:
        if (record->event.pressed) {
            register_code16(LCMD(LOPT(LSFT(LCTL(KC_C)))));
        }
        else {
            unregister_code16(LCMD(LOPT(LSFT(LCTL(KC_C)))));
            layer_move(_MAI);
        }
        break;


    case APP_NTS:
        if (record->event.pressed) {
            register_code16(LCMD(LOPT(LSFT(LCTL(KC_S)))));
            _delay_ms(1000);
            SEND_STRING(SS_DELAY(2000) "notes" SS_DELAY(2000) SS_TAP(X_ENT));
        }
        else {
            unregister_code16(LCMD(LOPT(LSFT(LCTL(KC_S)))));
        }
        break;

    }

    return true;
};




const uint16_t PROGMEM en[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM ua[] = {KC_C, KC_V, COMBO_END};

const uint16_t PROGMEM numpad[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM navigation[] = {KC_W, KC_E, COMBO_END};

const uint16_t PROGMEM special[] = {KC_Z, KC_X, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
    COMBO(en, LANG_EN), // Switch to Layer: MAI + English layout
    COMBO(ua, LANG_UA), // Switch to Layer: MAI + Ukrainian layout
    COMBO(numpad, TO(_NUM)), // Switch to Layer: NUM
    COMBO(navigation, TO(_NAV)), // Switch to Layer: NAV
    COMBO(special, TO(_SPE)), // Switch to Layer: SPE
    
};