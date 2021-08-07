#include <iostream>
#include <conio.h>
using namespace std;
main(){
	
	int n,a,b,c,i;
	
	cout<<"--- SERIE FIBONACCI ---\n\n";
	cout<<"Ingrese el numero de la cantidad de veces que desea que haga la serie: ";
	cin>>n;
	a=0;
	b=1;
	for (i=1;i<=n;i++){
		cout<<a<<endl;
		c=a+b;
		a=b;
		b=c;
	}
}
