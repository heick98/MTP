#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	int n, i, j;
	printf("digite um numero: ");
	scanf("%d", &n);
	j=1;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		j=0;
	}
	if(j==0)
	printf(" não é primo");
	else
	printf("primo");
	return 0;
}

