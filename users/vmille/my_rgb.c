//
// Created by Vivien Mille on 02/06/2024.
//

#include "my_rgb.h"
#include "my_layers.h"

bool rgb_matrix_indicators_user(void) {
    uint8_t current_layer = get_highest_layer(layer_state);
    switch (current_layer) {
        case NAV:
            rgb_matrix_set_color_all(0x10, 0x10, 0x00);  // RGB yellow
            break;
        case FUNCTION:
            rgb_matrix_set_color_all(0x10, 0x00, 0x10);  // RGB yellow
            break;
        case MOUSE:
            rgb_matrix_set_color_all(0x00, 0x00, 0x10);  // RGB blue
            break;
        default:
            break;
    }
    return false;
}