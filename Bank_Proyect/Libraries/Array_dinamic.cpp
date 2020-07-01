/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Array_dinamic
*/
#include "Array_dinamic.h"
#include "Input.cpp"
#include "To_number.cpp"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

using namespace std;

/**
 * @brief _create_array
 * @param _size, _array
*/
template<typename T>
T* Array_dynamic::_create_array(int _size, T* _array)
{
	T *aux = (T*)malloc(_size * sizeof(T));
	_set_cero(aux);
	return aux;
}

/**
 * @brief _set_cero
 * @param _array
*/
template<typename T>
void Array_dynamic::_set_cero(T* _array)
{
	int _size = _dynamic_size(_array);
	for (int i = 0; i < _size; i++) {
		*(_array + i) = 0;
	}
}

/**
 * @brief _input_num
 * @param _array, input_text
*/
template<typename T>
void Array_dynamic::_input_num(T* _array, string input_text)
{
    Input input;
	int _size = _dynamic_size(_array);
	for (int i = 0; i < _size; i++) {
		*(_array + i) = to_int(input.input_int_number(input_text));
	}
}

/**
 * @brief _print_array
 * @param _array
*/
template<typename T>
void Array_dynamic::_print_array(T* _array)
{
	int _size = _dynamic_size(_array);
	for (int i = 0; i < _size; i++) {
		cout << *(_array + i) << ", ";
	}
	printf("\n");
}

/**
 * @brief _sort
 * @param _array
*/
template<typename T>
void Array_dynamic::_sort(T* _array)
{
	T aux;
	int _size = _dynamic_size(_array);
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

/**
 * @brief _dynamic_size
 * @param _array
*/
template<typename T>
int Array_dynamic::_dynamic_size(T* _array) {
	return _msize(_array) / sizeof(T);
}

/**
 * @brief _resize
 * @param _array, _new_size
*/
template<typename T>
T* Array_dynamic::_resize(T* _array, int _new_size) {
	T* _aux_array;
	_aux_array = (T*)realloc(_array, sizeof(T)*_new_size);
	return _aux_array;
}
