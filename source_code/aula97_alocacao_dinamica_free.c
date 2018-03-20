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

	*ponteiro = 1000;
	free(ponteiro);

	printf("%i\n", *ponteiro);

	/*free(ponteiro);	: Qunado o programa terminar ou pelo free(); : Ele libera a memoria usada, ou seja, desalocando. Mas ele não apagar o valor contido na memoria*/

	return 0;
}
