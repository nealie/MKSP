// Copyright 2023 QMK
// SPDX-License-Identifier: MIT

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────────┬──────┬───────┬─────┬─────┬─────┬─────┬──────┬──────┬──────┬───────┬───────┐
     * │ ESC    │ 1 !  │ 2 @   │ 3 # │ 4 $ │ 5 % │ 6 ^ │ 7 &  │ 8 *  │ 9 (  │ 0  )  │ BS    │
     * ├────────┼──────┼───────┼─────┼─────┼─────┼─────┼──────┼──────┼──────┼───────┼───────┤
     * │ TAB    │ q Q  │ w W   │ e E │ r R │ t T │ y Y │ u U  │ i I  │ o O  │ p P   │ DEL   │
     * ├────────┼──────┼───────┼─────┼─────┼─────┼─────┼──────┼──────┼──────┼───────┼───────┤
     * │ SYM    │ a A  │ s S   │ d D │ f F │ g G │ h H │ j J  │ k K  │ l L  │ ; :   │ ENTER │
     * ├────────┼──────┼───────┼─────┼─────┼─────┼─────┼──────┼──────┼──────┼───────┼───────┤
     * │ SHIFT  │ z Z  │ x X   │ c C │ v V │ b B │ n N │ m M  │ , <  │ . >  │ UP    │ SHIFT │
     * ├────────┼──────┼───────┼─────┼─────┼─────┼─────┼──────┼──────┼──────┼───────┼───────┤
     * │ CTRL   │ OS   │ ALT   │ \ | │ SPC │     │     │ SPC  │ / ?  │ LEFT │ DOWN  │ RIGHT │
     * └────────┴──────┴───────┴─────┴─────┴─────┴─────┴──────┴──────┴──────┴───────┴───────┘
     *
     * ┌────────┬──────┬───────┬─────┬─────┬─────┬─────┬──────┬──────┬──────┬───────┬───────┐
     * │ _____  │ !    │ @     │ #   │ $   │ %   │ ^   │ &    │ *    │ (    │ )     │ _____ │
     * ├────────┼──────┼───────┼─────┼─────┼─────┼─────┼──────┼──────┼──────┼───────┼───────┤
     * │ _____  │ `    │ ~     │ -   │ _   │ =   │ +   │ {    │ }    │ [    │ ]     │ INS   │
     * ├────────┼──────┼───────┼─────┼─────┼─────┼─────┼──────┼──────┼──────┼───────┼───────┤
     * │ _____  │ F1   │ F2    │ F3  │ F4  │ F5  │ F6  │ Vol- │ Vol+ │ MUTE │ :     │ _____ │
     * ├────────┼──────┼───────┼─────┼─────┼─────┼─────┼──────┼──────┼──────┼───────┼───────┤
     * │        │ F7   │ F8    │ F9  │ F10 │ F11 │ F12 │ APP  │ '    │ >    │ PG UP │ _____ │
     * ├────────┼──────┼───────┼─────┼─────┼─────┼─────┼──────┼──────┼──────┼───────┼───────┤
     * │ R-CTRL │ R-OS │ R-ALT │ |   │ ___ │ ___ │ ___ │ ___  │ ?    │ HOME │ PG DN │ END   │
     * └────────┴──────┴───────┴─────┴─────┴─────┴─────┴──────┴──────┴──────┴───────┴───────┘
     */
    [0] = LAYOUT_ortho_5x12(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,     KC_8,     KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,     KC_O,    KC_P,    KC_DEL,
        MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,     KC_K,     KC_L,    KC_SCLN, KC_ENTER,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,     KC_COMMA, KC_DOT,  KC_UP,   KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_BSLS, KC_SPC,  KC_NO,   KC_NO,   KC_SPC,   KC_SLASH, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [1] = LAYOUT_ortho_5x12(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,  KC_ASTR,  KC_LPRN, KC_RPRN, _______,
        _______, KC_GRV,  KC_TILD, KC_MINS, KC_UNDS, KC_EQL,  KC_PLUS, KC_LCBR,  KC_RCBR,  KC_LBRC, KC_RBRC, KC_INS,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_VOLD,  KC_VOLU,  KC_MUTE, KC_COLN, _______,
        _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_APP,   KC_QUOTE, KC_DQUO, KC_PGUP, _______,
        KC_RCTL, KC_RGUI, KC_RALT, KC_PIPE, _______, _______, _______, _______,  KC_PAUSE, KC_HOME, KC_PGDN, KC_END
    )
};
