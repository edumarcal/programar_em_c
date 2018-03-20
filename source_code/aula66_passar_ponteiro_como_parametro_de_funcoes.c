/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*Assinatura dos metodos que devem estar em arquivo .h*/
	void testeVariavel(int x);
	void testePonteiro(int *pX);

	int teste = 1;
	int *pTeste = &teste;

/*	testeVariavel(teste);*/
	testePonteiro(pTeste);

	printf("Dentro do main: %i\n", teste);

	return 0;
}

void testeVariavel(int x)
{
	++x;
	printf("Dentro da Funcao variavel: %i\n", x);
}

/* Recebe o endereceo de memoria*/
void testePonteiro(int *pX)
{
	/*++(*pX) = ++i*/
	++*pX;
	printf("Dentro da Funcao argumento Ponteiro: %i\n", *pX);
}
