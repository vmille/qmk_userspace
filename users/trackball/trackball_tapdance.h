//
// Created by Vivien Mille on 06/01/2026.
//

#pragma once

#include QMK_KEYBOARD_H

typedef enum {
    TD_NONE,
    TD_SINGLE_TAP,
    TD_DOUBLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_HOLD,
    TD_UNKNOWN
} td_state_t;

typedef struct {
    bool is_press_action;
    td_state_t td_state;
} td_tap_t;

enum {
    TD_SCROLL_DPI
};

td_state_t cur_dance(tap_dance_state_t *state);

// For the x tap dance. Put it here so it can be used in any keymap
void td_finished(tap_dance_state_t* state, void* user_data);
void td_reset(tap_dance_state_t* state, void* user_data);
