#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Macropad
#define PRODUCT         Macropad

/* #define MIDI_ADVANCED */

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* key matrix pins  for beccas board*/
#define MATRIX_ROW_PINS { D3, E6, D7, C6 }
#define MATRIX_COL_PINS { F7, B6, B4, B5 }

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed  */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x49, 0x8A, 0x6D, 0xA8, 0x0F, 0x24, 0xC1, 0x94}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 3 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 2 }

/*OLED Display*/
#define OLED_DISPLAY_128x64
#define OLED_IC OLED_IC_SH1106
#define OLED_COLUMN_OFFSET 2

/*Rotary Encodders*/
#define ENCODERS_PAD_A { F5, F6, B2, B2 }
#define ENCODERS_PAD_B { F4, F5, B3, B1 }
#define ENCODERS 8
#define ENCODER_RESOLUTION 4

//RGB 
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define RGB_DI_PIN D4
#define DRIVER_LED_TOTAL 120
/*
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_BREATHING

#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL

#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
*/




#define ENABLE_RGB
#define ENABLE_RGB_MATRIX_ALPHAS_MODS

//Space saving
#define LAYER_STATE_8BIT
