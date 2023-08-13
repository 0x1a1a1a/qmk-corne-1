//
// Macros
//


// Change language and switch to a layer with letters

bool process_record_user(uint16_t keycode, keyrecord_t *record) {


    switch (keycode) {


    	case LTREN:
        if (record->event.pressed) {
            register_code16(LOPT(LSFT(LCTL(KC_KP_8))));
        }
        else {
            unregister_code16(LOPT(LSFT(LCTL(KC_KP_8))));
            layer_move(_LTR);
        }
        break;


		case LTRUA:
        if (record->event.pressed) {
            register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        }
        else {
            unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
            layer_move(_LTR);
        }
        break;


        case LTRCMD:
        if (record->event.pressed) {
            register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        }
        else {
            unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
            layer_move(_LTR);
        }
        break;


        case LTROPT:
        if (record->event.pressed) {
            register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        }
        else {
            unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
            layer_move(_LTR);
        }
        break;


        case LTRSFT:
        if (record->event.pressed) {
            register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        }
        else {
            unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
            layer_move(_LTR);
        }
        break;

        case LTRCTL:
        if (record->event.pressed) {
            register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        }
        else {
            unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
            layer_move(_LTR);
        }
        break;

    }


    return true;


};