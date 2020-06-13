/***********************************************************************
 * Module:  ID_verificator.cpp
 * Author:  USUARIO
 * Modified: miércoles, 27 de mayo de 2020 15:07:22
 * Purpose: Declaration of the class ID_verificator
 ***********************************************************************/

#include "ID_verificator.h"

#include "To_number.cpp"
#include "Verify_number.cpp"
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       ID_verify(string ID)
// Purpose:    Implementation of ID_verify(string ID)
// Parameters:
// - ID
// Return:     bool
////////////////////////////////////////////////////////////////////////
bool ID_verificator::ID_verify(string ID){
	if (!is_int_number(ID)) {
		return false;
	}

	if(ID.length() != 10){
        return false;
	}

	char province[2] = { ID[0], ID[1] };
	if (!is_between(0, to_int(province), 24)) {
		return false;
	}

	if (!is_between(-1, to_int(ID[2]), 6)) {
		return false;
	}

	if (!check_last_digit(ID)) {
		return false;
	}

	return true;
}

////////////////////////////////////////////////////////////////////////
// Name:       is_between(int min, int number, int max)
// Purpose:    Implementation of is_between(int min, int number, int max)
// Parameters:
// - min
// - number
// - max
// Return:     bool
////////////////////////////////////////////////////////////////////////
bool ID_verificator::is_between(int min, int number, int max) {
	return (min < number && number < max);
}

////////////////////////////////////////////////////////////////////////
// Name:       next_ten(int number)
// Purpose:    Implementation of next_ten(int number)
// Parameters:
// - number
// Return:     int
////////////////////////////////////////////////////////////////////////
int ID_verificator::next_ten(int number) {
	while (number%10) {
		number++;
	}
	return number;
}

////////////////////////////////////////////////////////////////////////
// Name:       check_last_digit(string ID)
// Purpose:    Implementation of check_last_digit(string ID)
// Parameters:
// - number
// Return:     bool
////////////////////////////////////////////////////////////////////////
bool ID_verificator::check_last_digit(string ID) {
	int check_number = 0;
	for (int i = 0; i < ID.length() - 1; i++) {
		if (i % 2) {
			check_number += to_int(ID[i]);
		}
		else {
			int number = to_int(ID[i]) * 2;
			if (number >= 10) {
				check_number += number - 9;
			}
			else {
				check_number += number;
			}
		}
	}

	if ((next_ten(check_number) - check_number) != to_int(ID[9])) {
		return false;
	}

	return true;
}
