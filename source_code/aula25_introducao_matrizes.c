/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  int count = 3;
  int matriz[3][3] = {
                      {1,2,3},
                      {4,5,6},
                      {7,8,9}
                     };
/*
  int matriz[3][3] = {1,2,3};
  int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
*/

  for (int i = 0;  i < count; ++i) {
    for (int j = 0; j < count; ++j) {
      printf("%i", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
