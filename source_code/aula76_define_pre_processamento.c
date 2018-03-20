/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

#define PI 3.14159
#define NULO 0

double areaCirculo(double raio){
	return raio*raio*PI;
}

int main(int argc, char const *argv[])
{
	double areaCirculo(double raio);
	double raio;
	int i = 3;

	while (i!=NULO) {
		printf("Digite o raio do circulo: ");
		scanf("%lf",&raio);
		printf("Area do Raio: %f\n",areaCirculo(raio));
		--i;
	}

	return 0;
}
