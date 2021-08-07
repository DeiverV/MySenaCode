#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n,f,fa,fc;
	cout<<"meta un numero para sacarle factorial: ";
	cin>>n;
	f=1;
	fa=1;
	while (f<n){
		fa=fa*(1+f);
		f=f+1;
	}
	cout<<"El factorial de "<<n<<" es: "<<fa<<endl;
}
