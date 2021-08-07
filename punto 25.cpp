#include <iostream>
#include <conio.h>
using namespace std;
main()
	{
		float articulo,iva;
		cout<<" \t\t SUPERMERCADO SENA "<<endl;
		cout<<" Ingrese el valor que quiere calcular el iva del 16%: ";
		cin>>articulo;
		iva=(articulo*16)/100;

		cout<<" El valor total sin iva incluido es de "<< articulo << " pesos  \n";
		cout<<" El valor total del iva  es de "<< iva << " pesos  \n";
		cout<<" El valor total con iva incluido es de "<< (iva+articulo) << " pesos  \n";
		
					
	}
