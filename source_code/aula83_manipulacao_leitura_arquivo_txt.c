/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	FILE *ponteiroFile;
	/*fopen({r-Read, w-Write, a-append}}*/

	ponteiroFile = fopen("aula83_arquivo.txt","r");

	if(ponteiroFile == NULL)
	{
		printf("Erro na leitura do arquivo\n");
		exit(0); /*Requer a importação da biblioteca stdlib.h*/
		/*return 0;*/
	}
	char frase[100];

	/*fgets(atributo, limite, ponteiroFile) : ela ler até uma quebra de linha.*/

	while (fgets(frase, 100, ponteiroFile)!= NULL) {
		printf("%s",frase);
	}

/*
	ler ate o primeiro espaco:
	printf("\n------\nOutra forma fscanf\n");
	char c[1000];
	fscanf(ponteiroFile, "%s", c);
	printf("%s", c);
*/
	fclose(ponteiroFile);

	return 0;
}
