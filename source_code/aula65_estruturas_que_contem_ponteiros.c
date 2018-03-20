/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct horario
	{
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};

	struct horario hoje;

	int hora = 200;
	int minuto = 300;
	int segundo = 400;

	/*Apontar para o endereço de memoria*/
	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;

	printf("Hora: %i\n", *hoje.pHora);
	printf("Minuto: %i\n", *hoje.pMinuto);
	printf("Segundo: %i\n", *hoje.pSegundo);

/*
	Com o * = Acessa o valor do ponteiro
	Sem o * = Acessa a referencia da memoria do ponteiro
*/
	*hoje.pSegundo = 1000;
	printf("Segundo: %i\n", *hoje.pSegundo);

	return 0;
}
