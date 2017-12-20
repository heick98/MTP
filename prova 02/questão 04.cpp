#include <stdio.h>
#include <string.h>

#define N 3

typedef
struct stTexto
{
	int id;
	char mat[12];
}Texto;

void imprime(Texto * dado, int qtde)
{
	if(qtde > 0)
	{
		imprime(dado+1,qtde-1);
		printf(": (%d) %s ", dado->id, dado->mat);
	}
}
int main()
{
	char MAT0[] = {"11711EEL003"}, MAT1[] = {"11711EEL013"}, MAT2[] = {"11711EEL020"};
	Texto grupo[N];
	int i;
	for(i = 0; i < N; i++)
		grupo[i].id = i;
	strcpy(grupo[0].mat,MAT0);
	strcpy(grupo[1].mat,MAT1);
	strcpy(grupo[2].mat,MAT2);
	imprime(grupo, N);
	return 0;
}
