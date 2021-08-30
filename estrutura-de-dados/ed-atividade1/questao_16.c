#include <stdio.h>

/* Leia o preço de três produtos e informe qual produto deve ser 
comprado, sabendo que a decisão é  sempre pelo mais barato. */

int main() {
  float product1, product2, product3, bestPrice;
  int chosenProduct;

  printf("Preço do 1° produto: R$");
  scanf("%f", &product1);
  printf("Preço do 2° produto: R$");
  scanf("%f", &product2);
  printf("Preço do 3° produto: R$");
  scanf("%f", &product3);

  bestPrice = product1;
  if (product2 < bestPrice) bestPrice = product2;
  if (product3 < bestPrice) bestPrice = product3;

  if (bestPrice == product1) {
    chosenProduct = 1;
  } else if (bestPrice == product2) {
    chosenProduct = 2;
  } else {
    chosenProduct = 3;
  }

  printf("\nProduto escolhido: %i°\n", chosenProduct);
  printf("Preço: R$%0.2f\n", bestPrice);
}