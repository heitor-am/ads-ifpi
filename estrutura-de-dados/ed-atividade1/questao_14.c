#include <stdio.h>
#include <ctype.h>

/* Leia uma letra e verifique se letra é "F" e escreva “F – Feminino” ou 
“M” e escreva “M – Masculino”, se não for nem F ou M, escreva “Sexo Inválido”. */

int main() {
  char letter;

  printf("Digite seu sexo (M/F): ");
  scanf("%c", &letter);

  switch (toupper(letter)) {
    case 'M':
      printf("\nM - Masculino\n");
      break;
    case 'F':
      printf("\nF - Feminino\n");
      break;
    default:
      printf("\nSexo Inválido!!\n");
      break;
  }
}