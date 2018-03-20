/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include <stdio.h>

int somarVetor(int vetor[], const int n){
	int soma = 0;
	int *ponteiro;
	int *const finalVetor = vetor + n;

	for (ponteiro = vetor; ponteiro < finalVetor ; ++ponteiro){
		soma+=*ponteiro;
	}

	return soma;
}

int main(int argc, char const *argv[])
{
		int somarVetor(int vetor[], const int n);
		int vetor[10] = {5,5,5,5,5,5,5,5,-10,-10};

	printf("A soma dos membros do vetor = %i\n", somarVetor(vetor, 10));
	return 0;
}
