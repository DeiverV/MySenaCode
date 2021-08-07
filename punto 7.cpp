#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int cl,t;
	for(int i = 1; i <= 3; i++){
		cout<<"Ingrese la nota numero "<<i<<": ";
		cin>>t;
		if(t > cl){
			cl = t;
		}
	}
	cout<<"La calificación más alta es: "<<cl;
}
