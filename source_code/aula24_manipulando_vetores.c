/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  float notas[5] = {0};
  float media = 0;
  float total = 0;

  printf("Insira 5 notas\n");

  for (int i = 0;  i< 5; ++i) scanf("%f",&notas[i]);

  for (int j = 0;  j < 5; ++j) total+=notas[j];

  media = total/5;

  printf("A média do aluno é %.2f\n", media);

  return 0;
}
