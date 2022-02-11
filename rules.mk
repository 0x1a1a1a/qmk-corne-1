# Save space: Official documentation: Squeezing the most out of AVR (https://docs.qmk.fm/#/squeezing_avr)
# Save space: All features list (https://docs.qmk.fm/#/config_options?id=feature-options)

APPLE_FN_ENABLE = yes
AUDIO_ENABLE = no           # Save space: Disable audio output (port C6)
BACKLIGHT_ENABLE = no       # Save space: Disable backlight
BLUETOOTH_ENABLE = no       # Save space: Disable Bluetooth
COMMAND_ENABLE = no         # Save space: Disable commands for debug and configuration (https://docs.qmk.fm/#/feature_command)
CONSOLE_ENABLE = no         # Save space: Disable console for debug (https://docs.qmk.fm/#/faq_debug)-(
EXTRAFLAGS += -flto         # Save space: Enable Link Time Optimization (https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/)
EXTRAKEY_ENABLE = yes        # Save space: Disable multimedia keys such as volume control 
GRAVE_ESC_ENABLE = no       # Save space: Disable Grave Escape (https://docs.qmk.fm/#/feature_grave_esc)
KEY_LOCK_ENABLE = no        # Save space: Disable Key Lock (https://docs.qmk.fm/#/feature_key_lock): allows to lock any key
LTO_ENABLE = yes            # Save space: Enable Link Time Optimization
MAGIC_ENABLE = no           # Save space: Disable Magic Keycodes (https://docs.qmk.fm/#/keycodes_magic)
MIDI_ENABLE = no            # Save space: Disable MIDI controls
MOUSEKEY_ENABLE = no        # Save space: Disable mouse keys
NKRO_ENABLE = no            # Save space: Disable NKRO (6KRO seems enough)
OLED_DRIVER_ENABLE = no     # Save space: Disable OLED
RGB_MATRIX_ENABLE = yes
RGBLIGHT_ENABLE = no
SPACE_CADET_ENABLE = no     # Save space: Disable Space Cadet (https://docs.qmk.fm/#/feature_space_cadet)
SWAP_HANDS_ENABLE = no      # Save space: One-hand typing
TAP_DANCE_ENABLE = no       # Save space: Disable Tap Dance (https://docs.qmk.fm/#/feature_tap_dance)
UNICODE_ENABLE = yes