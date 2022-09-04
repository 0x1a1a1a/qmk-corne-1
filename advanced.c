enum custom_keycodes {
    LANG_EN = SAFE_RANGE,
    LANG_UA,
    RISATENO10,
    RISATENO11,
    RISATENO12,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {


    case LANG_EN:
        if (record->event.pressed) {
            register_code16(LCMD(LOPT(LSFT(LCTL(KC_V)))));
        }
        else {
            unregister_code16(LCMD(LOPT(LSFT(LCTL(KC_V)))));
            layer_move(0);
        }
        break;


    case LANG_UA:
        if (record->event.pressed) {
            register_code16(LCMD(LOPT(LSFT(LCTL(KC_C)))));
        }
        else {
            unregister_code16(LCMD(LOPT(LSFT(LCTL(KC_C)))));
            layer_move(0);
        }
        break;


    case RISATENO10:
        if (record->event.pressed) {
            layer_move(0);
            register_code16(LOPT(KC_B));
        }
        else {
            unregister_code16(LOPT(KC_B));
            layer_move(5);
        }
        break;


    case RISATENO11:
        if (record->event.pressed) {
            layer_move(0);
            register_code16(LOPT(KC_N));
        }
        else {
            unregister_code16(LOPT(KC_N));
            layer_move(5);
        }
        break;


    case RISATENO12:
        if (record->event.pressed) {
            layer_move(0);
            register_code16(LOPT(KC_V));
        }
        else {
            unregister_code16(LOPT(KC_V));
            layer_move(5);
        }
        break;
    }

    return true;
};


const uint16_t PROGMEM combo1[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo2[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo3[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo4[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM risateno1[] = {KC_L, KC_J, COMBO_END};
const uint16_t PROGMEM risateno2[] = {KC_U, KC_V, COMBO_END};
const uint16_t PROGMEM risateno3[] = {KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM risateno4[] = {KC_V, KC_M, COMBO_END};
const uint16_t PROGMEM risateno5[] = {KC_U, KC_M, COMBO_END};
const uint16_t PROGMEM risateno6[] = {KC_L, KC_R, COMBO_END};
const uint16_t PROGMEM risateno7[] = {KC_L, KC_M, COMBO_END};
const uint16_t PROGMEM risateno8[] = {KC_R, KC_U, COMBO_END};
const uint16_t PROGMEM risateno9[] = {KC_L, KC_V, COMBO_END};
const uint16_t PROGMEM risateno10[] = {KC_D, KC_M, COMBO_END};
const uint16_t PROGMEM risateno11[] = {KC_R, KC_F, COMBO_END};
const uint16_t PROGMEM risateno12[] = {KC_D, KC_U, COMBO_END};
const uint16_t PROGMEM risateno13[] = {KC_U, KC_F, COMBO_END};
const uint16_t PROGMEM risateno14[] = {KC_M, KC_F, COMBO_END};
const uint16_t PROGMEM risateno15[] = {KC_R, KC_J, COMBO_END};
const uint16_t PROGMEM risateno16[] = {KC_D, KC_R, COMBO_END};
const uint16_t PROGMEM risateno17[] = {KC_V, KC_F, COMBO_END};
const uint16_t PROGMEM risateno18[] = {KC_D, KC_J, COMBO_END};
const uint16_t PROGMEM risateno19[] = {KC_J, KC_U, COMBO_END};
const uint16_t PROGMEM risateno20[] = {KC_J, KC_V, COMBO_END};
const uint16_t PROGMEM risateno21[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM risateno22[] = {KC_J, KC_M, COMBO_END};
const uint16_t PROGMEM risateno23[] = {KC_R, KC_V, COMBO_END};
const uint16_t PROGMEM risateno24[] = {KC_U, KC_V, KC_M, COMBO_END};
const uint16_t PROGMEM risateno25[] = {KC_L, KC_F, COMBO_END};




combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo1, TO(3)), // Switch to Layer: ARROWS
    COMBO(combo2, TO(4)), // Switch to Layer: SPECIAL CHARACTERS
    COMBO(combo3, TO(5)), // Switch to Layer: RISATENO
    COMBO(combo4, TO(6)), // Switch to Layer: GAMES
    COMBO(risateno1, LT(1, KC_K)), // Risateno: в
    COMBO(risateno2, LT(1, KC_I)), // Risateno: к
    COMBO(risateno3, LT(1, KC_O)), // Risateno: д
    COMBO(risateno4, LT(1, KC_E)), // Risateno: у
    COMBO(risateno5, LT(1, KC_S)), // Risateno: і
    COMBO(risateno6, LT(1, KC_G)), // Risateno: г
    COMBO(risateno7, LT(1, KC_B)), // Risateno: й
    COMBO(risateno8, LT(1, KC_Z)), // Risateno: ж
    COMBO(risateno9, LT(1, KC_Q)), // Risateno: ю
    COMBO(risateno10, RISATENO10), // Risateno: щ
    COMBO(risateno11, RISATENO11), // Risateno: ф
    COMBO(risateno12, RISATENO12), // Risateno: ґ
    COMBO(risateno13, LT(1, KC_COMM)), // Risateno: л
    COMBO(risateno14, LT(1, KC_C)), // Risateno: м
    COMBO(risateno15, LT(1, KC_DOT)), // Risateno: п
    COMBO(risateno16, LT(1, KC_X)), // Risateno: я
    COMBO(risateno17, LT(1, KC_W)), // Risateno: ь
    COMBO(risateno18, LT(1, KC_H)), // Risateno: з
    COMBO(risateno19, LT(1, KC_T)), // Risateno: ч
    COMBO(risateno20, LT(1, KC_Y)), // Risateno: х
    COMBO(risateno21, LT(1, KC_P)), // Risateno: ш
    COMBO(risateno22, LT(1, KC_SCLN)), // Risateno: ц
    COMBO(risateno23, LT(1, KC_SLSH)), // Risateno: є
    COMBO(risateno24, LT(1, KC_A)), // Risateno: ї
    COMBO(risateno25, LT(1, KC_N)), // Risateno: б


};