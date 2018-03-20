/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 10/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int numero;
  printf("Favor informar um numero: ");
  scanf("%i", &numero);

  switch (numero) {
    case 1: printf("Você digitou: %i, primeiro\n", numero); break;
    case 2: printf("Você digitou: %i, segundo\n", numero); break;
    case 3: printf("Você digitou: %i, terceiro\n", numero); break;
    default: printf("Valor fora do limite\n");
  }

  return 0;
}
