#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a, b, c, A;
	printf("Entre com o comprimento de dois lados do tringulo:\n");
	scanf("%f, %f", &b, &c);
	printf("Entre com o valor do angulo formado por estes dois lados(em radiandos):\n");
	scanf("%f", &A);
	a = sqrt(pow(b,2)+pow(c,2)+2*b*c*(cos(A)));
	printf("O terceiro lado desse triangulo mede: %f  \n", a);
	return EXIT_SUCCESS;
}
