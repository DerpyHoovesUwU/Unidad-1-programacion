#include <stdio.h>
#include "iostream"
using namespace std;

int main()
{
	float Altura,Base;
	float SUPERFICIE, PERIMETRO;
	//Mensaje de Bienvendida
	cout << "Hola! Este programa 1.10 Calcula la superficie y el perimetro de un rectangulo" << "\n";
	
	//se declaran los numeros que se sumaran (pueden ser decimales)
	
	//se pide el primer numero
	cout << "por favor ingrese el valor de la base: " << "\n";
	//se asigna el primer valor a Base
	cin >> Base;
	//se pide el segundo numero
	cout << "por favor ingresa el valor de la Altura: " << "\n";
	cin >> Altura;
	
	SUPERFICIE= Base*Altura;
	PERIMETRO=2*(Base+Altura);
	
	//Se muestra el resultado.
	printf ("\n La Superficie del rectangulo es %5.2f \n", SUPERFICIE);
	printf ("\n El perimetro del rectangulo es %5.2f \n", PERIMETRO);
	
	return 0;
}
