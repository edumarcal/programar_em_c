/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char x[100];

	/* Entrada padrão: stdin (é um ponteiro)*/

	/*fgets(char *restrict, int, FILE *) : permite a leitura do tamanho -1, sendo o ultimo reserdao para o caracter \0'*/
	fgets(x, 10, stdin);
	printf("Você digitou: %s\n", x);

	/*freopen(const char *restrict, const char *restrict, FILE *restrict);
		freopen("path, "modo", ponteiroFile): redirecionar para a string*/
	/*freopen("aula86_arquivo.txt", "r" ,stdin);*/
	freopen("aula86_arquivo.txt", "r" ,stdin);
	/*automaticamente vai ler o que estar no arquivo*/
	fgets(x, 100, stdin);
	printf("%s", x);


	return 0;
}
