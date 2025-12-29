#include QMK_KEYBOARD_H
#include "version.h"

#define IS_ERGODOX_EZ

#include "my_keycodes.h"
#include "my_layout.h"
#include "my_layers.h"

#undef LAYOUT_WRAPPER
#define LAYOUT_WRAPPER(...) LAYOUT_ergodox_pretty(__VA_ARGS__)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_WRAPPER(
  // left hand
  ______________BASE_R1_LEFT______________, XXXXXXX,            XXXXXXX, ______________BASE_R1_RIGHT______________,
  ______________BASE_R2_LEFT______________, XXXXXXX,            XXXXXXX, ______________BASE_R2_RIGHT______________,
  ______________BASE_R3_LEFT______________,                              ______________BASE_R3_RIGHT______________,
  ______________BASE_R4_LEFT______________, XXXXXXX,            XXXXXXX, ______________BASE_R4_RIGHT______________,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,                     MO(IDE), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX,
                                            XXXXXXX,            XXXXXXX,
                  MS_BTN1, LT(NAV, KC_DEL), XXXXXXX,            XXXXXXX, LT(FUNCTION, KC_BSPC), KC_SPC
),
[FUNCTION] = LAYOUT_WRAPPER(
  // left hand
  ______________FUNCTION_R1_LEFT______________, XXXXXXX,            XXXXXXX, ______________FUNCTION_R1_RIGHT______________,
  ______________FUNCTION_R2_LEFT______________, XXXXXXX,            XXXXXXX, ______________FUNCTION_R2_RIGHT______________,
  ______________FUNCTION_R3_LEFT______________,                              ______________FUNCTION_R3_RIGHT______________,
  ______________FUNCTION_R4_LEFT______________, XXXXXXX,            XXXXXXX, ______________FUNCTION_R4_RIGHT______________,
       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,                     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                       XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX,
                                                XXXXXXX,            XXXXXXX,
                              _______, _______, _______,            _______, _______, _______
),
[NAV] = LAYOUT_WRAPPER(
  // left hand
  ______________NAV_R1_LEFT______________, XXXXXXX,            XXXXXXX, ______________NAV_R1_RIGHT______________,
  ______________NAV_R2_LEFT______________, XXXXXXX,            XXXXXXX, ______________NAV_R2_RIGHT______________,
  ______________NAV_R3_LEFT______________,                              ______________NAV_R3_RIGHT______________,
  ______________NAV_R4_LEFT______________, XXXXXXX,            XXXXXXX, ______________NAV_R4_RIGHT______________,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ENT_LCH,                  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                  XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX,
                                           XXXXXXX,            XXXXXXX,
                         _______, _______, _______,            _______, KC_TAB, _______
),
[IDE] = LAYOUT_WRAPPER(
  // left hand
  ______________IDE_R1_LEFT______________, XXXXXXX,            XXXXXXX, ______________IDE_R1_RIGHT______________,
  ______________IDE_R2_LEFT______________, XXXXXXX,            XXXXXXX, ______________IDE_R2_RIGHT______________,
  ______________IDE_R3_LEFT______________,                              ______________IDE_R3_RIGHT______________,
  ______________IDE_R4_LEFT______________, XXXXXXX,            XXXXXXX, ______________IDE_R4_RIGHT______________,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                  XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX,
                                           XXXXXXX,            XXXXXXX,
                         XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX, XXXXXXX
),
[MOUSE] = LAYOUT_WRAPPER(
  // left hand
  ______________MOUSE_R1_LEFT______________, XXXXXXX,            XXXXXXX, ______________MOUSE_R1_RIGHT______________,
  ______________MOUSE_R2_LEFT______________, XXXXXXX,            XXXXXXX, ______________MOUSE_R2_RIGHT______________,
  ______________MOUSE_R3_LEFT______________,                              ______________MOUSE_R3_RIGHT______________,
  ______________MOUSE_R4_LEFT______________, XXXXXXX,            XXXXXXX, ______________MOUSE_R4_RIGHT______________,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MS_BTN2,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX,
                                            XXXXXXX,            XXXXXXX,
                          MS_BTN1, MS_BTN3, XXXXXXX,            XXXXXXX, XXXXXXX, XXXXXXX
)
};
// clang-format on
