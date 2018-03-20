/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char x[100] = {'\0'};
	int i = 0;
	FILE *file = fopen("aula89_arquivo.txt", "r");

	/* EOF{End off file} : Retorna o final do arquivo */
	/* vai ficar até que o ususario tecle enter */
/*	while ((x[i] = fgetc(file)) != EOF ) ++i;*/
	while ((x[i] = getc(file)) != EOF ) ++i;
	x[i]= '\0';
	printf("%s", x);

	return 0;
}
