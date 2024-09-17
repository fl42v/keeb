// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define TRNS KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_ESC,  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,        KC_F6, KC_F7, KC_F8, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SCRL, KC_PAUS, KC_CALC,
    KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5, KC_6,   KC_7,  KC_8,  KC_9,  KC_0,    KC_MINS, KC_EQL,  KC_BSPC,           KC_DEL,          KC_HOME,
    KC_ESC,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,         KC_Y,  KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,                   KC_END,
    KC_TAB,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,         KC_H,  KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT,           KC_ENT,  KC_INS,          KC_PGUP,
    KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,         KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                  KC_UP,           KC_PGDN,
    KC_NO,         KC_LCTL, KC_LGUI, LT(1,KC_ENT),     LT(2,KC_SPC), KC_RALT, KC_NO,            KC_RCTL,         KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [1] = LAYOUT(
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,            TRNS,    TRNS,  TRNS,   TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS,
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS,      TRNS,    TRNS,  TRNS,   TRNS,  TRNS, TRNS, TRNS,                       TRNS,      TRNS,
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,            TRNS,    TRNS,  TRNS,   TRNS,  TRNS, TRNS, TRNS, TRNS,                            TRNS,
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, TRNS, TRNS,       TRNS,                 TRNS,      TRNS,
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,            TRNS,    TRNS,  TRNS,   TRNS,  TRNS, TRNS,                             TRNS,      TRNS,
    TRNS,                 TRNS, TRNS,  TRNS,         KC_BSPC,    TRNS,  TRNS,                            TRNS,           TRNS, TRNS, TRNS
  ),
  [2] = LAYOUT(
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,            TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS,    TRNS,    TRNS, TRNS, TRNS,  TRNS,
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS,      TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS,    TRNS,                          TRNS,      TRNS,
  KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,            KC_6,  KC_7,  KC_8,  KC_9,  KC_0, KC_MINS, KC_EQL,  TRNS,                            TRNS,
  LSFT(KC_GRV), LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), LSFT(KC_MINS), LSFT(KC_EQL), TRNS,      TRNS,
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,            TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS,                                   TRNS,      TRNS,
    TRNS,                 TRNS, TRNS,  TRNS,            TRNS,  TRNS,  TRNS,                                 TRNS,           TRNS, TRNS, TRNS
  ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
