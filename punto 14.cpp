#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;
main(){
	string dias[5] = {"Lunes","Martes","Miercoles","Jueves","Viernes"};
	int hI,hF,hFI,hFF,horasO[5],horasE[5];
	cout<<"Bienvenido a la calculadora de Salarios! \n";
	cout<<"Porfavor ingrese la hora de entrada de su trabajo en formato 24hrs: ";
	cin>>hFI;
	cout<<"Porfavor ingrese la hora de Finalizacion de su trabajo en formato 24hrs: ";
	cin>>hFF;
	system("cls");
	cout<<"\n \n \t\t\t\t\t\tRegistro de Horas (L-V)\n\n";	
	for(int i = 0; i < 5;i++)
	{
		cout<<"Hora de inicio de trabajo el dia "<<dias[i]<<": ";
		cin>>hI;
		cout<<"Hora de Finalizacion de trabajo el dia "<<dias[i]<<": ";
		cin>>hF;
		if((hFF - hFI)<(hF - hI)){
			horasO[i] = hFF - hFI;
			horasE[i] = (hF - hI) - (hFF - hFI);
		}else{
			horasO[i] = hF - hI;
			horasE[i] = 0;
		}
		cout<<"Las horas de oficina el dia "<<dias[i]<<" "<<horasO[i]<<endl;
		cout<<"Las horas extra el dia "<<dias[i]<<" "<<horasE[i]<<endl;
	}
	int hOF=0,hEF=0;
	float price;
	for(int i = 0; i < 5; i++)
	{
		hOF += horasO[i];
		hEF += horasE[i];
	}
	system("cls");
	cout<<"\t\t\t\t\t\t Fase Final y Facturacion \n\n";
	cout<<"Precio de la hora: ";
	cin>>price;
	system("cls");
	for(int i = 0; i < 21; i++)
	{
		string fa = "\t\t\t\t\t\tF A C T U R A ";
		cout<<fa[i];
		Sleep(80);
	}
	cout<<"\n\nHoras Extras: "<<hEF<<"hrs // Valor total horas extras: "<<hEF * (price + (price * 0.75))<<"$"<<endl<<endl;
	cout<<"Horas normales: "<<hOF<<"hrs // Valor total horas Oficina: "<<hOF * price<<"$"<<endl<<endl;
	cout<<"Total Trabajado: "<<hEF + hOF<<"Hrs"<<endl;
	hOF = hOF * price;
	hEF = hEF * (price + (price * 0.75));
	cout<<"Total Ingresos: "<<hOF + hEF<<"$";
	if(hOF > hEF)
	{
		cout<<"\n\nLos ingresos del trabajo en horario normal fueron mayores \n";
	}else
	{
		cout<<"\n\nLos ingresos del trabajo en horas extras fueron mayores \n";
	}
}
