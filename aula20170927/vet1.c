#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int vet[1000], num, i, j;
	double media;
	scanf("%d", &num);
	media=0;
	j=0;
	for(i=0;i<1000;i++)
	{
		vet[i]=rand()%1000;
		if(vet[i<num])
		{
			media = (media*j+vet[i])/(j+1);
			j++;
		}
	}
	printf("%lf\n", media);
	return 0;
}
