/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 12/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  char linha[100];
  char caractere;
  int i = 0;

  do {
    caractere = getchar();
    linha[i]=caractere;
    ++i;
  } while(caractere!='\n');

  linha[i-1] = '\0';
  printf("%s\n", linha);
  /*
  printf("Quantidade de caractere: %i\n", i-2);
  */
  return 0;
}
