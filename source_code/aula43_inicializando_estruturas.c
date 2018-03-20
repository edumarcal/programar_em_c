/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  /*
  Inicialização de uma estrutura
  struct name_struct{...} inicio;
  */
  struct horario{
    int hora, minuto, segundo;
  } agora = {.segundo = 30, .minuto = 20, .hora = 10};

  /*
  Os valores fora de ordem
  exemplo:
          struct horario{
            int hora, minuto, segundo;
          } agora = {.segundo = 30, .minuto = 20, .hora = 10};
  */
  /*
  Os valores não passado na inicialização assumiram zero
  exemplo:
          struct horario{
            int hora, minuto, segundo;
          } agora = {14};
  */

  /*
  Os valores passado na inicialização
  exemplo:
          struct horario{
            int hora, minuto, segundo;
          } agora = {14,20,30};
  */

  /*
    Maneira manual
    exemplo:
          struct horario{
            int hora, minuto, segundo;
          }
          agora.hora = 14;
          agora.minuto = 29;
          agora.segundo = 59;
  */

  printf("%i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);

  return 0;
}
