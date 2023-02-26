



// Custom tap dance keys
enum {
    __CN = SAFE_RANGE,
    __EN
};




// Functions associated with individual tap dances
void cn_finished(qk_tap_dance_state_t *state, void *user_data);
void cn_reset(qk_tap_dance_state_t *state, void *user_data);
void en_finished(qk_tap_dance_state_t *state, void *user_data);
void en_reset(qk_tap_dance_state_t *state, void *user_data);