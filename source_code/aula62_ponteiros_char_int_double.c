/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  int x = 10;
  double y = 20.50;
  char z = 'a';

    int * pX; /*com o asterisco recebe o valor*/
    pX = &x; /*sem o asterisco quer acessar o endereco do ponteiro*/

    double * pY = &y;
    char * pZ = &z;

    /*pX = Endereco de memoria, *pX = valor do ponteiro*/
    printf("Endereco x = %i : Valor de x = %i\n", pX, *pX);
    printf("Endereco y = %i : Valor de y = %f\n", pY, *pY);
    printf("Endereco z = %i : Valor de z = %c\n", pZ, *pZ);

    /*Operação com ponteiro*/
    double soma  = *pX + *pY;
    printf("A soma dos por ponteiro: %f\n", soma);

    /* Não recomendavél
    int *resultado;
    resultado = 640178047;

    printf("Endereco de memoria: %i\n", *resultado );
    */
    
  return 0;
}
