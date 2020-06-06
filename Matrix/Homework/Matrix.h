/***********************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Module:  Matrix.h
 * Author:  David Muñoz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 15:30:20
 * Purpose: Declaration of the class Matrix
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_2_Matrix_h)
#define __ObjectOrientedModel_2_Matrix_h

#include <iostream>
using namespace std;

class Matrix {
public:
	template<typename T>
	T** _create_matrix(int _size, T** matrix);
	template<typename T>
	void _set_cero(int _size, T** matrix);
	template<typename T>
	void _input_num(T** matrix, string input_text, int _size);
	template<typename T>
	void _print_matrix(T** matrix, int _size);
	template<typename T>
	void _change_matrix(T** matrix, T** matrix_for_change, int _size);
};

#endif
