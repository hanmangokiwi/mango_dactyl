#include "mango_dactyl.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        led_t led_state = host_keyboard_led_state();
        if (led_state.caps_lock) {
            tap_code(KC_CAPS_LOCK);
        }
        if (!led_state.num_lock) {
            tap_code(KC_NUM_LOCK);
        }

        if (layer_state_is(1)) {
            switch (keycode) {
                case KC_COMMA:
                    if ((get_mods() & MOD_BIT(KC_LEFT_SHIFT)) == MOD_BIT(KC_LEFT_SHIFT)) {
                        tap_code(KC_DOT);
                        return false;
                    }
                    return true;
                case KC_DOT:
                    if ((get_mods() & MOD_BIT(KC_LEFT_SHIFT)) == MOD_BIT(KC_LEFT_SHIFT)) {
                        tap_code(KC_COMMA);
                        return false;
                    }
                    return true;
            }
        }

        switch (keycode) {
            case PB_29:
                layer_clear();
                default_layer_set(64);
                layer_on(7);
                return true;
            case PB_30:
                layer_clear();
                tap_code(KC_ENTER);
                return false;
            case PB_31:
                layer_clear();
                return true;
            case PB_32:
                default_layer_set(0);
                layer_clear();
                return true;
            case KC_ESC:
                layer_clear();
                return true;
            case KC_ENTER:
                layer_clear();
                return true;
            case PB_28:
                layer_clear();
                layer_on(5);
                return true;
            case PB_27:
                layer_clear();
                layer_on(11);
                return true;
        }
    } else {
        switch (keycode) {
            case PB_28:
                layer_clear();
                return true;
            case PB_27:
                layer_clear();
                return true;
        }

    }
    //  else {
    //     switch (keycode) {
    //         case KC_LEFT_CTRL:
    //         layer_clear();
    //         return true;
    //     }
    // }
    return true;
};