APPLE_FN_ENABLE = yes
AUDIO_ENABLE = no           # Save space: Audio output on port C6
BACKLIGHT_ENABLE = no       # Save space: Backlight
BLUETOOTH_ENABLE = no       # Save space: Bluetooth
# BOOTLOADER = atmel-dfu    # Disabled until further investigation
EXTRAFLAGS += -flto         # Save space: Enable Link Time Optimization (https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/)
EXTRAKEY_ENABLE = no        # Save space: Disable Windows-only multimedia keys
GRAVE_ESC_ENABLE = no       # Save space: Disabel Grave Escape (https://docs.qmk.fm/#/feature_grave_esc)
MIDI_ENABLE = no            # Save space: Disable MIDI controls
MOUSEKEY_ENABLE = no        # Save space: Disable mouse keys
OLED_DRIVER_ENABLE = no     # Save space: Disable OLED

RGB_MATRIX_ENABLE = yes
RGBLIGHT_ENABLE = no
SPACE_CADET_ENABLE = no     # Save space: Disable Space Cadet (https://docs.qmk.fm/#/feature_space_cadet)
SWAP_HANDS_ENABLE = no      # Save space: One-hand typing
TAP_DANCE_ENABLE = yes
UNICODE_ENABLE = no