enum custom_keycodes {
    LANG_US = SAFE_RANGE,
    LANG_UA,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case LANG_US:
        if (record->event.pressed) {
            layer_move(0);
            tap_code(KC_F16);
        }
        else {
        }
        break;
    
    case LANG_UA:
        if (record->event.pressed) {
            layer_move(0);
            tap_code(KC_F17);
        }
        else {
        }
        break;
    }
    return true;
};
