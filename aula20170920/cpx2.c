#include<stdlib.h>
#include<stdio.h>
#include<complex.h>

int main()
{
	double a, b;
	double complex z;
	printf("Entre com um numero complexo z1 (real, imaginario) : ");
	scanf("%lf, %lf", &a, &b);
	z= (a*a)+I*(b*b);
	printf(" O produto desse n�mero complexo por seu conjulgado e  %lf + I*(%lf)\n", creal(z), cimag(z));
	return EXIT_SUCCESS;
}
