/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{

/*
	char x[10];

	x[0] = getchar(); Obtém um caracter stdin

	printf("%c\n",x[0]);
*/
/*
	int i = 0;
	while ((x[i] = getchar())!='\n' && i < 8) ++i;
	Ele percorre até o penultimo elemento e o ultimo deve ser '\0'

	x[++i] = '\0';
	puts(x);
*/

	char x;
	/*Ler o dado digitado e escreve no console*/
	while ((x = getchar())!='\n') putchar(x);
	puts("");
	
	return 0;
}
