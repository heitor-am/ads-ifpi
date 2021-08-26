#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char name1[20], name2[20];

  cout << "Digite o 1° nome: ";
  cin >> name1;
  cout << "Digite o 2° nome: ";
  cin >> name2;

  if (strcmp(name1, name2) == 0) {
    cout << "\nSão iguais!" << endl;
  } else {
    cout << "\nSão diferentes!" << endl;
  }
}