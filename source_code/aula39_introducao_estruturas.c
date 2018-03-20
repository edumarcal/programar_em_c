/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

/*criar o corpo da estrura*/
  struct horario{
    int hora, minuto, segundo;
  };

/*Declara uma estrutura do tipo horario*/
  struct horario agora;

  agora.hora = 00;
  agora.minuto = 00;
  agora.segundo = 00;

  printf("%i:%i:%i\n",agora.hora, agora.minuto, agora.segundo);

  return 0;
}
