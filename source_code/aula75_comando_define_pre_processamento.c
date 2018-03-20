/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>


#define SIM +100
#define NAO -100

int main(int argc, char const *argv[])
{
	int x;
	printf("Digite um número inteiro: ");
	scanf("%i",&x);

	if (x<=10) printf("%i\n", NAO);
	else printf("%i\n", SIM);

	return 0;
}
