#include "iostream"
using namespace std;

int main()
{
	//problema 1.4 construir un diagrama de flujo
	//cada galon tiene 3.785 litros, y el precio del litro es 8.20
	//declaracion de variables
	
	float GALONES, TOTAL;
	const float GALON=3.785, PRECIOLITRO=8.20;
	
	//Entrade de datos
	
	cout<<" Escribe cantidad de galos comprados "<<"\n";
	cin >> GALONES;
	
	//CALCULO
	TOTAL=GALONES*GALON*PRECIOLITRO;
	
	//SE IMPRIME RESULTADOS
	cout<<"Hay que cobrar al cliente por "<<GALONES<<" galones "<<"debe pagar "<<TOTAL<<" pesos"<"\n";
	return 0;
}
