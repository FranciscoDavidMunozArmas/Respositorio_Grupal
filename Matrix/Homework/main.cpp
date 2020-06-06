/***********************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Module:  main.cpp
 * Author:  David Muñoz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 15:30:20
 * Purpose: Implementation of the main class
 ***********************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Matrix.cpp"
#include "Matrix_operation.cpp"
#include "../Input.h"
#include "../To_number.h"

using namespace std;

int main()
{
    Input input;
    Matrix m;
    Matrix_operation _operation;
    int _size;
    do{
        _size = to_int(input.input_only_int("Ingrese el tamanio: "));
    }while(_size < 2);

    int **matrix;
    matrix = m._create_matrix(_size, matrix);
    m._input_num(matrix, "Ingresa un numero: ", _size);
    m._print_matrix(matrix, _size);
    printf("\n");
    int n = to_int(input.input_only_int("Ingrese la potencia: "));
    _operation._pow(matrix, _size, n);
    m._print_matrix(matrix, _size);
    free(matrix);
    system("pause");
}
