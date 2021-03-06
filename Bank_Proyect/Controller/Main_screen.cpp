/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Main_Screen
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include <windows.h>

#include "Main_screen.h"

#include "../Libraries/Menu.cpp"
#include "../Libraries/Screen.h"
#include "../Libraries/lib/bitmap_image.hpp"
#include "../Libraries/Pixel.cpp"

#define ENTER 13

using namespace std;

/**
 * @brief _method
*/
void Main_screen::_method() {
	int key;
	do {
		system("cls");
		_logo();
		key = getch();
	} while (key != ENTER);
}

/**
 * @brief _logo
*/
void Main_screen::_logo()
{

	Pixel _brush(1);
	bitmap_image _image("PRESS_START.bmp");

	int  _width = _image.height();
	int _height = _image.width();
	int x = 25;
	int y = 25;

	for (int i = 0; i < _height; i++) {
		for (int j = 0; j < _width; j++) {
			_brush.draw_pixel((int)_image.get_pixel(i, j).red, (int)_image.get_pixel(i, j).green, (int)_image.get_pixel(i, j).blue, i+10, j+10);
		}
	}

	//for (int i = 0; i < 20; i++) {
	//	_brush.draw_pixel(255, 255, 255, x - 10, (y + 10) - i);
	//}

	//for (double i = 0; i < PI * 2; i += 0.05) {
	//	_brush.draw_pixel(255, 255, 255, (x - 10 * cos(4 * i)), (y + 10 * sin(i)));
	//}

	//for (double i = 0; i < PI * 2; i += 0.05) {
	//	_brush.draw_pixel(0, 255, 0, (x + (20 / i) * cos(i)), (y + 20 * sin(i)));
	//}

	////Circle
	//for (double i = 0; i < PI * 2; i += 0.05) {
	//	_brush.draw_pixel(255, 255, 0, (x + 20 * cos(i)), (y + 20 * sin(i)));
	//}
}
