#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float numero;

  cout << "Escreva um número qualquer: ";
  cin >> numero;
  cout << endl;

  if (numero == 20) {
    cout << "Seu número é igual a 20!!!";
  }
  else if (numero > 20) {
    cout << "Seu número é maior que 20!!!";
  }
  else {
    cout << "Número menor que 20!!";
  }

  cout << endl;
}
