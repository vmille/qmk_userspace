//
// Created by Vivien Mille on 02/06/2024.
//

#include "keyboard_keycodes.h"
#include "keyboard_layers.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CTRL_MAJ_V_LCH:
            tap_code16(RCTL(RSFT(KC_V)));
            layer_move(NAV);
            return false;
        case GUI_V_LCH:
            tap_code16(RGUI(KC_V));
            layer_move(NAV);
            return false;
        case ENT_LCH:
            layer_move(BASE);
            break;
    }
    return true;
}
