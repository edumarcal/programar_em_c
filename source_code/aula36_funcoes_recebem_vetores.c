/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

void ordemCrescente(int vetor[], int count);

int main(int argc, char const *argv[]) {

/*int vetor[10] = {6,4,1,9,8,0,5,7,3,2};*/
  int vetor[10], count = 10;

  for (int i = 0; i < count; ++i) scanf("%i", &vetor[i]);

  ordemCrescente(vetor, count);

  for (int j = 0;  j < count; ++j)printf("%i ", vetor[j]);

  return 0;
}

void ordemCrescente(int vetor[], int count){
  int i, j, temporaria;

  for (i = 0; i < count; ++i) {
    for(j = i+1; j<count; ++j){
        if(vetor[i]>vetor[j]){
          temporaria = vetor[i];
          vetor[i] = vetor[j];
          vetor[j] = temporaria;
        }
    }
  }
}
