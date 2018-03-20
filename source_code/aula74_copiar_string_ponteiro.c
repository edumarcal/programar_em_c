/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

void copiarString(char * copiarDaqui, char * colarAqui){
	while (*copiarDaqui!='\0') {
		*colarAqui = *copiarDaqui;
		++copiarDaqui;
		++colarAqui;
	}
	*colarAqui = '\0';
}

int main(int argc, char const *argv[])
{
	void copiarString(char * copiarDaqui, char * colarAqui);

	char string1[] = "Pao com mortadela";
	char string2[20];

	copiarString(string1, string2);
	printf("String copiada: %s\n",string2);
	return 0;
}
