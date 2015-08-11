#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int numero;

  cout << "Escreva um número: ";
  cin >> numero;
  cout << endl;

  if ((numero % 4 == 0) && (numero % 5 == 0) && (numero % 3 == 0)) {
    cout << "Seu número é divisível por 4, 5 e 3!";
  }
  else {
    cout << "Número não é divisível por 4, 5, 3 ao mesmo tempo.. :/";
  }

  cout << endl;
}
