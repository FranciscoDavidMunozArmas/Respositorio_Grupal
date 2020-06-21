/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include "Look_by.h"

#include "Array_dinamic.h"

#pragma once

using namespace std;

int Look_by::look_by_key(char* _key, char** _key_array) {
	Array_dynamic _ad;
	for (int i = 0; i < _ad._dynamic_size(_key_array); i++) {
		if (strcmp(_key, *(_key_array + i)) == 0) {
			return i;
			break;
		}
	}
	return -1;
}
