/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int numero, numInvertido;
  printf("Digite um numero: ");
  scanf("%i", &numero);

  if (numero>=0) {
    printf("Numero invertido: ");
    do {
      numInvertido = numero % 10;
      printf("%i", numInvertido);
      numero/=10;
    } while(numero!=0);
    printf("\n");
  }else if(numero<1){
    numero = numero * -1;
    printf("-");
    do {
      numInvertido = numero % 10;
      printf("%i", numInvertido);
      numero/=10;
    } while(numero!=0);
    printf("\n");
  }

  return 0;
}
