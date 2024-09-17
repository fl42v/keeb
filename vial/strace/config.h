#pragma once

#include "config_common.h"

#define MATRIX_ROWS 8
#define MATRIX_COLS 5
#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS {GP11, GP12, GP13, GP14, GP15}
#define MATRIX_ROW_PINS {GP19, GP18, GP17, GP16}

#define DEBOUNCE 5

#define USE_SERIAL
#define SOFT_SERIAL_PIN GP0
