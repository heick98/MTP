#include<stdio.h>

int main()
{
	long long int i, n, fat;
	scanf("%lld", &n);
	fat=1;
	for(i=1;i<=n;i++)
	fat=fat*i;
	printf("%lld", fat);
	return 0;
}
