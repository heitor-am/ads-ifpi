#include <iostream>
using namespace std;

#define n 5

int main() {
  int a[n], b[n], c[n * 2];

  cout << "### 1° VETOR ### " << endl;
  for (int i = 0; i < n; i++) {
    cout << "Digite o " << i + 1 << "° valor: ";
    cin >> a[i];
  }

  cout << "\n### 2° VETOR ### " << endl;
  for (int i = 0; i < n; i++) {
    cout << "Digite o " << i + 1 << "° valor: ";
    cin >> b[i];
  }

  for (int i = 0; i < n; i++) {
    c[i] = a[i];
    c[i + n] = b[i];
  }

  cout << "\nResultado:";
  for (int i = 0; i < (n * 2); i++) {
    cout << " " << c[i];
  }
  cout << endl;
}