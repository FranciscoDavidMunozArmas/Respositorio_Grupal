/***********************************************************************
 * Module:  Trigonometry.cpp
 * Author:  Muñoz Armas Francisco David & Daniela Orellana
 * Modified: martes, 2 de junio de 2020 18:35:34
 * Purpose: Implementation of the class Trigonometry
 ***********************************************************************/

#include "Taylor_Series.cpp"
#include "Trigonometry.h"

////////////////////////////////////////////////////////////////////////
// Name:       Trigonometry::_sen(T base)
// Purpose:    Implementation of Trigonometry::_sen()
// Parameters:
// - base
// Return:     float
////////////////////////////////////////////////////////////////////////

template<typename T>
double Trigonometry::_sen(T base)
{
	try {
		if (base <= 0 || PI <= base) {
			throw base;
		}
	}
	catch (T e) {
		base = _check_angle(base);
	}
	return taylor._taylor_seno(base, 11);
}

////////////////////////////////////////////////////////////////////////
// Name:       Trigonometry::_cos(T base)
// Purpose:    Implementation of Trigonometry::_cos()
// Parameters:
// - base
// Return:     double
////////////////////////////////////////////////////////////////////////

template<typename T>
double Trigonometry::_cos(T base)
{
	try {
		if (base <= 0 || PI <= base) {
			throw base;
		}
	}
	catch (T e) {
		base = _check_angle(base);
	}
	return taylor._taylor_coseno(base, 10);
}

////////////////////////////////////////////////////////////////////////
// Name:       Trigonometry::_tg(T base)
// Purpose:    Implementation of Trigonometry::_tg()
// Parameters:
// - base
// Return:     double
////////////////////////////////////////////////////////////////////////

template<typename T>
double Trigonometry::_tg(T base)
{
	return _sen(base) / _cos(base);
}

////////////////////////////////////////////////////////////////////////
// Name:       Trigonometry::_check_angle(T base)
// Purpose:    Implementation of Trigonometry::_check_angle()
// Parameters:
// - base
// Return:     double
////////////////////////////////////////////////////////////////////////

template<typename T>
double Trigonometry::_check_angle(T base)
{
	int count = 0;
	if (PI < base) {
		while (PI < base) {
			count++;
			base -= PI;
		}
	}
	else if (base < 0){
		while (base < 0) {
			count++;
			base += PI;
		}
	}

	if (count%2 != 0 && count != 0) {
		return -(base);
	}
	else {
		return base;
	}
}
