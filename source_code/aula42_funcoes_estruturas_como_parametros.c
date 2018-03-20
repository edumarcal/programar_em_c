/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

/*Variaveis globais*/
struct horario{
  int hora, minuto, segundo;
};

/*Função que recebe uma estrutura*/
struct horario teste(struct horario x);

int main(int argc, char const *argv[]) {

  struct horario agora;
  agora.hora = 14;
  agora.minuto = 29;
  agora.segundo = 59;


  struct horario proximo;
  proximo = teste(agora);
  printf("%i:%i:%i\n", proximo.hora, proximo.minuto, proximo.segundo);

  return 0;
}

/*Função que recebe uma estrutura*/
struct horario teste(struct horario x){
  printf("%i:%i:%i\n", x.hora, x.minuto, x.segundo);
  if(x.segundo+1==60 && x.minuto+1!=60){
    x.minuto+=1;
    x.segundo=0;
  }
  return x;
}
