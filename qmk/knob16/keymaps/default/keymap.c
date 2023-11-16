#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    ⇧-	⌘K	⇧=	⇧⌘-	W	⇧⌘=	⌃⌥⇧⌘X	⌃⌥⇧⌘S	⌃⌥⇧⌘C	⌃⌥⇧⌘W	⌃⌥⇧⌘D	⌃⌥⇧⌘E																																								
    ⌃⌥⇧⌘[	⌘E	⌃⌥⇧⌘]	⌃⇧⌘-	⌃⌘F	⌃⇧⌘+	⌃⌥⇧⌘-	⌥⌘0	⌃⌥⇧⌘=	⌃⌥⌘-	⇧⌘D	⌃⌥⌘+																																								
    ⌃⌥⌘V	⇧⌘C	⌃⌥⌘B	⌃⌥⇧⌘K	⇧⌘V	⌃⌥⇧⌘L	⌃⌥⌘Q	⌘G	⌃⌥⌘W	⌃⌥⇧⌘O	⌘⌫	⌃⌥⇧⌘P																																								
    [	B	]	⌥[	E	⌥]	⌥⇧⌘L	⌥R	⌥⇧⌘R	⌘←	Equals	⌘→																																								
     */
    [0] = LAYOUT_ortho_4x4(
        S(KC_MINS), G(KC_K), S(KC_EQL),     SGUI(KC_MINS), KC_W, SGUI(KC_PEQL),     HYPR(KC_X), HYPR(KC_S), HYPR(KC_C),     HYPR(KC_W), HYPR(KC_D), HYPR(KC_E),
        HYPR(KC_LBRC), G(KC_E), HYPR(KC_RBRC),    C(S(G(KC_MINS))), C(G(KC_F)),	C(S(G(KC_PPLS))),    HYPR(KC_MINS), RAG(KC_0),	HYPR(KC_EQL),    LCAG(KC_MINS),	G(KC_D), LCAG(KC_PPLS)        
        LCAG(KC_V), LSG(KC_C), LCAG(KC_B),    HYPR(KC_K), LSG(KC_V), HYPR(KC_L),	LCAG(KC_Q),	G(KC_G), LCAG(KC_W),	HYPR(KC_O), G(KC_BSPC), HYPR(KC_P), 																																								
        KC_LBRC, KC_B, KC_RBRC,    A(KC_LBRC), KC_E, A(KC_RBRC),	S(A(G(KC_L))), A(KC_R), S(A(G(KC_R))),    G(KC_LEFT), KC_EQL, G(KC_RIGHT)																																								
    ),

    [1] = LAYOUT_ortho_4x4(
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT_ortho_4x4(
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT_ortho_4x4(
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),4,0));
        } else {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),4,1));
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),4,2));
        } else {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),4,3));
        }
    }
    } else if (index == 2 { /* Third encoder */
        if (clockwise) {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,0));
        } else {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,1));
        }
    }
    } else if (index == 3) { /* Fourth encoder */
        if (clockwise) {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,2));
        } else {
            tap_code16(dynamic_keymap_get_keycode(biton32(layer_state),5,3));
        }
    }
    return false;
} 
    /* Space savers */
uint16_t keycode_config(uint16_t keycode) {
    return keycode;
}
uint8_t mod_config(uint8_t mod) {
    return mod;
}
