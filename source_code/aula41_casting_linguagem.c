/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  int x = 291, y=3;

  /*Força a mudança de tipo*/
  float resultado = (float) x / y;
  char a = (char) resultado;

  printf("%f\n", resultado);
  printf("%c:%i\n", a, a);

  return 0;
}
