#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
main(){
	int opcion;
	string numeros[10] = {"uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve","diez"};
	cout<<"Este programa cuenta del 1 al 10 en español, digite 1 para empezar o 2 para salir: ";
	cin>>opcion;
	switch(opcion){
		case 1:
			cout<<"\n";
			for(int i = 0; i < 10; i++){
				cout<<numeros[i]<<endl;
				Sleep(80);
			}
			break;
		case 2:
			cout<<"Eligio salir de la aplicacion "<<endl;
			break;
	}
}
