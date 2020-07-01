/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayp de 2020 19:07:11
 * @function Declaration of the class Controller_Look_By_Record
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
    void _show_information(Bank_account* _ba, int index);
    int _find_by_name(char* _name, Bank_account* _ba, int _index);
    int _set_menu();
    //char** _get_name_record(Bank_account* _ba);
    //char** _get_account_number_record(Bank_account* _ba);
protected:
};

#endif
