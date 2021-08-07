#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>

using namespace std;

main(){
	int n, m, d;
	cout << "Ingrese un numero entre 0 y 99: \n";
	cin >> n;
	while ((n<1)||(n>99)){
		system ("cls");
		cout << "Ingrese un numero entre 0 y 99: \n";
		cin >> n;
	}
	m = n%10;
	d = n/10;
	cout << "El numero " << n << " en romano es: ";
	switch (d){
		case 0: cout << ""; break;
		case 1: cout << "X"; break;
		case 2: cout << "XX"; break;
		case 3: cout << "XXX"; break;
		case 4: cout << "XL"; break;
		case 5: cout << "L"; break;
		case 6: cout << "LX"; break;
		case 7: cout << "LXX"; break;
		case 8: cout << "LXXX"; break;
		case 9: cout << "XC"; break;
	}
	switch (m){
		case 0: cout << "\n"; break;
		case 1: cout << "I\n"; break;
		case 2: cout << "II\n"; break;
		case 3: cout << "III\n"; break;
		case 4: cout << "IV\n"; break;
		case 5: cout << "V\n"; break;
		case 6: cout << "VI\n"; break;
		case 7: cout << "VII\n"; break;
		case 8: cout << "VIII\n"; break;
		case 9: cout << "IX\n"; break;
	}
	cout << "\n";
}

