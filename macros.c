// Macros


bool process_record_user(uint16_t keycode, keyrecord_t *record) {


    switch (keycode) {


    	case LANG_EN:
        if (record->event.pressed) {
            register_code16(LCMD(LOPT(LSFT(LCTL(KC_V)))));
        }
        else {
            unregister_code16(LCMD(LOPT(LSFT(LCTL(KC_V)))));
            layer_move(_ENG);
        }
        break;


		case LANG_UA:
        if (record->event.pressed) {
            register_code16(LCMD(LOPT(LSFT(LCTL(KC_C)))));
        }
        else {
            unregister_code16(LCMD(LOPT(LSFT(LCTL(KC_C)))));
            layer_move(_ENG);
        }
        break;


    }


    return true;


};