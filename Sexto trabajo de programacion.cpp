#include "iostream"
#include "string"

using namespace std;

int main()
{
	//problema 1.1
	//Realiza el pago y imprima el comprobante
	
	//declaracion de variables
	float PRECIOPRODUCTO, DEVOLUCION;
	float PAGO;
	
	//Entrada de datos
	
	cout<<"Escribe el costo del articulo "<<"\n";
	cin >> PRECIOPRODUCTO;
	
	cout<<"Escribe cuanto fue el pago del articulo "<<"\n";
	cin >>PAGO;
	
	//CALCULA DE DEVOLUCION
	
	DEVOLUCION=PAGO-PRECIOPRODUCTO;
	
	//SE IMPRIME RESULTADOS
	cout<<" El cambio del cliente es "<<DEVOLUCION;
	return 0;
}
