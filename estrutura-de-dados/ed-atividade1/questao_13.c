#include <stdio.h>

/* Leia um número e mostre na tela se o número é positivo ou negativo. */

int main() {
  int number;

  printf("Digite um número: ");
  scanf("%i", &number);

  if (number > 0) {
    printf("\nPositivo!!\n");
  } else if (number < 0) {
    printf("\nNegativo!!\n");
  } else {
    printf("\nIgual à zero!!\n");
  }
}