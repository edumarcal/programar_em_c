/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*Overflow*/
	short x = 2147483647;

	/*Underflow*/
	short y = -2147483648;

	printf("%i\n", x);
	printf("%i\n", y);

	return 0;
}
