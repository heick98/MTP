#include<stdio.h>
int main ()
{
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
	printf("o numero digitado nao e primo");
	else
	printf("o numero digitado e primo");
	return 0;
}
