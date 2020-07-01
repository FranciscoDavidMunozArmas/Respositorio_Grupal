/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Entity
*/

#if !defined(__Controller_Entity)
#define __Controller_Entity

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Controller_Parent.h"
#include "../Proyect/Person.h"
#include "../Libraries/File_reader.h"

using namespace std;

class Controller_Entity: public Controller_Parent
{
public:
    Controller_Entity() : Controller_Parent() {};
private:
protected:
    File_reader _fr;
    FILE* file;
    char* _path_account = "../File/account_record.txt";
    virtual void _method() = 0;
};

#endif
