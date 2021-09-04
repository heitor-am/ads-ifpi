#include <iostream>
using namespace std;

int main() {
  int n, array[n] = {0, 1};

  cout << "Informe a quantidade de termos: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    array[i + 2] = array[i] + array[i + 1];
  }

  cout << "\nResultado:";
  for (int i = 0; i < n; i++) {
    cout << " " << array[i];
  }
  cout << endl;
}