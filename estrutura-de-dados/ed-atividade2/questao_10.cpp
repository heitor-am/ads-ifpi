#include <iostream>
#include <string.h>
#include <stdbool.h>
using namespace std;

int main() {
  char name1[20], name2[20], isEqual = true;

  cout << "Digite o 1° nome: ";
  cin >> name1;
  cout << "Digite o 2° nome: ";
  cin >> name2;
  
  if (strlen(name1) == strlen(name2)) {
    for (int i = 0; i < strlen(name1); i++) {
      if (name1[i] != name2[i]) isEqual = false;
    }
  } else {
    isEqual = false;
  }

  if (isEqual) {
    cout << "\nSão iguais!" << endl;
  } else {
    cout << "\nSão diferentes!" << endl;
  }
}