#include <iostream>
using namespace std;

#define n 3

int hasElement(int element, int *array) {
  for (int i = 0; i < (n * 2); i++) {
    if (element == array[i]) return 1;
  }
  return 0;
}

int main() {
  int lengthOfUnion = 0, lengthOfIntersection = 0;
  int a[n], b[n], unionOfSets[n * 2] = { 0 }, intersectionOfSets[n] = { 0 };

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
    if (!hasElement(a[i], unionOfSets)) {
      unionOfSets[i] = a[i];
      lengthOfUnion++;
    }
  }

  for (int i = 0; i < n; i++) {
    if (!hasElement(b[i], unionOfSets)) {
      unionOfSets[lengthOfUnion++] = b[i];
    }
  }

  for (int i = 0; i < n; i++) {
    if (a[i] == a[i - 1]) continue;

    for (int j = 0; j < n; j++) {
      if (a[i] == b[j]) {
        intersectionOfSets[lengthOfIntersection++] = b[j];
        break;
      }
    }
  }

  cout << "\nUnião: ";
  for (int i = 0; i < lengthOfUnion; i++) {
    cout << unionOfSets[i] << " ";
  }
  cout << endl;

  cout << "Interseção: ";
  if (!intersectionOfSets[0]) {
    cout << "vazio" << endl;
  } else {
    for (int i = 0; i < lengthOfIntersection; i++) {
      cout << intersectionOfSets[i] << " ";
    }
    cout << endl;
  }
}