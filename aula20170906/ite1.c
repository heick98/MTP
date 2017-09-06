#include <stdio.h>
int main()
{
	int n, fat, i;
	printf ("entre com um numero: ");
	scanf("%d", &n); getchar();
	fat = 1;
	for(i=1;i<=n;i++)
	{
		fat=fat*i;
	}
	printf("o fatorial do numero %d", n);
	printf("e : %d\n", fat);
	return 0;
}
