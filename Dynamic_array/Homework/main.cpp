#include <iostream>
#include <stdlib.h>
#include "Array_dinamic.cpp"
#include "MCD_MCM.cpp"
#include "../Input.h"
#include "../To_number.h"

using namespace std;

int main()
{
    MCD_MCM _mcd_mcm;
    Array_dynamic _ad;
    Input input;
    int *_array;
    int _size = to_int(input.input_only_numbers("Introduzca el tamanio: "));
    _array = _ad._create_array(_size,_array);
    _ad._input_num(_array,"Ingrese un numero: ", _size);
    _ad._sort(_array, _size);
    cout << "MCM: " << _mcd_mcm._commun_minum(_array, _size) << endl;
    cout << "MCD: "<< _mcd_mcm._commun_maxinum(_array, _size) << endl;
    free(_array);
    system("pause");
}
