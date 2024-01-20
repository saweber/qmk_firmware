#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // full layout
	[0] = LAYOUT(TO(2), KC_F1, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
              ALL_T(KC_EQL), KC_1, KC_2, KC_3, KC_4, KC_5,
              LT(2,KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T,
              LT(3,KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G,
              MEH_T(KC_GRV), KC_Z, KC_X, KC_C, KC_V, KC_B,
              KC_LCBR, KC_RCBR, KC_LEFT, KC_RGHT,
              KC_MEH, KC_HYPR,
              LGUI_T(KC_HOME),
              LCTL_T(KC_BSPC), KC_LSFT, LT(1, KC_END),

              KC_NO, KC_NO, KC_F11, KC_F12, KC_KB_MUTE, KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_PSCR, QK_BOOT,
              KC_6, KC_7, KC_8, KC_9, KC_0, ALL_T(KC_MINS),
              KC_Y, KC_U, KC_I, KC_O, KC_P, LT(2,KC_BSLS),
              KC_H, KC_J, KC_K, KC_L, KC_SCLN, LT(3,KC_QUOT),
              KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MEH_T(KC_DEL),
              KC_DOWN, KC_UP, KC_LBRC, KC_RBRC,
              KC_HYPR, KC_MEH,
              LT(1,KC_PGUP),
              LT(1, KC_PGDN), LGUI_T(KC_ENT), LALT_T(KC_SPC)),

[1] = LAYOUT(TO(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
              KC_TRNS, KC_LT, KC_GT, KC_LBRC, KC_RBRC, KC_NO,
              KC_TRNS, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_NO,
              KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
              KC_NO, KC_NO, KC_NO, KC_NO,
              KC_TRNS, KC_TRNS,
              KC_TRNS,
              KC_TRNS, KC_TRNS, KC_TRNS,

              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
              KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_PSCR, KC_TRNS,
              KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_TRNS,
              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
              KC_NO, KC_NO, KC_NO, KC_NO,
              KC_TRNS, KC_TRNS,
              KC_TRNS,
              KC_TRNS, KC_TRNS, KC_TRNS),

    // voyager
	[2] = LAYOUT(TO(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5,
              KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
              KC_GRV, ALL_T(KC_A), MEH_T(KC_S), LGUI_T(KC_D), LCTL_T(KC_F), KC_G,
              KC_LBRC, KC_Z, KC_X, KC_C, LT(3,KC_V), KC_B,
              KC_NO, KC_NO, KC_NO, KC_NO,
              KC_NO, KC_NO,
              KC_NO,
              LCTL_T(KC_BSPC), LSFT_T(KC_ESC), KC_NO,

              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
              KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
              KC_H, LCTL_T(KC_J), LGUI_T(KC_K), MEH_T(KC_L), ALL_T(KC_SCLN), KC_QUOT,
              KC_N, LT(3,KC_M), KC_COMM, KC_DOT, KC_SLSH, KC_RBRC,
              KC_NO, KC_NO, KC_NO, KC_NO,
              KC_NO, KC_NO,
              KC_NO,
              KC_NO, LGUI_T(KC_ENT), LALT_T(KC_SPC)),

	[3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
              KC_TRNS, KC_LT, KC_GT, KC_LBRC, KC_RBRC, KC_NO,
              KC_TRNS, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_NO,
              KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
              KC_NO, KC_NO, KC_NO, KC_NO,
              KC_TRNS, KC_TRNS,
              KC_TRNS,
              KC_TRNS, KC_TRNS, KC_TRNS,

              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
              KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_PSCR, KC_TRNS,
              KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_TRNS,
              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
              KC_NO, KC_NO, KC_NO, KC_NO,
              KC_TRNS, KC_TRNS,
              KC_TRNS,
              KC_TRNS, KC_TRNS, KC_TRNS),

	// [4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	//              KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
	//              KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	//              KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	//              KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	//              KC_NO, KC_NO, KC_NO, KC_NO,
	//              KC_TRNS, KC_TRNS,
	//              KC_TRNS,
	//              KC_TRNS, KC_TRNS, KC_TRNS,
	//
	//              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	//              KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
	//              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
	//              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
	//              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
	//              KC_NO, KC_NO, KC_NO, KC_NO,
	//              KC_TRNS, KC_TRNS,
	//              KC_TRNS,
	//              KC_TRNS, KC_TRNS, KC_TRNS),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




