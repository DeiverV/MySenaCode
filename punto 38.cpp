#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int n,i;
	cout<<" Bienvenido a la cuenta par regresiva, digita un numero menor a 50 como meta final para iniciar el conteo"<<endl;
	cin>>n;
	i=50;
	if (n<50)
	{
		while(n<i)
		{
			cout<< i-2 <<endl;
			i=i-2;
		}
		
	}
	else
	{
		cout<< "El numero ingresado es mayor a 50 :("<<endl;
	}
}
