/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
*		              TORRES DE HANOI							  *
* CARRERA: Ingenieria de Software                                 *
* NOMBRE: Daniela Orellana y David Muñoz                          *
* FECHA DE CREACIÓN: 04/07/2020                                   *
* NRC: 6396                                                       *
*******************************************************************/
#include "Hanoi_calculate.h"
#include <iostream>
#include <ctime>

using namespace std;

/** @name Hanoi_calculate
 * @include Hanoi_calculate.h
*/
Hanoi_calculate::Hanoi_calculate()
{
    //ctor
}

/** @name _calculate_movements
 * @include Hanoi_calculate.h
 * @return int
 * @param _num
*/
int Hanoi_calculate::_calculate_movements(int _num){

    if(_num==1){
        return 1;
    }
    else{
        return 2*_calculate_movements(_num-1)+1;
    }
}
