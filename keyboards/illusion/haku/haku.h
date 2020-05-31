#pragma once

#include "quantum.h"

#define LAYOUT( \
    K10, K00, K11, K01, K12, K02, K13, K03, K14, K04, K15, K05, K16, K06,    K07, \
    K20, K30, K21, K31, K22, K32, K23, K33, K24, K34, K25, K35, K26, K37,    K27, \
    K50, K40, K51, K41, K52, K42, K53, K43, K54, K44, K55, K45,      K56,    K47, \
    K70, K60, K71, K61, K72, K62, K73, K63, K74, K64, K75, K66,    K77, K67, \
    K80, K90, K81,                  K93                 , K85, K96, K86, K97, K87 \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, K16, KC_NO }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K30, K31, K32, K33, K34, K35, KC_NO, K37 }, \
    { K40, K41, K42, K43, K44, K45, KC_NO, K47 }, \
    { K50, K51, K52, K53, K54, K55, K56, KC_NO }, \
    { K60, K61, K62, K63, K64, KC_NO, K66, K67}, \
    { K70, K71, K72, K73, K74, K75, KC_NO, K77 }, \
    { K80, K81, KC_NO, KC_NO, KC_NO, K85, K86, K87 }, \
    { K90, KC_NO, KC_NO, K93, KC_NO, KC_NO, K96, K97 } \
}
