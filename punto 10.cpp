#include <iostream>
#include <conio.h>

using namespace std;
main(){
	int opcion;
	cout<<"Digite el dia al que quiere ingresar (Digitos 1-7): ";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"El dia de hoy es Lunes";
			break;
		case 2:
			cout<<"El dia de hoy es Martes";
			break;
		case 3:
			cout<<"El dia de hoy es Miercoles";
			break;
		case 4:
			cout<<"El dia de hoy es Jueves";
			break;
		case 5:
			cout<<"El dia de hoy es Viernes";
			break;
		case 6:
			cout<<"El dia de hoy es Sabado";
			break;
		case 7:
			cout<<"El dia de hoy es Domingo";
			break;
		default:
			cout<<"Ingresaste un numero incorrecto";
			break;
	}
}
