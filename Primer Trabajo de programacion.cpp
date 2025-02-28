#include "iostream"
#include<conio.h>
using namespace std;
int main()
{
	int A,B,C,D;
 char oprimir_tecla_para_terminar;
	//Mensaje de bienvenida
    cout << "Hola! Mi nombre es Jorge Daniel Perez Gil y Este es el programa 1.6" <<endl;
    cout << "Escribe el primer valor A " <<endl;
    cin>>A;
    cout << "Escribe el primer valor B " <<endl;
    cin>>B;
    cout << "Escribe el primer valor C " <<endl;
    cin>>C;
    cout << "Escribe el primer valor D " <<endl;
    cin>>D;
    cout << "Los valores en orden inverso son :" <<endl;
    cout<<"El primero es: "<<D<<"El segundo es "<<C<<"El tercero es "<<B<<"El cuarto es"<<A<<endl;
    cout<<D<<"--"<<C<<"---"<<B<<"---"<<A<<endl;
oprimir_tecla_para_terminar=getch();
return 0;
}
