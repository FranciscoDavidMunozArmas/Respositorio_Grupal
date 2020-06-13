/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include "Array.h"

#include "Input.cpp"
#include "To_number.cpp"
#include "InstanceOf.cpp"

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       set_cero(T(&r)[_size])
// Purpose:    Implementation of set_cero(T(&r)[_size])
// Parameters:
// - r
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T, int _size>
void set_cero(T(&r)[_size])
{
	for (int i = 0; i < _size; i++) {
		r[i] = 0;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       input(char* _input_phrase, T(&r)[_size])
// Purpose:    Implementation of input(char* _input_phrase, T(&r)[_size])
// Parameters:
// - _input_phrase
// - r
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T, int _size>
void input(char* _input_phrase, T(&r)[_size])
{
	for (int i = 0; i < _size; i++) {
		string aux = Input::input_only_numbers(_input_phrase);
		r[i] = to_int(aux);
	}

}

////////////////////////////////////////////////////////////////////////
// Name:       process(T(&r)[_size], int number)
// Purpose:    Implementation of process(T(&r)[_size], int number)
// Parameters:
// - r
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T, int _size>
void process(T(&r)[_size], int number)
{
	for (int i = 0; i < _size; i++) {
		r[i] *= number;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       print_array(T(&r)[_size])
// Purpose:    Implementation of print_array(T(&r)[_size])
// Parameters:
// - r
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T, int _size>
void print_array(T(&r)[_size])
{
	for (int i = 0; i < _size; i++) {
		cout << r[i] << endl;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       _size(T(&r)[N])
// Purpose:    Implementation of _size(T(&r)[N])
// Parameters:
// - r
// Return:     int
////////////////////////////////////////////////////////////////////////
template<class T, int N>
int _size(T(&r)[N])
{
	return N;
}
