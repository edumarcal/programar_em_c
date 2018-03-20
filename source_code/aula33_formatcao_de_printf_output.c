/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  int intVar = 123456789;
  int intVar2 = 10;
  double doubleVar = 100.123456789;

  /*Formatcação de output*/

  /*(%%{letra}) - escreve a expressão de formatação - digito - Decimal*/
  printf("Variavel inteira(%%d) = %d\n", intVar);

  /*Alinhamento na impressao*/
  printf("Variavel inteira(%%d) = %9d\n",intVar2);

  /*(%%{letra}) - escreve a expressão de formatação - inteiros*/
  printf("Variavel inteira(%%i) = %i\n", intVar);

  /*(%%{letra}) - escreve a expressão de formatação - Hexadecimal converte*/
  printf("Variavel inteira(%%x) = %x\n", intVar);

  /*(%%{letra}) - escreve a expressão de formatação - Octal*/
  printf("Variavel inteira(%%o) = %o\n", intVar);

  printf("\n");

  /*(%%{letra}) %f precisao de 6 casas e aredonda*/
  printf("Variavel double(%%f) = %f\n", doubleVar);

  /*(%%{letra}) %f precisao de 6 casas e aredonda*/
  printf("Variavel double(%%f) = %.2f\n", doubleVar);

  /*(%%{letra}) %e notacão cientifica*/
  printf("Variavel double(%%e) = %e\n", doubleVar);

  /*(%%{letra}) %g perde a precisao e não aredonda*/
  printf("Variavel double(%%g) = %g\n", doubleVar);

  /*(%%{letra}) notacao cientifica mais utilizada*/
  printf("Variavel double(%%a) = %a\n", doubleVar);

  printf("\n");

  return 0;
}
