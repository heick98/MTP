#include<stdio.h>
#define N 16
int main()
{
	char str[N];
	int *varredura= (int *)str;
	int i =0;
	for(;i<N ; i++)	
	str[i]= '\0';
	printf("Entre com texto (%d caracteres max): \n", N-1);
	fgets(str, N,stdin);
	for(i=0;i<N/sizeof(int);i++)
	printf("End.: %p => dado: %d (dec), %X (hex)\n", varredura+i, varredura[i], varredura[i]);
	return 0;
}
