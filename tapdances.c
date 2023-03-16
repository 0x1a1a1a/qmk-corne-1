#include "tapdances.h"




// Associate tap dance key with its functionality
qk_tap_dance_action_t tap_dance_actions[] = {
    [__CN] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, cn_finished, cn_reset),
    [__EN] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, en_finished, en_reset)
};




// Tap dance name: EN
// Tap: Switch to English layout
// Hold: 
// Double tap: To layer _SPE
void en_finished(qk_tap_dance_state_t *state, void *user_data) {

    if (state->pressed) {
            register_code16(LCMD(LOPT(LSFT(LCTL(KC_V)))));
    }
    
    else {
            unregister_code16(LCMD(LOPT(LSFT(LCTL(KC_V)))));
        }

    reset_tap_dance(state);
}

void en_reset(qk_tap_dance_state_t *state, void *user_data) {
}




// Tap dance name: CN
// Tap: KC_QUOT
// Hold: Switch to _CON layer
// Double tap: Switch to _NAV layer

// Define a type for as many tap dance states as you need
typedef enum {
    CN_NONE,
    CN_UNKNOWN,
    CN_SINGLE_TAP,
    CN_SINGLE_HOLD,
    CN_DOUBLE_TAP
} td_state_t;

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;

// Declare the functions to be used with your tap dance key(s)

// Function associated with all tap dances
td_state_t cn_dance(qk_tap_dance_state_t *state);

// Determine the current tap dance state
td_state_t cn_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (!state->pressed) return CN_SINGLE_TAP;
        else return CN_SINGLE_HOLD;
    } else if (state->count == 2) return CN_DOUBLE_TAP;
    else return CN_UNKNOWN;
}

// Initialize tap structure associated with example tap dance key
static td_tap_t cn_tap_state = {
    .is_press_action = true,
    .state = CN_NONE
};

// Functions that control what our tap dance key does
void cn_finished(qk_tap_dance_state_t *state, void *user_data) {
    cn_tap_state.state = cn_dance(state);
    switch (cn_tap_state.state) {
        case CN_SINGLE_TAP:
            tap_code(KC_QUOT);
            break;
        case CN_SINGLE_HOLD:
            layer_on(_CON);
            break;
        case CN_DOUBLE_TAP:
            // Check to see if the layer is already set
            if (layer_state_is(_NAV)) {
                // If already set, then switch it off
                layer_off(_NAV);
            } else {
                // If not already set, then switch the layer on
                layer_on(_NAV);
            }
            break;
        default:
            break;
    }
}

void cn_reset(qk_tap_dance_state_t *state, void *user_data) {
    // If the key was held down and now is released then switch off the layer
    if (cn_tap_state.state == CN_SINGLE_HOLD) {
        layer_off(_CON);
    }
    cn_tap_state.state = CN_NONE;
}