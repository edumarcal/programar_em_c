/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

/*No caso de uma matriz deve informa o valor da coluna exemplo [][tamanho]*/
void imprimeMatriz(int matriz[][3]);

int main(int argc, char const *argv[]) {

  int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  imprimeMatriz(matriz);

  return 0;
}

void imprimeMatriz(int matriz[][3]){
  int i, j;
  for (i = 0; i < 3; ++i) {
    for(j = 0; j< 3; ++j) {
      printf("%i ", matriz[i][j]);
    }
    printf("\n");
  }
}
