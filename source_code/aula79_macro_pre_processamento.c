/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

#define MAIOR(x , y) x > y ? x : y
#define E_MINUSCULO(char) char>='a' && char<='z'

int main(int argc, char const *argv[])
{
	char x = 'A';
	if (E_MINUSCULO(x)) printf("E uma letra minuscula\n");
	else printf("Não é uma letra minuscula\n");

	printf("%i\n", MAIOR(100 , 50));

	return 0;
}
