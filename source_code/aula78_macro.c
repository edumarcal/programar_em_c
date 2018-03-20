/*	Thanks: Agradeço a DEUS pelo dom do conhecimento
 *	Author: Eduardo Marçal
 *	Create on: 14/07/15
*/
#include <stdio.h>

#define PI 3.14159
#define DOIS_PI 2 * PI
/*Macro sintaxe: MACRO(input) output*/
#define AREA_CIRCULO(raio) raio * raio * PI

int main(int argc, char const *argv[])
{
	printf("%f\n", PI);
	printf("%f\n", DOIS_PI);
	printf("%f\n", AREA_CIRCULO(10));

	return 0;
}
