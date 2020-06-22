/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include "Look_by.h"
#include <string>

#include "Array_dinamic.cpp"

#pragma once

using namespace std;

//int Look_by::look_by_key(char* _key, char** _key_array) {
//	Array_dynamic _ad;
//	for (int i = 0; i < _ad._dynamic_size(_key_array); i++) {
//		if (strcmp(_key, *(_key_array + i)) == 0) {
//			return i;
//			break;
//		}
//	}
//	return -1;
//}


int Look_by::look_by_key(char* _key, char** _key_array, int _index) {
	if (_index <= -1) {
		return -1;
	} else  if (strcmp(_key, *(_key_array + _index)) == 0) {
		return _index;
	}
	else {
		look_by_key(_key, _key_array, _index - 1);
	}
}