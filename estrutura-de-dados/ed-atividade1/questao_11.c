#include <stdio.h>

/* Leia dois valores e uma das seguintes operações a serem executadas 
(codificadas da seguinte forma: 1 –Adição, 2 – Subtração, 3 – Multiplicação e 4 – Divisão). 
Calcule e escreva o resultado dessa operação sobre os dois valores lidos. */

int main() {
  float n1, n2, result;
  int choice;

  printf("Digite 2 valores: ");
  scanf("%f %f", &n1, &n2);

  printf("1 - ADIÇÃO\n");
  printf("2 - SUBTRAÇÃO\n");
  printf("3 - MULTIPLICAÇÃO\n");
  printf("4 - DIVISÃO\n>>> ");
  scanf("%i", &choice);

  switch (choice) {
    case 1:
      result = n1 + n2;
      break;
    case 2:
      result = n1 - n2;
      break;
    case 3:
      result = n1 * n2;
      break;
    case 4:
      result = n1 / n2;
      break;
    default:
      printf("\nOpção inválida!!\n");
      break;
  }

  printf("\nResultado: %0.1f\n", result);
}