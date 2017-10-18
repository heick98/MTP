#include<stdio.h>
#include<stdlib.h>

int somafracao(int numerador, int denominador, int numerador2, int denominador2,int *pnumR, int *pdenR)
{
	if((denominador==0)||(denominador2==0))
		return 0;
	else
	{
		*pnumR=(denominador2*numerador)+(denominador*numerador2);
		*pdenR=(denominador*denominador2);
		return 1;
	
	}
	
 } 

int main()
{
	int numerador, denominador, numerador2, denominador2, numR, denR;
	printf("entre com um numero racional na forma de (nun)/(den) : ");
	scanf("%d/%d", &numerador, &denominador);
	printf("entre com outro numero racional na forma de (nun)/(den) : ");
	scanf("%d/%d", &numerador2, &denominador2);
	if((somafracao( numerador, denominador, numerador2, denominador2, &numR, &denR))==1)
	printf("soma = %d/%d", numR, denR);
	else
	printf("Erro !!!");
	return EXIT_SUCCESS;
}
