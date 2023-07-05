# All features list
# https://github.com/qmk/qmk_firmware/blob/master/docs/config_options.md#feature-options-idfeature-options

# Reducing firmware size
# Official documentation: Squeezing the most out of AVR
# https://github.com/qmk/qmk_firmware/blob/master/docs/squeezing_avr.md


APPLE_FN_ENABLE        = yes

AUDIO_ENABLE           = no           # Audio output (port C6)
                                      # Set "no" to save space

# BACKLIGHT_ENABLE     = no           # Backlight
                                      # Set "no" to save space

# BACKLIGHT_DRIVER     = pwm

BLUETOOTH_ENABLE       = no           # Bluetooth
                                      # Set "no" in case of wired connection to reduce firmwire size

BOOTLOADER             = atmel-dfu    # Bootloader for Corne's R2G ATmega32U4

BOOTMAGIC_ENABLE       = no           # Enable Bootmagic Lite

COMBO_ENABLE           = yes          # Key combo feature
                                      # https://github.com/qmk/qmk_firmware/blob/master/docs/feature_combo.md

COMMAND_ENABLE         = no           # Commands for debug and configuration
                                      # https://github.com/qmk/qmk_firmware/blob/master/docs/feature_command.md
                                      # Set "no" to reduce firmwire size

CONSOLE_ENABLE         = no           # Console for debug
                                      # https://github.com/qmk/qmk_firmware/blob/master/docs/faq_debug.md
                                      # Set "no" to reduce firmwire size

CUSTOM_MATRIX          = no           # Replace the standard matrix scanning routine with a custom one

EXTRAFLAGS             += -flto       # Extra flags for Link Time Optimization
                                      # https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/
                                      # Set to reduce firmwire size

DYNAMIC_TAPPING_TERM_ENABLE = no      # Dynamic Tapping Tferm
                                      # https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md#dynamic-tapping-term-iddynamic-tapping-term

EXTRAKEY_ENABLE        = yes          # Multimedia and system keys support
                                      # Required for volume and brightness control

GRAVE_ESC_ENABLE       = no           # Grave Escape
                                      # https://github.com/qmk/qmk_firmware/blob/master/docs/feature_grave_esc.md
                                      # Set "no" to reduce firmwire size

KEY_LOCK_ENABLE        = no           # Key Lock
                                      # https://github.com/qmk/qmk_firmware/blob/master/docs/feature_key_lock.md
                                      # Set "no" to reduce firmwire size

KEY_OVERRIDE_ENABLE    = no           # Key Overrides
                                      # https://github.com/qmk/qmk_firmware/blob/master/docs/feature_key_overrides.md

LTO_ENABLE             = yes          # Link Time Optimization
                                      # Set "yes" to reduce firmwire size

MAGIC_ENABLE           = no           # Magic Keycodes
                                      # https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes_magic.md
                                      # Set "no" to reduce firmwire size

MIDI_ENABLE            = no           # MIDI controls
                                      # Set "no" to reduce firmwire size

MOUSEKEY_ENABLE        = yes          # Mouse keys
                                      # Set "no" to reduce firmwire size

NKRO_ENABLE            = yes          # N-Key Rollover
                                      # Set "no" to reduce firmwire size (default 6KRO could be enough)

OLED_ENABLE            = no           # OLED
                                      # Set "no" to reduce firmwire size

RGB_MATRIX_ENABLE      = no           # Correct LED lightning mode
                                      # Set "no" to reduce firmwire size

RGBLIGHT_ENABLE        = no           # Incorect LED lightning mode
                                      # Set "no"

SPACE_CADET_ENABLE     = no           # Space Cadet
                                      # https://github.com/qmk/qmk_firmware/blob/master/docs/feature_space_cadet.md
                                      # Set "no" to reduce firmwire size

SPLIT_KEYBOARD         = yes

SWAP_HANDS_ENABLE      = no           # One-hand typing
                                      # Set "no" to reduce firmwire size

TAP_DANCE_ENABLE       = no           # Tap Dance
                                      # https://github.com/qmk/qmk_firmware/blob/master/docs/feature_tap_dance.md
                                      # Set "no" to reduce firmwire size

UNICODE_ENABLE         = no           # Unicode support
                                      # https://github.com/qmk/qmk_firmware/blob/master/docs/feature_unicode.md
                                      # Set "no" to reduce firmwire size

UNICODEMAP_ENABLE      = no           # Alternaitve Unicode mode
                                      # Set "no" to reduce firmwire size