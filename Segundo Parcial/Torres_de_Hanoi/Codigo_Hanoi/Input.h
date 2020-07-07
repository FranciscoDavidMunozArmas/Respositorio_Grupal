/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
*		              TORRES DE HANOI							  *
* CARRERA: Ingenieria de Software                                 *
* NOMBRE: Daniela Orellana y David Muñoz                          *
* FECHA DE CREACIÓN: 04/07/2020                                   *
* NRC: 6396                                                       *
*******************************************************************/
#ifndef INPUT_H
#define INPUT_H


class Input
{
    public:
        Input();
        void _enter_data();
        void _print_movements(int);
    protected:

    private:
        int _num;
        char _A = 'A';
        char _B = 'B';
        char _C = 'C';
};

#endif // INPUT_H
