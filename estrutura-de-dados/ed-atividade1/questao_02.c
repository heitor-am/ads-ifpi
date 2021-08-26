#include <stdio.h>

/* Leia um valor em horas e um valor em minutos, calcule e 
escreva o equivalente em minutos. */

int main() {
  int hours, minutes, result;

  printf("Informe o valor em horas: ");
  scanf("%i", &hours);
  printf("Informe o valor em minutos: ");
  scanf("%i", &minutes);

  result = hours * 60 + minutes;

  printf("\nEquivalente em minutos: %i\n", result);
}