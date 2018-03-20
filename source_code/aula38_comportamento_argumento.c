/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

void funcaoPrint(int x, int vetor[]);

int main(int argc, char const *argv[]) {

  int x =10;
  int vetor[3] = {10};

  funcaoPrint(x, vetor);

  printf("Variavel int na função principal = %i \n", x);
  printf("Vetor na funcao principal = %i \n", vetor[1]);

  return 0;
}

/*Quando se passa um vetor ou uma matriz, o que vai passar é um endereço de memoria*/
void funcaoPrint(int x, int vetor[]){
  x+=10;
  vetor[1]=20;
  printf("Variavel int na função print = %i \n", x);
  printf("Vetor na funcao print = %i \n", vetor[1]);
}
