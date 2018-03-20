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
/*
	Uma forma de fazer, por causa da precedencia de operações
	(*depois).hora = 20;
	(*depois).minuto = 20;
	(*depois).segundo = 20;
*/
	depois->hora = 20;
	depois->minuto = 20;
	depois->segundo = 20;

	printf("%i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);

	return 0;
}
