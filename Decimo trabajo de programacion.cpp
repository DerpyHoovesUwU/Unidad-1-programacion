#include "iostream"
using namespace std;

int main()
{
	//Problema 1.6 Construya un diagrama de flujo, calcule e imprima que hay en un determinado numero de dias
	int DIAS;
	float SEGUNDOS;
	
	//entrada de datos
	cout<<" Escribe el numero de dias para calcular los segundos "<<"\n";
	cin >> DIAS;
	
	//CALCULO
	SEGUNDOS= DIAS*24*60*60;
	
	//se imprime resultados
	cout<<" En "<<DIAS<<"  dias, hay "<<SEGUNDOS<<"  segundos"<<"\n";
	cin>>DIAS;
	return 0;
}
