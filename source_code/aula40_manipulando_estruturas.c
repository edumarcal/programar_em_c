/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

/*criar o corpo da estrura*/
  struct horario{
    int hora, minuto, segundo;
    double teste;
    char letra;
  };

/*Declara uma estrutura do tipo horario*/
  struct horario agora;

  agora.hora = 00;
  agora.minuto = 00;
  agora.segundo = 00;

  struct horario depois;
  depois.hora = agora.hora+13;
  depois.minuto = agora.minuto+58;
  depois.segundo = agora.segundo+15;
  depois.teste = 50.55/123;
  depois.letra = 'a';

  printf("Agora = %i:%i:%i\n",agora.hora, agora.minuto, agora.segundo);
  printf("Depois = %i:%i:%i\n%f\n%c\n",depois.hora, depois.minuto, depois.segundo, depois.teste, depois.letra);

  return 0;
}
