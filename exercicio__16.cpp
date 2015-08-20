#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int a, b, c;

  cout << "Digite os lados do triangulo: ";
  cin >> a >> b >> c;
  cout << endl;

  if ((a + b > c) && (b + c > a) && (a + c > b)) {
    if ((a == b) && (a == c)) {
      cout << "Triângulo equilátero";
    }
    else if ((a == b) || (a == c) || (b == c)) {
      cout << "Triângulo isóceles";
    }
    else {
      cout << "Triângulo escaleno";
    }
  }
  else {
    cout << "Não é um triangulo";
  }

  cout << endl;
}
