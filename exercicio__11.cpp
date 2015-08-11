#include <iostream>
#include <cmath>

using namespace std;

float delta(int a, int b, int c) {
  return pow(b, 2) -4*a*c;
}

float baskara(int a, int b, int c, bool positive) {
  if (positive == true) {
    return (-b + sqrt(delta(a, b, c)))/2.0*a;
  }
  else {
    return (-b - sqrt(delta(a, b, c)))/2.0*a;
  }
}

int main() {
  float a, b, c, x1, x2;

  cout << "Escreva 'a': ";
  cin >> a;
  cout << endl;

  cout << "Escreva 'b': ";
  cin >> b;
  cout << endl;

  cout << "Escreva 'c': ";
  cin >> c;
  cout << endl;

  x1 = baskara(a, b, c, true);
  x2 = baskara(a, b, c, false);

  cout << "A sua equação --> " << a << "x² " << b << "x " << c << " = 0" << endl;
  cout << "X1 = " << x1 << endl;
  cout << "X2 = " << x2 << endl;
}
