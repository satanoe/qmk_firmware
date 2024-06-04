#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

enum layer_number {
  _QWERTY = 0,
  _SFTUSSYM,
  _LOWER,
  _RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/  LT(  /     \      \-----------------------------------------'
 *                   |      | LGUI |MT(LAlt,/ LOWER,/       \RAISE \ MT(RAlt,| RGUI |RCTRL |
 *                   |      |      |LANG2)|/ Space)/         \      \ |LANG1)|      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   JP_1,   JP_2,    JP_3,    JP_4,    JP_5,                     JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    JP_GRV,
  KC_TAB,   JP_Q,   JP_W,    JP_E,    JP_R,    JP_T,                     JP_Y,    JP_U,    JP_I,    JP_O,    JP_P,    JP_MINS,
  KC_LCTL,  JP_A,   JP_S,    JP_D,    JP_F,    JP_G,                     JP_H,    JP_J,    JP_K,    JP_L,    JP_SCLN, JP_QUOT,
  LM(_SFTUSSYM, MOD_LSFT),  JP_Z,   JP_X,    JP_C,    JP_V,    JP_B, JP_LBRC,  JP_RBRC,  JP_N,    JP_M,    JP_COMM, JP_DOT,  JP_SLSH,  LM(_SFTUSSYM, MOD_RSFT),
                        XXXXXXX, KC_LGUI, LALT_T(KC_LNG2), LT(_LOWER, KC_SPC), MO(_RAISE), RALT_T(KC_LNG1), KC_RGUI, KC_RCTL
),
/* SFTUSSYM (Shift US layout Sym)
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |  _   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |   :  |   "  |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_SFTUSSYM] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, JP_TILD,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, JP_UNDS,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, JP_COLN, JP_DQUO,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  ),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |   ~  |   `  |   +  |   =  |   |  |-------|    |-------|   \  |   [  |   ]  |   {  |   }  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LOWER] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, JP_EXLM, JP_AT  , JP_HASH, JP_DLR , JP_PERC,                   JP_CIRC, JP_AMPR, JP_ASTR, JP_LPRN, JP_RPRN, _______,
  _______, JP_1   , JP_2   , JP_3   , JP_4   , JP_5   ,                   JP_6   , JP_7   , JP_8   , JP_9   , JP_0   , _______,
  _______, JP_TILD, JP_GRV , JP_PLUS, JP_EQL , JP_PIPE, _______, _______, JP_YEN,  JP_LBRC, JP_RBRC, JP_LCBR, JP_RCBR, _______,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |  Ins |PrtScr|ScrLck| Pause|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |      |                    | Home | PgDn | PgUp |  End |  Esc |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  F5  |  F6  |  F7  |  F8  |      |-------.    ,-------| Left | Down |  Up  |Right |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |  F9  | F10  | F11  | F12  |      |-------|    |-------|      | Enter| Bksp |  Del |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, KC_INS , KC_PSCR, KC_SCRL, KC_PAUS,
  _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , _______,                     KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_NO  , _______,
  _______, KC_F5  , KC_F6  , KC_F7  , KC_F8  , _______,                     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_ESC , _______,
  _______, KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______,  _______, _______,  _______, KC_ENT , KC_BSPC, KC_DEL , _______, _______,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
)
};

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

uint8_t mod_state;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
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
                }
            } else {
                if (colkey_registered) {
                    unregister_code(JP_COLN);
                    colkey_registered = false;
                    return false;
                }
            }
        }
        default: {
        }
    }
    return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t * record) {
    switch (keycode) {
        case LT(2, KC_SPC):
            return 125;
        case LT(1, KC_SPC):
            return 125;
        default:
            return TAPPING_TERM;
    }
}
