#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "quantum.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index

}, {
  // LED Index to Physical Position
}, {
  // LED Index to Flag
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
} };

#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
       	KC_F1 , KC_F2 , KC_F3 , KC_F4,
        KC_F5 , KC_F6 , KC_F7 , KC_F8,
        KC_F9, KC_F10 , KC_F11 , KC_F12,
        KC_F13, KC_F14, KC_F15, KC_F16
    ),

    [1] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____
    ),

    [2] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____
    ),

    [3] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____
    ),
    

};

void raw_hid_receive_kb(uint8_t *data, uint8_t length) {
    if(data[0] == 0xFC){
        switch (data[1]) {
            case 0x01:{
                // move to layer
                data[1] = 0xFD;
                layer_move(data[2]);
                break;
            }
            case 0x02:{
                // turn on layer
                data[1] = 0xFD;
                layer_on(data[2]);
                break;
            }
            case 0x03:{
                // turn off layer
                data[1] = 0xFD;
                layer_off(data[2]);
                break;
            }
        }
    }
    raw_hid_send(data, length);
}

static void render_my_logo(void) {
  static const char PROGMEM my_logo[] = {
    // Paste the code from the previous step below this line!
    // 'icons for macropad copy', 128x64px
// 'icons for macropad copy 2', 128x32px
// 'icons for macropad copy 2', 128x32px
// 'icons for macropad copy 2', 128x32px
0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0xe7, 0xe7, 
0xe7, 0xe7, 0xe7, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x08, 0x04, 
0x04, 0x04, 0x04, 0x08, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x82, 0x84, 0x08, 0xc0, 0x20, 0x10, 0x17, 
0x10, 0x20, 0xc0, 0x08, 0x84, 0x82, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xe0, 0xf0, 0xf8, 
0xf8, 0x00, 0xc0, 0x10, 0xe8, 0x10, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe3, 0xe3, 
0xe3, 0xe3, 0xe3, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1c, 0x0e, 0x07, 0x03, 0x02, 
0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x10, 0x08, 0x01, 0x02, 0x04, 0x74, 
0x04, 0x02, 0x01, 0x08, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x07, 0x0f, 0x1f, 
0x1f, 0x00, 0x03, 0x08, 0x17, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xff, 0x01, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 
0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0x01, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x90, 0x88, 0x08, 0x08, 
0x08, 0x50, 0x60, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x70, 0xa8, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0xa8, 0x70, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xff, 0x80, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0x80, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x31, 0x32, 0x34, 0x34, 
0x34, 0x34, 0x32, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  };

  oled_write_raw_P(my_logo, sizeof(my_logo));
}

#ifdef OLED_ENABLE
    enum layer_names {
        _MAC_DEFAULT,
        _PHOTOSHOP,
        _PREMIERE_PRO,
        _INDESIGN
    };

    bool oled_task_user() {
        //Sets start writing position (0,0) = top left hand corner
        oled_set_cursor(0, 0);

        //Switches the display output based on active layer
        switch (get_highest_layer(layer_state)) {
            case _MAC_DEFAULT :
                render_my_logo();
                break;
            case _PHOTOSHOP :
                oled_write("Photoshop             ", false);
                break;
            case _PREMIERE_PRO :
                oled_write("Premiere Pro            ", false);
                break;
            case _INDESIGN :
                oled_write("InDesign                ", false);
                break;
        }

        //oled_set_cursor(0, 0);
        //oled_write("Vol +  Vol -  Mute Search", false);
        //oled_set_cursor(0, 1);
        //oled_write("Test OLED Screen", false);
        //oled_set_cursor(0, 2);
        //oled_write("Test OLED Screen", false);
        //oled_set_cursor(0, 2);
        //oled_write("Test OLED Screen", false);
        return false;
    }
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_MAC_DEFAULT] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_A, KC_B), ENCODER_CCW_CW(KC_C, KC_D)  },
    [_PHOTOSHOP] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI), ENCODER_CCW_CW(RGB_SAD, RGB_SAI),  ENCODER_CCW_CW(KC_E, KC_F),  ENCODER_CCW_CW(KC_G, KC_H)  },
    [_PREMIERE_PRO] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(KC_I, KC_J), ENCODER_CCW_CW(KC_K, KC_L), ENCODER_CCW_CW(KC_M, KC_N)  },
    [_INDESIGN] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD), ENCODER_CCW_CW(KC_O, KC_P), ENCODER_CCW_CW(KC_Q, KC_R), ENCODER_CCW_CW(KC_S, KC_T) },
};
#endif