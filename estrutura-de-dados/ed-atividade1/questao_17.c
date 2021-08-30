#include <stdio.h>
#include <ctype.h>

/* Leia o turno em que um aluno estuda, sendo M para matutino, 
V para Vespertino ou N para Noturno e escreva a mensagem "Bom Dia!", 
"Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso. */

int main() {
  char shift;

  printf("Informe seu turno (M/V/N): ");
  scanf("%c", &shift);

  switch (toupper(shift)) {
    case 'M':
      printf("\nBom dia!\n");
      break;
    case 'V':
      printf("\nBoa tarde!\n");
      break;
    case 'N':
      printf("\nBoa noite!\n");
      break;
    default:
      printf("\nValor Inválido!!\n");
      break;
  }
}