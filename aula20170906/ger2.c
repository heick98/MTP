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
	printf("� perfeito\n");
	else
	printf("n�o � perfeito\n");
	return 0;
}
