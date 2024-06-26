/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off


enum layers{
    LNX_BASE,
    LNX_FN,
    WIN_BASE,
    WIN_FN,
    WIN_OPT,
    LNX_OPT
};


#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)


enum unicode_names {
	A_GRV_LOW,
	A_GRV_UPP,
	E_GRV_LOW,
	E_GRV_UPP,
	E_ACT_LOW,
	E_ACT_UPP,
	O_GRV_LOW,
	O_GRV_UPP,
	I_GRV_LOW,
	I_GRV_UPP,
	U_GRV_LOW,
	U_GRV_UPP,
	EURO,
	POUND
};

const uint32_t PROGMEM unicode_map[] = {
	[A_GRV_LOW] = 0x00e0,
	[A_GRV_UPP] = 0x00c0,
	[E_GRV_LOW] = 0x00e8,
	[E_GRV_UPP] = 0x00c8,
	[E_ACT_LOW] = 0x00e9,
	[E_ACT_UPP] = 0x00c9,
	[I_GRV_LOW] = 0x00ec,
	[I_GRV_UPP] = 0x00cc,
	[O_GRV_LOW] = 0x00f2,
	[O_GRV_UPP] = 0x00d2,
	[U_GRV_LOW] = 0x00f9,
	[U_GRV_UPP] = 0x00d9,
	[EURO] = 0x20ac,
	[POUND] = 0x00a3
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LNX_BASE] = LAYOUT_tkl_f13_ansi(
        KC_ESC,   KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,      KC_VOLD,  KC_VOLU,     KC_MUTE,  KC_PSCR,  RGB_TOG,  KC_SLEP,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,         KC_MINS,  KC_EQL,      KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,         KC_LBRC,  KC_RBRC,     KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,      KC_QUOT,               KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,       KC_SLSH,               KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 MO(LNX_OPT),  KC_ROPT,  MO(LNX_FN),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [LNX_FN] = LAYOUT_tkl_f13_ansi(
        _______,  KC_F1,       KC_F2,       KC_F3,        KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,        _______,  RGB_MOD,  _______,
        _______,  _______,     _______,     _______,      _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,  _______,  RGB_HUI,
        _______,  KC_MS_BTN1,  KC_MS_UP,    KC_MS_BTN2,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,  _______,  RGB_HUD,
        _______,  KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,               _______,     _______,      _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,                                KC_MS_WH_UP,
        _______,  _______,     _______,                                       _______,                                _______,  _______,  _______,  _______,  KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT),


    [WIN_BASE] = LAYOUT_tkl_f13_ansi(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MUTE,  KC_PSCR,  RGB_TOG,  KC_SLEP,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 MO(WIN_OPT),  KC_RWIN,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_tkl_f13_ansi(
        _______,  KC_BRID,     KC_BRIU,     KC_CPNL,        KC_APP,   RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_MUTE,  _______,  RGB_MOD,  _______,
        _______,  _______,     _______,     _______,      _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_HUI,
        _______,  KC_MS_BTN1,  KC_MS_UP,    KC_MS_BTN2,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_HUD,
        _______,  KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,               _______,     _______,      _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,                                     KC_MS_WH_UP,
        _______,  _______,     _______,                                       _______,                                _______,  _______,  _______,  _______,  KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT),

    [WIN_OPT] = LAYOUT_tkl_f13_ansi(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  RGB_RMOD,  _______,
        _______,  _______,  _______,  _______,  UP(EURO,POUND),  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  RGB_SAI,
        _______,  _______,  _______,  UP(E_GRV_LOW,E_GRV_UPP), UP(E_ACT_LOW,E_ACT_UPP),  _______,  _______,  UP(U_GRV_LOW,U_GRV_UPP),  UP(I_GRV_LOW,I_GRV_UPP),  UP(O_GRV_LOW,O_GRV_UPP),  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SAD,
        _______,  UP(A_GRV_LOW,A_GRV_UPP),  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    QK_UNICODE_MODE_WINCOMPOSE,  _______,  _______,  _______),


    [LNX_OPT] = LAYOUT_tkl_f13_ansi(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  RGB_RMOD,  _______,
        _______,  _______,  _______,  _______,  UP(EURO,POUND),  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  RGB_SAI,
        _______,  _______,  _______,  UP(E_GRV_LOW,E_GRV_UPP), UP(E_ACT_LOW,E_ACT_UPP),  _______,  _______,  UP(U_GRV_LOW,U_GRV_UPP),  UP(I_GRV_LOW,I_GRV_UPP),  UP(O_GRV_LOW,O_GRV_UPP),  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SAD,
        _______,  UP(A_GRV_LOW,A_GRV_UPP),  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    QK_UNICODE_MODE_LINUX,  _______,  _______,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [LNX_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [LNX_FN]   = { ENCODER_CCW_CW(RGB_VAI, RGB_VAD)},
    [WIN_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN]   = { ENCODER_CCW_CW(RGB_VAI, RGB_VAD)},
    [WIN_OPT]   = { ENCODER_CCW_CW(RGB_SPI, RGB_SPD)},
    [LNX_OPT]   = { ENCODER_CCW_CW(RGB_SPI, RGB_SPD)},
};
#endif // ENCODER_MAP_ENABLE
