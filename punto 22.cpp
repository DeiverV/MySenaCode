#include <iostream>
#include <conio.h>
using namespace std;
main(){
	string telefono,nombre,direccion;
	cout<<"       Guarde sus datos personales en este programa (Nombre,Direccion,Telefono)  \n\n  ";
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	cout<<"Ingrese su direccion: ";
	cin>>direccion;
	cout<<"Ingrese su numero telefonico: ";
	cin>>telefono;
	cout<<"\n\nSus datos personales son: Nombre: "<<nombre<<" Direccion: "<<direccion<<" Numero de telefono: "<<telefono<<endl;
	
	getch();
}
