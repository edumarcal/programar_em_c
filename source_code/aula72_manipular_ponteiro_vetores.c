/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int vetor[3] = {1,2,3};

	int *ponteiro = vetor;

	printf("%i\n", *ponteiro);
	printf("Endereco de memória: %p\n", ponteiro);

	ponteiro = &vetor[0];
	printf("Valor: %i = Endereco de memória: %p\n", *ponteiro, ponteiro);
	ponteiro = &vetor[1];
	printf("Valor: %i = Endereco de memória: %p\n", *ponteiro, ponteiro);
	ponteiro = &vetor[2];
	printf("Valor: %i = Endereco de memória: %p\n", *ponteiro, ponteiro);

	printf("\n");
	ponteiro = &vetor[0];
	++ponteiro;
	++ponteiro;
	printf("Valor: %i = Endereco de memória: %p\n", *ponteiro, ponteiro);

	printf("\n");
	ponteiro = &vetor[0];
	/*Modificar os valores do vetor com ponteiro*/
	*(ponteiro+1)=10;
	printf("Valor: %i = Endereco de memória: %p\n", vetor[1], ponteiro);
	return 0;
}
