#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int mes;
	cout<<"Ingrese al mes que quiere ver su numero de dias (1-12): ";
	cin>>mes;
	if (mes >= 1 && mes <= 12){
		switch(mes){
			case 1:
				cout<<"El mes es Enero con 31 días";
				break;
			case 2:
				cout<<"El mes es Febrero con 28 días";
				break;
			case 3:
				cout<<"El mes es Marzo con 31 días";
				break;
			case 4:
				cout<<"El mes es Abril con 30 días";
				break;
			case 5:
				cout<<"El mes es Mayo con 31 días";
				break;
			case 6:
				cout<<"El mes es Junio con 30 días";
				break;
			case 7:
				cout<<"El mes es Julio con 31 días";
				break;
			case 8:
				cout<<"El mes es Agosto con 31 días";
				break;
			case 9:
				cout<<"El mes es Septiembre con 30 días";
				break;
			case 10:
				cout<<"El mes es Octubre con 31 días";
				break;
			case 11:
				cout<<"El mes es Noviembre con 30 días";
				break;
			case 12:
				cout<<"El mes es Diciembre con 31 días";
				break;
		}
	}else{
		cout<<"El mes ingresado no es correcto!!";
	}
}
