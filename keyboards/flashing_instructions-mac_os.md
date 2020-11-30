# Firmware Building and Flashing Instructions

## Mac OS X

For the latest instructions, see [Setting Up Your QMK Environment](https://docs.qmk.fm/#/newbs_getting_started?id=setting-up-your-qmk-environment), [Building Your First Firmware](https://docs.qmk.fm/#/newbs_building_firmware), and [Flashing Firmware](https://docs.qmk.fm/#/newbs_flashing).

Note: if cloning own fork of qmk_firmware, change the remote url to use SSH to be able to push and pull later.

Note: if re-compiling a layout from a json file that was previously compiled on this machine, first remove the translated C source file and clear the build cache:

`rm <path to_keymap.c for the layout>`

`rm -rf <qmk_home>/.build/*`

### TL;DR (with a working qmk environment)

`qmk compile -kb <my_keyboard> -km <my_keymap>`

`qmk flash -kb <my_keyboard> -km <my_keymap>`

OR

`qmk compile <path_to_my_json_keymap_file>`

`qmk flash <path_to_my_json_keymap_file>`

Note: for split keyboards with separate controllers, like the Redox, first plug in the left side and flash it, then do the same with the right side. There is no need to specify `:avrdude-split-left`, `:avrdude-split-right` with this approach on OSX.
