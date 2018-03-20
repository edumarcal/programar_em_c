/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 11/07/15
*/
#include "stdio.h"

int main(int argc, char const *argv[]) {

  const int bimestreAnuais = 4;
  const int numeroDeAluno = 4;

  float notasAlunos[4][4];/* = {0};*/
  float mediasAlunos[4] = {0};

  float media = 0;

/*  printf("Insira as 4 notas do aluno 1:\n");*/

  for (int aluno = 0; aluno < numeroDeAluno; ++aluno) {
    printf("Insira as 4 notas do aluno %i\n", aluno+1);
    for (int notas = 0; notas < bimestreAnuais; ++notas) {
      scanf("%f", &notasAlunos[aluno][notas]);
      media+=notasAlunos[aluno][notas];
    }
    mediasAlunos[aluno] = media / bimestreAnuais;
    media = 0;
  }

  for (int i = 0; i < numeroDeAluno; ++i) printf("A media do aluno %i é %.2f\n",i+1, mediasAlunos[i]);

  return 0;
}
