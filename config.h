#pragma once


#define MASTER_LEFT
#define SPLIT_USB_DETECT
#define USE_SERIAL_PD2
#define FORCE_NKRO
// #define TAP_HOLD_CAPS_DELAY 0
// #define TAP_CODE_DELAY 0


// Combo settings
#define COMBO_COUNT 6
#define COMBO_ONLY_FROM_LAYER 0


// Tap-Hold Configuration Options
// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md
// https://precondition.github.io/home-row-mods
#define TAPPING_TERM 190


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