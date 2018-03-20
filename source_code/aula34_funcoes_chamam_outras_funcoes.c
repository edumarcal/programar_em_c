/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

/*Asinatura das funções*/
float somaDeDigitos(float numero1, float numero2);
float valorAbsoluto(float x);

int main(int argc, char const *argv[]) {

  float a, b, soma;
  printf("Digite dois numeros\n");
  scanf("%f", &a);
  scanf("%f", &b);

  soma = somaDeDigitos(a,b);
  printf("A soma dos numeros é %f\n", soma);

  return 0;
}

float somaDeDigitos(float numero1, float numero2){

    if(numero1<0) numero1 = valorAbsoluto(numero1);
    if(numero2<0) numero2 = valorAbsoluto(numero2);

    return numero1+numero2;
}

float valorAbsoluto(float x){
  return x*-1;
}
