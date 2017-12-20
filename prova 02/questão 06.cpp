#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int trib(int indice)
{
	static int memoria[36] = {0,1,2};
	int condicao = (memoria[indice] || !indice);
	int resposta = (condicao)? memoria[indice] : trib(indice-1) + 2*trib(indice-2) + 3*trib(indice-3);
	return resposta;
}

int main()
{
	for(int i=0;i<15;i++)
	printf("tribonacci(%d) = %d\n", i, trib(i));
	return 0;	
}
