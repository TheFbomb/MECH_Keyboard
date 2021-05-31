## A Customizable 60% Mechanical Keyboard PCB

Materials: DZ60 mother board
Fully custom keyboard layout
Keymap: French Swiss

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

Instructions:

1- Install QMK MSYS

In QMK MSYS
2- cd to repository ~/qmk_firmware/keyboard/dz60

With atom, in ~/qmk_firmware/keyboard/dz60/keymaps/iso_4th_row_all_1u/keymap.c
3- Add #include "keymap_fr_ch.h"
4- Replace relevant key to the defined ch equivalent

With atom, in ~/qmk_firmware/keyboard/dz60/rules.mk
5- check maker file rules for EXTRAKEY_ENABLE = yes
6- only compile LAYOUTS = iso_4th_row_all_1u

Back in QMK MSYS
7- qmk compile -km iso_4th_row_all_1u

With QMK Toolbox
8- Press on reset button
9- Look for dz60_iso_4th_row_all_1u.hex
10- Flash Keyboard

11- Yeay.
