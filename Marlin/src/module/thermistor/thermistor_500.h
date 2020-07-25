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

#define REVERSE_TEMP_SENSOR_RANGE_500 1

// Pt100 with INA826 amp on Ultimaker v2.0 electronics
//const temp_entry_t temptable_500[] PROGMEM = {
const short temptable_500[][2] PROGMEM = {
  { OV(   0),   0 },
  { OV(  46),   5 },
  { OV(  62),  20 },
  { OV(  78),  25 }, //78@25c
  { OV(  94),  30 },
  { OV( 102),  40 },
  { OV( 123),  50 },
  { OV( 148),  60 },
  { OV( 173),  70 },
  { OV( 198),  80 },
  { OV( 221),  85 },
  { OV( 245),  90 },
  { OV( 269),  94 },
  { OV( 294), 104 },
  { OV( 316), 114 },
  { OV( 342), 124 },
  { OV( 364), 134 },
  { OV( 387), 144 },
  { OV( 412), 154 },
  { OV( 433), 164 },
  { OV( 456), 174 },
  { OV( 480), 184 },
  { OV( 500), 194 },
  { OV( 548), 208 },
  { OV( 572), 217 },
  { OV(1155), 474 }
};
  
