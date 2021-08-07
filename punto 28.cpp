#include <iostream>
#include <conio.h>
using namespace std;
main()
	{
		float ttp,tth,ttm,tth1,ttm1,ttn,ttn1;
		cout<<" =====Halla el porcentaje de las personas!!======="<<endl;
		cout<<" Cuantas personas mujeres y hombres habran (coloca la cantidad total de personas a continuacion)"<<endl;
		cin>>ttp;
		cout<<" Cuantos hombres habran en total? "<<endl;
		cin>>tth;
		cout<<" Cuantas mujeres habran en total? "<<endl;
		cin>>ttm;
		cout<<" Cuantos niños habran en total? "<<endl;
		cin>>ttn;
		cout<<" =====Gracias por colocar los totales, te daremos los resultados a continuacion!================== "<<endl;
		tth1=(tth*100)/ttp;
		ttm1=(ttm*100)/ttp;
		ttn1=(ttn*100)/ttp;
		cout<<" El porcentaje de hombres en total es del "<< tth1 << " porciento "<<endl;
		cout<<" El porcentaje de mujeres en total es del "<< ttm1 << " porciento "<<endl;
		cout<<" El porcentaje de niños en total es del "<< ttn1 << " porciento "<<endl;
					
	}
