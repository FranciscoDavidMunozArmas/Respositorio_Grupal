/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Parent
*/
#if !defined(__Controller_Parent)
#define __Controller_Parent

#include <iostream>
#include "../Libraries/Menu.h"
#include "../Libraries/Screen.h"

using namespace std;

class Menu;
class Screen;

class Controller_Parent
{
public:
    Controller_Parent();
    void init();
private:
protected:
    Menu menu;
    Screen screen;
    virtual void _method() = 0;
};

#endif
