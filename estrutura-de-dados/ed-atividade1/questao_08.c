#include <stdio.h>

/* Leia 1 (um) número de 2 (dois) dígitos, verifique e escreva 
se o algarismo da dezena é igual ou diferente  do algarismo da unidade. */

int main() {
  char number[3];

  printf("Digite um número (2 dígitos): ");
  scanf("%2s", number);

  if (number[0] == number[1]) {
    printf("\nOs algarismos são iguais!!\n");
  } else {
    printf("\nOs algarismos são diferentes!!\n");
  }
}