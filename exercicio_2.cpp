#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int numero;

  cout << "Escreva um número que pode ser divisível por 6: ";
  cin >> numero;
  cout << endl;

  if (numero % 6 == 0) {
    cout << "Número divisível por 6!!";
  }
  else {
    cout << "Número não é divisível por 6 :/, aprenda a dividir cara...";
  }

  cout << endl;
}
