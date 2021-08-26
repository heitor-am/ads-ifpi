#include <iostream>
#include <iomanip>
using namespace std;

float percentageOf(int value, int total) {
  return (float) value / total * 100;
}

int main() {
  int choice, serra, dilma, ciro, undecided, nullOrBlank, total;
  total = nullOrBlank = undecided = serra = dilma = ciro = 0;

  do {
    cout << "### PESQUISA DE OPINIÃO ###" << endl;
    cout << "[45] Serra" << endl;
    cout << "[13] Dilma" << endl;
    cout << "[23] Ciro Gomes" << endl;
    cout << "[99] Não se decidiu" << endl;
    cout << "[0] Nulo/Branco" << endl;

    cout << "Sua opinião: ";
    cin >> choice;

    if (choice != -1) {
      switch (choice) {
        case 45:
          serra++;
          break;
        case 13:
          dilma++;
          break;
        case 23:
          ciro++;
          break;
        case 99:
          undecided++;
          break;
        case 0:
          nullOrBlank++;
          break;
        default:
          cout << "Escolha inválida!" << endl;
          break;
      }

      total++;
      cout << endl;
    }
  } while (choice != -1);

  cout << fixed << setprecision(1);

  cout << "\n### Resultado ###" << endl;
  cout << "Serra -> " << percentageOf(serra, total) << "%" << endl;
  cout << "Dilma -> " << percentageOf(dilma, total) << "%" << endl;
  cout << "Ciro Gomes -> " << percentageOf(ciro, total) << "%" << endl;
  cout << "Indeciso -> " << percentageOf(undecided, total) << "%" << endl;
  cout << "Nulo/Branco -> " << percentageOf(nullOrBlank, total) << "%" << endl;
  cout << "Total -> " << total << endl;

  if (
    percentageOf(serra, total) >= 51
    || percentageOf(dilma, total) >= 51
    || percentageOf(ciro, total) >= 51
  ) {
    cout << "Haverá 2° turno!" << endl;
  } else {
    cout << "Não haverá 2° turno!" << endl;
  }
}