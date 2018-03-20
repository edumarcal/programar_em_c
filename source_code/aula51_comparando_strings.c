/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  _Bool stringsIguais(char s1[], char s2[]);

  if(stringsIguais("casa", "casa")){
    printf("são iguais\n");
  } else {
    printf("não são iguais\n");
  }

  return 0;
}

_Bool stringsIguais(char s1[], char s2[]){

  int i = 0;
  while (s1[i]==s2[i] && s1!='\0' && s2!='\0') {
    ++i;
  /* printf("São iguais vetor[%i] valor de i=%i\n", s1[i], i); */
  }
  if(s1[i]=='\0' && s2[i]=='\0')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
