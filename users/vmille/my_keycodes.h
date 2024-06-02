//
// Created by Vivien Mille on 02/06/2024.
//

#ifndef QMK_USERSPACE_MY_KEYCODES_H
#define QMK_USERSPACE_MY_KEYCODES_H

#include QMK_KEYBOARD_H

#define BUILD LCTL(KC_F9)
#define RUN S(KC_F9)
#define DEBUG S(KC_F10)

enum my_custom_keycodes {
    CTRL_MAJ_V_LCH = SAFE_RANGE,
    GUI_V_LCH,
    ENT_LCH
};

bool process_record_user(uint16_t keycode, keyrecord_t *record);

#endif // QMK_USERSPACE_MY_KEYCODES_H
