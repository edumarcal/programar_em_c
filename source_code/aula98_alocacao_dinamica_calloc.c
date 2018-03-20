/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	int *ponteiro, *p;

	/*calloc(qtdElemento{5}, tamanho{sizeof(int)}) = 20*/
	/*Inicializar os valores com zero naquele bloco*/
	/*Retorna um ponteiro generioco  "void"*/
	ponteiro = (int *) calloc(5,sizeof(int));

/*
	ponteiro = (int *) malloc(5*sizeof(int)); Vai ter sujeira na memoria
*/
/*
	*ponteiro = 10;
	*(ponteiro+1) = 20;
	printf("%i\n", ponteiro[1]);
*/
/*
	++ponteiro;
	ponteiro = 20;
*/
	printf("calloc\n");
	int i;
	for (i = 0; i < 5; ++i) {
			printf("Endereco de p%i = %p | Valor de p%i = %i\n", i, /*{&ponteiro[i]}*/(ponteiro+i), i , *(ponteiro+i));
	}

	printf("malloc\n");
	p = (int *) malloc(5*sizeof(int));
	int j;
	for (j = 0; j < 5; ++j) {
			printf("Endereco de p%i = %p | Valor de p%i = %i\n", j, /*{&ponteiro[j]}*/(p+j), j , *(p+j));
	}
	return 0;
}
