/***********************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Module:  Array_dinamic.cpp
 * Author:  David Muñoz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 15:30:20
 * Purpose: Implementation of the class Array_dinamic
 ***********************************************************************/

#include "Array_dinamic.h"
#include "../Input.cpp"
#include "../To_number.cpp"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Array_dynamic::_create_array(int _size, T* _array)
// Purpose:    Implementation of Array_dynamic::_create_array()
// Parameters:
// - _array
// - _size
// Return:     T
////////////////////////////////////////////////////////////////////////

template<typename T>
T* Array_dynamic::_create_array(int _size, T* _array)
{
	T *aux = (T*)malloc(_size * sizeof(T));
	_set_cero(_size, aux);
	return aux;
}

////////////////////////////////////////////////////////////////////////
// Name:       Array_dynamic::_set_cero(int _size, T* _array)
// Purpose:    Implementation of Array_dynamic::_set_cero()
// Parameters:
// - _array
// - _size
// Return:     void
////////////////////////////////////////////////////////////////////////

template<typename T>
void Array_dynamic::_set_cero(int _size, T* _array)
{
	for (int i = 0; i < _size; i++) {
		*(_array + i) = 0;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Array_dynamic::_input_num(T* _array, string input_text, int _size)
// Purpose:    Implementation of Array_dynamic::_input_num()
// Parameters:
// - _array
// - _size
// Return:     void
////////////////////////////////////////////////////////////////////////

template<typename T>
void Array_dynamic::_input_num(T* _array, string input_text, int _size)
{
    Input input;
	for (int i = 0; i < _size; i++) {
		*(_array + i) = to_int(input.input_int_number(input_text));
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Array_dynamic::_print_array(T* _array, int _size)
// Purpose:    Implementation of Array_dynamic::print_array()
// Parameters:
// - _array
// - _size
// Return:     void
////////////////////////////////////////////////////////////////////////

template<typename T>
void Array_dynamic::_print_array(T* _array, int _size)
{
	for (int i = 0; i < _size; i++) {
		cout << *(_array + i) << ", ";
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Array_dynamic::_sort(T* _array, int _size)
// Purpose:    Implementation of Array_dynamic::_sort()
// Parameters:
// - _array
// - _size
// Return:     void
////////////////////////////////////////////////////////////////////////
template<typename T>
void Array_dynamic::_sort(T* _array, int _size)
{
	T aux;
	for (int i = 0; i < _size; i++) {
		for (int j = 0; j < _size; j++) {
			if (j != _size -1) {
				if (*(_array + j + 1) < *(_array + j)) {
					aux = *(_array + j + 1);
					*(_array + j + 1) = *(_array + j);
					*(_array + j) = aux;
				}
			}
		}
	}
}
