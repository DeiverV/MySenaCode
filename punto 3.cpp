#include <iostream>
#include <conio.h>
using namespace std;

float convertir(int a);

main(){
	int farenheit;
	cout<<"Este programa cambia de grados Farenheit a Celcius, ingrese los farenheit: \n";
	cin>>farenheit;
	if(farenheit == 999){
		cout<<"Finalizacion del programa, gracias por usar!";
	}else{
		cout<<convertir(farenheit)<<" Grados Celcios";
	}
}

float convertir(int a){
	return (a - 32) * 5/9;
}
