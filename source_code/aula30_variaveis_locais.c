/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

void testeLocal(void);
int main(int argc, char const *argv[]) {

  testeLocal();
  testeLocal();
  testeLocal();

  return 0;
}

void testeLocal(void){
  int x = 2;
  x*=2;
  printf("%i\n", x);

}
