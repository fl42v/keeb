// Copyright 2023 fl42v (@fl42v)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define NOP KC_NO

#define LAYOUT( \
  K4D, K7C, K7B, K1B, K4B, K1A, K1F, K79, K77, K75, K78, K73, K13, K71, K31, K01, K23, \
  K7D, K0D, K0C, K2D, K1D, K7A, K7F, K09, K07, K05, K04, K15, K74, K08, K03, K21, \
  K0A, K0B, K1C, K2B, K2A, K2F, K19, K29, K27, K25, K24, K14, K17, K38, K51, \
  K2C, K3D, K4C, K3B, K3A, K4A, K49, K39, K37, K35, K34, K45, K33, K18, K11, \
  K5E, K5D, K5C, K5B, K5A, K6A, K69, K59, K57, K55, K44, K52, K63, K53, \
  WTF, K3F, K4G, K6B, K68, K46, K43, K60, K48, K64, K61 \
) { \
  { NOP, K01, NOP, K03, K04, K05, NOP, K07, K08, K09, K0A, K0B, K0C, K0D, NOP, NOP, NOP, }, \
  { NOP, K11, NOP, K13, K14, K15, NOP, K17, K18, K19, K1A, K1B, K1C, K1D, NOP, K1F, NOP, }, \
  { NOP, K21, NOP, K23, K24, K25, NOP, K27, NOP, K29, K2A, K2B, K2C, K2D, NOP, K2F, NOP, }, \
  { NOP, K31, NOP, K33, K34, K35, NOP, K37, K38, K39, K3A, K3B, NOP, K3D, NOP, K3F, NOP, }, \
  { NOP, NOP, NOP, K43, K44, K45, K46, NOP, K48, K49, K4A, K4B, K4C, K4D, NOP, NOP, K4G, }, \
  { NOP, K51, K52, K53, NOP, K55, NOP, K57, NOP, K59, K5A, K5B, K5C, K5D, K5E, NOP, NOP, }, \
  { K60, K61, NOP, K63, K64, NOP, NOP, NOP, K68, K69, K6A, K6B, NOP, NOP, NOP, NOP, NOP, }, \
  { NOP, K71, NOP, K73, K74, K75, NOP, K77, K78, K79, K7A, K7B, K7C, K7D, NOP, K7F, NOP, } \
}

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
