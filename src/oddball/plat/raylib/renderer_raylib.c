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

#include <stdbool.h>
#include <raylib.h>
#include <stdint.h>
#include "kbd.h"
//Setup of Structs
bool is_key_pressed_currently()
{

}
bool is_key_just_pressed(int input)
{
switch (input){ //rewrite
	case k_w: if (IsKeyPressed(KEY_W)) {return true;} break;
	case k_a: if (IsKeyPressed(KEY_A)) {return true;} break;
	case k_s: if (IsKeyPressed(KEY_S)) {return true;} break;
	case k_d: if (IsKeyPressed(KEY_D)) {return true;} break;
	case k_z: if (IsKeyPressed(KEY_Z)) {return true;} break;
	case k_
}
}
bool is_window_open()
{
	if (WindowShouldClose()) {return false;}else{return true;}
}
void create_render_texture(int w, int y)
{
	RenderTexture2D target = LoadRenderTexture(w, y);
	SetTextureFilter(target.texture, TEXTURE_FILTER_POINT);
}
void create_window(int width, int height, char *title)
{
	InitWindow(width, height, title);
	create_render_texture(width, height);

}
void terminate()
{
	CloseWindow();
}
void draw_to_texture()
{

}

void draw_to_screen()//Starts drawing with a black background
{
	BeginDrawing();
	ClearBackground(BLACK);
	EndDrawing();
}
int8_t is_platform_midi_compatible() // 0 = not compatible, 1 = compatible .sf2/.mid style, 2 = compatible native style
{
return 1;
}

int main() //Example of use of renderer
{
	create_window(640, 480, "Oddball Test");
	while (is_window_open())
	{
		draw_to_texture();
		draw_to_screen();//auto closes texture
	}
	terminate();
}


