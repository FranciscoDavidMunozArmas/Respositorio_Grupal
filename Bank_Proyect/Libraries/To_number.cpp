/***********************************************************************
 * Module:  To_number.h
 * Author:  USUARIO
 * Modified: miércoles, 27 de mayo de 2020 15:07:22
 * Purpose: Declaration of the class ID_verificator
 ***********************************************************************/
#define _GLIBCXX_USE_CXX11_ABI 0

#include "To_number.h"

#include <iostream>
#include <string>
#include <ctype.h>

#pragma once

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       to_int(char* num)
// Purpose:    Implementation of to_int(char* num)
// Parameters:
// - num
// Return:     int
////////////////////////////////////////////////////////////////////////
int to_int(char* num) {
	return atoi(num);
}

////////////////////////////////////////////////////////////////////////
// Name:       to_int(char num)
// Purpose:    Implementation of to_int(char num)
// Parameters:
// - num
// Return:     int
////////////////////////////////////////////////////////////////////////
int to_int(char num) {
	return num - '0';
}

////////////////////////////////////////////////////////////////////////
// Name:       to_int(string num)
// Purpose:    Implementation of to_int(string num)
// Parameters:
// - num
// Return:     int
////////////////////////////////////////////////////////////////////////
int to_int(string num) {
	return stoi(num);
}

////////////////////////////////////////////////////////////////////////
// Name:       to_float(char* num)
// Purpose:    Implementation of to_float(char* num)
// Parameters:
// - num
// Return:     float
////////////////////////////////////////////////////////////////////////
float to_float(char* num) {
	return atof(num);
}

////////////////////////////////////////////////////////////////////////
// Name:       to_float(string num)
// Purpose:    Implementation of to_float(string num)
// Parameters:
// - num
// Return:     float
////////////////////////////////////////////////////////////////////////
float to_float(string num) {
	return stof(num);
}

////////////////////////////////////////////////////////////////////////
// Name:       to_double(char* num)
// Purpose:    Implementation of to_double(char* num)
// Parameters:
// - num
// Return:     double
////////////////////////////////////////////////////////////////////////
double to_double(char* num) {
	return atol(num);
}

////////////////////////////////////////////////////////////////////////
// Name:       to_double(string num)
// Purpose:    Implementation of to_double(string num)
// Parameters:
// - num
// Return:     double
////////////////////////////////////////////////////////////////////////
double to_double(std::string num) {
	return stod(num);
}
