#include QMK_KEYBOARD_H
#include "version.h"
// #include "keymap_german.h"
// #include "keymap_nordic.h"
// #include "keymap_french.h"
// #include "keymap_spanish.h"
#include "keymap_hungarian.h"
// #include "keymap_swedish.h"
// #include "keymap_canadian_multilingual.h"
// #include "keymap_korean.h"
#include "keymap_bepo.h"
// #include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
// #include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_215_255_128,
  HSV_172_255_255,
  HSV_27_255_255,
  HSV_0_255_255,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_reverse_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TT(1),                                          KC_APPLICATION, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_SPACE,                                      LCTL(KC_LALT),  KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_SLASH,
    MT(MOD_LCTL, KC_ESCAPE),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           LT(3,KC_COLON),MT(MOD_RCTL, KC_ENTER),
    KC_LSFT,      MT(MOD_LGUI, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,           LALT(KC_LSFT),                                KC_HYPR,        KC_N,           KC_M,           KC_COMMA,       KC_DOT,         LT(4,KC_SLASH), MT(MOD_LSFT, KC_QUOTE),
    KC_LALT,        KC_LCTL,       KC_LGUI,        KC_LCTL,       LT(2,KC_GRAVE),                                                                                                 LT(2,KC_MINUS), KC_LGUI,        KC_LBRC,    KC_RBRC,    KC_RALT,
                                                                                                    KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_PGDN,      KC_PGUP,
                                                                                                                    TG(3),          KC_END,
                                                                                    MT(MOD_LSFT | MOD_LCTL, KC_SPACE),KC_HYPR,        TO(1),          LT(2,KC_HOME),  MEH_T(KC_SPACE),MT(MOD_LGUI | MOD_LSFT, KC_ENTER)
  ),
  [1] = LAYOUT_ergodox_reverse_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LCTL,       KC_LGUI,        KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_reverse_pretty(
    TO(0),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F13,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       KC_EQUAL,       KC_F11,
    KC_F8,          KC_F7,          KC_F6,          KC_UP,          KC_PLUS,        KC_MINUS,       KC_F15,                                         KC_TRANSPARENT, KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           KC_PERC,        KC_F12,
    MT(MOD_LCTL, KC_F10),MT(MOD_LSFT, KC_F9),KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_EQUAL,                                                                       KC_KP_MINUS,    KC_4,           KC_5,           KC_6,           KC_KP_ASTERISK, KC_KP_ENTER,
    MT(MOD_LSFT, KC_F12),MT(MOD_LGUI, KC_F11),KC_LBRC,    KC_RBRC,    KC_LPRN,        KC_RPRN,        KC_F14,                                         HSV_215_255_128,KC_CIRC,        KC_1,           KC_2,           KC_3,           KC_KP_SLASH,    KC_EQUAL,
    KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_0,        KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    RGB_MOD,        RGB_SLD,        HSV_172_255_255,HSV_27_255_255,
                                                                                                                    KC_TRANSPARENT, HSV_0_255_255,
                                                                                    KC_TRANSPARENT, KC_LGUI,        TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUI
  ),
  [3] = LAYOUT_ergodox_reverse_pretty(
    TO(0),          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,                                KC_TRANSPARENT, KC_ASTR,        KC_SLASH,       KC_PLUS,        KC_MINUS,       KC_EQUAL,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_BTN5,     KC_PGUP,                                        KC_AUDIO_VOL_UP,KC_HOME,        KC_END,         KC_UP,          KC_LBRC,    KC_RBRC,    KC_MEDIA_PREV_TRACK,
    KC_LCTL,       KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_UP,                                                                    KC_AUDIO_MUTE,  KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_LSFT,      KC_TRANSPARENT, KC_LGUI,        KC_MS_BTN3,     KC_MS_BTN1,     KC_MS_WH_DOWN,  KC_PGDN,                                      KC_AUDIO_VOL_DOWN,KC_PGUP,        KC_PGDN,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_NEXT_TRACK,
    KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RALT,
                                                                                                    KC_MS_BTN1,     KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_MS_WH_UP,    KC_MS_WH_DOWN,  TO(0),          KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2
  ),
  [4] = LAYOUT_ergodox_reverse_pretty(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,    KC_RBRC,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  }
  return true;
}

// uint32_t layer_state_set_user(uint32_t state) {
//   uint8_t layer = biton32(state);
//   ergodox_board_led_off();
//   ergodox_right_led_1_off();
//   ergodox_right_led_2_off();
//   ergodox_right_led_3_off();
//   switch (layer) {
//     case 1:
//       ergodox_right_led_1_on();
//       break;
//     case 2:
//       ergodox_right_led_2_on();
//       break;
//     case 3:
//       ergodox_right_led_3_on();
//       break;
//     case 4:
//       ergodox_right_led_1_on();
//       ergodox_right_led_2_on();
//       break;
//     case 5:
//       ergodox_right_led_1_on();
//       ergodox_right_led_3_on();
//       break;
//     case 6:
//       ergodox_right_led_2_on();
//       ergodox_right_led_3_on();
//       break;
//     case 7:
//       ergodox_right_led_1_on();
//       ergodox_right_led_2_on();
//       ergodox_right_led_3_on();
//       break;
//     default:
//       break;
//   }
//   return state;
// };


