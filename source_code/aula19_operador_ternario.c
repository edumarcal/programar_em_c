/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  int numero1, numero2;

  printf("Digite dois numeros:\n");
  scanf("%i%i", &numero1, &numero2);

   numero1<numero2 ? printf("sim\n") : printf("não\n");

   /*
   numero1<numero2 ? resposta = 10 : resposta = -10;
   printf("%i\n", resposta);
   */

  return 0;
}
