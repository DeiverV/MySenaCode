#include <iostream>
#include <cstdlib>
using namespace std;
main()
	{
		int n1,n2;
		cout<<" =======Sumador de numeros mayores de numeros de 20========"<<endl;
		cout<<" =======Digita un numero para agregarle 10 (mayor de 20)========"<<endl;
		cin>>n1;
		cout<<" =======El resultado total de esa suma es========"<<endl;
		if(n1>20)
		{
			n2=n1+10;
			cout<< " El resultado de tu suma es de "<< n2 <<endl;
		}
		else
		{
			cout<<" =======El numero que digitaste no es mayor que 20========"<<endl;
		}
		
	
	
	}
