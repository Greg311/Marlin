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

#define REVERSE_TEMP_SENSOR_RANGE_499 1

// Pt100 with INA826 amp on Ultimaker v2.0 electronics
//const temp_entry_t temptable_499[] PROGMEM = {
const short temptable_499[][2] PROGMEM = {
  { OV(  0),    0 },
  { OV(10),     5 },
  { OV(31),    10 },
  { OV(52),    15 },
  { OV(73),    20 },
  { OV(94),    25 }, //94@25c
  { OV(115),   30 },
  { OV(223),   40 },
  { OV(231),   50 },
  { OV(239),   60 },
  { OV(247),   70 },
  { OV(255),   80 },
  { OV(264),   90 },
  { OV(272),  100 },
  { OV(280),  110 },
  { OV(288),  120 },
  { OV(296),  130 },
  { OV(305),  140 },
  { OV(313),  150 },
  { OV(321),  160 },
  { OV(329),  170 },
  { OV(337),  180 },
  { OV(346),  190 },
  { OV(354),  200 },
  { OV(362),  210 },
  { OV(370),  220 },
  { OV(378),  230 },
  { OV(386),  240 },
  { OV(395),  250 },
  { OV(403),  260 },
  { OV(411),  270 },
  { OV(419),  280 },
  { OV(427),  290 },
  { OV(436),  300 }
  
  
};