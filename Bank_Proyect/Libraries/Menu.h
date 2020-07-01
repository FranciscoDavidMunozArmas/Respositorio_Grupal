/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 19:07:11
 * @function Declaration of the class Menu
*/
#if !defined(__Menu)
#define __Menu

#include <iostream>
#include "Screen.h"

using namespace std;

class Menu {
public:
    template<typename T>
    int options(T* option, int index);
    template<typename T>
    int options(char* message ,T* option, int index);
private:
    Screen screen;
protected:
};

#endif
