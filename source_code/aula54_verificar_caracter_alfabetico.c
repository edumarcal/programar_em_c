/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 12/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  void alfabetico(char variavel);

  char nome[20];
  printf("Digite uma palavra: ");
  scanf("%s", nome);

  /*O último espaço no array é Null{\0}*/

  int i = 0;
  while(nome[i] != '\0'){
      alfabetico(nome[i]);
      ++i;
  }

  return 0;
}

void alfabetico(char variavel){
  /*Caracter alfabetico é compreendido ente a-zA-Z*/
  /*a-z{97-122} e A-Z{65-90}*/
  if ((variavel>='a' && variavel<='z') || (variavel>='A' && variavel<='Z')) {
    printf("É um caracter alfabetico\n");
  }
  else {
    printf("Não é um caracter alfabetico\n");
  }
}
