#include QMK_KEYBOARD_H

// clang-format off
enum layers {
    WIN_BASE,
    DAN_WIN,
    DAN_WIN_FN,
    MOUSE_FN,
    CONFIG
};

enum custom_keycodes {
    /*LAST_KEYCHRON = KC_CORTANA,*/
    TERM_EDIT = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TERM_EDIT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("x") SS_DELAY(50) SS_LCTL("e"));
            } else {
                // released event
            }
            break;
    }
    return true;
};

#define XX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [WIN_BASE] = LAYOUT_ansi_61(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,

        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,

        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,

        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,

        KC_LCTL, KC_LWIN, KC_LALT, KC_SPC, KC_RALT, XX, XX, KC_RCTL
    ),

    [DAN_WIN] = LAYOUT_ansi_61(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,

        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,

        MT(MOD_LCTL, KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, LT(DAN_WIN_FN, KC_ENT),

        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,

        MO(DAN_WIN_FN), KC_LGUI, KC_LALT, LT(MOUSE_FN, KC_SPC), KC_RALT, KC_RGUI, MO(CONFIG), KC_RCTL
    ),

    [DAN_WIN_FN] = LAYOUT_ansi_61(
        LCA(KC_T), KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,

        LCA(KC_F1), KC_MPLY, LCA(KC_W), KC_MPRV, KC_MNXT, LCA(KC_O), _______, _______, _______, _______, KC_UP, _______, KC_PGUP, LGUI(KC_L),

        KC_LCTL, TERM_EDIT, KC_PSCR, _______, LCA(KC_M), _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, KC_PGDN, KC_INS,

        KC_LSFT, KC_VOLD, KC_VOLU, LCA(KC_C), KC_MUTE, _______, KC_DOWN, _______, KC_HOME, KC_END, _______, KC_RSFT,

        KC_CAPS, KC_LGUI, KC_LALT, MT(MOD_LCTL, KC_SPC), KC_RALT, _______, _______, KC_RCTL
    ),

    [MOUSE_FN] = LAYOUT_ansi_61(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

        _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, _______, _______, _______, _______, _______, _______, _______, _______, _______,

        _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, KC_BTN1, KC_BTN2, _______, _______, _______, _______,

        _______, KC_WH_L, KC_WH_R, _______, _______, _______, _______, _______, _______, _______, _______, _______,

        _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [CONFIG] = LAYOUT_ansi_61(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

        RGB_TOG, RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, _______, _______, _______, _______,

        _______, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, _______, _______, _______, _______, _______,

        _______, _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______, _______,

        _______, _______, _______, _______, _______, _______, _______, _______
    )
};
