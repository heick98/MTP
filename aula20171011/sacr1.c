#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	srand(time(0));
	int dado, i;
	char S;
	do{
		printf("Precione qualquer tecla para rodar o dado ou '1' para sair\n");
		scanf("%d", &i);
		if(i!=1)
		{
			dado=rand()%6 + 1;
			printf("O dado sorteou o numero: %d\n", dado);	
		}
    }while(i != 1);
    return EXIT_SUCCESS;
}
