// Tap Dance

// Custom tap dance keys
enum {
    __CN,
    __EN
};

// Functions associated with individual tap dances
void cn_finished(tap_dance_state_t *state, void *user_data);
void cn_reset(tap_dance_state_t *state, void *user_data);
void en_finished(tap_dance_state_t *state, void *user_data);
void en_reset(tap_dance_state_t *state, void *user_data);