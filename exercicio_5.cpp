#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float total, consumo;

  cout << "Escreva seu consumo em metros cúbicos: ";
  cin >> consumo;
  cout << endl;

  if (consumo <= 20) {
    total = consumo*8.5;
  }
  else {
    total = consumo*11.0;
  }

  cout << "O total da sua conta é R$" << total << endl;
}
