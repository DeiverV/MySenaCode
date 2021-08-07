#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int diaN,mesN,anoN,anoA,mesA,diaA;
	float livetime;
	cout<<"Este programa calcula los dias que ha vivido "<<endl;
	cout<<"Digite el dia de su nacimiento (numero): ";
	cin>>diaN;
	cout<<"Digite el mes de su nacimiento (numero): ";
	cin>>mesN;
	cout<<"Digite su año de nacimiento: ";
	cin>>anoN;
	cout<<"Digite la fecha actual (DIA/MES/AÑO):\n";
	cin>>diaA;
	cin>>mesA;
	cin>>anoA;
	livetime=(365*(anoA-anoN)+(31*(mesA-mesN))+(diaA-diaN));
	cout<<"La cantidad de dias que has vivido es: "<<livetime<<" dias"<<endl;
	
	getch();
}
