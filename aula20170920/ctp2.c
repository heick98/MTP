#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 256

int main()
{
	char frase[N];
	int i;
	printf("Entre com ma frase:");
	fgets(frase,N,stdin);
	i=0;
	for(i=0;frase[i];i++)
	{
		frase[i]= tolower(frase[i]);
	}
	printf("%s", frase);
	return EXIT_SUCCESS;
}
