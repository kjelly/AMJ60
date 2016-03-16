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
   TRNS,TRNS,FN18,FN20,GRV,END,PGUP,FN10,FN0,FN0, FN0, FN9, RSFT,TRNS,      \
        TRNS,DEL,TRNS,          TRNS,            RALT,RGUI,RSFT,RCTL),

    /* Layer 2 */
    KEYMAP_KJELLY(
        ESC, 1,  2,  3,  4,  5,  6,  7,  8,  9,  0, COPY, PASTE, UNDO, KC_TRNS,  \
        CAPS,BTN1,BTN2,BTN3,BTN4,TRNS,LEFT,DOWN,UP,RIGHT, FN14, NO, NO,TRNS,      \
        FN3,ACL0,ACL1,ACL2,PGDN,HOME,MS_L, MS_D, MS_U, MS_R, FN14, NO, PENT,
   BTN1,MS_U,BTN2,LCTL,LGUI,LALT,PGUP,WH_L,WH_D,WH_U, WH_R,RCTL,     UP,FN3,      \
        MS_L,MS_D,MS_R,          TRNS,                    FN3,LEFT,DOWN,RIGHT),

    /* Layer 3 */
    KEYMAP_KJELLY(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, TRNS,  \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  TRNS,TRNS,      \
        TRNS,VOLD,VOLU,MUTE,EJCT,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,     PENT,      \
   TRNS,TRNS,TRNS,TRNS,TRNS,END,PGUP,FN0,FN0,FN0, FN0,FN9,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Layer 4 */
    KEYMAP_KJELLY(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, FN2, \
        CAPS,WH_U,BTN1,MS_U,BTN2,WH_L,HOME,END,PGUP,PGDN,P, NO, PAUS,INS,      \
        FN5,WH_D,MS_L,MS_D,MS_R,WH_R,LEFT, DOWN, UP, RIGHT, NO, NO, PENT,
   TRNS,TRNS,TRNS,TRNS,TRNS,END,PGUP,FN0,FN0,FN0, FN0,FN9,     TRNS,FN5,      \
        GRV,  LGUI,LALT,          SPC,         FN5,  RALT,RGUI,RCTL),

    /* Layer 5 */
    KEYMAP_KJELLY(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, TRNS,  \
        CAPS,BTN1,BTN2,BTN3,BTN4,FN4,MS_L,MS_D,MS_U,MS_R,BSPC, INS, PAUS,INS,      \
        TRNS,VOLD,VOLU,MUTE,PGDN,HOME,LEFT, DOWN, UP, RIGHT, BSLS, DEL, PENT,
   TRNS,TRNS,TRNS,TRNS,TRNS,END,PGUP,FN0,FN0,FN0, FN0,FN9,     TRNS,TRNS,      \
        TRNS,DEL,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),


    /* 6. HHKB default. Not work now
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Bspc |
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|Fn3|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn |
     * |-----------------------------------------------------------|
     * |    |Gui |Alt |      Space             |    |Alt |Gui |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_KJELLY(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, GRV, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,      \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,       \
   FN1, LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,FN7,       \
        FN7,  LGUI,LALT,          SPC,                     FN7,  RALT,RGUI,NO),
    /*  7. HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|Ejc|   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_KJELLY(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,  \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  TRNS,TRNS,      \
        TRNS,VOLD,VOLU,MUTE,EJCT,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,     PENT,      \
   FN3, TRNS,FN0,FN2,FN4,FN6,TRNS,PPLS,PMNS,END, PGDN,DOWN,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Layer 8 mouse layer */
    KEYMAP_KJELLY(
        ESC, 1,  2,  3,  4,  5,  6,  7,  8,  9,  0, COPY, PASTE, UNDO, KC_TRNS,  \
        CAPS,BTN1,BTN2,BTN3,BTN4,TRNS,LEFT,BTN1,BTN2,BTN2, FN14, NO, NO,TRNS,      \
        FN3,ACL0,ACL1,ACL2,PGDN,HOME,MS_L, MS_D, MS_U, MS_R, FN14, NO, PENT,
   BTN1,MS_U,BTN2,LCTL,LGUI,LALT,PGUP,WH_L,WH_D,WH_U, WH_R,RCTL,     UP,FN3,      \
        MS_L,MS_D,MS_R,          TRNS,                    FN3,LEFT,DOWN,RIGHT),

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

    [22] = ACTION_MODS_ONESHOT(MOD_LALT),
    [23] = ACTION_MODS_ONESHOT(MOD_LGUI),
};
