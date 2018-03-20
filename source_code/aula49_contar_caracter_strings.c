/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int tamanhoString(char string[]);

int main(int argc, char const *argv[]) {

  char string[20];

  printf("Digite uma palavra (string): \n");
  scanf("%s", string);
  /* get("%c", string);*/

  printf("O tamanho da palavra informada é: %i\n", tamanhoString(string));
  return 0;
}

int tamanhoString(char string[]){

  int x=0 ;
  for (int i = 0; i < 20; ++i) {
    if(string[i]=='\0')break;
    else ++x;
  }
  return x;
}
