//
// Created by Vivien Mille on 02/06/2024.
//

#ifndef QMK_USERSPACE_MY_RGB_H
#define QMK_USERSPACE_MY_RGB_H

#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE
// Forward-declare this helper function since it is defined in rgb_matrix.c.7
void rgb_matrix_update_pwm_buffers(void);

bool rgb_matrix_indicators_user(void);
#endif

#endif // QMK_USERSPACE_MY_RGB_H
