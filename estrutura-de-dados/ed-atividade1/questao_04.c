#include <stdio.h>
#include <string.h>

/* Leia um número inteiro (3 dígitos), calcule e escreva a 
soma de seus elementos (C + D + U). */

int main() {
  char number[4];
  int result = 0;

  printf("Digite um número (3 dígitos): ");
  scanf(" %3s", number);

  int i;
  for (i = 0; i < strlen(number); i++) {
    result += number[i] - '0';
  }

  printf("\nSoma dos algarismos: %i\n", result);
}