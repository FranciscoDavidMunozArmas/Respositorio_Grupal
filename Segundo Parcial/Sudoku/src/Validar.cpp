#include "Validar.h"
#include <iostream>

using namespace std;

Validar::Validar()
{
    //ctor
}

/**
	@param tipo 1 para enteros 2 para flotantes
*/
bool Validar::validar(string entrada, int tipo) {
	int contador = 0;
	try {
		for (int i = 0; i < entrada.length(); i++) {
			if (isalpha(entrada[i])) {
				throw 1;
			}
			if (!isdigit(entrada[i]) && tipo == 1) {
				throw 1;
			}
			if (entrada[i] == '.') {
				contador++;
			}
			if ((isdigit(entrada[i]) == 0 && entrada[i] != '.') || (contador>1)) {
				throw 1;
			}
		}
	}
	catch (int e) {
		return true;
	}
	return false;
}
