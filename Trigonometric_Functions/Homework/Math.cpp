/***********************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Module:  Math.cpp
 * Author:  USUARIO
 * Modified: martes, 2 de junio de 2020 15:47:09
 * Purpose: Implementation of the class Math
 ***********************************************************************/

#include "Math.h"

////////////////////////////////////////////////////////////////////////
// Name:       Math::pow(T base, int index)
// Purpose:    Implementation of Math::pow()
// Parameters:
// - number
// - base
// Return:     double
////////////////////////////////////////////////////////////////////////

template<typename T>
double Math::pow(T base, int index)
{
	if (index == 0) {
		return 1;
	}
	else if (index < 0){
		return pow(base, index + 1) / base;
	}
	else {
		return base * pow(base, index - 1);
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Math::factorial(int base)
// Purpose:    Implementation of Math::factorial()
// Parameters:
// - base
// Return:     int
////////////////////////////////////////////////////////////////////////

int Math::factorial(int base)
{
	if (base <= 1) {
		return 1;
	}
	else {
		return base * factorial(base - 1);
	}
}
