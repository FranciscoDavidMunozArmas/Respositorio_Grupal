/***********************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Module:  Matrix_operation.h
 * Author:  David Muñoz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 15:32:38
 * Purpose: Declaration of the class Matrix_operation
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_2_Matrix_operation_h)
#define __ObjectOrientedModel_2_Matrix_operation_h

#include <iostream>
using namespace std;

class Matrix_operation {
public:
	template<typename T>
	void _pow(T** matrix, int _size, int index);
};


#endif
