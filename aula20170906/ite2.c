#include<stdio.h>

int main()
{
	int B,P,i,R;
	scanf("%d", &B);
	scanf("%d", &P);
	R=1;
	for(i=0;i<P;i++)
	R=R*B;
	printf("%d", R);
	return 0;
}
