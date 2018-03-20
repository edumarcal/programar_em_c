/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 13/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x = 1;
	int y = 0;

	/*Pré-incremento*/
	y= ++x;
	/*Pós-incremento*/
	y= x++;

	printf("x = %i\n", x);
	printf("y = %i\n", y);
	return 0;
}
