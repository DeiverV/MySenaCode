#include <iostream>
#include <conio.h>

using namespace std;
main(){
	int n1,n2,op;
	cout<<"\t\t\t\t\t CALCULADORA DEL SENA \n\n";
	cout<<"Ingrese el primer numero a operar: ";
	cin>>n1;
	cout<<"Ingrese el segundo numero a operar: ";
	cin>>n2;
	cout<<"----------Menu de operaciones\n\n";
	cout<<"\t\t\t\t\t\t1: Suma\n";
	cout<<"\t\t\t\t\t\t2: Resta\n";
	cout<<"\t\t\t\t\t\t3: Multplicacion\n";
	cout<<"\t\t\t\t\t\t4: Division\n\n";
	cout<<"Elija una opreacion del menu para ejecutar: ";
	cin>>op;
	switch(op){
		case 1:
			cout<<"Resultado de la operacion "<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
			break;
		case 2:
			cout<<"Resultado de la operacion "<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
			break;
		case 3:
			cout<<"Resultado de la operacion "<<n1<<" x "<<n2<<" = "<<n1*n2<<endl;
			break;
		case 4:
			cout<<"Resultado de la operacion "<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
			break;
		default:
			cout<<"Operacion incorrecta! "<<endl;
			break;
	}
	
}
