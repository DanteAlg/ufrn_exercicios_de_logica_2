#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float deposito;

  cout << "Escreva o valor de depósito: ";
  cin >> deposito;
  cout << endl;

  if (deposito <= 1000.00) {
    cout << "valor recebido com taxa de 4%: R$ " << deposito*4/100;
  }
  else if (deposito <= 5000.00) {
    cout << "valor recebido com taxa de 4,5%: R$ " << deposito*4.5/100;
  }
  else {
    cout << "valor recebido com taxa de 5%: R$ " << deposito*5/100;
  }

  cout << endl;
}
