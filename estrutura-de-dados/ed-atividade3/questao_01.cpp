#include <iostream>
using namespace std;

#define n 5

int main() {
  int a[n], b[n], aux = n - 1;

  for (int i = 0; i < n; i++) {
    cout << "Digite o " << i + 1 << "° valor: ";
    cin >> a[i];
    b[aux--] = a[i];
  }

  cout << "\nVetor invertido: ";
  for (int i = 0; i < n; i++) {
    cout << b[i] << " ";
  }
  cout << endl;
}