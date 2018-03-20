
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

	ponteiroFile = fopen("aula84_arquivo.txt","a");

	if(ponteiroFile == NULL)
	{
		printf("Erro na leitura do arquivo\n");
		exit(0); /*Requer a importação da biblioteca stdlib.h*/
		/*return 0;*/
	}

	fprintf(ponteiroFile, "Adicionar no final\n");

	char frase[] = "Segunda linha a-append\n";
	/*Inserir um vetor*/
	fputs(frase, ponteiroFile);

	/*Inserir apenas um caracter*/
	char caractere = '3';
	fputc(caractere, ponteiroFile);

	fclose(ponteiroFile);

	return 0;
}
