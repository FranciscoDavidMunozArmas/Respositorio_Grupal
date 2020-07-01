/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_All_Record
*/

#if !defined(__Controller_All_Record)
#define __Controller_All_Record

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "../Proyect/Bank_account.h"
#include "Controller_Entity.h"

using namespace std;

class Menu;
class File_reader;

class Controller_All_Record: public Controller_Entity
{
public:
    Controller_All_Record() : Controller_Entity() {};
private:
    void _method();
    void _show_records();
    void _show_information(Bank_account _ba);
protected:
};

#endif
