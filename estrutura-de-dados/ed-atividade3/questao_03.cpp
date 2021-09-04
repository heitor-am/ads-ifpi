#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define n 3

int main() {
  int a[n], b[n];
  vector<int> unionOfSets(n * 2), intersectionOfSets(n * 2);
  vector<int>::iterator it, st, ls;

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

  sort(a, a + n);
  sort(b, b + n);

  it = set_union(a, a + n, b, b + n, unionOfSets.begin());
  ls = set_intersection(a, a + n, b, b + n, intersectionOfSets.begin());

  cout << "\nUnião:";
  for (st = unionOfSets.begin(); st != it; ++st) {
    cout << " " << *st;
  }
  cout << endl;

  cout << "Interseção:";
  for (it = intersectionOfSets.begin(); it != ls; ++it) {
    cout << " " << *it;
  }
  cout << endl;
}