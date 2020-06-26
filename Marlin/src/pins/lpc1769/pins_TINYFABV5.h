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
//#define SERVO0_PIN         P2_13 //DOOR
#define SERVO0_PIN         P0_10 //SCR_ON

//
// TMC StallGuard DIAG pins
//
#define X_DIAG_PIN                         P1_24  // X-STOP
#define Y_DIAG_PIN                         P1_26  // Y-STOP
#define Z_DIAG_PIN                         P1_28  // Z-STOP
//#define E0_DIAG_PIN                        P1_26  // E0DET

//
// Limit Switches
//
//#define X_MIN_PIN          P1_24
//#define X_MAX_PIN          P1_24
//#define Y_MIN_PIN          P1_26
//#define Y_MAX_PIN          P1_26
//#define Z_MIN_PIN          P1_28
//#define Z_MAX_PIN          P1_28

#ifdef X_STALL_SENSITIVITY
  #define X_STOP_PIN                  X_DIAG_PIN
  #if X_HOME_DIR < 0
    #define X_MAX_PIN                      P1_24  // E0DET
  #else
    #define X_MIN_PIN                      P1_24  // E0DET
  #endif
#else
  #define X_STOP_PIN                       P1_24  // X-STOP
#endif

#ifdef Y_STALL_SENSITIVITY
  #define Y_STOP_PIN                  Y_DIAG_PIN
  #if Y_HOME_DIR < 0
    #define Y_MAX_PIN                      P1_26  // E1DET
  #else
    #define Y_MIN_PIN                      P1_26  // E1DET
  #endif
#else
  #define Y_STOP_PIN                       P1_26  // Y-STOP
#endif

#ifdef Z_STALL_SENSITIVITY
  #define Z_STOP_PIN                  Z_DIAG_PIN
  #if Z_HOME_DIR < 0
    #define Z_MAX_PIN                      P1_28  // PWRDET
  #else
    #define Z_MIN_PIN                      P1_28  // PWRDET
  #endif
#else
  #ifndef Z_STOP_PIN
    #define Z_STOP_PIN                     P1_28  // Z-STOP
  #endif
#endif

//
// Steppers
//
#define X_STEP_PIN         P2_00
#define X_DIR_PIN          P0_05
#define X_ENABLE_PIN       P2_04
#ifndef X_CS_PIN
  #define X_CS_PIN         P1_20
#endif

#define Y_STEP_PIN         P2_01
#define Y_DIR_PIN          P0_11
#define Y_ENABLE_PIN       P2_04
#ifndef Y_CS_PIN
  #define Y_CS_PIN         P1_21
#endif

#define Z_STEP_PIN         P2_02
#define Z_DIR_PIN          P0_20
#define Z_ENABLE_PIN       P2_04
#ifndef Z_CS_PIN
  #define Z_CS_PIN         P0_00
#endif

#define E0_STEP_PIN        P2_03
#define E0_DIR_PIN         P0_22
#define E0_ENABLE_PIN      P2_04
#ifndef E0_CS_PIN
  #define E0_CS_PIN        P0_01
#endif


//
// Software SPI pins for TMC2130 stepper drivers
//
#if ENABLED(TMC_USE_SW_SPI)
  #ifndef TMC_SW_MOSI
    #define TMC_SW_MOSI                    P0_09
  #endif
  #ifndef TMC_SW_MISO
    #define TMC_SW_MISO                    P0_08
  #endif
  #ifndef TMC_SW_SCK
    #define TMC_SW_SCK                     P0_07
  #endif
#endif

#if HAS_TMC_UART
  /**
   * TMC2208/TMC2209 stepper drivers
   *
   * Hardware serial communication ports.
   * If undefined software serial is used according to the pins below
   */
  //#define X_HARDWARE_SERIAL  Serial
  //#define X2_HARDWARE_SERIAL Serial1
  //#define Y_HARDWARE_SERIAL  Serial1
  //#define Y2_HARDWARE_SERIAL Serial1
  //#define Z_HARDWARE_SERIAL  Serial1
  //#define Z2_HARDWARE_SERIAL Serial1
  //#define E0_HARDWARE_SERIAL Serial1
  //#define E1_HARDWARE_SERIAL Serial1
  //#define E2_HARDWARE_SERIAL Serial1
  //#define E3_HARDWARE_SERIAL Serial1
  //#define E4_HARDWARE_SERIAL Serial1

  //
  // Software serial
  //
  #define X_SERIAL_TX_PIN                  P1_25
  #define X_SERIAL_RX_PIN                  P1_25

  #define Y_SERIAL_TX_PIN                  P2_12
  #define Y_SERIAL_RX_PIN                  P2_12

  #define Z_SERIAL_TX_PIN                  P2_13
  #define Z_SERIAL_RX_PIN                  P2_13

  #define E0_SERIAL_TX_PIN                 P4_28
  #define E0_SERIAL_RX_PIN                 P4_28


  // Reduce baud rate to improve software serial reliability
  //#define TMC_BAUD_RATE 19200
#endif

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
