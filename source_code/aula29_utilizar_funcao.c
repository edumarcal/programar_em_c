/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

float calcularAreaQuadradro(float x);
float calcularAreaRetangulo(float x, float y);

int main(int argc, char const *argv[]) {

  printf("Area do quadrado %.2f\n", calcularAreaQuadradro(10.00));
  printf("Area do Retangulo %.2f\n", calcularAreaRetangulo(10.0, 20.0));

  return 0;
}

float calcularAreaQuadradro(float x){
  return 2*x;
}

float calcularAreaRetangulo(float base, float altura){

  return base * altura;
}
