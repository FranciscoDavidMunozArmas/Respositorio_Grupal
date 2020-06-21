#pragma once
/***********************************************************************
 * Module:  Controller_Operations_Bank.h
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Declaration of the class Controller_Operations_Bank
 ***********************************************************************/

#if !defined(__Controller_Operation)
#define __Controller_Operation

#include <iostream>

#include "Controller_Main_Option.h"

using namespace std;

class Controller_Operation : public Controller_Main_Option
{
public:
    Controller_Operation() : Controller_Main_Option() {};
private:
    void _method();
    void _options();
    int _set_menu();
protected:
};

#endif
