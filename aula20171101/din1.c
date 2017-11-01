#include<stdio.h>
#include<math.h>

float media(float * numeros, int qtde)
{
	float n=0.0f;
	int i;
	for(i=0; i<qtde ; i++)
		n+=numeros[i];
	n/= qtde;
	return n;
}
float desviopadrao(float * numeros, int qtde)
{
	float n=media(numeros, qtde);
	float dp= 0.0f;
	int i;
	for(i=0; i<qtde ; i++)
		dp+= pow(numeros[i]-n,2);
	dp/=qtde-1;
	return sqrt(dp);	
}


int main()
{
	int qtde, i;
	float * numeros;
	printf("quantos numeros voce precisa ?\n");
	scanf("%d", &qtde);
	numeros=(float*) malloc(qtde*sizeof(float));
	for(i=0; i<qtde ; i++)
	{
		printf("entre com o %d o numero\n", i+1);
		scanf("%f", numeros+i);
	}
	printf("a media dos numeros e: %f\n", media(numeros, qtde));
	printf("O desvio padrao dos numeros e: %f\n", desviopadrao(numeros, qtde));
	free(numeros);
	return 0;
}
