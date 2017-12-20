#include<stdio.h>

int main()
{
	int i, n, fat;
	scanf("%d", &n);
	fat=1;
	for(i=1;i<=n;i++)
	fat=fat*i;
	printf("%d", fat);
	return 0;
}
