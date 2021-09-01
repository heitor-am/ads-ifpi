#include <iostream>
using namespace std;

#define n 5

int main() {
  int a[n], b[n];

  for (int i = 0; i < n; i++) {
    cout << "Digite o " << i + 1 << "° valor: ";
    cin >> a[i];

    if (a[i] % 2 == 0) {
      b[i] = 0;
    } else {
      b[i] = 1;
    }
  }

  cout << "\nVetor B: ";
  for (int i = 0; i < n; i++) {
    cout << b[i] << " ";
  }
  cout << endl;
}