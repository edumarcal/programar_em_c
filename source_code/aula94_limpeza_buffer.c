/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

void limparBuffer(void);

int main(int argc, char const *argv[])
{
	char a, b, c;
	a= getchar();
/*fflush(stdin); : Funcionar no windows*/
/*setbuf(stdin, NULL); Seta o buffer de entrada para NULL*/
	limparBuffer();
	b = getchar();
	limparBuffer();
	c = getchar();
	limparBuffer();

	printf("%c", a);
	printf("%c", b);
	printf("%c\n", c);

	return 0;
}

void limparBuffer(void){
	char c;
	while ((c = getchar())!='\n' && c != EOF);
}
