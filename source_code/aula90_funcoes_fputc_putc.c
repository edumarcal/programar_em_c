/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char x[] = "Coxinha";

	/*
	stdin - input console
	stdout - output console
	*/
	FILE *file = fopen("aula90_arquivo.txt", "w");

	/*
	putc('a', file); : Pode ser implementada com a macro*/
	/*
	putc(x[5], stdout);
	putc('a', stdout);
	Imprime um caracter no console: Pode ser implementada com a macro*/

	/* fputc(); : Não pode ser implementada numa macro*/

	int i = 0;
	while (x[i] != '\0') {
	/*fputc(x[i], stdout); Escrever no console*/
		putc(x[i], file); /*Escrevo no arquivo*/

		++i;
	}
	printf("\n");
	return 0;
}
