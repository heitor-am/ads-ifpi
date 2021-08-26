#include <stdio.h>

/* Leia uma velocidade em km/h, calcule e escreva esta 
velocidade em m/s. (Vm/s = Vkm/h / 3.6) */

int main() {
  float speed, result;

  printf("Informe a velocidade (km/h): ");
  scanf("%f", &speed);

  result = speed / 3.6;

  printf("\nVelocidade em m/s: %0.2f\n", result);
}