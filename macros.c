//
// Macros
//


// Change language and switch to a layer with letters

bool process_record_user(uint16_t keycode, keyrecord_t *record) {


    switch (keycode) {


    	case LTR_EN:
            if (record->event.pressed) {
                register_code16(LOPT(LSFT(LCTL(KC_KP_8))));
            }

            else {
                unregister_code16(LOPT(LSFT(LCTL(KC_KP_8))));
                layer_move(_LTR);
            }

            break;


		case LTR_UA:
            if (record->event.pressed) {
                register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
            }

            else {
                unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
                layer_move(_LTR);
            }

            break;


        // case LTR_CMD:
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


        // case LTR_OPT:
        // if (record->event.pressed) {
        //     // register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        // }
        // else {
        //     // unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        //     layer_move(_LTR);
        // }
        // break;


        // case LTR_SFT:
        // if (record->event.pressed) {
        //     // register_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        // }
        // else {
        //     // unregister_code16(LOPT(LSFT(LCTL(KC_KP_9))));
        //     layer_move(_LTR);
        // }
        // break;

        // case LTR_CTL:
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