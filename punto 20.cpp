#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int ano,edad,anoA;
	cout<<"Este programa define tu edad "<<endl;
	cout<<"Ingrese el a�o en el que nacio: ";
	cin>>ano;
	cout<<"Ingrese el a�o actual: ";
	cin>>anoA;
	edad=anoA-ano;
	cout<<"Su edad es: "<<edad<<endl;
	
	getch();
}
