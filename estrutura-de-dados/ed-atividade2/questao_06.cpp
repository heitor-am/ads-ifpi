#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float oldSalary, newSalary, sumOfCurrentWages = 0, sumOfOldWages = 0;

  cout << fixed << setprecision(2);

  do {
    cout << "Informe o salário: R$";
    cin >> oldSalary;

    if (oldSalary > 0) {
      if (oldSalary < 3000) {
        newSalary = oldSalary * 1.25;
      } else if (oldSalary >= 3000 && oldSalary < 6000) {
        newSalary = oldSalary * 1.20;
      } else if (oldSalary >= 6000 && oldSalary < 10000) {
        newSalary = oldSalary * 1.15;
      } else {
        newSalary = oldSalary * 1.10;
      }

      sumOfCurrentWages += newSalary;
      sumOfOldWages += oldSalary;

      cout << "Novo salário: R$" << newSalary << endl;
    }
  } while (oldSalary != 0);

  cout << "\nSoma dos salários antigos: R$" << sumOfOldWages << endl;
  cout << "Soma dos salários novos: R$" << sumOfCurrentWages << endl;
  cout << "Diferença: R$" << sumOfCurrentWages - sumOfOldWages << endl;
}