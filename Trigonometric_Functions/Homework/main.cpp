/***********************************************************************
 * Module:  Talylor_Series.cpp
 * Author:  Muñoz Armas Francisco David & Daniela Orellana
 * Modified: martes, 2 de junio de 2020 18:35:23
 * Purpose: Implementation of the class Talylor_Series
 ***********************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Trigonometry.cpp"
#include "../Input.cpp"
#include "../To_number.cpp"

using namespace std;

int main()
{
    Input input;
    Trigonometry process;
    cout << "El angulo sera calculado en radianes" << endl;
    double base = to_double(input.input_only_numbers("Introduzca un angulo: "));
    cout << "Seno: " << process._sen(base) << endl;
    cout << "Coseno: " << process._cos(base) << endl;
    cout << "Tangente: " << process._tg(base) << endl;
}
