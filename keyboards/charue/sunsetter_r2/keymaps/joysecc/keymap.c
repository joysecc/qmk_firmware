// Copyright 2022 Charue Design
// SPDX-License-Identifier: GPL-2.0-or-later

// https://github.com/peppy/qmk_firmware/tree/ppy/keyboards/planck/keymaps/ppy
// https://docs.qmk.fm/#

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _HUB,
    _MOUSE,
    _FN1,
    _FN2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_all(
      KC_F1, KC_F2,   KC_ESC,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC, XXXXXXX,   KC_GRV,
      KC_F3, KC_F4,     KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,     KC_BSLS,    KC_DEL,
      KC_F5, KC_F6,      KC_CAPS,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,   KC_L,   KC_SCLN, KC_QUOT,       KC_ENT,          KC_VOLU,
      KC_F7, KC_F8,   KC_LSFT, KC_BSLS, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M, KC_COMM, KC_DOT, KC_SLSH,    KC_RSFT,       KC_UP,   KC_VOLD,
      KC_F9, KC_F10,  KC_LCTRL,   KC_LGUI,   KC_LALT,     XXXXXXX,     KC_SPC,        XXXXXXX,     MO(_HUB),                KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [_HUB] = LAYOUT_all(
      KC_F11, KC_F12,  KC_SLEP,   KC_WAKE,  _______,  _______,  _______,  _______,  _______,  TO(_FN2),  TO(_FN1),   TO(_MOUSE),   TO(_BASE),   _______, _______, _______, _______, _______,
      KC_F13, KC_F14,   _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______, _______,     _______,     KC_MUTE,
      KC_F15, KC_F16,    _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______,        _______,          _______,
      KC_F17, KC_F18, _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,        _______,           _______, _______,
      KC_F19, KC_F20, _______,   _______,   _______,         _______,         _______,          _______,         MO(_HUB),                                 KC_MPRV, KC_MPLY, KC_MNXT
    ),
    [_MOUSE] = LAYOUT_all(
      KC_F1, KC_F2,   KC_ESC,  KC_1,  _______,  _______,  _______,  _______,  _______,  KC_ACL0,  KC_ACL1,   KC_ACL2,   KC_MS_U,   _______, _______, _______, _______, _______,
      KC_F3, KC_F4,    _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   KC_MS_L,   KC_MS_D,   KC_MS_R, KC_BTN2,     _______,     KC_DEL,
      KC_F5, KC_F6,     _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______,        _______,          _______,
      KC_F7, KC_F8,  _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______, KC_BTN1,  _______,  _______,        _______,           _______,   _______,
      KC_F9, KC_F10, _______,   _______,   _______,         _______,         _______,          _______,         TO(_BASE),                                 KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [_FN1] = LAYOUT_all(
      _______, _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  KC_7,  KC_8,   KC_9,   KC_0,   _______, _______, _______, _______, _______,
      _______, _______,   _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,     _______,     _______,
      _______, _______,    _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______,        _______,          _______,
      _______, _______, _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______, KC_COMM,  _______,  _______,        _______,           _______, _______,
      _______, _______, _______,   _______,   _______,         _______,         _______,          _______,         TO(_BASE),                                 _______, _______, _______
    ),
    [_FN2] = LAYOUT_all(
      _______, _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______, _______, _______, _______, _______,
      _______, _______,   _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______, _______,     _______,     _______,
      _______, _______,    _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______,        _______,          _______,
      _______, _______, _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______, _______,  _______,  _______,        _______,           _______, _______,
      _______, _______, _______,   _______,   _______,         _______,         _______,          _______,         TO(_BASE),                                 _______, _______, _______
    )
};

const uint16_t PROGMEM ab_combo[] = {KC_LCTRL, KC_LSFT, KC_F7, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_LCTRL, KC_LSFT, KC_F8, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_LCTRL, KC_F7, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {KC_LCTRL, KC_F8, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(ab_combo, DYN_REC_START1),
  COMBO(jk_combo, DYN_REC_START2),
  COMBO(qw_combo, DYN_MACRO_PLAY1),
  COMBO(sd_combo, DYN_MACRO_PLAY2),
};
