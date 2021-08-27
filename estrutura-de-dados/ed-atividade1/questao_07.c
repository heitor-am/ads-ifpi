#include <stdio.h>

/* Leia 3 (três) números, verifique e escreva o 
maior entre os números lidos. */

int main() {
  int n1, n2, n3, biggest;

  printf("Digite 3 números: ");
  scanf("%i %i %i", &n1, &n2, &n3);

  biggest = n1;
  if (n2 > biggest) biggest = n2;
  if (n3 > biggest) biggest = n3;

  printf("\nMaior: %i\n", biggest);
}