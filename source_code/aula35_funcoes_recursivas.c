/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int fatorial(int numero);

int main(int argc, char const *argv[]) {

  /*
    Fatorial de um numero:
    5!=5*4*3*2*1 e 0!=1
  */

  int numero;
  printf("Digite um numero\n");
  scanf("%i",&numero);
  printf("O Fatorial do numero é: %i\n", fatorial(numero));

  return 0;
}

int fatorial(int numero){
  int resultado;
  if(numero==0){
    resultado = 1;
  }else{
    resultado = numero *  fatorial(numero-1);
  }
  return resultado;
}
