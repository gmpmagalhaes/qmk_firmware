/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H



// LEFT HOME MODS
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LCTL_T(KC_F)
#define HOME_ESC LT(3, KC_ESC)
#define HOME_SPC LT(1, KC_SPC)

// RIGHT HOME MODS
#define HOME_J RCTL_T(KC_J)
#define HOME_K RSFT_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)
#define HOME_ENT LT(2, KC_ENT)
#define HOME_BSPC LT(4, KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
        KC_LCTL,   HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,                         KC_H,    HOME_J,    HOME_K,    HOME_L, HOME_SCLN, KC_QUOT,
        KC_LSFT,   KC_Z,  KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
                                           KC_LGUI,    HOME_ESC,  HOME_SPC,     HOME_ENT,   HOME_BSPC, KC_RALT
    ),
    [1] = LAYOUT_split_3x6_3(
        _______, _______, _______, _______, _______, _______,       _______, KC_LCBR, KC_RCBR,  KC_LPRN, KC_RPRN, _______,
        _______, _______, _______, _______, _______, _______,       KC_LEFT, KC_DOWN,   KC_UP, KC_RIGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,       _______, KC_LBRC, KC_RBRC,    KC_GT, KC_LT,   _______,
                                   _______, _______, _______,       _______, _______,  _______

    ),
    [2] = LAYOUT_split_3x6_3(
        _______, _______, KC_UNDS, KC_ASTR, KC_AMPR, KC_MINS,       KC_AGAIN, KC_PASTE, KC_COPY, KC_CUT, KC_UNDO, _______,
        _______, KC_DQUO, KC_CIRC, KC_PERC, KC_DLR,  KC_PLUS,       KC_CAPS, _______, _______, _______, _______, _______,
        _______, KC_TILD, KC_HASH, KC_AT, KC_EXCLAIM,KC_PIPE,       _______, _______, _______, _______, _______, _______,
                                   _______, _______, _______,       _______, _______, _______
    ),
    [3] = LAYOUT_split_3x6_3(
        _______, _______, _______, _______, _______, _______,       _______, KC_7, KC_8, KC_9, _______, _______,
        _______, _______, _______, _______, _______, _______,       _______, KC_4, KC_5, KC_6, _______, _______,
        _______, _______, _______, _______, _______, _______,       KC_0, KC_1, KC_2, KC_3, _______, _______,
                                   _______, _______, _______,       _______, _______,  _______
    ),
    [4] = LAYOUT_split_3x6_3(
        _______, RGB_VAI, RGB_SAI, RGB_HUI, RGB_MOD, RGB_TOG,       RGB_TOG, RGB_MOD,  RGB_HUI, RGB_SAI, RGB_VAI, _______,
        _______, KC_MNXT, KC_VOLU, KC_VOLD, KC_MPRV, KC_CAPS,       KC_CAPS, KC_MPRV,  KC_VOLD, KC_VOLU ,KC_MNXT, _______,
        _______, KC_END,  KC_PGUP, KC_PGDN, KC_HOME, KC_INS,        KC_INS,  KC_HOME,  KC_PGDN, KC_PGUP, KC_END,  _______,
                                   KC_MUTE, KC_MPLY, KC_MSTP,       _______, _______, _______
    ),
};
