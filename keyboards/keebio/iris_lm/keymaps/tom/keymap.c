// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layers { _BASE, _SYM, _GAME, _FN };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_CIRC,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                   KC_H,    KC_J,    KC_K,    KC_L,    KC_SLSH, KC_RSFT,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LCTL, LCTL(KC_B), KC_Z, KC_X,    KC_C,    KC_V,    TG(_GAME),            CW_TOGG, KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_RGUI,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
        KC_LGUI, LT(_SYM, KC_BSPC), MO(_FN),                                            KC_HYPR, LT(_SYM, KC_SPC), KC_RALT
        // └────────┴────────┴────────┘                                              └────────┴────────┴────────┘
        ),

    [_SYM] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                                KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PGUP,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_BSLS, KC_PIPE, KC_LPRN, KC_RPRN, KC_AMPR, KC_COMM,                                KC_SLSH, KC_DQUO, KC_QUOT, KC_GRV,  XXXXXXX, KC_PGDN,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, KC_LCBR, KC_UNDS, KC_RCBR, KC_TILD, KC_DOT,                                 KC_EQL,  KC_LBRC, KC_MINS, KC_RBRC, XXXXXXX, _______,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, XXXXXXX, XXXXXXX, KC_SCLN, KC_LT,   QK_BOOT,              QK_BOOT, KC_GT,   KC_COLN, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
        _______, _______, _______,                                                          _______, _______, _______
        // └────────┴────────┴────────┘                                              └────────┴────────┴────────┘
        ),

    [_GAME] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LCTL, _______, KC_Z,    KC_X,    KC_C,    KC_V,    _______,              _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
        KC_LGUI, LT(_SYM, KC_SPC), MO(_FN),                                             KC_HYPR, LT(_SYM, KC_BSPC), KC_RALT
        // └────────┴────────┴────────┘                                              └────────┴────────┴────────┘
        ),

    [_FN] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        EE_CLR,  KC_BRID, XXXXXXX, XXXXXXX, XXXXXXX, KC_BRIU,                                KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        RM_TOGG, _______, _______, _______, _______, _______,                                _______, _______, _______, _______, _______, _______,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______, _______,                                KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LCTL, _______, _______, _______, _______, _______, _______,              _______, _______, _______, _______, _______, _______, EE_CLR,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
        _______, _______, _______,                                                          _______, _______, _______
        // └────────┴────────┴────────┘                                              └────────┴────────┴────────┘
        )};

// Lighting follows the layer: solid white normally, the rainbow while the game
// layer is on. Checked continuously rather than on layer change, because the
// rgb_matrix setters do nothing while lighting is toggled off. Nothing is
// written to EEPROM, and RM_TOGG keeps working in both modes.
void housekeeping_task_user(void) {
    // Only the master knows the layer state; the other half receives the
    // resulting RGB config through the split sync.
    if (!is_keyboard_master() || !rgb_matrix_is_enabled()) {
        return;
    }

    bool    game = IS_LAYER_ON(_GAME);
    uint8_t mode = game ? RGB_MATRIX_CYCLE_LEFT_RIGHT : RGB_MATRIX_SOLID_COLOR;
    uint8_t sat  = game ? 255 : 0;

    if (rgb_matrix_get_mode() != mode || rgb_matrix_get_sat() != sat) {
        rgb_matrix_mode_noeeprom(mode);
        rgb_matrix_sethsv_noeeprom(rgb_matrix_get_hue(), sat, rgb_matrix_get_val());
    }
}
