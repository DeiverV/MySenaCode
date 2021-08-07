#include <iostream>
#include <conio.h>
using namespace std;
main()
	{
		float ropa,gafas,comida,iva,total,ivaropa,ivagafas,ivacomida;
		string eleccion;
		cout<<" ======BIENVENIDO A SUPERMERCADO MUZU======"<<endl;
		cout<<" Que deseas comprar? \n";
		cout<<" ------Ropa = $5000 \n";
		cout<<" ------Gafas = $30000 \n";
		cout<<" ------Comida = $15000 \n";
		ropa=5000;
		ivaropa=(ropa*16)/100;
		gafas=30000;
		ivagafas=(gafas*16)/100;
		comida=15000;
		ivacomida=(comida*16)/100;
		cout<<" ====Cual de estos productor quisiera adquerir?=====  \n";
		cin>>eleccion;
			if (eleccion=="ropa")
			{
				cout<<" El valor total sin iva incluido es de "<< ropa << " pesos  \n";
				cout<<" El valor total del iva  es de "<< ivaropa << " pesos  \n";
				cout<<" El valor total con iva incluido es de "<< (ivaropa+ropa) << " pesos  \n";
				
			}
			if (eleccion=="gafas")
			{
				cout<<" El valor total sin iva incluido es de "<< gafas << " pesos  \n";
				cout<<" El valor total del iva  es de "<< ivagafas << " pesos  \n";
				cout<<" El valor total con iva incluido es de "<< (gafas+ivagafas) << " pesos  \n";
				
			}		
			if (eleccion=="comida")
			{
				cout<<" El valor total sin iva incluido es de "<< ropa << " pesos  \n";
				cout<<" El valor total del iva  es de "<< ivaropa << " pesos  \n";
				cout<<" El valor total con iva incluido es de "<< (ivacomida+comida) << " pesos  \n";
				
			}
					
	}
