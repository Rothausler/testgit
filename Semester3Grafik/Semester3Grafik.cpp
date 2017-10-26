// Semester3Grafik.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Gosu/Gosu.hpp"
#include "Gosu/AutoLink.hpp"

class GameWindow : public Gosu::Window
{
public:

	Gosu::Image bild;
	GameWindow()
		: Window(1920, 1080)
		, bild("7024122097_ff0090fe95_b.jpg")
	{
		set_caption("Cooler Kumbl");
	}
	double x = 0;
	double y = 0;
	double rot = 0;
	void update() override
	{
		if (input().down(Gosu::KB_LEFT))
		{
			x -= 10;
		}
		else if (input().down(Gosu::KB_RIGHT))
		{
			x += 10;
		}
		else if (input().down(Gosu::KB_DOWN))
		{
			y += 10;
		}
		else if (input().down(Gosu::KB_UP))
		{
			y -= 10;
		}
	}

	void draw() override
	{
		bild.draw_rot(x, y, 0.0, rot, 0.5, 0.5);
	}
};

int main()
{
	GameWindow window;
	window.show();
}

