/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 08/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int minhaIdade = 20;
  int maeIdade = 40;
  int paiIdade = 45;
  int irmaoIdade = 15;
  int idadeTotal = minhaIdade*maeIdade/paiIdade+irmaoIdade;

  printf("%i\n", idadeTotal);
  return 0;
}
