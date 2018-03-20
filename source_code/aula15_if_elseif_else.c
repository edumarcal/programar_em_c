/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 10/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int idade;
  printf("Favor informar idade: ");
  scanf("%i", &idade);

  if (idade<=5) printf("Bebê\n");
  else if(idade>5 && idade<=10) printf("Criança\n");
  else if(idade>10 && idade<18) printf("Adolecente\n");
  else if(idade>=18 && idade<=50) printf("Maior de idade\n");
  else printf("Adulto\n");

  return 0;
}
