#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "quantum.h"


#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
       	KC_F1 , KC_F2 , KC_F3 , KC_F4,
        KC_F5 , KC_F6 , KC_F7 , KC_F8,
        KC_F9, KC_F10 , KC_F11 , KC_F12

    ),

    [1] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____
    ),

    [2] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____,
        ____, ____, ____, ____
    ),

    [3] = LAYOUT(
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

