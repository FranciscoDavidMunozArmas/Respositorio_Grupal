/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Controller_Parent.h"

#include "../Libraries/Menu.cpp"
#include "../Libraries/Screen.h"

#pragma once

using namespace std;

Controller_Parent::Controller_Parent() {}

void Controller_Parent::init() {
	system("cls");
	_method();
}
