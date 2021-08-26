#include <iostream>
using namespace std;

int calculateMMC(int a, int b) {
    int mmc, aux;

    for (int i = 2; i <= b; i++) {
        aux = a * i;
        if ((aux % b) == 0) {
            mmc = aux;
            break;
        }
    }
    return mmc;
}

int main() {
  int n1, n2;

  cout << "Digite 2 números: ";
  cin >> n1 >> n2;

  cout << "\nMMC: " << calculateMMC(n1, n2) << endl;
}