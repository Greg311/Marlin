/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * TinyFab CPU pin assignments
 */

#ifndef MCU_LPC1769
  #error "Oops! Make sure you have the LPC1769 environment selected in your IDE."
#endif

#define BOARD_NAME        "TinyFab_V5"
#define BOARD_WEBSITE_URL "https://www.tinyfab.xyz/"

#undef F_CPU
#define F_CPU 100000000

//
// Servos
//
#define SERVO0_PIN         P2_13
#define SERVO1_PIN         P1_19

//
// Limit Switches
//
#define X_MIN_PIN          P1_24
//#define X_MAX_PIN          P1_24
#define Y_MIN_PIN          P1_26
//#define Y_MAX_PIN          P1_26
#define Z_MIN_PIN          P1_28
//#define Z_MAX_PIN          P1_28

//
// Steppers
//
#define X_STEP_PIN         P2_00
#define X_DIR_PIN          P0_05
#define X_ENABLE_PIN       P2_04

#define Y_STEP_PIN         P2_01
#define Y_DIR_PIN          P0_11
#define Y_ENABLE_PIN       P2_04

#define Z_STEP_PIN         P2_02
#define Z_DIR_PIN          P0_20
#define Z_ENABLE_PIN       P2_04

#define E0_STEP_PIN        P2_03
#define E0_DIR_PIN         P0_22
#define E0_ENABLE_PIN      P2_04

#define E1_STEP_PIN        P2_08
#define E1_DIR_PIN         P2_13
#define E1_ENABLE_PIN      P2_04

//
// Temperature Sensors
// 3.3V max when defined as an analog input
//
#define TEMP_0_PIN         P0_23 //(T1)
#define TEMP_BED_PIN       P0_24 //(T2)
//#define TEMP_1_PIN          2   // P0.25 (T3)
//#define TEMP_2_PIN          3   // P0.26 (T4)

//
// Heaters / Fans
//
#define HEATER_BED_PIN     P2_05
#define HEATER_0_PIN       P2_07
#define HEATER_1_PIN       P1_23
#ifndef FAN_PIN
  #define FAN_PIN          P1_18
#endif
//#define FAN1_PIN           P1_18

//Power Supply PIN
#ifndef PS_ON_PIN
  #define PS_ON_PIN        P2_04
#endif


//
// LCD / Controller
//
#if ANY(VIKI2, miniVIKI)

  #define BEEPER_PIN       P0_25
  #define DOGLCD_A0        P2_06
  #define DOGLCD_CS        P0_16

  #define BTN_EN1          P3_26
  #define BTN_EN2          P3_25
  #define BTN_ENC          P2_11

  #define SD_DETECT_PIN    P1_31
  #define SDSS             P1_23

  #define STAT_LED_RED_PIN  P2_08
  #define STAT_LED_BLUE_PIN P4_29

  #define LCD_SCREEN_ROT_180

#elif HAS_SPI_LCD

  #error "Marlin's Smoothieboard support cannot drive your LCD."

#endif
