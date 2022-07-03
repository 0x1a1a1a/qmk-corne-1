#pragma once

#define MASTER_LEFT
#define USE_SERIAL_PD2


#define COMBO_COUNT 1
#define IGNORE_MOD_TAP_INTERRUPT // Prevent normal rollover on alphas from accidentally triggering mods.
#define TAPPING_FORCE_HOLD // Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_TERM 200 // Configure the global tapping term (default: 200ms).

#ifdef RGB_MATRIX_ENABLE
    // #define RGB_MATRIX_KEYPRESSES
    #define RGB_DISABLE_TIMEOUT 60000
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 8
    #define RGB_MATRIX_SPD_STEP 10

    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_GRADIENT_LEFT_RIGHT
    #define RGB_MATRIX_STARTUP_HUE 128
    #define RGB_MATRIX_STARTUP_SAT 255
    #define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
    #define RGB_MATRIX_STARTUP_SPD 16
#endif

#ifdef MOUSEKEY_ENABLE
    #define MOUSEKEY_DELAY 0
    #define MOUSEKEY_INITIAL_SPEED 500
    #define MOUSEKEY_BASE_SPEED 500
#endif

#ifdef UNICODE_ENABLE
    #define UNICODE_SELECTED_MODES UC_MAC
    #define UNICODE_KEY_MAC KC_RALT
#endif