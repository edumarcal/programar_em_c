/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 12/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  int i;
  for (i = 1; i <= 20; ++i) {
    if (i%3 == 0 && i% 9 == 0) {
      printf("%i:Numero divisivel por 3 e 9\n", i); break
    }
    else{
      printf("%i:Não divisivel por 3 e 9\n", i);
    }
  }
  return 0;
}
