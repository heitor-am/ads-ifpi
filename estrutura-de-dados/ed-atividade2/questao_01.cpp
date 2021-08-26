#include <iostream>
using namespace std;

int main() {
  int number;

  do {
    cout << "Digite o número: ";
    cin >> number;

    if (number) {
      cout << "Divisores: ";
      for (int i = 1; i < number; i++) {
        if (number % i == 0) {
          cout << i << ", ";
        }
      }
      cout << number << endl;
    }

  } while (number != 0);
}