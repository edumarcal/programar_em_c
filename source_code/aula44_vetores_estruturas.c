/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  struct horario{
    int hora, minuto, segundo;
  };

  /*
  struct horario teste[5];
  teste[0].hora = 10;
  teste[0].minuto = 20;
  teste[0].segundo = 30;

  printf("%i:%i:%i\n", teste[0].hora, teste[0].minuto, teste[0].segundo);
  */

  struct horario teste[5] = {
    {10,20,30},
    {20,30,40},
    {30,40,50},
    {40,50,60},
    {50,60,70}
  };

  for (int i = 0; i < 5; ++i) {
    printf("%i:%i:%i\n", teste[i].hora, teste[i].minuto, teste[i].segundo);
  }

  return 0;
}
