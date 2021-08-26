#include <stdio.h>

/* Leia o valor do dólar e um valor em dólar, calcule e 
escreva o equivalente em real (R$). */

int main() {
  float dollarNow, valueInUSD, valueInBRL;

  printf("Informe o valor atual do dólar: ");
  scanf("%f", &dollarNow);
  printf("Informe o valor em dólar: ");
  scanf("%f", &valueInUSD);

  valueInBRL = dollarNow * valueInUSD;

  printf("\nValor em real: R$%0.2f\n", valueInBRL);
}