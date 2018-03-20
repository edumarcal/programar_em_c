/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"


/*Assinatura dos metodos*/
void testeLocal(void);

/*Variavel global*/
int gVariavelGlobal = 1;

int main(int argc, char const *argv[]) {

  printf("Variavel global: %i\n", gVariavelGlobal);
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

  gVariavelGlobal+=1;

  printf("Variavel local: %i\n", x_local);
  printf("Variavel estatica: %i\n", x_static);
  printf("Variavel global: %i\n", gVariavelGlobal);

}
