enum custom_keycodes {
    LANG_EN = SAFE_RANGE,
    LANG_UA,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case LANG_EN:
        if (record->event.pressed) {
            layer_move(0);
            // tap_code(KC_F16);
            register_code16(LCMD(LOPT(LSFT(LCTL(KC_E)))));
        }
        else {
            unregister_code16(LCMD(LOPT(LSFT(LCTL(KC_E)))));
        }
        break;
    
    case LANG_UA:
        if (record->event.pressed) {
            layer_move(0);
            // tap_code(KC_F17);
            register_code16(LCMD(LOPT(LSFT(LCTL(KC_U)))));
        }
        else {
            unregister_code16(LCMD(LOPT(LSFT(LCTL(KC_U)))));
        }
        break;
    }
    return true;
};


const uint16_t PROGMEM test_combo1[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {KC_C, KC_V, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(test_combo1, TO(3)),
    COMBO(test_combo2, TO(4)),
};