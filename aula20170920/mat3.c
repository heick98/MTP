#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a, b, Log;
	printf("Entre com o logaritmando:\n");
	scanf("%f", &a);
	printf("Entre com a base :\n");
	scanf("%f", &b);
	Log= (log(a))/(log(b));
	printf("O logaritimo de %f na base %f e: %f  \n", a, b, Log);
	return EXIT_SUCCESS;
}
