#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int x, y, z, R, L, P, D, i;
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<3;i++)
	{
		printf("Entre com o número limite: \n");
		scanf("%d", &L);
		x= 1+rand()%6;
		y= 1+rand()%6;
		z= 1+rand()%6;
		R= x+y+z;
		printf("Os dados sortearam os números %d, %d ,%d, que somados resultam em %d \n", x, y, z, R);
		if(L>11)
		{
			D=L-10;
			if(R>L)
			P=P-D*(R-L);
			else
			P=P+1+((L-R)/(D));
			
		}
		else
		{
			P=P+(11-R);
		}
	}
	printf("você obteve %d pontos\n\n", P);
	return EXIT_SUCCESS;
}
