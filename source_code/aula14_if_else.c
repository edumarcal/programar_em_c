/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 10/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int idade;
  printf("Favor informar idade: ");
  scanf("%i", &idade);
  if (idade>=18) {
    printf("Maior de idade\n");
  }
  else {
    printf("Menor de idade\n");
  }
  return 0;
}
