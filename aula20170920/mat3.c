#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a, b, Logaritmo;
	printf("Entre com o logaritmando:\n");
	scanf("%f", &a);
	printf("Entre com a base :\n");
	scanf("%f", &b);
	Logaritmo= (log(a))/(log(b));
	printf("O logaritimo de %f na base %f e: %f  \n", a, b, Logaritmo);
	return EXIT_SUCCESS;
}
