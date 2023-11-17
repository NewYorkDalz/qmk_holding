/* Copyright 2023 ziptyze
 *modified 2023 NewYorkDalz 
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x4(
        G(KC_K), KC_W, HYPR(KC_S), HYPR(KC_D),
        G(KC_E), C(G(KC_F)), RAG(KC_0),   G(KC_D),
        LSG(KC_C), LSG(KC_V), G(KC_G),   G(KC_BSPC),
        KC_B, KC_E, A(KC_R), KC_EQL 
    ),
    [1] = LAYOUT_ortho_4x4(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { 
	ENCODER_CCW_CW(S(KC_MINS), S(KC_EQL)), 
	ENCODER_CCW_CW(SGUI(KC_MINS), SGUI(KC_PEQL)), 
	ENCODER_CCW_CW(HYPR(KC_X), HYPR(KC_C)), 
	ENCODER_CCW_CW(HYPR(KC_W), HYPR(KC_E)), 
	ENCODER_CCW_CW(HYPR(KC_LBRC), HYPR(KC_RBRC)), 
	ENCODER_CCW_CW(C(S(G(KC_MINS))), C(S(G(KC_PPLS)))), 
	ENCODER_CCW_CW(HYPR(KC_MINS), HYPR(KC_EQL)), 
	ENCODER_CCW_CW(LCAG(KC_MINS), LCAG(KC_PPLS)), 
	ENCODER_CCW_CW(LCAG(KC_V), LCAG(KC_B)), 
	ENCODER_CCW_CW(HYPR(KC_K), HYPR(KC_L)), 
	ENCODER_CCW_CW(LCAG(KC_Q), LCAG(KC_W)), 
	ENCODER_CCW_CW(HYPR(KC_O), HYPR(KC_P)), 
	ENCODER_CCW_CW(KC_LBRC, KC_RBRC ), 
	ENCODER_CCW_CW(A(KC_LBRC), A(KC_RBRC)), 
	ENCODER_CCW_CW(S(A(G(KC_L))), S(A(G(KC_R)))), 
	ENCODER_CCW_CW(G(KC_LEFT), G(KC_RIGHT))  
    },
    [1] = { 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
	ENCODER_CCW_CW(KC_TRNS, KC_TRNS) 
    }
};
#endif
