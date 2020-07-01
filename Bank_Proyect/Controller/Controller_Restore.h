/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Restore
*/

#if !defined(__Controller_Restore)
#define __Controller_Restore

#include <iostream>

#include "Controller_Parent.h"

using namespace std;

class Controller_Restore : public Controller_Parent
{
public:
    Controller_Restore() : Controller_Parent() {};
private:
    void _method();
    void _restore();
protected:
};

#endif
