/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

_Bool stringsIguais(char s1[], char s2[]){

  int i = 0;

  while (s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0') {
    ++i;
  }

  if(s1[i]=='\0' && s2[i]=='\0'){
    return 1;

  }
  else{
    return 0;
  }
}


int main(int argc, char const *argv[]) {

  _Bool stringsIguais(char s1[], char s2[]);

  /* Leitura do teclado */
  char s1[20];

  char s2[20];

  scanf("%s", s1);
  scanf("%s", s2);

  /*Segmentação falhou = acesso de a memoria, o espaço já reservado para outro programa*/

/*
  printf("%i\n", stringsIguais(s1, s2));
  printf("%i\n", stringsIguais("casa", "casa"));
*/

  if(stringsIguais(s1, s2)){
/*if(stringsIguais("casa", "casa")){*/
    printf("são iguais\n");
  } else {
    printf("não são iguais\n");
  }
  return 0;
}
