/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Main_Option
*/

#if !defined(__Controller_Main_Option)
#define __Controller_Main_Option

#include <iostream>
#include "Controller_Parent.h"

using namespace std;

class Controller_Main_Option : public Controller_Parent
{
public:
    Controller_Main_Option() : Controller_Parent() {};
private:
protected:
    virtual void _method() = 0;
    virtual void _options() = 0;
    virtual int _set_menu() = 0;
};

#endif
