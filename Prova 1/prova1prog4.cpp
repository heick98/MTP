#include<stdio.h>

int main()
{
	int x = 3, y = 3+4, z = 4+4+4;
	int i, soma = x+y;
	printf("A soma de %d e %d = %d\n", x, y, soma);
	if(z > 10)
		printf("O numero z = %d (maior que 10)\n", z);
	for(i = 0; i < x; i++)
		soma = soma + z;
	printf("O resultado de %d vezes %d = %d\n", x, z, soma-x-y);
	return 0;
}
