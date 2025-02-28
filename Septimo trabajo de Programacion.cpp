#include "iostream"
#include "iostream"
using namespace std;

int main()
{
	//Problemas 1.3
	//Calcular el peso y libras
	//Escriba el nombre del dinosaurio, peso expresado en kilogramos y la longitud en metros
	
	//Declaracion de variables
	string NOMBRE;
	float PESOLIBRAS, LONGITUDENPIES;
	float PESOENKILOS, LONGITUDENMETROS;
	
	//Entrada de datos
	
	cout <<" Escribe el nombre del dinosaurio "<<"\n";
	cin >> NOMBRE;
	
	cout<<"Escribe el peso del dinosaurio en libras "<<"\n";
	cin>>PESOLIBRAS;
	
	cout<<"Escribe la longitud del dinosaurio en pies "<<"\n";
	cin>>LONGITUDENPIES;
	
	//CALCULO
	PESOENKILOS=PESOLIBRAS*1000;
	LONGITUDENMETROS=LONGITUDENPIES*0.3047;
	
	//SE IMPRIME RESULTADOS
	cout<<" El peso en kilos del dinosaurio "<<NOMBRE<< "es "<<PESOENKILOS<<" y la longitud es "<<LONGITUDENMETROS<<"\n";
	
}
