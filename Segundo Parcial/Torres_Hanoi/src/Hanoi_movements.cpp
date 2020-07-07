/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
*		              TORRES DE HANOI							  *
* CARRERA: Ingenieria de Software                                 *
* NOMBRE: Daniela Orellana y David Muñoz                          *
* FECHA DE CREACIÓN: 04/07/2020                                   *
* NRC: 6396                                                       *
*******************************************************************/
#include "Hanoi_movements.h"
#include <iostream>
#include <ctime>

/** @name Hanoi_movements
 * @include Hanoi_movements.h
*/
using namespace std;
Hanoi_movements::Hanoi_movements()
{
    //ctor
}

/** @name _do_movements
 * @include Hanoi_movements.h
 * @return void
 * @param _num, _tower_A, _tower_B, _tower_C
*/
void Hanoi_movements::_do_movements(int _num, char _tower_A, char _tower_B, char _tower_C){

    unsigned t0, t1;
    double time, t_prueba;
    t0=clock();
    if(_num==1){
        _print_message(_num, _tower_A, _tower_C);
    }
    else{
        _do_movements(_num-1,_tower_A,_tower_B,_tower_C);
        _print_message(_num, _tower_A, _tower_C);
        _do_movements(_num-1,_tower_B,_tower_C,_tower_A);
    }
    t1 = clock();
    time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Execution Time: " << time << endl;
}

/** @name _print_message
 * @include Hanoi_movements.h
 * @return void
 * @param _num, _A, _B
*/
void Hanoi_movements::_print_message(int _num, char _A, char _B){
    cout<<"El disco "<<_num<<" se mueve de la torre "<<_A<<" hasta la torre "<<_B<<endl;
}

