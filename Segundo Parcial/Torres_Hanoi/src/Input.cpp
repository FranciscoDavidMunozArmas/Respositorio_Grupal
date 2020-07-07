/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
*		              TORRES DE HANOI							  *
* CARRERA: Ingenieria de Software                                 *
* NOMBRE: Daniela Orellana y David Muñoz                          *
* FECHA DE CREACIÓN: 04/07/2020                                   *
* NRC: 6396                                                       *
*******************************************************************/
#include "Input.h"
#include <iostream>
#include "Hanoi_movements.h"
#include "Hanoi_calculate.h"
#include "Verify_input.h"
using namespace std;

/** @name Input
 * @include Input.h, Hanoi_movements.h, Hanoi_calculate.h, Verify_input.h
*/
Input::Input()
{
    //ctor
}

/** @name _enter_data
 * @include Input.h, Hanoi_movements.h, Hanoi_calculate.h, Verify_input.h
 * @return void
*/
void Input::_enter_data(){
    Hanoi_movements _mov;
    Verify_input _verify;
    _num = _verify._input("Ingrese el numero de discos: ");
    _print_movements(_num);
    system("pause");
    system("cls");
    _mov._do_movements(_num, _A, _C, _B);
}

/** @name _print_movements
 * @include Input.h, Hanoi_movements.h, Hanoi_calculate.h, Verify_input.h
 * @return void
 * @param _num
*/
void Input::_print_movements(int _num){
    Hanoi_calculate _cal;
    int _movements = _cal._calculate_movements(_num);
    cout<<"\nEl numero de movimientos a realizar es: "<<_movements<<"\n"<<endl;
}
