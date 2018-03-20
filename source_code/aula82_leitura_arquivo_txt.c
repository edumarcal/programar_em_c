/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *ponteiroFile;
	/*fopen({r-Read, w-Write, a-append}}*/

	ponteiroFile = fopen("aula82_arquivo.txt","r");

	if(ponteiroFile == NULL)
	{
		printf("Erro na leitura do arquivo\n");
		return 0;
	}

	int x, y, z;
	/*Problema do fscanf - deve estar de acordo com o texto do arquivo (bem formatado)*/
	fscanf(ponteiroFile, "%i %i %i", &x, &y, &z);

	printf("%i %i %i\n", x, y, z);

/*
	Escrita: fprintf(ponteiroFile, "Obrigado senhor pelo dom do conhecimento!");
*/
	fclose(ponteiroFile);


	return 0;
}
