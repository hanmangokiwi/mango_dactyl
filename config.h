#pragma once


/* key matrix pins */
#define MATRIX_ROW_PINS { D0, D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS { B5, B6, B2, B3, B1, F7, F6, F5 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define SPLIT_HAND_MATRIX_GRID F4, D1
// #define SPLIT_HAND_PIN F4
// #define EE_HANDS
#define SPLIT_USB_DETECT
#define MASTER_LEFT
#define SPLIT_LAYER_STATE_ENABLE

#define SOFT_SERIAL_PIN D2