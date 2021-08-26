#include <iostream>
using namespace std;

int main() {
  string name1, name2;

  cout << "Digite o 1° nome: ";
  cin >> name1;
  cout << "Digite o 2° nome: ";
  cin >> name2;

  if (name1 == name2) {
    cout << "\nSão iguais!" << endl;
  } else {
    cout << "\nSão diferentes!" << endl;
  }
}