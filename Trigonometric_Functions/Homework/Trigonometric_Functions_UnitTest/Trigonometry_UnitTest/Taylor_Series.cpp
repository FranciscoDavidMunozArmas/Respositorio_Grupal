/***********************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Module:  Talylor_Series.cpp
 * Author:  Muñoz Armas Francisco David & Daniela Orellana
 * Modified: martes, 2 de junio de 2020 18:35:23
 * Purpose: Implementation of the class Talylor_Series
 ***********************************************************************/

#include "Math.cpp"
#include "Taylor_Series.h"

#include <iostream>

using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Talylor_Series::_taylor_seno(T base, int index)
// Purpose:    Implementation of Talylor_Series::_taylor_seno()
// Parameters:
// - base
// - index
// Return:     double
////////////////////////////////////////////////////////////////////////

template<typename T> 
double Taylor_Series::_taylor_seno(T base, int index)
{
	if (index <= 1) {
		return -base;
	}
	else {
		return -_taylor_seno(base, index - 2) - math.pow(base, index) / math.factorial(index);
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Talylor_Series::_taylor_coseno(T base, int index)
// Purpose:    Implementation of Talylor_Series::_taylor_coseno()
// Parameters:
// - base
// - index
// Return:     double
////////////////////////////////////////////////////////////////////////

template<typename T>
double Taylor_Series::_taylor_coseno(T base, int index)
{
	if(index <= 0){
		return -1;
	}
	else{
		return -math.pow(base, index) / math.factorial(index) - _taylor_coseno(base, index-2);
	}
}
