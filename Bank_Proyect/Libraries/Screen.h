/***********************************************************************
 * Module:  Screen.h
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Declaration of the class Screen
 ***********************************************************************/

#if !defined(__Screen)
#define __Screen

#include <iostream>

using namespace std;

class Screen {
public:
    void gotoxy(int x, int y);
    void hide_cursor();
private:
protected:
};

#endif
