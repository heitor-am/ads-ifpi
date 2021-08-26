#include <iostream>
using namespace std;

int calculateMDC(int a, int b) {
  int mdc = 1, smallest;

  smallest = (a < b) ? a : b;

  for (int i = smallest; i >= 1; i--) {
    if ((a % i == 0) && (b % i == 0)) {
      mdc = i;
      break;
    }
  }
  return mdc;
}

int main() {
  int n1, n2;

  cout << "Digite 2 números: ";
  cin >> n1 >> n2;

  cout << "\nMDC: " << calculateMDC(n1, n2) << endl;
}