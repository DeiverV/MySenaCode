#include <iostream>
#include <conio.h>

using namespace std;
main(){
	float r,e,a,total;
	int cr,ce,ca,cat,desc;
	string nombre;
	cout<<"---- COMERCIALIZADORA PONCHA ---- \n";
	cout<<"Introduzca el precio de los recogedores: ";
	cin>>r;
	cout<<"Introduzca el precio de las escobas: ";
	cin>>e;
	cout<<"Introduzca el precio de los aromatizantes: ";
	cin>>a;
	system("cls");
	cout<<"\n \n \t\t\t\t\t\tDatos del cliente\n\n";
	cout<<"Nombre: ";
	cin>>nombre;
	cout<<"Categoria del cliente(1-4): ";
	cin>>cat;
	cout<<"Cuantos Recogedores llevara el cliente (Precio unitario "<<r<<"$) \n";
	cin>>cr;
	cout<<"Cuantas Escobas de Cerda llevara el cliente (Precio unitario "<<e<<"$) \n";
	cin>>ce;
	cout<<"Cuantos Aromatizantes llevara el cliente (Precio unitario "<<a<<"$) \n";
	cin>>ca;
	system("cls");
	total = (r*cr)+(e*ce)+(a*ca);
	cout<<"\n \n \t\t\t\t\t\tFactura Final\n\n";
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Subtotal: "<<total<<endl;
		switch(cat){
		case 1:
			desc = 5;
			total -= total * 0.05;
			break;
		case 2:
			desc = 8;
			total -= total * 0.08;
			break;
		case 3:
			desc = 12;
			total -= total * 0.12;
			break;
		case 4:
			desc = 15;
			total -= total * 0.15;
			break;
		default:
			desc = 0;
			total = total;
			break;
	}
	cout<<"Descuento: "<<desc<<"%\n";
	cout<<"Total a pagar: "<<total<<"%\n";
}
