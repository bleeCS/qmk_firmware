#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0107
#define DEVICE_VER      0x0001
#define MANUFACTURER    Brandon
#define PRODUCT         Haku
#define DESCRIPTION     Haku

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

/* key matrix pins         0   1   2   3   4   5   6   7   8   9 */
#define MATRIX_ROW_PINS { D1, D2, D4, D6, B6, B5, B2, B1, F1, F0 }
#define MATRIX_COL_PINS { B0, B3, F7, F4, C6, F5, F6, C7 }
// #define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

// #define BACKLIGHT_PIN F0
// #define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN D0
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 7
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#define INDICATOR_PIN_SCROLL D7
#define INDICATOR_PIN_NUM B4
#define INDICATOR_PIN_CAPS E6
