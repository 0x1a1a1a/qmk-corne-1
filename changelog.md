<!--

Changelog

-->


#### Up next
* [ ] Set up [QMK CLI Configuration to qmk.ini](https://github.com/qmk/qmk_firmware/blob/master/docs/cli_configuration.md)
* [ ] Visualize the keymap
* [ ] Add arrows symbols (a dedicated layer?)
* [ ] Add text selection (a dedicated layer?)
* [ ] Add mouse keys (a dedicated layer?)
* [ ] Add `Insert` key
* [ ] Add `Delete` button (Command-Backspace)


#### v2.2
* [x] Update combo and new `IGNORE_MOD_TAP_INTERRUPT` requirements from QMK
* [x] Switch back DQUOT and APOSTR
* [x] Remove Do Not Disturb shortcut due to accidentally pressing a key
* [x] Update instructions in readme.md


#### v2.1
* [x] Added a layer for language switching
* [x] Moved QK_BOOT and KC_CAPS to S01 layer
    * Why: To avoid false positives
* [x] Moved `combos.c` file to the archive and removed the link in `keymap.c`
    * Why: Combos requires more finger strength (and, therefore, energy) to activate

нана
#### v2
* [x] Adapted for new EN2.keylayout file
    * Why: There are overlaps in current shortcuts with apps (Visual Studio Code, Figma, Google Spreadsheets) shortcuts
    * [x] Added temporary backup folder for previous version
    * [x] Optimized the dictionary with Meh key support
    * [x] Restructured the dictionary
    * [x] Added [Hryvnia Sign](https://www.compart.com/en/unicode/U+20B4)
    * [x] Add [Middle Dot](https://www.compart.com/en/unicode/U+00B7)
* [x] Changed approach to language switch
    * [x] Added new layers `S01` and `S02`
    * [x] Removed Mute combo because it was assigned to previous switch keys
    * [x] Created a test layer with temporary shortcuts


#### v1.3
* [x] Fixed layer order for layer accessibility
* [x] Optimized names for several aliases
* [x] Optimized “Navigation” layer
* [x] Added `QK_BOOT`


#### v1.2
* [x] Removed “Command+Tab” (`CTAB0`) functionality from dictionary.h
* [x] Removed `_UKR` layer (not used) in dictionary.h
* [x] Renamed `_ENG` layer to `_TXT` in dictionary.h
* [x] Removed commented combo for language switch
* [x] Added combos for “Mute” (`KC_MUTE`) and “Lock Screen” (`LCKSCR`)
* [x] Changed positions of “Volume Up“, “Volume Down”, “Brightness Up“, “Brightness Down”, “Redo”, “Caps Lock” to more intuitive


#### v1.1
* [x] Created chanelog.md (this file) to track changes. Added versions
* [x] Added a space to “Hyper+Q”
* [x] Disabled tapdances (not used currently)
* [x] Removed “Command+Tab” (`CTAB0`) functionality from macros.c


#### Before
* [x] Added [Minus Sign](https://www.compart.com/en/unicode/U+2212)
* [canceled] Set up `QK_MAKE` [Quantum Keycode](https://github.com/qmk/qmk_firmware/blob/master/docs/quantum_keycodes.md)
* [x] Removed `QK_BOOT`