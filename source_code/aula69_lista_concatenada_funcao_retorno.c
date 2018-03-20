/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include <stdio.h>

struct lista
{
	int valor;
	struct lista *proximo;
};

struct lista *procurarValor(struct lista *pLista, int valor){

	while (pLista != (struct lista *) 0) {
		if (pLista->valor == valor) {
			return (pLista);
		}	else {
			pLista = pLista->proximo;
		}
	}
	return (struct lista *)0;
}

int main(int argc, char const *argv[])
{
	struct lista *procurarValor(struct lista *pLista, int valor);

	struct lista m1, m2, m3;
	struct lista *resultado, *gancho = &m1;
	int valor;

	m1.valor = 5;
	m2.valor = 10;
	m3.valor = 15;

	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = 0;

	printf("Digite valor da pesquisa: ");
	scanf("%i", &valor);

	resultado = procurarValor(gancho, valor);

	if (resultado == (struct lista *)0) {
		printf("Valor não encontrado.\n");
	}else{
		printf("Valor %i encontrado.\n", resultado->valor);
	}
	return 0;
}
