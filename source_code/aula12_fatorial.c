/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 10/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  int n;
  scanf("%i",&n);
  int fatorial = n;
  while(n!=1){
    if(n==0){fatorial = 1; break;}
    fatorial*=(n-1);
    --n;
  }
  printf("%i\n", fatorial);
  return 0;
}
/*5*4*3*2*1=20*3=60*120*1=120*/
