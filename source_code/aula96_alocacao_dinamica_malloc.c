/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	/*malloc pede ao sistema operacional o espaço de memória e retorna um ponteiro*/
	int *ponteiro = (int *) malloc(sizeof(int)); /*Ela não modifca o que estar na memória (lixo), caso ela não consigua alocar memeória ela retorna null*/

	if( ponteiro == NULL) printf("malloc não funcionou\n");

	*ponteiro = 1000;
	printf("%i\n", *ponteiro);

/*size_t :tipo de dado {valor somente positivo e inteiro}*/

	return 0;
}
