/***********************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Module:  Matrix_operation.cpp
 * Author:  David Muñoz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 15:32:38
 * Purpose: Implementation of the class Matrix_operation
 ***********************************************************************/

#include "Matrix_operation.h"
#include "Matrix.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Matrix_operation::_pow(T** matrix, int _size, int index)
// Purpose:    Implementation of Matrix_operation::_pow()
// Parameters:
// - matrix
// - _size
// Return:     void
////////////////////////////////////////////////////////////////////////

template<typename T>
void Matrix_operation::_pow(T** matrix, int _size, int index)
{
    Matrix m;
	T** aux;
	aux = m._create_matrix(_size, aux);
	T** matrix_r;
	matrix_r = m._create_matrix(_size, matrix_r);

	m._change_matrix(matrix, aux, _size);

	for (int times = 0; times < index - 1; times++) {
		for (int i = 0; i < _size; i++) {
			for (int j = 0; j < _size; j++) {
				for (int h = 0; h < _size; h++) {
					*(*(matrix_r + i) + j) += *(*(matrix + i) + h) * *(*(aux + h) + j);
				}
			}
		}

		m._change_matrix(matrix_r, aux, _size);
		m._set_cero(_size, matrix_r);
	}
	m._change_matrix(aux, matrix, _size);
}
