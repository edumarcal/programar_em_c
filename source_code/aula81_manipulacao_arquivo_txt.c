/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>


int main(int argc, char const *argv[])
{
	FILE *ponteiroFile;
	/*fopen({r-Read, w-Write, a-append}}*/
	ponteiroFile = fopen("aula81_arquivo.txt","a");

	fprintf(ponteiroFile, "\nObrigado senhor pelo dom do conhecimento!");

	fclose(ponteiroFile);


	return 0;
}
