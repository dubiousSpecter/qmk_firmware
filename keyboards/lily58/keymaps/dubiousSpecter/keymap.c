#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LMOD,
  _RMOD,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |  1!  |  2"  |  3£  |  4$  |  5%  |                    |  6^  |  7&  |  8*  |  9(  |  0)  |  DEL |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |BackSp|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |  ;:  | HOME |
 * |------+------+------+------+------+------| PGDN  |    | PGUP  |------+------+------+------+------+------|
 * |LCtrl |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |  ,<  |  .>  |  /?  | END  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LWIN | LALT |LMOD  | /Enter  /       \ Space\  | RMOD |ALTGR |  APP |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_HOME,
  KC_LCTRL, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_PGUP, KC_PGDN,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_END,
                          KC_LWIN, KC_LALT, MO(_LMOD), KC_ENT, KC_SPC, MO(_RMOD), KC_ALGR, KC_APP
),
/* LMOD
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |  1!  |  2"  |  3£  |  4$  |  5%  |                    |  F6  |  F7  |  F8  |  F9  | F10  |  DEL |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |  `¬  |      |  UP  |  [{  |  ]}  |BackSp|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|  '@  | LEFT | DOWN | RIGHT|  #~  | HOME |
 * |------+------+------+------+------+------| PGDN  |    | PGUP  |------+------+------+------+------+------|
 * |LCtrl |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|  -_  |  +=  |      |      |  \|  | END  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LWIN | LALT |LMOD  | /Enter  /       \ Space\  | RMOD |ALTGR |  APP |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LMOD] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , _______,
  _______, _______, _______, _______, _______, _______,                   KC_GRV , _______, KC_UP  , KC_LBRC, KC_RBRC, _______,
  _______, _______, _______, _______, _______, _______,                   KC_QUOT, KC_LEFT, KC_DOWN, KC_RGHT, KC_NUHS, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL , _______, _______, KC_NUBS, _______,
                             _______, _______, _______, _______, _______, _______, _______, _______
),
/* RMOD
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  6^  |  7&  |  8*  |  9(  |  0)  |  DEL |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |      |      |      |      |                    |   Y  |   U  |   I  |   O  |   P  |BackSp|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|      |      |      |      |      |-------.    ,-------|   H  |   J  |   K  |   L  |  ;:  | HOME |
 * |------+------+------+------+------+------| PGDN  |    | PGUP  |------+------+------+------+------+------|
 * |LCtrl |      |      |      |      |      |-------|    |-------|   N  |   M  |  ,<  |  .>  |  /?  | END  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LWIN | LALT |LMOD  | /Enter  /       \ Space\  | RMOD |ALTGR |  APP |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RMOD] = LAYOUT(
  _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______, _______, _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LCtrl |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | WINt | LALT |LMOD  | /Enter  /       \ Space\  |RMOD | RGUI |  APP |
 *                   |      |      |      |/       /         \      \ |     |      |      |
 *                   `----------------------------'           '------''-------------------'
 */
  [_ADJUST] = LAYOUT(
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                             _______, _______, _______, _______, _______, _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LMOD, _RMOD, _ADJUST);
}

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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
