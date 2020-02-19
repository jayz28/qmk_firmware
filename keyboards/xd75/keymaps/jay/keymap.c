/* Copyright 2017 Wunder
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Layer shorthand
#define _DV 0
#define _SUP 1
#define _QW 3
#define _DIR 4

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DV] = LAYOUT_ortho_5x15(
            KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, MO(_SUP), KC_SLCK, MO(_SUP), KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS,
            KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_INS, KC_HOME, KC_PGUP, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH,
            KC_TAB, KC_A, KC_O, KC_E, KC_U, KC_I, KC_PSCR, KC_END, KC_PGDN, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS,
            KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_LCTL, KC_LALT, LT(_DIR, KC_ESC), KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT,
            MO(_DIR), KC_GRV, KC_BSLS, KC_LEFT, KC_RIGHT, KC_BSPC, KC_DEL, LT(_DIR, KC_LGUI), KC_ENT, KC_SPC, KC_UP, KC_DOWN, KC_LBRC, KC_RBRC, MO(_QW)),

	[_SUP] = LAYOUT_ortho_5x15(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NLCK, KC_SLSH, KC_ASTR, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_MSEL, KC_CALC, KC_MYCM, KC_MAIL, RGB_HUD, RGB_HUI, KC_P7, KC_P8, KC_P9, KC_MINS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, RGB_SAD, RGB_SAI, KC_P4, KC_P5, KC_P6, KC_PLUS, KC_TRNS, RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_APP, RGB_VAD, RGB_VAI, KC_P1, KC_P2, KC_P3, KC_PENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, MO(_SUP), RGB_RMOD, RGB_MOD, KC_P0, KC_TRNS, KC_PDOT, KC_PENT, KC_PENT, MO(_SUP), KC_TRNS, KC_TRNS, KC_TRNS),
    [_DIR] = LAYOUT_ortho_5x15(
            KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
            KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_UP,KC_TRNS,KC_TRNS,KC_TRNS,
            KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_LEFT,KC_DOWN,KC_RIGHT,KC_TRNS,KC_TRNS,
            KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
            KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS
            ),
    [_QW] = LAYOUT_ortho_5x15( /* QWERTY */
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS, KC_GRV,  KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_BSLS, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HOME, KC_DEL,  KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_END,  KC_UP,   KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, MO(_SUP), KC_SPC,  KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC,  KC_SPC,  MO(_SUP), KC_RALT, KC_RGUI, KC_RCTL
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_mode(RGBLIGHT_MODE_RAINBOW_MOOD + 2);
    backlight_enable();
    backlight_level(2);
}

