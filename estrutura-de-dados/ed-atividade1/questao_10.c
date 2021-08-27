#include <stdio.h>

/* Leia duas notas de um aluno e escreva na tela a palavra “Aprovado” se 
a média das duas notas for maior ou igual a 7,0. Caso a média seja inferior 
a 7,0, escreva “O Aluno deve fazer a prova final!” e o programa deve ler a 
nota da prova final e calcule a média final. Se a média final for maior ou 
igual a 6,0, o programa deve escrever “Aprovado!”, caso contrário deve 
escrever “Reprovado!”. */

int main() {
  float grade1, grade2, finalGrade, average;

  printf("Informe as 2 notas: ");
  scanf("%f %f", &grade1, &grade2);

  average = (grade1 + grade2) / 2;

  if (average >= 7) {
    printf("\nAprovado!\n");
  } else {
    printf("O Aluno deve fazer a prova final!\n");
    printf("Nota da prova final: ");
    scanf("%f", &finalGrade);
    
    average = (finalGrade + average) / 2;

    if (average >= 6) {
      printf("\nAprovado!\n");
    } else {
      printf("\nReprovado!\n");
    }
  }
}