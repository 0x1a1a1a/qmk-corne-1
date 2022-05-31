enum custom_keycodes {
    LLANGUS = SAFE_RANGE,
    LLANGUA,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case LLANGUS:
        if (record->event.pressed) {
            layer_move(0);
            tap_code(KC_F16);
        }
        else {
        }
        break;
    
    case LLANGUA:
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
