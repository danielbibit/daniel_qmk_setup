#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_65_ansi(
        KC_GRV,         KC_1,    KC_2,    KC_3, KC_4, KC_5, KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL, KC_BSPC,  KC_NO,
        KC_TAB,         KC_Q,    KC_W,    KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_NO,
        LT(1,KC_ESC),   KC_A,    KC_S,    KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT, LT(1,KC_ENT),     KC_NO,
        KC_LSFT,        KC_Z,    KC_X,    KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,      KC_UP,       KC_NO,
        KC_LCTL,        KC_LGUI, KC_LALT,             KC_SPC,           KC_RALT, MO(1),  KC_RCTL, KC_LEFT,      KC_DOWN,     KC_RGHT
    ),

	[1] = LAYOUT_65_ansi(
        LCA(KC_T),  KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,       KC_F10,     KC_F11,     KC_F12,     KC_DEL,     BL_TOGG,
        LCA(KC_F1), KC_MPLY,    KC_WH_U,    KC_MPRV,    KC_MNXT,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      LCA(KC_O),   KC_PSCR,    KC_NO,      KC_PGUP,    LGUI(KC_L), BL_STEP,
        KC_CAPS,    KC_WH_L,    KC_WH_D,    KC_WH_R,    KC_HOME,    KC_END,     KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,     KC_NO,      KC_PGDN,    KC_INS,                 KC_NO,
        KC_LSFT,                KC_VOLD,    KC_VOLU,    LCA(KC_C),  KC_MUTE,    KC_NO,      KC_NO,      LCA(KC_M),  KC_NO,       KC_NO,      KC_NO,      KC_BTN1,    KC_MS_U,    KC_BTN2,
        KC_LCTL,    KC_LGUI,    KC_LALT,                                        KC_LCTL,                            KC_RALT,     KC_NO,      KC_RCTL,    KC_MS_L,    KC_MS_D,    KC_MS_R
    )
};
