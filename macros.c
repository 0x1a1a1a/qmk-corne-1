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
qmk flash -kb crkbd/r2g -km qmk-corne-1
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


        // case LTRCMD:
        //     if (record->event.pressed) {
        //     // Key pressed
        //             layer_move(_LTR);
        //             set_oneshot_mods(MOD_BIT(KC_LCMD));
        //             dprintf("tap count 0 \n");
        //         }

        //         else { }
        //     }

        // else if {
        // // Key released
        //     clear_oneshot_mods();
        //     clear_mods();
        //     layer_move(_CTR);
        // }

        // break;


        // case LTROPT:
        // if (record->event.pressed) {
        //     // register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        // }
        // else {
        //     // unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        //     layer_move(_LTR);
        // }
        // break;


        // case LTRSFT:
        // if (record->event.pressed) {
        //     // register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        // }
        // else {
        //     // unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        //     layer_move(_LTR);
        // }
        // break;

        // case LTRCTL:
        // if (record->event.pressed) {
        //     // register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        // }
        // else {
        //     // unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        //     layer_move(_LTR);
        // }
        // break;

    }


    return true;


};