#include<stdio.h>
int main ()
{
	int i,d,randmico,randmico2,soma,produto;
	i=0;
	printf("digite um divisor do numero 8192: \n");
	scanf("%d", &d);
	if(8192%d==0)
		i++;
	randomico= 1328 + rand()%(1361-1328);
	printf("qual a soma do numero %d com 101 ?\n", randomico);
	scanf("%d", soma);
	if(soma==randomico+101)
		i++;
	randomico2= rand()%100;
	printf("quanto vale o produto entre d% e 3 ?", randomico2);
	sacnf("%d", produto);
	if(produto==randomico2*3)
	i++;
	printf("\n Voce obteve %d pontos", i);
	return 0;
}
