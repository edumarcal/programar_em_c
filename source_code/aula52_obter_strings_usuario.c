/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 12/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  char nome[20];
  char sobrenome[20];

  printf("Insira seu nome e sobrenome: \n");
  scanf("%s%s", nome, sobrenome);

  printf("Você digitou:\n%s\n%s\n", nome, sobrenome);

  return 0;
}
