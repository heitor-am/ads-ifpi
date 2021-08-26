#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char number[1000];

  cout << "Digite um número: ";
  cin >> number;

  cout << "\nNúmero de dígitos: " <<  strlen(number) << endl;
}