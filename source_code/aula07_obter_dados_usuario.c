/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 08/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int base=0, altura=0, area;
  printf("Digite o valor da base\n");
  scanf("%i", &base);
  printf("Digite o valor da altura\n");
  scanf("%i", &altura);
  area = base * altura;
  printf("Área: %i\n", area);
  return 0;
}
