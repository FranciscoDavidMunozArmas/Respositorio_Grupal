/***********************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Module:  Taylor_Series.h
 * Author:  Muñoz Armas Francisco David & Daniela Orellana
 * Modified: martes, 2 de junio de 2020 18:35:23
 * Purpose: Declaration of the class Taylor_Series
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Talylor_Series_h)
#define __ObjectOrientedModel_1_Talylor_Series_h

class Math;

class Taylor_Series
{
public:
	template<typename T>
	double _taylor_seno(T base, int index);
	template<typename T>
	double _taylor_coseno(T base, int index);

protected:
private:
	Math math; 
};

#endif
