#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a, b, c;

  cout << "Escreva 'a': ";
  cin >> a;
  cout << endl;

  cout << "Escreva 'b': ";
  cin >> b;
  cout << endl;

  cout << "Escreva 'c': ";
  cin >> c;
  cout << endl;

  if (((c >= a) && (c <= b)) || ((c >= b) && (c <= a))) {
    cout << "O valor de 'c' se encontra dentro do intervalo fechado de 'a' e 'b'";
  }
  else {
    cout << "O valor de 'c' não se econtra entre 'a' e 'b'";
  }

  cout << endl;
}
