## Inter’s keymap for Corne 1 on QMK

### Instructions for installation
1. Install the QMK with `brew install qmk/qmk/qmk`
2. Move to `repos` folder and run `qmk setup`. Clone the `qmk_firmware` repository
3. Go to `/qmk_firmware/keyboards/crkbd/keymaps` and `git clone` this repository
4. Run `qmk flash -kb crkbd/r2g -km qmk-corne-1`

----

### Release notes

#### v2.1

* Moved `LCSCR`, `QK_BOOT` to reduce occasional press
* Reorganized positions of `TO(_NUM)`, `TO(_NAV)` and `TO(_NAV)` at `_CTR` layer
* Returned `LTR_EN` and `LTR_UA` back to thumbs (what I was thinking?)
* Totally restructured `_SPC` layer using another symbols grouping method (I hope it will be more convenient and intuitive this time)