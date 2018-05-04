#include "keymap_common.h"

#define TAPK(MOD,KEY) ACTION_MODS_TAP_KEY((MOD), (KEY))

/*
 * KJELLY Layout
 */

/* keyboard layout
 * ,-----------------------------------------------------------.
 * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| BS|   |
 * |-----------------------------------------------------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
 * |-----------------------------------------------------------|
 * |      |  A|  S|  D|  F|  G|  H|  J|  K|  L| ; |  '|Return  |
 * |-----------------------------------------------------------|
 * |    |   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|      |   |
 * |-----------------------------------------------------------|
 * |    |    |    |      Space             |    |    |    |    |
 * `-----------------------------------------------------------'
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0 */
    KEYMAP_KJELLY(
         KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,  KC_MS_WH_RIGHT, \
         KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,      \
         KC_FN1,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_FN13,    KC_QUOT,      KC_ENT,       \
   KC_LSFT,  KC_LSFT,  TAPK(KC_LCTL,KC_Z),   TAPK(KC_LALT,KC_X),    TAPK(KC_LGUI,KC_C),    KC_V,    KC_B,    KC_N,    KC_M,    TAPK(KC_RGUI,KC_COMM),  TAPK(KC_RALT,KC_DOT),    TAPK(KC_RCTL,KC_SLSH),  KC_RSFT,  KC_FN1,       \
         KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,                 KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT),

    /* Layer 1 */
    KEYMAP_KJELLY(
         KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_FN21,  KC_FN19,  \
         KC_CAPS, KC_GRV, KC_FN9, KC_BSLS, KC_FN10,KC_LBRC  , KC_RBRC,    KC_MINS,  KC_FN17, KC_EQL,    KC_FN16,  KC_INS,  KC_PAUS, KC_DEL,      \
         KC_TRNS, KC_ESC, KC_VOLU, KC_VOLD, KC_PGDN, KC_END, KC_LEFT,  KC_DOWN,  KC_UP,   KC_RIGHT,  KC_BSPC,  KC_DEL,  KC_PENT,
    KC_TRNS, KC_TRNS, KC_APP, KC_NLCK, KC_PSCR, KC_HOME, KC_PGUP, KC_GRV, KC_FN9, KC_BSLS,  KC_FN10,  KC_FN9,  KC_RSFT, KC_TRNS,      \
         KC_TRNS, KC_DEL, KC_TRNS,           KC_TRNS,             KC_RALT, KC_RGUI, KC_RSFT, KC_RCTL),

};
/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_SET(0, ON_BOTH),
    [1] = ACTION_LAYER_MOMENTARY(1),
    [2] = ACTION_LAYER_SET(2, ON_BOTH),
    [3] = ACTION_LAYER_MOMENTARY(3),
    [4] = ACTION_LAYER_SET(4, ON_BOTH),
    [5] = ACTION_LAYER_MOMENTARY(5),
    [6] = ACTION_LAYER_SET(1, ON_BOTH),
    [7] = ACTION_LAYER_MOMENTARY(2),
    [8] = ACTION_LAYER_TOGGLE(1),
    [9] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
    [11] = ACTION_MODS_ONESHOT(MOD_RSFT),
    [12] = ACTION_MODS_ONESHOT(MOD_LCTL),
    [13] = ACTION_LAYER_TAP_KEY(8, KC_SCLN),
    [14] = ACTION_LAYER_SET(0, ON_RELEASE),
    [15] = ACTION_LAYER_TAP_KEY(2, KC_P),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),

    [18] = ACTION_BACKLIGHT_DECREASE(),
    [19] = ACTION_BACKLIGHT_TOGGLE(),
    [20] = ACTION_BACKLIGHT_INCREASE(),
    [21] = ACTION_BACKLIGHT_STEP(),

    [22] = ACTION_MODS_ONESHOT(MOD_LGUI),
    [23] = ACTION_MODS_ONESHOT(MOD_LALT),
};
