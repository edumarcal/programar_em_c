/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

void concatenarString(char string1[], int string1Length, char string2[], int string2Length, char string0[]);

int main(int argc, char const *argv[]) {

  char palavra1[] = {'p','a','o', ' '};
  char palavra2[] = {'m','o', 'r', 't', 'a', 'd', 'e', 'l', 'a'};
  char novaPalavra[13];
  int i;

  concatenarString(palavra1, 4, palavra2, 9, novaPalavra);

  for (i = 0; i < 13; ++i) {
    printf("%c", novaPalavra[i]);
  }

  printf("\n");

  return 0;
}

void concatenarString(char string1[], int string1Length, char string2[], int string2Length, char string0[]) {
  for (int i = 0; i <= 13; ++i) {
    if(i<string1Length){string0[i] = string1[i];}
    else {string0[i] = string2[i-string1Length];}
  }
}
