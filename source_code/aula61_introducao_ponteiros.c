/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  int x = 10;

/*
  printf("Endereco de memória: %i\n", &x);
  printf("Valor contido no Endereco:%i\n", x);
*/

  /*
  Declaração de um ponteiro:
  int *ponteiro;
  */

  /*
  Inicializando/apontando para uma região de memória da variavel x:
  ponteiro = &x;
  */

  /*
  Imprimindo o Valor contino nesse espaço de memoria:
  printf("%i\n", *ponteiro);
  */

  /*
  Imprime o Endereco de memoria:
  printf("%i\n", ponteiro);
  */

  /*Outro exemplo de fixação*/
  /*Sem ponteiro: int z = y; */
  int * ponteiro;
  ponteiro = &x;

  int y = 20;
  *ponteiro = y;

  printf("%i %i \n", x, y);

  /*
  Sintaxe de ponteiro
  *ponteiro = Endereco de memoria
  ponteiro = valor contido na memoria
  */

  return 0;
}
