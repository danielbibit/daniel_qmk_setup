#include QMK_KEYBOARD_H

// clang-format off
enum layers{
  WIN_BASE,
  WIN_FN,
  DAN_WIN,
  DAN_WIN_FN,
  CONFIG
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [WIN_BASE] = LAYOUT_ansi_87(
         KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_CTANA, RGB_MOD,

         KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP,

         KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN,

         KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,

         KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP,

         KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, MO(WIN_FN), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [WIN_FN] = LAYOUT_ansi_87(
         _______, KC_BRID, KC_BRIU, KC_TASK, KC_FILE, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, RGB_TOG,

         _______, BT_HST1, BT_HST2, BT_HST3, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

         RGB_TOG, RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

         _______, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, _______, _______, _______, _______, _______,

         _______, _______, _______, _______, _______, BAT_LVL, NK_TOGG, _______, _______, _______, _______, _______, _______,

         _______, _______, _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______
    ),

    [DAN_WIN] = LAYOUT_ansi_87(
         KC_CAPS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SCRL, KC_PAUS,

         KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP,

         KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN,

         LT(DAN_WIN_FN, KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, LT(DAN_WIN_FN, KC_ENT),

         KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP,

         KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, MO(CONFIG), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [DAN_WIN_FN] = LAYOUT_ansi_87(
         _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

         LCA(KC_T), KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_BTN1, KC_MS_U, KC_BTN2,

         LCA(KC_F1), KC_MPLY, KC_WH_U, KC_MPRV, KC_MNXT, _______, _______, _______, _______, LCA(KC_O), KC_PSCR, _______, KC_PGUP, LGUI(KC_L), KC_MS_L, KC_MS_D, KC_MS_R,

         KC_CAPS, KC_WH_L, KC_WH_D, KC_WH_R, KC_HOME, KC_END, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, KC_PGDN, KC_INS,

         KC_LSFT, KC_VOLD, KC_VOLU, LCA(KC_C), KC_MUTE, _______, _______, LCA(KC_M), _______, _______, _______, KC_RSFT, _______,

         KC_LCTL, KC_LGUI, KC_LALT, KC_LCTL, KC_RALT, _______, _______, KC_RCTL, _______, _______, _______
    ),


    [CONFIG] = LAYOUT_ansi_87(
         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG,

         _______, BT_HST1, BT_HST2, BT_HST3, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

         RGB_TOG, RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

         _______, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, _______, _______, _______, _______, _______,

         _______, _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, BAT_LVL, _______, _______,

         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
