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
