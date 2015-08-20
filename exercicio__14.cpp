#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float numero;

  cout << "Digite o numero decimal: ";
  cin >> numero;
  cout << endl;

  int base = numero;

  if (numero - base <= 0.5) {
    cout << base;
  }
  else {
    cout << base + 1;
  }

  cout << endl;
}
