/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct horario
	{
		int hora;
		int minuto;
		int segundo;
	};

	struct horario agora, *depois;
	depois = &agora;

	depois->hora = 20;
	depois->minuto = 80;
	depois->segundo = 50;

	int somartorio = 100;

	struct horario antes;

	antes.hora = somartorio + depois->segundo;
	antes.minuto = agora.hora + depois->minuto;
	antes.segundo = depois->minuto - depois->segundo;

	printf("%i:%i:%i\n", antes.hora, antes.minuto, antes.segundo);
	return 0;
}
