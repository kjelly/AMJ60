#include "keymap_common.h"

/*
 * KJELLY Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
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
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, FN2, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,      \
        FN0,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,       \
  LCTL, LSFT, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,FN0,       \
        GRV,  LGUI,LALT,          SPC,         FN0,  RALT,RGUI,RCTL),
    /* 1: KJELLY Fn layer
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
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, TRNS,  \
        CAPS,BTN1,BTN2,BTN3,BTN4,FN4,MS_L,MS_D,MS_U,MS_R,BSPC, INS, PAUS,INS,      \
        TRNS,VOLD,VOLU,MUTE,PGDN,HOME,LEFT, DOWN, UP, RIGHT, BSLS, DEL, PENT,
   TRNS,TRNS,TRNS,TRNS,TRNS,END,PGUP,WH_L,WH_D,WH_U, WH_R,FN3,     TRNS,TRNS,      \
        TRNS,DEL,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    KEYMAP_KJELLY(
        ESC, 1,  2,  3,  4,  5,  6,  7,  8,  9,  0, COPY, PASTE, UNDO, KC_TRNS,  \
        CAPS,BTN1,BTN2,BTN3,BTN4,TRNS,LEFT,DOWN,UP,RIGHT, NO, NO, NO,TRNS,      \
        TRNS,ACL0,ACL1,ACL2,PGDN,HOME,MS_L, MS_D, MS_U, MS_R, NO, NO, PENT,
   BTN1,MS_U,BTN2,LCTL,LGUI,LALT,PGUP,WH_L,WH_D,WH_U, WH_R,RCTL,     UP,TRNS,      \
        MS_L,MS_D,MS_R,          TRNS,                    TRNS,LEFT,DOWN,RIGHT),

    KEYMAP_KJELLY(
        PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, TRNS,  \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  TRNS,TRNS,      \
        TRNS,VOLD,VOLU,MUTE,EJCT,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,     PENT,      \
   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
    [2] = ACTION_LAYER_TOGGLE(2),
    [3] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [4] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
};
