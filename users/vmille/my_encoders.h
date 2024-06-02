//
// Created by Vivien Mille on 02/06/2024.
//

#ifndef QMK_USERSPACE_MY_ENCODERS_H
#define QMK_USERSPACE_MY_ENCODERS_H

#include QMK_KEYBOARD_H

#ifdef ENCODER_MAP_ENABLE
// clang-format off
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
   [BASE]     = {ENCODER_CCW_CW(RCTL(KC_Z), RCTL(RSFT(KC_Z))), ENCODER_CCW_CW(GUI_V_LCH, CTRL_MAJ_V_LCH)},
   [FUNCTION] = {ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_UP, KC_DOWN)},
   [NAV]      = {ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_UP, KC_DOWN)},
   [IDE]      = {ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_UP, KC_DOWN)},
   [MOUSE]    = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI), ENCODER_CCW_CW(RGB_SAD, RGB_SAI)},
};

// clang-format on
#endif // ENCODER_MAP_ENABLE

#endif // QMK_USERSPACE_MY_ENCODERS_H