#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk-compile-json. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, TO(10), TO(1), KC_J, LT(5,KC_L), KC_U, KC_Y, KC_SCLN, KC_MINS, KC_CAPS, LSFT_T(KC_A), LT(6,KC_R), LT(3,KC_S), LT(9,KC_T), KC_D, KC_DEL, KC_ENT, KC_H, KC_N, KC_E, KC_I, RSFT_T(KC_O), LT(5,KC_QUOT), KC_LSFT, LCTL_T(KC_Z), LGUI_T(KC_X), LALT_T(KC_C), LT(3,KC_V), LT(2,KC_B), KC_LEFT, KC_RGHT, KC_DOWN, KC_UP, LT(3,KC_K), LT(2,KC_M), LALT_T(KC_COMM), RGUI_T(KC_DOT), RCTL_T(KC_SLSH), KC_RSFT, MO(7), HYPR(KC_NO), TT(8), KC_NO, LT(2,KC_BSPC), KC_NO, MO(7), MO(7), KC_NO, LT(3,KC_SPC), KC_NO, KC_BSLS, MEH(KC_NO), MO(7)),
	[1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_E, KC_R, KC_T, TO(10), TO(0), KC_Y, LT(5,KC_U), KC_I, KC_O, KC_P, KC_TRNS, KC_TRNS, KC_TRNS, LT(6,KC_S), LT(3,KC_D), LT(9,KC_F), KC_G, KC_TRNS, KC_TRNS, KC_TRNS, KC_J, KC_K, KC_L, RSFT_T(KC_SCLN), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(3,KC_N), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_F6, KC_F7, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_ENT, KC_BSPC, KC_TRNS, KC_TRNS, MO(4), KC_TRNS, KC_F5, KC_TRNS, KC_TRNS, KC_F6, KC_UNDS, KC_MRWD, KC_MPLY, RSFT_T(KC_MFFD), LT(5,KC_BSLS), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(4), KC_TRNS, KC_DOWN, KC_UP, KC_LEFT, KC_RGHT, LT(4,KC_F12), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(4,KC_ENT), KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU),
	[3] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_F6, KC_F7, KC_6, LT(5,KC_7), KC_8, KC_9, KC_0, KC_ENT, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F5, KC_TRNS, KC_TRNS, KC_F6, KC_MINS, KC_EQL, KC_LBRC, RSFT_T(KC_RBRC), LT(5,KC_EQL), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(4,KC_F11), KC_HOME, KC_END, KC_PGDN, KC_PGUP, KC_TRNS, MO(4), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(4,KC_DEL), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_MPLY),
	[4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, AG_SWAP, CG_SWAP, GUI_OFF, KC_TRNS, NK_ON, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, KC_DEL, AG_NORM, CG_NORM, GUI_ON, KC_TRNS, NK_OFF, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPI, RGB_MOD, RGB_HUI, RGB_SAI, RGB_SAD, RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPD, RGB_RMOD, RGB_HUD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_WH_U, KC_MS_U, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_ENT, KC_TRNS, KC_WH_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_D, KC_WH_R, KC_BTN4, KC_TRNS, KC_TRNS, KC_BTN5, KC_HOME, KC_PGDN, LALT_T(KC_PGUP), RGUI_T(KC_END), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN4, KC_TRNS, KC_BTN1, KC_TRNS, KC_BTN3, KC_BTN3, KC_TRNS, KC_BTN2, KC_TRNS, KC_BTN5, KC_TRNS, KC_TRNS),
	[6] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLCK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_INS, KC_DEL, KC_END, KC_PAUS, KC_ENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_APP, KC_ENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RGUI, KC_TRNS, KC_TRNS),
	[7] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_ENT, KC_TRNS, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_TRNS, KC_TRNS, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F18, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F19, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[8] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_COLN, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PEQL, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PCMM, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_PAST, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_DEL, KC_P1, KC_P2, KC_P3, KC_PENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_TRNS, KC_PDOT, KC_PENT, KC_TRNS),
	[9] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LT, KC_GT, KC_MINS, KC_EQL, KC_ENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_ENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, RALT_T(KC_RBRC), KC_PIPE, RCTL_T(KC_BSLS), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[10] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_ESC, TO(0), KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_MINS, KC_CAPS, KC_A, KC_R, KC_S, KC_T, KC_D, KC_TRNS, KC_TRNS, KC_H, KC_N, KC_E, KC_I, KC_O, LT(5,KC_QUOT), KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LCTL, KC_LALT, KC_LALT, KC_RALT, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(7), KC_BSLS, KC_PGUP, KC_NO, KC_SPC, KC_HOME, KC_END, KC_BSPC, KC_INS, KC_SPC, KC_NO, KC_RCTL, KC_PSCR, MO(7))
};
