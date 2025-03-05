/*
 * Copyright © 2025 Delilah Hoare and Rachael Dwyer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of version 3 of the GNU General Public License as
 * published by the Free Software Foundation (the GPLv3).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * As a special exception, notwithstanding any provision of the GPLv3, the
 * copyright holders of this program give you permission to link or combine
 * this program with Watcom Code into a single combined work, and to convey
 * the resulting work.  The terms of the GPLv3 will continue to apply to
 * each part of the combined work which is not Watcom Code.  Watcom Code is
 * "Covered Code" as defined by the Sybase Open Watcom Public License
 * version 1.0. If you modify this program, you may extend this exception
 * to your version of the program, but you are not obligated to do so. 
 * If you do not wish to do so, delete this exception statement from your
 * version.
 */

#ifndef ODDBALL_FONT_H
#define ODDBALL_FONT_H

#include <stdint.h>

struct o_font_common
{
	uint16_t line_height, base;
	int32_t chars_start, chars_end;
};

struct o_font_char
{
	uint16_t x, y, width, height;
	int16_t xoffset, yoffset, xadvance;
	int32_t page, kerns_start, kerns_end;
};

struct o_font_char_region
{
	uint16_t upper;
	struct o_font_char char_def[256];
};

struct o_font_kern_region
{
	uint16_t upper;
	int16_t amount[256];
};

#endif

