#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 256

int main()
{
	char frase[N];
	int i, j;
	printf("Entre com uma frase:\n");
	fgets(frase,N,stdin);
	i=0;
	j=0;
	for(i=0;frase[i];i++)
	{
		if(isalpha(frase[i]))
		j++;
	}
	printf("%d", j);
	return EXIT_SUCCESS;
}
