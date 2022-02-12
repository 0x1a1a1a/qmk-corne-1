#pragma once

#define MASTER_LEFT

#define USE_SERIAL_PD2

#define IGNORE_MOD_TAP_INTERRUPT // Prevent normal rollover on alphas from accidentally triggering mods.
#define TAPPING_FORCE_HOLD // Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_TERM 200 // Configure the global tapping term (default: 200ms).

/*
#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif
*/

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_DISABLE_TIMEOUT 60000
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 8
    #define RGB_MATRIX_SPD_STEP 10

    // #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_TYPING_HEATMAP
    #define RGB_MATRIX_STARTUP_HUE 128 // HSV_CYAN
    // #define RGB_MATRIX_STARTUP_SAT 255
    // #define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
    // #define RGB_MATRIX_STARTUP_SPD
#endif

#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INITIAL_SPEED 500
#define MOUSEKEY_BASE_SPEED 500

#ifdef UNICODE_ENABLE
    #define UNICODE_SELECTED_MODES UC_MAC
    // #define UNICODE_KEY_MAC KC_RALT
#endif