#include <stdio.h>
#include <stdbool.h>

/* Leia uma data (dia, mês e ano), verifique e escreva se a data é ou não válida. */

int has31Days(int month) {
  int monthsWith31Days[] = {1, 3, 5, 7, 8, 10, 12};

  for (int i = 0; i < sizeof(monthsWith31Days) / sizeof(monthsWith31Days[0]); i++) {
    if (month == monthsWith31Days[i]) return true;
  }
  return false;
}

int main() {
  int day, month, year;
  bool dayIsOk, monthIsOk, yearIsOk, isLeapYear;

  printf("Informe a data (dd/mm/yy): ");
  scanf("%i/%i/%i", &day, &month, &year);

  isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
  
  if (has31Days(month)) {
    dayIsOk = day >= 1 && day <= 31;
  } else {
    if (month == 2) {
      dayIsOk = (!isLeapYear) ? (day >= 1 && day <= 28) : (day >= 1 && day <= 29);
    } else {
      dayIsOk = day >= 1 && day <= 30;
    }
  }

  monthIsOk = month >= 1 && month <= 12;
  yearIsOk = year >= 1;

  if (dayIsOk && monthIsOk && yearIsOk) {
    printf("\nÉ uma data válida!\n");
  } else {
    printf("\nNão é uma data válida!\n");
  }
}