#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int ano;

  cout << "Digite o ano: ";
  cin >> ano;
  cout << endl;

  if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)) {
    cout << "Ano bissexto!";
  }
  else {
    cout << "Ano não é bissexto";
  }

  cout << endl;
}
