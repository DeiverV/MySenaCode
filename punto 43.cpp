#include <iostream>
#include <conio.h>
using namespace std;
main(){
	 
	int n,r,i;
	
	cout<<"--- INGRESE UN NUMERO QUE SERVIRA DE POTENCIA DE POTENCIA AL NUMERO 2: ";
	cin>>n;
	i=1;
	r=2;
	while (i<n){
		r=r*2;
		i=i+1;
	}
	cout<<"El resultado de 2 elevado a la "<<n<<" es: "<<r;
}
