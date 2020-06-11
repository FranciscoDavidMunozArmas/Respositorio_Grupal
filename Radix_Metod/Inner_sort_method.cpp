/***********************************************************************
 * Module:  Inner_sort_method.cpp
 * Author:  USUARIO
 * Modified: sábado, 6 de junio de 2020 09:22:30
 * Purpose: Implementation of the class Inner_sort_method
 ***********************************************************************/

#define _GLIBCXX_USE_CXX11_ABI 0

#include "Inner_sort_method.h"
#include "Array_dinamic.h"

#include <iostream>
#include <string>

using namespace std;

void Inner_sort_method::_radix_sorting(char** _array)
{
	Array_dynamic _ad;
	int max = _get_max(_array);

	_radix(_array, 0, max);
}

int Inner_sort_method::_get_max(char** _array)
{
	Array_dynamic _ad;
	string _string = *(_array);
	string _aux;
	int _size = _string.size();


	for (int i = 1; i < _ad._dynamic_size(_array); i++) {
		_aux = *(_array + i);
		if (_aux.size() > _size) {
			_size = _aux.size();
		}
	}
	return _size;
}

void Inner_sort_method::_radix(char** _array, int most_significant, int least_significant_digit)
{
	_count_sort(_array, least_significant_digit);
	if (least_significant_digit <= most_significant) {
		return;
	}
	else {
		_radix(_array, most_significant, least_significant_digit - 1);
	}

}

void Inner_sort_method::_count_sort(char** _array, int index)
{
	Array_dynamic _ad;
	int _size = _ad._dynamic_size(_array);

	for (int i = 0; i < _size - 1; i++) {

		for (int j = i + 1; j < _size; j++) {

			if (*(*(_array + i) + index) > *(*(_array + j) + index)) {

				char* aux = (char*)malloc(_ad._dynamic_size(*(_array + j)) * sizeof(char));
				strcpy(aux, *(_array + i));
				strcpy(*(_array + i), *(_array + j));
				strcpy(*(_array + j), aux);
			}
		}
	}

	cout << endl << endl;
	_ad._print_array(_array);
}
