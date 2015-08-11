#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int a, b, c, di_menor;

  cout << "Escreva 'a': ";
  cin >> a;
  cout << endl;

  cout << "Escreva 'b': ";
  cin >> b;
  cout << endl;

  cout << "Escreva 'c': ";
  cin >> c;
  cout << endl;

  if ((a <= b) && (a <= c)) {
    di_menor = a;
  }
  else if (b <= c) {
    di_menor = b;
  }
  else {
    di_menor = c;
  }

  cout << "O menor número dentre os escolhidos foi " << di_menor << endl;
}
