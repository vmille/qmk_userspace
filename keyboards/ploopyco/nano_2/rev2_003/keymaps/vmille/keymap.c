/* Copyright 2021 Colin Lam (Ploopy Corporation)
* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
 * Copyright 2019 Hiroyuki Okada
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
    TD_KEY
};

td_state_t cur_dance(tap_dance_state_t *state);

// For the x tap dance. Put it here so it can be used in any keymap
void td_finished(tap_dance_state_t* state, void* user_data);
void td_reset(tap_dance_state_t* state, void* user_data);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( TD(TD_KEY) )
};

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

tap_dance_action_t tap_dance_actions[] = {
    [TD_KEY] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_finished, td_reset)
};