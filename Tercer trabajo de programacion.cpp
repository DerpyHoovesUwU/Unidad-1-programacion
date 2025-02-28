#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
	int MAT;
	float PRO,CAL1,CAL2,CAL3,CAL4,CAL5;
	//mensaje de bienvenida
	cout << "Hola! Este es el programa 1.8 promedio de calificaciones" << "\n";
	// se pide la MATRICULA DEL ALUMNO
	cout << "por favor ingrese la matricula del alumno: " << "\n";
	//se asigna el primera valor a MAT
	cin >>MAT;
	//se pide la primera calificacion
	cout << "por favor ingrese la primera calificacion " << "\n";
	//se asigna el primer valor de CAL1
	cin >>CAL1;
	//se pide la segunda calificacion
	cout << "por favor ingrese la segunda calificacion " << "\n";
	//se asigna el primer valor de CAL2
	cin >>CAL2;
	//se pide la tercera calificacion
	cout << "por favor ingrese la tercera calificacion " << "\n";
	//se asigna el primer valor de CAL3
	cin >>CAL3;
	//se pide la cuarta calificacion
	cout << "por favor ingrese la cuarta calificacion " << "\n";
	//se asigna el primer valor de CAL4
	cin >>CAL4;
	//se pide la quinta calificacion
	cout << "por favor ingrese la quinta calificacion " << "\n";
	//se asigna el primer valor de CAL5
	cin >>CAL5;
	PRO=(CAL1+CAL2+CAL3+CAL4+CAL5)/5.0;
	//se muestra el resultado
	printf ("\n el promedio del alumno con matricula %d es %5.2f \n",MAT,PRO);
	cout << "\n el promedio del alumno con matricula " << MAT <<" es "<<PRO <<"\n";
	return 0;
}
