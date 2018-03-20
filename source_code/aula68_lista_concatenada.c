/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct lista
	{
		int valor;
		struct lista *proximo;
	};

	struct lista m1, m2, m3;
	struct lista *gancho =  &m1;

	m1.valor = 10;
	m2.valor = 20;
	m3.valor = 30;

	/*Lista ligada = apontando para o próximo elemento*/
	m1.proximo = &m2;
	m2.proximo = &m3;
	/*Outra forma: m3.proximo = 0;*/
	m3.proximo = (struct lista *)0;

	while (gancho!=(struct lista *)0) {
		printf("%i\n",gancho->valor);
		/*Incrementar a proxima posição da memória*/
		gancho = gancho->proximo;
	}
	return 0;
}
