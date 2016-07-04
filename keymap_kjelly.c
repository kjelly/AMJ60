#include "keymap_common.h"

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
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MS_WH_LEFT, MS_WH_DOWN, MS_WH_UP, MS_WH_RIGHT, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,  P,   LBRC,RBRC,BSPC,      \
        FN1,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN13,   QUOT,     ENT,       \
  LCTL, LSFT, Z,   X,   C,   V,   B,   N,   M,   COMM, DOT,   SLSH, FN11, FN1,       \
        FN12,FN23, FN22,          SPC,                LEFT, DOWN, UP,   RIGHT),

    /* Layer 1 */
    KEYMAP_KJELLY(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, FN21, FN19,  \
        CAPS,GRV,FN9,BSLS,FN10,NO  ,NO,   MINS, FN17,EQL,   FN16, INS, PAUS,DEL,      \
        TRNS,VOLD,VOLU,MUTE,PGDN,HOME,LEFT, DOWN, UP,  RIGHT, BSPC, DEL, PENT,
   TRNS,TRNS,APP,NLCK,PSCR,END,PGUP,FN10,FN0,FN0, FN0, FN9, RSFT,TRNS,      \
        TRNS,DEL,TRNS,          TRNS,            RALT,RGUI,RSFT,RCTL),

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
