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
#include <stdio.h>
#include "features/caps_word.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------.                    ,---------------------------------------------------------------------------.
       KC_TAB,    KC_Q,       KC_W,         KC_E,         KC_R,      KC_T,                         KC_Y,        KC_U,         KC_I,        KC_O,         KC_P,      KC_BSLS,
  //|--------+-------------+------------+------------+------------+--------|                    |--------+---------------+------------+------------+---------------+--------|
       KC_ESC, CTL_T(KC_A), OPT_T(KC_S), GUI_T(KC_D), SFT_T(KC_F),    KC_G,                         KC_H,    SFT_T(KC_J), GUI_T(KC_K), OPT_T(KC_L), CTL_T(KC_SCLN), KC_QUOT,
  //|--------+-------------+------------+------------+------------+--------|                    |--------+---------------+------------+------------+---------------+--------|
      KC_LSFT,    KC_Z,         KC_X,        KC_C,       KC_V,      KC_B,                         KC_N,         KC_M,        KC_COMM,    KC_DOT,        KC_SLSH,     KC_RSFT,
  //|--------+-------------+------------+------------+------------+--------+--------|  |--------+--------+---------------+------------+------------+---------------+--------|
                                                           KC_BSPC,   MO(2), MO(3),     MO(1), KC_ENT,   KC_SPC
                                                       //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-------------------------------------------------------.
      KC_TAB, KC_EXLM, KC_PERC, KC_LCBR, KC_RCBR, KC_GRAVE,                     XXXXXXX,   XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+----------+--------+--------+--------+--------|
      KC_ESC,  KC_AT,   KC_DLR,  KC_LPRN, KC_RPRN, KC_MINS,                      XXXXXXX, KC_RSHIFT, KC_RGUI, KC_ROPT, KC_RCTL, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+----------+--------+--------+--------+--------|
      KC_LSFT, KC_HASH, KC_CIRC, KC_LBRC, KC_RBRC, KC_AMPR,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_DEL, _______, _______,    _______, KC_ENT,  KC_SPC
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, XXXXXXX, XXXXXXX, TO(4), XXXXXXX, XXXXXXX,                      KC_LPRN, KC_7,     KC_8,    KC_9,  KC_EQUAL,  KC_DOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_ESC, KC_LCTL, KC_LOPT, KC_LGUI, KC_LSHIFT, XXXXXXX,                     KC_RPRN, KC_4,     KC_5,    KC_6,  KC_PMNS,  KC_PPLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), XXXXXXX,                      KC_0,    KC_1,     KC_2,    KC_3,  KC_PSLS,  KC_PAST,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_DEL, _______, _______,    _______, KC_ENT,  KC_SPC
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,---------------------------------------------------------------------------.
      XXXXXXX, KC_F1,   KC_F2,    KC_F3,  KC_F4,    KC_F5,                         KC_F6,        KC_F7,          KC_F8,          KC_F9,    KC_F10,   KC_F11,
  //|--------+--------+--------+--------+--------+--------|                    |-------------+--------------+------------+---------------+--------+--------|
     KC_ESC, KC_LCTL, KC_LOPT, KC_LGUI, KC_LSHIFT, XXXXXXX,                      KC_LEFT,        KC_DOWN,        KC_UP,       KC_RIGHT,    XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |-------------+--------------+------------+---------------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     RGUI(KC_LEFT), RGUI(KC_DOWN), RGUI(KC_UP), RGUI(KC_RIGHT), XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+-------------+--------------+------------+---------------+--------+--------|
                                          KC_DEL, _______, _______,    _______, KC_ENT,  KC_SPC
                                      //`--------------------------'  `--------------------------'
  ),

  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,---------------------------------------------------------------------------.
      XXXXXXX,XXXXXXX,  XXXXXXX, TO(0), XXXXXXX, KC_WH_U,                        XXXXXXX,      XXXXXXX,       XXXXXXX,      XXXXXXX,       XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |-------------+--------------+------------+---------------+--------+--------|
     KC_ESC, XXXXXXX,  KC_BTN3, KC_BTN2, KC_BTN1, KC_WH_D,                      XXXXXXX,      XXXXXXX,       XXXXXXX,      XXXXXXX,       XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |-------------+--------------+------------+---------------+--------+--------|
     KC_LSFT, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), XXXXXXX,           XXXXXXX,      XXXXXXX,       XXXXXXX,      XXXXXXX,       XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+-------------+--------------+------------+---------------+--------+--------|
                                          KC_DEL, _______, _______,    _______, KC_ENT,  KC_SPC
                                      //`--------------------------'  `--------------------------'
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_caps_word(keycode, record)) { return false; }
  // Your macros ...

  return true;
}
