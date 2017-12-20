#include<stdio.h>
int calcula(int num, int den, int *pquo, int *prest)
{
	int guarda;
	if(den==0)
	return 0;
	else
	{
		guarda=num%den;
		*prest=guarda;
		*pquo=(num-guarda)/den;
		return 1;
	}	
}

int main()
{
	int num, den, quo, rest;
	printf("digite um dividendo inteiro:");
	scanf("%d", &num);
	printf("digite um divisor inteiro:");
	scanf("%d", &den);
	if((calcula(num, den, &quo, &rest))==0)
	printf("falha, operação inválida!\n\n");
	else 
	printf("Resto = %d \n quociente = %d \n\n", rest, quo);
	return 0;
}
