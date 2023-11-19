#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_mirror( // normal
		TG(4), KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO,
		TG(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_GRAVE,
		TG(2), KC_Z, KC_X, KC_C, KC_V, KC_B,
		LM(7, MOD_LALT), KC_LEFT_GUI, QK_CAPS_WORD_TOGGLE, MO(7), KC_LEFT_SHIFT, KC_SPACE, KC_BACKSPACE, KC_ESC,
														KC_LEFT_CTRL, KC_DELETE,

			KC_VOLU, KC_6, KC_7, KC_8, KC_9, KC_0, TG(5),
			KC_VOLD, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BACKSLASH,
			KC_QUOTE, KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, DF(9),
			KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, TG(3),
		KC_MINUS, KC_EQUAL, KC_BACKSPACE, KC_ENTER, KC_MPRV, KC_MPLY, KC_MNXT, TG(6),
		KC_LEFT_BRACKET, KC_RIGHT_BRACKET
		),

	[1] = LAYOUT_mirror( // mirrored
		KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
		KC_ENTER, KC_P, KC_O, KC_I, KC_U, KC_Y, KC_NO,
		KC_TRNS, KC_SEMICOLON, KC_L, KC_K, KC_J, KC_H, KC_QUOTE,
		KC_TRNS, KC_SLASH, KC_DOT, KC_COMMA, KC_M, KC_N,
		LM(8, MOD_LALT), KC_TRNS, KC_TRNS, MO(8), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,
														
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, KC_TRNS,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, KC_TRNS,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, KC_TRNS,
			PB_1, PB_1, PB_1, PB_1, PB_1, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS
		),

	[2] = LAYOUT_mirror( // arrow key L
		KC_TRNS, KC_NO, KC_MINS, KC_EQL, KC_NO, KC_NO, KC_NO,
		KC_ENTER, KC_NO, KC_LEFT_BRACKET, KC_UP, KC_RIGHT_BRACKET, KC_NO, KC_NO,
		KC_TRNS, KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, QK_BOOT,
		KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,
														
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS
		),

	[3] = LAYOUT_mirror( // arrow key R
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,
														
			KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
			KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_PAGE_UP, KC_RIGHT_ALT,
			QK_BOOT, KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PAGE_DOWN, KC_TRNS,
			KC_NO, KC_NO, KC_HOME, KC_END, KC_NO, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS
		),

	[4] = LAYOUT_mirror( // mouse L
		KC_TRNS, KC_NO, KC_NO, KC_MS_BTN3, KC_NO, KC_NO, KC_NO,
		KC_ENTER, KC_NO, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_MS_WH_UP, KC_NO,
		KC_TRNS, KC_NO, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_WH_DOWN, KC_NO,
		KC_TRNS, KC_NO, KC_WWW_BACK, KC_WWW_FORWARD, KC_MS_WH_LEFT, KC_MS_WH_RIGHT,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,
														
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS
		),

	[5] = LAYOUT_mirror( // mouse R
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,
														
			KC_NO, KC_NO, KC_NO, KC_MS_BTN3, KC_NO, KC_NO, KC_TRNS,
			KC_NO, KC_MS_WH_UP, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_NO, KC_TRNS,
			KC_NO, KC_MS_WH_DOWN, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_NO, KC_TRNS,
			KC_NO, KC_NO, KC_WWW_BACK, KC_WWW_FORWARD, KC_NO, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS
		),

	[6] = LAYOUT_mirror( // numpad
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,
														
			KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
			KC_NO, KC_NO, KC_KP_7, KC_KP_8, KC_KP_9, KC_NO, KC_TRNS,
			KC_NO, KC_NO, KC_KP_4, KC_KP_5, KC_KP_6, KC_NO, KC_TRNS,
				   KC_NO, KC_KP_1, KC_KP_2, KC_KP_3, KC_NO, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_KP_0, KC_PDOT, KC_NUM_LOCK, KC_TRNS,
		KC_TRNS, KC_TRNS
		),

	[7] = LAYOUT_mirror( // F
		KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,

		KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS
		),

	[8] = LAYOUT_mirror( // F mirror
		KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,

		KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS
		),





	[9] = LAYOUT_rev( // normal mirror
		TG(12), KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO,
		TG(10), KC_A, KC_S, KC_D, KC_F, KC_G, KC_GRAVE,
		TG(11), KC_Z, KC_X, KC_C, KC_V, KC_B,
		LM(13, MOD_LALT), KC_LEFT_GUI, QK_CAPS_WORD_TOGGLE, MO(13), KC_LEFT_SHIFT, KC_SPACE, KC_BACKSPACE, KC_ESC,
														KC_LEFT_CTRL, KC_DELETE,

			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1
		),

	[10] = LAYOUT_rev( // mirrored layout
		KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
		KC_ENTER, KC_P, KC_O, KC_I, KC_U, KC_Y, KC_NO,
		KC_TRNS, KC_SEMICOLON, KC_L, KC_K, KC_J, KC_H, KC_QUOTE,
		KC_TRNS, KC_SLASH, KC_DOT, KC_COMMA, KC_M, KC_N,
		LM(14, MOD_LALT), KC_TRNS, KC_TRNS, MO(14), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,

			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1
		),

	[11] = LAYOUT_rev( // arrow key L technically R
		KC_TRNS, KC_NO, KC_MINS, KC_EQL, KC_NO, KC_NO, KC_NO,
		KC_ENTER, KC_NO, KC_RIGHT_BRACKET, KC_UP, KC_LEFT_BRACKET, KC_NO, KC_NO,
		KC_TRNS, KC_NO, KC_RIGHT, KC_DOWN, KC_LEFT, KC_NO, QK_BOOT,
		KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,

			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1
		),

	[12] = LAYOUT_rev( // mouse L technically R
		KC_TRNS, KC_NO, KC_NO, KC_MS_BTN3, KC_NO, KC_NO, KC_NO,
		KC_ENTER, KC_NO, KC_MS_BTN2, KC_MS_UP, KC_MS_BTN1, KC_MS_WH_UP, KC_NO,
		KC_TRNS, KC_NO, KC_MS_RIGHT, KC_MS_DOWN, KC_MS_LEFT, KC_MS_WH_DOWN, KC_NO,
		KC_TRNS, KC_NO, KC_WWW_BACK, KC_WWW_FORWARD, KC_MS_WH_LEFT, KC_MS_WH_RIGHT,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,

			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1
		),

	[13] = LAYOUT_rev( // F
		KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,

			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1
		),

	[14] = LAYOUT_rev( // F mirror
		KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
														KC_TRNS, KC_TRNS,

			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
			PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1, PB_1,
		PB_1, PB_1
		),
};
