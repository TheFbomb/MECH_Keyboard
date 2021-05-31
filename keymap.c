#include QMK_KEYBOARD_H
#include "keymap_fr_ch.h"

 // LAYERS
#define _QWERTY 0      // QWERTY layer
#define _QW _QWERTY

#define _FUNCTION 1    // Function layer
#define _FN _FUNCTION

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_60_iso_4th_row_all_1u(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14       15       16
    KC_ESC, CH_1,    CH_2,    CH_3,    CH_4,    CH_5,    CH_6,    CH_7,    CH_8,    CH_9,    CH_0,    CH_QUOT, CH_CIRC,  KC_BSPC,
    KC_TAB,  CH_Q,    CH_W,    CH_E,    CH_R,    CH_T,    CH_Z,    CH_U,    CH_I,    CH_O,    CH_P,    CH_EGRV, CH_DIAE,
    KC_CAPS, CH_A,    CH_S,    CH_D,    CH_F,    CH_G,    CH_H,    CH_J,    CH_K,    CH_L,    CH_EACU, CH_AGRV, CH_DLR, KC_ENT,
    KC_LSFT, CH_LABK, CH_Y,    CH_X,    CH_C,    CH_V,    CH_B,    CH_N,    CH_M,    CH_COMM, CH_DOT,  CH_MINS, KC_UP,  KC_UP,   KC_DEL,
    KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                      TG(1), KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_FUNCTION] = LAYOUT_60_iso_4th_row_all_1u(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14       15       16
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    _______, RGB_RMOD, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_BRIU, KC_BRID, XXXXXXX, XXXXXXX,
    _______, RGB_TOG, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,
    _______, KC_LT, KC_GT, BL_TOGG, BL_INC, BL_DEC, BL_STEP, BL_BRTG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLU, KC_VOLU, KC_MUTE,
    XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX,                                     TG(1), XXXXXXX, XXXXXXX, KC_VOLD, XXXXXXX
  ),
};
