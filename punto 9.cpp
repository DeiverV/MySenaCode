#include <iostream>
#include <conio.h>

using namespace std;
main(){
	string bi;
	int mes,ano;
	string meses[13] = {",","Enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
	cout<<"Bienvenido al calendario DE LA EMPRESA \n";
	cout<<"Cual es el a�o actual: ";
	cin>>ano;
	if(ano%4 == 0 || (ano%400 == 0|| ano%100 == 0)){
		bi = "Biciesto";
	}else{
		bi = "No biciesto";
	}
	cout<<"\nDigite el mes que desea visualizar: ";
	cin>>mes;
	
	if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
		cout<<"El mes "<<mes<<" ("<<meses[mes]<<") Tiene \n30 d�as \nEl a�o "<<ano<<" es "<<bi;
	}else if(mes == 2){
		if(bi == "Biciesto"){
			cout<<"El mes "<<mes<<" ("<<meses[mes]<<") Tiene \n29 d�as \nEl a�o "<<ano<<" es "<<bi;
		}else{
			cout<<"El mes "<<mes<<" ("<<meses[mes]<<") Tiene \n28 d�as \nEl a�o "<<ano<<" es "<<bi;
		}
	}else{
		cout<<"El mes "<<mes<<" ("<<meses[mes]<<") Tiene \n31 d�as \nEl a�o "<<ano<<" es "<<bi;
	}
}
