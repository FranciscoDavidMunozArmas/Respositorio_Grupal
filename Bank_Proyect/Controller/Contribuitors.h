/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Contribuitors
*/

#if !defined(__Contribuitors)
#define __Contribuitors

#include <iostream>

#include "Controller_Parent.h"

using namespace std;

class Contribuitors : public Controller_Parent
{
public:
    Contribuitors() : Controller_Parent() {};
private:
    void _method();
    void _group();
    void _logo();
protected:
};

#endif
