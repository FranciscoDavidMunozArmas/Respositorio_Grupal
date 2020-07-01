/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Main_Screen
*/

#if !defined(__Main_screen)
#define __Main_screen

#include <iostream>

#include "Controller_Parent.h"

using namespace std;

class Main_screen: public Controller_Parent
{
public:
    Main_screen() : Controller_Parent() {};
private:
    const double PI = 3.14159265358979323846;

    void _method();
    void _logo();
protected:
};

#endif
