#include <iostream>
using namespace std;

#define n 5

int main() {
  int array[n], biggest, smallest;
  int positionOfBiggest, positionOfSmallest;

  for (int i = 0; i < n; i++) {
    cout << "Digite o " << i + 1 << "° valor: ";
    cin >> array[i];
  }

  biggest = array[0];
  smallest = array[0];

  for (int i = 0; i < n; i++) {
    if (array[i] > biggest) {
      biggest = array[i];
      positionOfBiggest = i;
    }
    if (array[i] < smallest) {
      smallest = array[i];
      positionOfSmallest = i;  
    }
  }

  cout << "\nMaior: " << biggest << " | Posição: " << positionOfBiggest << endl;
  cout << "Menor: " << smallest << " | Posição: " << positionOfSmallest << endl;
}