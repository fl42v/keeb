#include QMK_KEYBOARD_H

/*
#include "print.h"

void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
}
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_velvet(
        KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,       KC_Y,    KC_U,   KC_I,   KC_O,   KC_P,
        KC_A,    KC_S,   KC_D,   KC_F,   KC_G,       KC_H,    KC_J,   KC_K,   KC_L,   KC_SCLN,
        KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
        //MO(1),                   MO(2),  MO(3),      MO(1),   MO(2),                  MO(3)
        KC_NO,                   KC_NO,  KC_NO,      KC_NO,                   KC_NO,  KC_NO
    )//,

    /*[1] = LAYOUT_velvet(
        _______,_______,_______,_______,_______,     _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,     _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,     _______,_______,_______,_______,_______,
        _______,                _______,_______,     _______,                _______,_______
    ),

    [2] = LAYOUT_velvet(
        _______,_______,_______,_______,_______,     _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,     _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,     _______,_______,_______,_______,_______,
        _______,                _______,_______,     _______,                _______,_______
    ),

    [3] = LAYOUT_velvet(
        _______,_______,_______,_______,_______,     _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,     _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,     _______,_______,_______,_______,_______,
        _______,                _______,_______,     _______,                _______,_______
    ),
*/

};
