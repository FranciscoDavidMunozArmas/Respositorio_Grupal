/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
*		              TORRES DE HANOI							  *
* CARRERA: Ingenieria de Software                                 *
* NOMBRE: Daniela Orellana y David Muñoz                          *
* FECHA DE CREACIÓN: 04/07/2020                                   *
* NRC: 6396                                                       *
*******************************************************************/
#include "Verify_input.h"
#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>

using namespace std;

/** @name Verify_input
 * @include Verify_input.h
*/
Verify_input::Verify_input()
{
    //ctor
}

/** @name _input
 * @include Verify_input.h
 * @return int
 * @param _message
*/
int Verify_input::_input(char* _message){
    bool flag=true;
	char caracter[]="";
	int contMenos=0;
	int i=0;
	int numero=0;
    printf("\n%s\n",_message);

	do{
	    caracter[0]=getch();
		if((caracter[0]>=48 && caracter[0]<=57)){
			printf("%c",caracter[0]);
			numero=numero*10+atoi(caracter);
			i++;
		}else{
			if(caracter[0]==13){
				flag=false;
			}else{
				if(caracter[0]==8 && i>0){
                    printf("\b \b");
                    i--;
                    numero=numero/10;
                    if(i==0){
                        contMenos=0;
                        numero=0;
                    }
				}
			}
		}
	}while(flag);
	if(contMenos>0)
        numero=numero*(-1);
	return numero;
}
