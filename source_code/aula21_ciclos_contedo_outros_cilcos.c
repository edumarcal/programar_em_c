/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  for (int i = 1;  i <= 10; ++i) {
    printf("**Volta %i**\n", i);
    for (int j = 1; j <= 10; ++j) {
      printf("Ponto %i\n",j );
    }
    printf("\n");
  }
  return 0;
}
