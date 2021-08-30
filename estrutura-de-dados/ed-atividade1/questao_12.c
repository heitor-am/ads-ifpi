#include <stdio.h>

/* Leia 2 datas (cada data é composta por 3 variáveis inteiras: 
dia, mês e ano) e escreva qual delas é a mais  recente. */

int main() {
  int day1, month1, year1, day2, month2, year2, latestDate;

  printf("Informe a 1° data (dd/mm/yy): ");
  scanf("%i/%i/%i", &day1, &month1, &year1);

  printf("Informe a 2° data (dd/mm/yy): ");
  scanf("%i/%i/%i", &day2, &month2, &year2);

  if (year1 == year2) {
    if (month1 == month2) {
      latestDate = (day1 > day2) ? 1 : 2;
    } else if (month1 > month2) {
      latestDate = 1;
    } else {
      latestDate = 2;
    }
  } else if (year1 > year2) {
    latestDate = 1;
  } else {
    latestDate =  2;
  }

  printf("\nData mais recente: %i°\n", latestDate);
}