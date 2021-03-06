/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Look_By_Record
*/

#if !defined(__Controller_Look_By_Record)
#define __Controller_Look_By_Record

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "../Proyect/Bank_account.h"
#include "Controller_Entity.h"

using namespace std;

class Menu;
class File_reader;

class Controller_Look_By_Record : public Controller_Entity
{
public:
    Controller_Look_By_Record() : Controller_Entity() {};
    int _find_by_account(char* _key, Bank_account* _ba, int _index);
private:
    void _method();
    void _show_record();
    //void _show_information(Bank_account* _ba, int index);
    void _show_information(Bank_account _ba);
    int _find_by_name(char* _name, Bank_account* _ba, int _index);
    int _set_menu();
    void _get_temporal(Bank_account _ba);
    //char** _get_name_record(Bank_account* _ba);
    //char** _get_account_number_record(Bank_account* _ba);
protected:
};

#endif