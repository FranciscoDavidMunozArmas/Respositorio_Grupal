/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Creation_Account
*/

#if !defined(__Controller_Creation_Account)
#define __Controller_Creation_Account

#include <iostream>
#include "Controller_Main_Option.h"

using namespace std;

class Controller_Creation_Account : public Controller_Main_Option
{
public:
    Controller_Creation_Account() : Controller_Main_Option() {};
private:
    void _method();
    void _options();
    int _set_menu();
protected:
};

#endif
