/***********************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Module:  MCD_MCM.h
 * Author:  David Muñoz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 15:32:38
 * Purpose: Declaration of the class MCD_MCM
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_2_Matrix_operation_h)
#define __ObjectOrientedModel_2_Matrix_operation_h

#include <iostream>
using namespace std;

class MCD_MCM{
public:
	template<typename T>
	int _commun_minum(T* _array, int _size);
	template<typename T>
	int _commun_maxinum(T* _array, int _size);
};


#endif
