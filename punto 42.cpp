#include <iostream>
#include <conio.h>
using namespace std;
main(){
	
	int a,b,m,mn,i;
	
	cout<<"Este programa encuentra el mayor y el menor de 20 numeros ingresados \n\n";
	for (i=1;i<=20;i++){
		cout<<"Ingrese un numero, vas en el ingreso #"<<i<<endl;
		cin>>b;
		if (i==0){
			mn=b;
			m=b;
		}
		else{
			if (b<mn){
				mn=b;
			}
			if(b>m){
				m=b;
			}
		}
	}
	cout<<"El numero menor es: "<<mn<<endl;
	cout<<"El numero mayor es: "<<m<<endl;
}
