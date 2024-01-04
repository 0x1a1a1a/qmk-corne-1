## Keymap for Corne-1 powered by QMK

### Instructions for installation
1. Install QMK with `brew install qmk/qmk/qmk`
2. Go to the `repos` folder and run `qmk setup`. Clone the `qmk_firmware` repository to the `repos` folder
3. Change QMK home directory with `qmk setup -H /Users/<user name>/repos/qmk_firmware`
3. Go to the `/qmk_firmware/keyboards/crkbd/keymaps` folder and `git clone` this repository
4. Run `qmk flash -kb crkbd/r2g -km qmk-corne-1`

----

### Release notes

#### v3

* Restructrued left split of `_SPC` layer


#### v2

* Moved `LCSCR`, `QK_BOOT` to reduce occasional press
* Reorganized positions of `TO(_NUM)`, `TO(_NAV)` and `TO(_NAV)` at `_CTR` layer
* Returned `LTR_EN` and `LTR_UA` back to thumbs (what I was thinking?)
* Totally restructured `_SPC` layer using another symbols grouping method (I hope it will be more convenient and intuitive this time)