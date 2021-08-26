#include <iostream>
using namespace std;

int main() {
  int studantID, passed = 0, failed = 0;
  float grade1, grade2, grade3, average;

  do {
    cout << "Informe a matrícula: ";
    cin >> studantID;

    if (studantID) {
      cout << "Informe as 3 notas: ";
      cin >> grade1 >> grade2 >> grade3;

      average = ((2 * grade1) + (3 * grade2) + (5 * grade3)) / 10;

      if (average >= 7) {
        cout << "Aprovado!\n" << endl;
        passed++;
      } else {
        cout << "Reprovado!\n" << endl;
        failed++;
      }
    }
  } while (studantID != 0);

  cout << "\nTotal de aprovados: " << passed << endl;
  cout << "Total de reprovados: " << failed << endl;
  cout << "Total de alunos: " << passed + failed << endl;
}