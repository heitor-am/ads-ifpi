#include <stdio.h>

/* Leia uma velocidade em m/s, calcule e escreva 
esta velocidade em km/h. (Vkm/h = Vm/s * 3.6) */

int main() {
  float speed, result;

  printf("Informe a velocidade (m/s): ");
  scanf("%f", &speed);

  result = speed * 3.6;

  printf("\nVelocidade em km/h: %0.2f\n", result);
}