#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float altura, peso, imc;

  cout << "Digite sua altura: ";
  cin >> altura;
  cout << endl;

  cout << "Digite seu peso: ";
  cin >> peso;
  cout << endl;

  imc = peso/pow(altura, 2);

  if (imc >= 30.0) {
    cout << "Você esta obeso... Vamo parar de comer cara...";
  }
  else if (imc >= 25.0) {
    cout << "Você é tem sobrepeso... Gordinho fortinho";
  }
  else if (imc >= 18.5) {
    cout << "Peso normal! Mas ainda esta magro pra sua avó";
  }
  else {
    cout << "Abaixo do peso... Ta precisando comer hein...";
  }

  cout << endl;
}
