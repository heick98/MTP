#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	int n, i, s;
	printf("digite um numero: ");
	scanf("%d", &n);
	s=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		s=s+i;
	}
	if(s==n)
	printf("é perfeito\n");
	else
	printf("não é perfeito\n");
	return 0;
}
