/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include "stdio.h"
#include "stdbool.h"

struct dicionario{
    char palavra[20];
    char definicao[20];
};

  bool compararStrings(const char palavra1[], const char palavra2[]){
    int i = 0;
    while (palavra1[i]==palavra2[i] && palavra1[i] !='\0' && palavra2[i]!='\0'){
      ++i;
    /*  printf("Estou aqui while\n");*/
    }
  /*  printf("Nem entrei no while\n");*/
    if(palavra1[i]=='\0' && palavra2[i]=='\0'){
      return true;
    } else {
      return false;
    }
  }

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras){

  bool compararStrings(const char palavra1[], const char palavra2[]);

  int i = 0;
  while (i < numDePalavras) {
    if (compararStrings(procurar, lingua[i].palavra)) {
      return i;
    }
    else {
      ++i;
    }
  }

  /*
  printf("%i: ", i);
  printf("%s\n", lingua[i].palavra[i]);
  printf("%c, ", procurar[0]);
  printf("%c, ", procurar[1]);
  printf("%c, ", procurar[2]);
  printf("%s, ", procurar[3]);
  printf("%s\n", procurar[4]);
  */
  return -1;
}

int main(int argc, char const *argv[]) {

  int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras);

  const int NUMERODEDEFINICOES = 7;
  char palavra[20] = {'\0'};
  int resultadoPesquisa;

  const struct dicionario portugues[7] =
  {
    {"pao","Comida de farinha"},
    {"mortadela","Comidade de carne"},
    {"feijao","Comida brasileira"},
    {"tropeiro","Tipo de feijao"},
    {"queijo","De minas"},
    {"macarronada","Tipico de vo"},
    {"pizza","Tipico da Italia"}
  };

  printf("Digite uma palavra: ");
  scanf("%s", palavra);

  resultadoPesquisa = procurarStrings(portugues, palavra, NUMERODEDEFINICOES);
/*  printf("%i\n", resultadoPesquisa);*/

  if (resultadoPesquisa!=-1) {
    printf("%s\n", portugues[resultadoPesquisa].definicao);
  }else{
    printf("Palavra não encontrada\n");
  }

  return 0;
}
