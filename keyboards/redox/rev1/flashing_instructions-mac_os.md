# Firmware Building and Flashing Instructions

## Mac OS X

For the latest instructions, see [Setting Up Your QMK Environment](https://docs.qmk.fm/#/newbs_getting_started?id=setting-up-your-qmk-environment), [Building Your First Firmware](https://docs.qmk.fm/#/newbs_building_firmware), and [Flashing Firmware](https://docs.qmk.fm/#/newbs_flashing).

Note: if cloning own fork of qmk_firmware, change the remote url to use SSH to be able to push and pull later.

### TL;DR (with a working qmk environment)

`qmk compile -kb <my_keyboard> -km <my_keymap>`

`qmk flash -kb <my_keyboard> -km <my_keymap>`

Note: for split keyboards with separate controllers, like the Redox, first plug in the left side and flash it, then do the same with the right side. There is no need to specify `:avrdude-split-left`, `:avrdude-split-right` with this approach on OSX.
