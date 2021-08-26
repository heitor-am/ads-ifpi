#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float x, n;

  cout << "Digite 2 números: ";
  cin >> x >> n;

  cout << fixed << setprecision(1);

  cout << "\nResultado das divisões:" << endl;
  do {
    x /= n;
    n--;
    cout << x << endl;
  } while (n != 2);
}