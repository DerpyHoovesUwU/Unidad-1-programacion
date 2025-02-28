#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
	int NUM,CUA,CUB;   //mensaje de bienvenida
	cout << "hola! este es el programa 1.9 calcular el cuadrado y el cubo de un numero entero positivo" << "\n"
	
	//se pide el valor de NUM
	;cout << "por favor ingrese el valor de NUMERO: " << "\n";
	//se asigna el primer valor A
	cin >> NUM;
	
	//Resolvemos la formula del problema 
	CUA=NUM*NUM;
	CUB=NUM*CUA;
	//Enviamos el reultado de CUA y CUB a la pantalla
	cout << "El cuadrado de "<<NUM<<" es: "<<CUA<<" y el cubo es: "<<CUB;
	return 0;
}
