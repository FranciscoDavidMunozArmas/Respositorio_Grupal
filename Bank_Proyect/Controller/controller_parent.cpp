/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of controller_parent
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Controller_Parent.h"

#include "../Libraries/Menu.cpp"
#include "../Libraries/Screen.h"

#pragma once

using namespace std;

/**
 * @brief Controller_Parent
 * @param  
*/
Controller_Parent::Controller_Parent() {}

void Controller_Parent::init() {
	system("cls");
	_method();
}
