#include <iostream>
#include <conio.h>
using namespace std;
float primero, segundo, resultado1,resultado2,resultado3,resultado4;
int main()
{
	cout << "ESTE PROGRAMA LE HACE LAS OPERACIONES BASICAS A DOS NUMEROS\n ";
	cout << "Ingrese el primer numero: ";	
	cin >> primero;	
	cout << "Ingrese el segundo numero: ";	
	cin >> segundo;	
	    resultado1 = primero+segundo;
	    cout << "La suma da como resultado "<< resultado1<<endl;
		
	    resultado2 = primero-segundo;
	    cout << "La resta da como resultado "<< resultado2<<endl;	
	
	    resultado3 = primero*segundo;
	    cout << "La multiplicacion da como resultado "<< resultado3<<endl;
		
	    resultado4 = primero/segundo;
	    cout << "La division da como resultado "<< resultado4<<endl;					
}
