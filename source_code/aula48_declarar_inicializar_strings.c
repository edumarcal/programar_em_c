/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

/*
  Maneira de declara e inicializar uma strings
  char palavra[7] = {'E','d','u', 'a','r', 'd', 'o'};
  char palavra[] = {'E','d','u', 'a','r', 'd', 'o'};
  char palavra[7] = {"Eduardo"};
  char palavra[] = {"Eduardo"};
  char palavra[] = "Eduardo";
*/
  char palavra[] = "Eduardo";
  printf("%s\n", palavra);
  if (palavra[7]=='\0') {
    printf("Nulo\n");
  }
  else {
    printf("Errou\n");
  }

  return 0;
}
