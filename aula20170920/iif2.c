#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i;
	float f_soma;
	double inverso, n, duploinverso, d_soma;
	printf("Entre com um numero:");
	scanf("%lf", &n);
	inverso=(1/n);
	f_soma=0;
	d_soma=0;
	duploinverso=(1/n);
	for(i=0;i<727;i++)
	{
		d_soma=d_soma+duploinverso;
		f_soma=f_soma+inverso;
	}
	printf("resultado com baixa precisao: %.15f \n", f_soma);
	printf("resultado com alta precisao: %.15lf\n", d_soma);
	return EXIT_SUCCESS;
}
