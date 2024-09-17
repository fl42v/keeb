// Copyright 2022 Severo Frazier (@Severo Frazier)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
//#include "config_common.h"

//#define SERIAL_USE_MULTI_TRANSACTION
// unnecessary: d2 is the default one
//#define SOFT_SERIAL_PIN D2 
#define USE_SERIAL
#define SOFT_SERIAL_PIN GP0


//#define MASTER_LEFT
//#define SPLIT_USB_DETECT
//#define SPLIT_USB_TIMEOUT 2000

//#include "config_common.h"

#define MATRIX_ROWS 6
#define MATRIX_COLS 6
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5
//
//#define VENDOR_ID       0xFEED
//#define PRODUCT_ID      0x0000
//#define DEVICE_VER      0x0001
//#define MANUFACTURER    ErgoHaven × c0h2r
//#define PRODUCT         Velvet-prototype
////#define DESCRIPTION     
//
//#define MATRIX_ROW_PINS {E6, B4, B5}
//#define MATRIX_ROW_PINS {GP18, GP17, GP16}
#define MATRIX_ROW_PINS {GP18, GP16, GP17}
#define MATRIX_COL_PINS {GP10, GP11, GP12, GP13, GP14, GP15}
//#define MATRIX_COL_PINS {B2, B3, B1, F7, F6, B6}

//#define MATRIX_ROW_PINS_RIGHT {E6, B4, B5}
//#define MATRIX_COL_PINS_RIGHT {B2, B3, B1, F7, F6, B6}
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
