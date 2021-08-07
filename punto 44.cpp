#include <iostream>
#include <conio.h>
using namespace std;

main ()
{	
	int n,x,ans,i;
    cout << "Ingrese el dato de la variable n" <<endl;
    cin >> n;
    cout << "Ingrese el dato de la variable x" <<endl;
    cin >> x;
    ans=1;
    for (i=1 ; i<=n; i++)
    {
        ans=ans*x;
    }
    cout << "El resultado de "<<x<<" elevado a la "<<n<<" es: " <<ans<<endl;
}
