//
// Created by Vivien Mille on 06/01/2026.
//
#include "trackball_tapdance.h"

td_state_t cur_dance(tap_dance_state_t* state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) {
            return TD_SINGLE_TAP;
        }
        else {
            return TD_SINGLE_HOLD;
        }
    }
    else if (state->count == 2) {
        if (state->pressed) {
            return TD_DOUBLE_HOLD;
        }
        else {
            return TD_DOUBLE_TAP;
        }
    }
    return TD_UNKNOWN;
}

static td_tap_t td_tap_state = {
    .is_press_action = true,
    .td_state = TD_NONE
};

void td_finished(tap_dance_state_t* state, void* user_data) {
    td_tap_state.td_state = cur_dance(state);
    switch (td_tap_state.td_state) {
        case TD_SINGLE_HOLD:
            toggle_drag_scroll();
            break;
        case TD_DOUBLE_TAP:
            cycle_dpi();
            break;
        case TD_DOUBLE_HOLD:
            char str[16];
            sprintf(str, "%d", dpi_array[keyboard_config.dpi_config]);
            SEND_STRING(str);
            break;
        default:
            break;
    }
}

void td_reset(tap_dance_state_t *state, void *user_data) {
    switch (td_tap_state.td_state) {
        case TD_SINGLE_HOLD:
            toggle_drag_scroll();
            break;
        default:
            break;
    }
    td_tap_state.td_state = TD_NONE;
}

