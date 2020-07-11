#include "Ingreso.h"
#include <iostream>
#include "Validar.h"

using namespace std;

Ingreso::Ingreso()
{
    //ctor
}

string Ingreso::leer(string mensage,int tipo) {
	Validar validacion;
	string entrada;
	cout << mensage << endl;
	cin >> entrada;
	while (validacion.validar(entrada, tipo)) {
		cout << "Valor no valido reingrese" << endl;
		cin >> entrada;
	}
	return entrada;

}
