#include <stdio.h>

/* Leia 2 (dois) números, verifique e escreva o menor 
e o maior entre os números lidos. */

int biggest(int a, int b) {
  return (a > b) ? a : b;
}

int smallest(int a,int b) {
  return (a < b) ? a : b;
}

int main() {
  int n1, n2;

  printf("Digite 2 números: ");
  scanf("%i %i", &n1, &n2);

  if (n1 != n2) {
    printf("\nMaior: %i\n", biggest(n1, n2));
    printf("Menor: %i\n", smallest(n1, n2));
  } else {
    printf("\nSão iguais!!\n");
  }
}