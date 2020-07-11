#include <iostream>
#include "Regiones.h"
#include "Ingreso.h"
#include <sstream>
#include <math.h>
#include "Sudoku.h"

using namespace std;

int main()
{
    Regiones reg;
    Sudoku sud;
    reg.iniciar();
    sud.resolver_sudoku();
}
