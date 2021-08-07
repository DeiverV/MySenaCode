#include <iostream>

using namespace std;
bool primo(int numero);

int main() {
  int numero;
	cout << "Este programa define si un numero es primo:\n";
	cin >> numero;
  if (primo(numero)) {
	cout<<"El es primo";
  }else{
    cout<< "El numero NO es primo";
  }
}

bool primo(int numero) {
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  return true;
}
