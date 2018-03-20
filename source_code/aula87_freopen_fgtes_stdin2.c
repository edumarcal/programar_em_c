/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char x[100];

	FILE *file = fopen("aula87_arquivo.txt", "r");

	fgets(x, 100, file);
	printf("%s", x);

	freopen("aula87_arquivo2.txt", "r", file); /*redirecionar para outro arquivo*/
	fgets(x, 100, file);
	printf("%s", x);

	return 0;
}
