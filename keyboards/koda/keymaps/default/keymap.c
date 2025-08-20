// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x12(
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,     KC_Y,     KC_U,      KC_I,      KC_O,       KC_P,    KC_BSPC,
        KC_ESC,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,     KC_H,     KC_J,      KC_K,      KC_L,       KC_SCLN, KC_QUOT,
        KC_MINS,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,     KC_N,     KC_M,      KC_COMM,   KC_DOT,     KC_SLSH, KC_BSLS,
        KC_LCTL,    KC_LALT,    KC_LALT,    KC_LCMD,    KC_LSFT,    MO(1),    MO(2),    KC_SPC,    KC_ENT,    KC_RALT,    KC_RSFT,    MO(3)
                            ),
    [1] = LAYOUT_ortho_4x12(
        KC_GRV,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,    KC_F6,    KC_F7,     KC_F8,     KC_F9,      KC_F10,  KC_BSPC,
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,     KC_6,     KC_7,      KC_8,      KC_9,       KC_0,    KC_F11,
        _______,    _______,    _______,    _______,    _______,    _______,  _______,  _______,   _______,   _______,    _______, _______,
        KC_LCTL,    KC_LALT,    KC_LALT,    KC_LCMD,    KC_LSFT,    MO(1),    MO(2),    KC_SPC,    KC_ENT,    KC_RALT,    KC_RSFT,    MO(3)
                            ),
    [2] = LAYOUT_ortho_4x12(
        _______,    _______,    _______,    KC_LABK,    KC_RABK,    _______,  _______,  KC_LBRC,   KC_RBRC,   _______,    _______, _______,
        _______,    _______,    _______,    KC_MINS,    KC_EQL,     _______,  _______,  KC_LPRN,   KC_RPRN,   _______,    _______, _______,
        _______,    _______,    _______,    KC_MINS,    KC_RABK,    _______,  _______,  KC_LCBR,   KC_RCBR,   _______,    _______, _______,
        _______,    _______,    _______,    _______,    _______,    _______,  _______,  _______,   _______,   _______,    _______, _______
                            ),
    [3] = LAYOUT_ortho_4x12(
        _______,    _______,    _______,    KC_END,     KC_RABK,    _______,  _______,  KC_PGDN,   _______,   KC_PGUP,    _______, _______,
        _______,    KC_HOME,    _______,    _______,    _______,    _______,  KC_LEFT,  KC_DOWN,   KC_UP,     KC_RIGHT,   _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,  _______,  _______,   _______,   _______,    _______, _______,
        _______,    _______,    _______,    _______,    _______,    _______,  _______,  _______,   _______,   _______,    _______, _______
                            )
};
