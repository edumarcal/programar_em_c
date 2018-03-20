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
/*
  Escopo de Variavel estatica na funcao
  printf("Local Estatica = %i\n", x_static);
*/
  return 0;
}

void testeLocal(void){
  int x_local = 2;
  x_local *=2;

  static int x_static = 2;
  x_static*=2;

  printf("Variavel local: %i\n", x_local);
  printf("Variavel estatica: %i\n", x_static);

}
