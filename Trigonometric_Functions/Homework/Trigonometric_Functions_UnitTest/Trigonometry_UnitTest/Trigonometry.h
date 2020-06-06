/***********************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Module:  Trigonometry.h
 * Author:  Muñoz Armas Francisco David & Daniela Orellana
 * Modified: martes, 2 de junio de 2020 18:35:34
 * Purpose: Declaration of the class Trigonometry
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Trigonometry_h)
#define __ObjectOrientedModel_1_Trigonometry_h

class Taylor_Series;

class Trigonometry
{
public:
	template<typename T>
	double _sen(T base);
	template<typename T>
	double _cos(T base);
	template<typename T>
	double _tg(T base);
	template<typename T>
	double _check_angle(T base);
protected:
private:
	Taylor_Series taylor;
	const double PI = 3.14159265358979323846;
};

#endif
