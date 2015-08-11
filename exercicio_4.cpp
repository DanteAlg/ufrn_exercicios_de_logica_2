#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int dia, mes, ano;
  string meses[12]= {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

  cout << "Escreva o dia: ";
  cin >> dia;
  cout << endl;

  cout << "Escreva o mes: ";
  cin >> mes;
  cout << endl;

  cout << "Escreva o ano: ";
  cin >> ano;
  cout << endl;

  if ((mes < 13) && (dia < 32)) {
    cout << "Sua data é: " << dia << " de " << meses[mes - 1] << " de " << ano;
  }
  else {
    cout << "Dia ou Mês invalido";
  }

  cout << endl;
}
