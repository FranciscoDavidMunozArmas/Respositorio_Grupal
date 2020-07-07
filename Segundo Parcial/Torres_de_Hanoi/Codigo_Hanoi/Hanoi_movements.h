/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
*		              TORRES DE HANOI							  *
* CARRERA: Ingenieria de Software                                 *
* NOMBRE: Daniela Orellana y David Muñoz                          *
* FECHA DE CREACIÓN: 04/07/2020                                   *
* NRC: 6396                                                       *
*******************************************************************/
#ifndef HANOI_MOVEMENTS_H
#define HANOI_MOVEMENTS_H
#include <iostream>

class Hanoi_movements
{
    public:
        Hanoi_movements();
        void _do_movements(int, char, char, char);
        void _print_message(int, char, char);
    protected:

    private:
};

#endif // HANOI_MOVEMENTS_H
