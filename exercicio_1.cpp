#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float numero;

  cout << "Escreva um número qualquer: ";
  cin >> numero;
  cout << endl;

  if (numero < 0) {
    cout << "Número negativo... Seu quadrado é: " << pow(numero, 2);
  }
  else {
    cout << "Número positivo... Sua raiz é: " << sqrt(numero);
  }

  cout << endl;
}
