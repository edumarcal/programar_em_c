/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

struct horario{
  int hora, minuto, segundo;
};

void receberHorarios(struct horario list[5]);
void printHorarios(struct horario list[5]);

int main(int argc, char const *argv[]) {

  struct horario listaHorarios[5];

  receberHorarios(listaHorarios);
  printHorarios(listaHorarios);

  return 0;
}

void receberHorarios(struct horario list[5]){
  for (int i = 0;  i < 5; ++i) {
    printf("Digite o %i horário(hh:mm:ss)", i+1);
    scanf("%i:%i:%i", &list[i].hora, &list[i].minuto, &list[i].segundo);
  }
}
void printHorarios(struct horario list[5]){
  for (int i = 0; i < 5; ++i) {
    printf("%i:%i:%i\n", list[i].hora, list[i].minuto, list[i].segundo);
  }
}
