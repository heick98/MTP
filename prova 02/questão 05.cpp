#include <stdio.h>
#include <stdlib.h>

const int KANO = 3, KCUR = 4, KNUM0=4, KNUM1=5, KNUM2=3;

int fib(int indice)
{
	static int memoria[36] = {0,1};
	int condicao = (memoria[indice] || !indice);
	int resposta = (condicao)? memoria[indice] : fib(indice-1) + fib(indice-2);
	return resposta;
}

int main()
{
	printf("Fibonacci(%d) = %d\n", KNUM0-1, fib(KNUM0-1));
	printf("Fibonacci(%d) = %d\n", KNUM1-1, fib(KNUM1-1));
	printf("Fibonacci(%d) = %d\n", KNUM2-1, fib(KNUM2-1));
	printf("Numero secreto = %d", KANO*fib(KNUM0-1) + KANO*fib(KNUM2-1) + KANO*fib(KNUM1-1) - KCUR*KCUR*KCUR);
	return 0;
}

