#ifndef PRINTER_H
#define PRINTER_H

#include <windows.h>
#include <fstream>

using namespace std;

class Printer
{
public:
    Printer();
    void print_file(basic_ifstream<TCHAR>& _file);
    virtual ~Printer();
protected:
private:
    void _out_text_xy(HDC hdc, int x, int y, basic_string<TCHAR> msg);
};

#endif
