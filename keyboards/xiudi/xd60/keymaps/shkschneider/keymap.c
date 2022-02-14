#include QMK_KEYBOARD_H

#define _ K49
#define LAYOUT_60_ansi_split_bs_shifts( \
      K00,   K01,   K02,   K03,   K04,   K05,  K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D, _, \
      K10,   K11,   K12,   K13,   K14,   K15,  K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D, \
      K20,   K21,   K22,   K23,   K24,   K25,  K26,   K27,   K28,   K29,   K2A,   K2B,          K2D, \
      K30,   K31,   K32,   K33,   K34,   K35,  K36,   K37,   K38,   K39,   K3A,   K3B,   K3D,   K3C, \
      K40,   K41,   K42,                 K45,                              K4A,   K4B,   K4C,   K4D  \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,  K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D }, \
    { K10,   K11,   K12,   K13,   K14,   K15,  K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D }, \
    { K20,   K21,   K22,   K23,   K24,   K25,  K26,   K27,   K28,   K29,   K2A,   K2B,   KC_NO, K2D }, \
    { K30,   K31,   K32,   K33,   K34,   K35,  K36,   K37,   K38,   K39,   K3A,   K3B,   K3C,   K3D }, \
    { K40,   K41,   K42,   KC_NO, KC_NO, K45,  KC_NO, KC_NO, KC_NO, _,   K4A,  K4B,   K4C,   K4D } \
}
#undef _

enum {
    /*EASTER*/EGG
};

// https://beta.docs.qmk.fm/using-qmk/software-features/feature_unicode
void matrix_init_user(void) {
    set_unicode_input_mode(UC_LNX);
}

// https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_mouse_keys
#define MS_UP KC_MS_UP
#define MS_DN KC_MS_DOWN
#define MS_LT KC_MS_LEFT
#define MS_RT KC_MS_RIGHT
#define MS_BTN1 KC_MS_BTN1
#define MS_BTN2 KC_MS_BTN2
#define MS_WUP KC_MS_WH_UP
#define MS_WDN KC_MS_WH_DOWN

// https://beta.docs.qmk.fm/using-qmk/simple-keycodes/keycodes
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_60_ansi_split_bs_shifts(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSPC,
		MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,
		KC_LSFT, KC_GRV,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, LT(3,KC_INS),
		KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                      KC_0,    KC_1,    KC_2,    KC_3),

	[1] = LAYOUT_60_ansi_split_bs_shifts(
		XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, _______,
		TG(2),   KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______, _______, _______, _______, _______, KC_MPLY, _______, _______,          _______,
		_______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, _______, _______, _______, _______, _______, _______,                   _______,
		_______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, _______, _______, _______,          _______, KC_PSCR,
		RGB_TOG, XXXXXXX, RGB_MOD,                   _______,                                     KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT),

	[2] = LAYOUT_60_ansi_split_bs_shifts(
		DF(0),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, MS_BTN1, MS_UP,   MS_BTN2, MS_WUP,  _______, _______, _______, _______, _______, _______, _______, _______,          _______,
		_______, MS_LT,   MS_DN,   MS_RT,   MS_WDN,  _______, _______, _______, _______, _______, _______, _______,                   _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX,                   _______,                                     _______, _______, _______, _______),

#define _ UC
	[3] = LAYOUT_60_ansi_split_bs_shifts(
		XXXXXXX, _(L'½'), _(L'²'), _(L'£'), _(L'€'), _(L'₿'), XXXXXXX, _(L'µ'), XXXXXXX, XXXXXXX, _(L'ø'), _(L'≠'), _(L'±'), _(L'¦'), XXXXXXX,
		XXXXXXX, _(L'â'), XXXXXXX, _(L'é'), _(L'ê'), _(L'è'), XXXXXXX, _(L'û'), _(L'î'), _(L'ô'), _(L'§'), _(L'°'), _(L'π'),          XXXXXXX,
		XXXXXXX, _(L'α'), _(L'Σ'), _(L'Δ'), XXXXXXX, XXXXXXX, XXXXXXX, _(L'ü'), _(L'ï'), _(L'ö'), _(L'…'), _(L'·'),                   XXXXXXX,
		XXXXXXX, M(EGG),  _(L'à'), _(L'×'), _(L'ç'), XXXXXXX, _(L'β'), _(L'ñ'), _(L'ù'), _(L'«'), _(L'»'), _(L'∞'),          XXXXXXX, _______,
		XXXXXXX, XXXXXXX, XXXXXXX,                   _(L' '),                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
#undef _

};

// https://beta.docs.qmk.fm/using-qmk/hardware-features/lighting/feature_rgblight#colors
#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
    rgblight_enable();
    rgblight_mode(RGBLIGHT_MODE_BREATHING);
    rgblight_setrgb(RGB_RED);
}
void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    switch (layer) {
        case 0: rgblight_setrgb(RGB_RED); break;
        case 1: rgblight_setrgb(RGB_GREEN); break;
        case 2: rgblight_setrgb(RGB_YELLOW); break;
        case 3: rgblight_setrgb(RGB_BLUE); break;
    }
}
#endif

// https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_macros
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    switch (id) {
        case EGG: {
            if (record->event.pressed) {
                SEND_STRING("42");
                return false;
            }
            return MACRO_NONE;
        }
        default: return MACRO_NONE;
    }
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // MO+TG could be conflicting if MO was released but TG was switched on...
        case MO(1):
            // This ensures no matter if TG is on or off, once MO is released, layer 0 is restored.
            if (!record->event.pressed) {
                layer_move(0);
                return false;
            }
            break;
    }
    return true;
}
