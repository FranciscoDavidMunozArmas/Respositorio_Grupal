/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <windows.h>
#include <cstdio>

#include "Contribuitors.h"

#include "../Libraries/Menu.cpp"
#include "../Libraries/Screen.h"
#include "../Libraries/QR_code.cpp"
#include "../Libraries/lib/bitmap_image.hpp"
#include "../Libraries/Pixel.cpp"

using namespace std;

/**
 * @brief _method
*/
void Contribuitors::_method() {
    //_logo();
    //system("cls");
	_group();
}

/**
 * @brief _logo
*/
void Contribuitors::_logo() {
    Pixel _pixel;
    bitmap_image _image("logo.bmp");

    int _height = _image.height();
    int _width = _image.width();

    rgb_t _color;
    for (int i = 0; i < _height; i++) {
        for (int j = 0; j < _width; j++) {
            _color = _image.get_pixel(i, j);
            _pixel.draw_pixel((int)_color.red, (int)_color.green, (int)_color.blue, i, j);
        }
    }

    cin.ignore();
}

/**
 * @brief _name
*/
void Contribuitors::_group()
{
	ostringstream oss;
	oss << "Universidad de las Fuerzas Armadas Espe\n\nIntegrantes:\tDavid Munoz & Daniela Orellana" << endl;
	QR_code _qr;
	_qr._create_QR(oss.str().c_str());

	system("pause");
}
