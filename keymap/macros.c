// Macros


bool process_record_user(uint16_t keycode, keyrecord_t *record) {


    if (keycode != CTAB0 && in_tab) {
        unregister_code(KC_LCMD);
        in_tab = false;
    }


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


        case CTAB0:
        if (record->event.pressed) {
            if (!in_tab)
            {
                register_code(KC_LCMD);
                register_code(KC_TAB);
                unregister_code(KC_TAB);
                in_tab = true;
            }
            else {
                register_code(KC_TAB);
                unregister_code(KC_TAB);
            }
        }


    }


    return true;


};