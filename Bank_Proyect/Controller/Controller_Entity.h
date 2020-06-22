/***********************************************************************
 * Module:  Menu.h
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

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
