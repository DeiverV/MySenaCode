#include <iostream>
#include <conio.h>

using namespace std;

main(){
	float r,b,s,total;
	int cr,cb,cs,pay;
	cout<<"FERRETERIA SENA!! \n";
	cout<<"Introduzca el precio de los rodillos: ";
	cin>>r;
	cout<<"Introduzca el precio de las brochas de cerda: ";
	cin>>b;
	cout<<"Introduzca el precio de los selladores: ";
	cin>>s;
	r -= r*0.15;
	b -= b*0.20;
	cout<<"¿Cuantos Rodillos llevara el cliente? Precio unitario("<<r<<"$) \n";
	cin>>cr;
	cout<<"¿Cuantos Brochas de Cerda llevara el cliente? Precio unitario("<<b<<"$) \n";
	cin>>cb;
	cout<<"¿Cuantos Selladores llevara el cliente? Precio unitario("<<s<<"$) \n";
	cin>>cs;
	cout<<"¿Pagara en tarjeta o en efectivo? \n 1: Tarjeta \n 2: Efectivo \nSeleccion: ";
	cin>>pay;
	while(pay < 1 || pay > 2){
		cout<<"La opcion no es correcta, porfavor introduzca un numero entre 1 y 2 (1)Tarjeta (2)Efectivo \n";
		cin>>pay;
	}
	total =(r*cr)+(b*cb)+(s*cs);
	if(pay == 2){
		total -= total*7/100;
		cout<<"El monto total a pagar es: "<<total<<"$\n\n";
	}else{
		cout<<"El monto total a pagar es: "<<total<<"$\n\n";
	}
	cout<<"\n\n \t\t\t\t\t\t Factura \n\t\t\t\t\tRodillos * "<<cr<<"Unds: "<<r*cr<<"$\n"<<"\t\t\t\t\tBrochas * "<<cb<<"Unds: "<<b*cb<<"$\n"<<"\t\t\t\t\tSelladores * "<<cs<<"Unds: "<<s*cs<<"$\n"<<"\t\t\t\t\tTotal a pagar: "<<total<<"$";
}
