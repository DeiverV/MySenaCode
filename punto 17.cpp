#include <iostream>
#include <conio.h>
using namespace std;
main(){
	float b,h,p;
	cout<<"Este programa es para saber el perimetro de un rectangulo\n";
	cout<<"Digite la base del rectangulo: ";
	cin>>b;
	cout<<"Digite la altura del rectangulo: ";
	cin>>h;
	p=(2*b)+(2*h);
	cout<<"El perimetro del rectangulo es: "<<p<<endl;
	
	getch();
}
