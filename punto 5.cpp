#include <iostream>
#include <conio.h>

using namespace std;

main(){
	float n1,n2;
	cout<<"Introduzca el dividendo: "<<endl;
	cin>>n1;
	cout<<"Introduzca el divisor: "<<endl;
	cin>>n2;
	if(n2 == 0){
		cout<<"Error ZeroDivision";
	}else{
		cout<<"\n \nEl resultado de la division es: "<<n1 / n2;
	}
}
