/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
/* estas funções estao na biblioteca "stdlib.n"
	- malloc
	- calloc
	- realloc
	- free

	- utliza bastante sizeof
*/

	int x;
	double y;
	int vetor[10];
	struct z{
		int a;
		double b;
		int c;
	};

	struct z estrutura;
	/*Calcular o tamanho do tipo de dado {qualquer tipo}*/
	printf("%li\n", sizeof(x));
	printf("%li\n", sizeof(y));
	printf("%li\n", sizeof(short));
	printf("%li\n", sizeof(vetor));
	printf("%li\n", sizeof(estrutura));

	return 0;
}
