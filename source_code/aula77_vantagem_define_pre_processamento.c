/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

#define NUMERO_MAXIMO_ALUNOS 1000

void umaFuncao(void){
	printf("%i\n", NUMERO_MAXIMO_ALUNOS);
}

void umaOutraFuncao(void){
printf("%i\n", NUMERO_MAXIMO_ALUNOS);
}

int main(int argc, char const *argv[])
{
	void umaOutraFuncao(void);
	void umaFuncao(void);

	printf("%i\n", NUMERO_MAXIMO_ALUNOS);
	umaFuncao();
	umaOutraFuncao();

	return 0;
}
