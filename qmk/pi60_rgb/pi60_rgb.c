/* Copyright 2022 ziptyze
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "pi60_rgb.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Key Matrix to LED Index
    {     47,     48,     49,     50,     51,     52,     53,     54,     55,     56,     57,     58,     59,     60 },
    {     46,     45,     44,     43,     42,     41,     40,     39,     38,     37,     36,     35,     34,     33 },
    {     20,     21,     22,     23,     24,     25,     26,     27,     28,     29,     30,     31, NO_LED,     32 },
    {     19,     15,     14,     13,     12,     11,     10,      9,      8,      7,      6, NO_LED, NO_LED,      5 },
    {     18,     17,     16, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED,      0, NO_LED, NO_LED, NO_LED, NO_LED,      1,      2,      3,      4 }
}, {
    // LED Index to Physical Position
    { 103, 58 }, { 159, 58 }, { 178, 58 }, { 196, 58 }, { 215, 58 }, { 204, 45 }, { 176, 45 }, { 161, 45 }, { 146, 45 }, { 131, 45 },
    { 116, 45 }, { 101, 45 }, {  86, 45 }, {  71, 45 }, {  56, 45 }, {  41, 45 }, {  47, 58 }, {  28, 58 }, {  10, 58 }, {  17, 45 },
    {  13, 32 }, {  34, 32 }, {  49, 32 }, {  64, 32 }, {  79, 32 }, {  94, 32 }, { 109, 32 }, { 124, 32 }, { 139, 32 }, { 153, 32 },
    { 168, 32 }, { 183, 32 }, { 208, 32 }, { 213, 19 }, { 195, 19 }, { 180, 19 }, { 165, 19 }, { 150, 19 }, { 135, 19 }, { 120, 19 },
    { 105, 19 }, {  90, 19 }, {  75, 19 }, {  60, 19 }, {  45, 19 }, {  30, 19 }, {  12, 19 }, {   8,  7 }, {  23,  7 }, {  38,  7 },
    {  53,  7 }, {  68,  7 }, {  83,  7 }, {  98,  7 }, { 113,  7 }, { 127,  7 }, { 142,  7 }, { 157,  7 }, { 172,  7 }, { 187,  7 },
    { 209,  7 }
}, {
    // LED Index to Flag
    1, 1, 1, 1, 1, 1, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 1, 1, 1, 1,
    1, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 1, 1, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 1, 1, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    1
} };
#endif