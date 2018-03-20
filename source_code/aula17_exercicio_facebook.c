/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 10/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int numero1, numero2;
  printf("Digite dois numero:\n");
  scanf("%i%i", &numero1, &numero2);

  if(numero2==0) printf("Divisão por 0 não é permitida\n");
  else{
    if (numero1%numero2==0) printf("%i e divisivel por %i\n", numero1, numero2);
    else printf("%i não é divisivel por %i\n", numero2, numero1);
  }

  return 0;
}
