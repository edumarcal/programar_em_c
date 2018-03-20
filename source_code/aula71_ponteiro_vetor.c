/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int vetor[3] = {1,2,3};
	/*
	Tradicional
	int *ponteiro = vetor;
	*/
	int *ponteiro = &vetor[1];

	printf("%i\n", *ponteiro);
	return 0;
}
