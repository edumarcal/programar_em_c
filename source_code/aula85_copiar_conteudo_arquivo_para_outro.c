/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

void copiarConteudo(FILE *fil1, FILE *file2);

int main(int argc, char const *argv[])
{
	FILE *file1, *file2;

	file1 = fopen("aula85_arquivo1.txt","r");
	if (file1==NULL) {
		printf("Erro na leitura do arquivo\n");
		return 1;
	}

	file2 = fopen("aula85_arquivo2.txt","w");

	copiarConteudo(file1, file2);

	fclose(file1);
	fclose(file2);

	return 0;
}
void copiarConteudo(FILE *file1, FILE *file2){

	char leitor[1000];
	while (fgets(leitor, 100, file1)!=NULL) {
		fputs(leitor, file2);
	}
}
