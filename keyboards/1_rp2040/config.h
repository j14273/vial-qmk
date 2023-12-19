#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x2e8a
#define PRODUCT_ID      0xf00a
#define DEVICE_VER		0x0001
#define MANUFACTURER    Company
#define PRODUCT         4x3 Pico Macropad

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { GP20, GP21, GP22 }
#define MATRIX_COL_PINS { GP19, GP18, GP17, GP16 }


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x1C, 0xEC, 0x4D, 0xFF, 0x54, 0x9B, 0x33, 0x5A}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 1 }
