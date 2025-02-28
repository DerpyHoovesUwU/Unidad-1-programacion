#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
	int A,B;
	float RES;
	//mensaje de bienvenida
	cout << "hola! Este programa 1.7 Escribir el resultado de la expresion" << "\n";
	
	//se declaran los numeros que se sumaran(pueden ser decimales)
	
	//se pide el primer numero
	cout << "por favor ingrese el valor de A: " << "\n";
	//se asigna el primer valor de A
	cin >>A;
	//se pide el segundo numero
	cout << "por favor ingrese el valor de B: " << "\n";
	//se asigna el segundo valor a B
	cin >>B;
	
	RES=((A+B)*(A+B))/3.0;
	
	//se muestra el resultado
	printf ("\n El resultado de la expresion es %5.4f\n",RES);
	cout << "EL RESULTADO DE LA EXPRESION ES " << RES << "\n";
	
	return 0;
}
