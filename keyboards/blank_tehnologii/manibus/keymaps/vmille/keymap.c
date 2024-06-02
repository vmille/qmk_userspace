#include QMK_KEYBOARD_H
#include "my_keycodes.h"
#include "my_layout.h"
#include "my_layers.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [BASE] = LAYOUT_WRAPPER(
 // ╭──────────────────────────────────────────╮ ╭────────────────────────────────────────╮
                         ______________BASE_R1_LEFT______________, ______________BASE_R1_RIGHT______________,
 // ├──────────────────────────────────────────┤ ├────────────────────────────────────────┤
                         ______________BASE_R2_LEFT______________, ______________BASE_R2_RIGHT______________,
 // ├──────────────────────────────────────────┤ ├────────────────────────────────────────┤
                         ______________BASE_R3_LEFT______________, ______________BASE_R3_RIGHT______________,
 // ├──────────────────────────────────────────┤ ├────────────────────────────────────────┤
                         ______________BASE_R4_LEFT______________, ______________BASE_R4_RIGHT______________,
 // ╰──────────────────────────────────────────┤ ├────────────────────────────────────────╯
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ______BASE_T_LEFT______, ______BASE_T_RIGHT______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
 //        ╰───────────────────────────────────╯ ╰───────────────────────────────────╯
 ),
[FUNCTION] = LAYOUT_WRAPPER(
// ╭──────────────────────────────────────────────╮ ╭──────────────────────────────────────────────╮
                        ______________FUNCTION_R1_LEFT______________, ______________FUNCTION_R1_RIGHT______________,
// ├──────────────────────────────────────────────┤ ├──────────────────────────────────────────────┤
                        ______________FUNCTION_R2_LEFT______________, ______________FUNCTION_R2_RIGHT______________,
// ├──────────────────────────────────────────────┤ ├──────────────────────────────────────────────┤
                        ______________FUNCTION_R3_LEFT______________, ______________FUNCTION_R3_RIGHT______________,
// ├──────────────────────────────────────────────┤ ├──────────────────────────────────────────────┤
                        ______________FUNCTION_R4_LEFT______________, ______________FUNCTION_R4_RIGHT______________,
// ╰──────────────────────────────────────────────┤ ├──────────────────────────────────────────────╯
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ______FUNCTION_T_LEFT______, ______FUNCTION_T_RIGHT______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
//            ╰───────────────────────────────────╯ ╰───────────────────────────────────╯
 ),
 [NAV] = LAYOUT_WRAPPER(
 // ╭────────────────────────────────────────╮ ╭────────────────────────────────────────╮
                         ______________NAV_R1_LEFT______________, ______________NAV_R1_RIGHT______________,
 // ├────────────────────────────────────────┤ ├────────────────────────────────────────┤
                         ______________NAV_R2_LEFT______________, ______________NAV_R2_RIGHT______________,
 // ├────────────────────────────────────────┤ ├────────────────────────────────────────┤
                         ______________NAV_R3_LEFT______________, ______________NAV_R3_RIGHT______________,
 // ├────────────────────────────────────────┤ ├────────────────────────────────────────┤
                         ______________NAV_R4_LEFT______________, ______________NAV_R4_RIGHT______________,
 // ╰────────────────────────────────────────┤ ├────────────────────────────────────────╯
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ______NAV_T_LEFT______, ______NAV_T_RIGHT______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
 //      ╰───────────────────────────────────╯ ╰───────────────────────────────────╯
 ),

 [IDE] = LAYOUT_WRAPPER(
 // ╭────────────────────────────────────────╮ ╭────────────────────────────────────────╮
                         ______________IDE_R1_LEFT______________, ______________IDE_R1_RIGHT______________,
 // ├────────────────────────────────────────┤ ├────────────────────────────────────────┤
                         ______________IDE_R2_LEFT______________, ______________IDE_R2_RIGHT______________,
 // ├────────────────────────────────────────┤ ├────────────────────────────────────────┤
                         ______________IDE_R3_LEFT______________, ______________IDE_R3_RIGHT______________,
 // ├────────────────────────────────────────┤ ├────────────────────────────────────────┤
                         ______________IDE_R4_LEFT______________, ______________IDE_R4_RIGHT______________,
 // ╰────────────────────────────────────────┤ ├────────────────────────────────────────╯
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ______IDE_T_LEFT______, ______IDE_T_RIGHT______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
 //      ╰───────────────────────────────────╯ ╰───────────────────────────────────╯
 ),
   [MOUSE] = LAYOUT_WRAPPER(
 // ╭─────────────────────────────────────────╮ ╭─────────────────────────────────────────╮
                        ______________MOUSE_R1_LEFT______________, ______________MOUSE_R1_RIGHT______________,
 // ├─────────────────────────────────────────┤ ├─────────────────────────────────────────┤
                        ______________MOUSE_R2_LEFT______________, ______________MOUSE_R2_RIGHT______________,
 // ├─────────────────────────────────────────┤ ├─────────────────────────────────────────┤
                        ______________MOUSE_R3_LEFT______________, ______________MOUSE_R3_RIGHT______________,
 // ├─────────────────────────────────────────┤ ├─────────────────────────────────────────┤
                        ______________MOUSE_R4_LEFT______________, ______________MOUSE_R4_RIGHT______________,
 // ╰─────────────────────────────────────────┤ ├─────────────────────────────────────────╯
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ______MOUSE_T_LEFT______, ______MOUSE_T_RIGHT______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
 //      ╰────────────────────────────────────╯ ╰────────────────────────────────────╯
 ),
};