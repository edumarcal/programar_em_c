/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*
	char x[100] = {'\0'};
	*/
	char x[100] = {'\0'};

	/* x[0] = fgetc(stdin); */
	/* x[0] = getc(stdin); : foi definida no começo como uma função, também pode ser implementada com uma macro	*/

	int i = 0;
	/*vai ficar até que o ususario tecle enter*/
	while ((x[i] = fgetc(stdin))!='\n') ++i;

	x[i]= '\0';
	printf("%s\n", x);

	return 0;
}
