#include <iostream>
#include <conio.h>
using namespace std;
main(){
	
	int numero,b,c,i,r;
	
	cout<<"Digite el numero mayor a uno hasta el cual se quiere factorizar: ";
	cin>>numero;
	for (i=1;i<=numero;i++){
		for (b=1;b<=i;b++){
			for (c=1;c<=b;c++){
				if (c==1){
					r=c*c;
				}
				else{
					r=r*c;
				}
				if(c==b){
					cout<<r<<endl;
				}
			}
		}
	}
	
}
