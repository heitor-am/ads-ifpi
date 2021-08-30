#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

/* Leia uma letra e verifique se a letra digitada é vogal ou consoante. */

int isLetter(char character) {
  return (tolower(character) >= 'a' && tolower(character) <= 'z');
}

int isVowel(char letter) {
  char vowels[] = {'a', 'e', 'i', 'o', 'u'};
  int i;

  for (i = 0; i < sizeof(vowels); i++) {
    if (tolower(letter) == vowels[i]) return true;
  }
  return false;
}

int main() {
  char letter;

  printf("Digite uma letra: ");
  scanf("%c", &letter);

  if (isLetter(letter)) {
    if (isVowel(letter)) {
      printf("\nÉ vogal!\n");
    } else {
      printf("\nÉ consoante!\n");
    }
  } else {
    printf("\nNão é uma letra!!\n");
  }
}