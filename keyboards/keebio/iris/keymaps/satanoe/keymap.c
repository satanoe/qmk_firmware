#include QMK_KEYBOARD_H
#include "keymap_jp.h"

#define _JISQWERTY 0
#define _SFTUSSYM 1
#define _LOWER 2
#define _RAISE 3
#define _NUMPAD 4

enum custom_keycodes {
  LOWER = SAFE_RANGE,
  RAISE,
  SP_NUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_JISQWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     JP_GRV,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,                               JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  JP_Q,    JP_W,    JP_E,    JP_R,    JP_T,                               JP_Y,    JP_U,    JP_I,    JP_O,    JP_P,    JP_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_RCTL, JP_A,    JP_S,    JP_D,    JP_F,    JP_G,                               JP_H,    JP_J,    JP_K,    JP_L,    JP_SCLN, JP_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
LM(_SFTUSSYM, MOD_LSFT), JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,    KC_ESC,           KC_DEL,  JP_N,    JP_M,    JP_COMM, JP_DOT,  JP_SLSH, LM(_SFTUSSYM, MOD_RSFT),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, LOWER,   KC_LALT,                   SP_NUM,  RAISE,   KC_RGUI
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SFTUSSYM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     JP_TILD, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, JP_UNDS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, JP_COLN, JP_DQUO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, JP_EXLM, JP_AT,   JP_HASH, JP_DLR,  JP_PERC,                            JP_CIRC, JP_AMPR, JP_ASTR, JP_LPRN, JP_RPRN, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, JP_1,    JP_2,    JP_3,    JP_4,    JP_5,                               JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, JP_GRV,  JP_TILD, JP_PLUS, JP_EQL,  JP_PIPE, _______,          _______, JP_YEN,  JP_LBRC, JP_RBRC, JP_LCBR, JP_RCBR, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_INS,  KC_NO,   KC_PSCR, KC_SLCK, KC_PAUS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,                              KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,                              KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_ESC,  KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   _______,          _______, KC_NO,   KC_ENT,  KC_BSPC, KC_DEL,  KC_NO,   _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NUMPAD] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_P7,   KC_P8,   KC_P9,   KC_BSPC, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_P4,   KC_P5,   KC_P6,   JP_MINS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   JP_PLUS, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

// Implimenting custom layter tap behavior
// Based on the code from https://gist.github.com/okapies/5d13a174cbb13ce34dbd9faede9d0b71#file-keymap-c-L99-L164
static bool lower_pressed = false;
static uint16_t lower_pressed_time = 0;
static bool raise_pressed = false;
static uint16_t raise_pressed_time = 0;
static bool sp_num_pressed = false;
static uint16_t sp_num_pressed_time = 0;
static uint8_t mod_state;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER:
            if (record->event.pressed) {
                lower_pressed      = true;
                lower_pressed_time = record->event.time;
                layer_on(_LOWER);
            } else {
                layer_off(_LOWER);
                if (lower_pressed && (TIMER_DIFF_16(record->event.time, lower_pressed_time) < TAPPING_TERM)) {
                    register_code(KC_LANG2);  // '英' key for macOS
                    register_code(KC_MHEN);
                    unregister_code(KC_MHEN);
                    unregister_code(KC_LANG2);
                }
                lower_pressed = false;
            }
            return false;
            break;
        case RAISE:
            if (record->event.pressed) {
                raise_pressed      = true;
                raise_pressed_time = record->event.time;
                layer_on(_RAISE);
            } else {
                layer_off(_RAISE);
                if (raise_pressed && (TIMER_DIFF_16(record->event.time, raise_pressed_time) < TAPPING_TERM)) {
                    register_code(KC_LANG1);  // 'かな' key for macOS
                    register_code(KC_HENK);
                    unregister_code(KC_HENK);
                    unregister_code(KC_LANG1);
                }
                raise_pressed = false;
            }
            return false;
            break;
        case SP_NUM:
            if (record->event.pressed) {
                sp_num_pressed      = true;
                sp_num_pressed_time = record->event.time;
                layer_on(_NUMPAD);
            } else {
                layer_off(_NUMPAD);
                if (sp_num_pressed && (TIMER_DIFF_16(record->event.time, sp_num_pressed_time) < TAPPING_TERM)) {
                    register_code(KC_SPC);  // for macOS
                    unregister_code(KC_SPC);
                }
                sp_num_pressed = false;
            }
            return false;
            break;
        // Enabling to input ':' by cancelling shift mod state
        case JP_COLN: {
            static bool colkey_registered;
            mod_state = get_mods();
            if (record->event.pressed) {
                if (mod_state & MOD_MASK_SHIFT) {
                    del_mods(MOD_MASK_SHIFT);
                    register_code(JP_COLN);
                    colkey_registered = true;
                    set_mods(mod_state);
                    return false;
                } else {
                    if (colkey_registered) {
                        unregister_code(JP_COLN);
                        colkey_registered = false;
                        return false;
                    }
                }
            }
        }
        default:
            if (record->event.pressed) {
                // reset the flags
                lower_pressed  = false;
                raise_pressed  = false;
                sp_num_pressed = false;
            }
            break;
    }
    return true;
}