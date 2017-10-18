#include<stdio.h>
int main()
{
	int x = 4, y = 3, z = 4;
	int i;
	if(x > 5)
	y = y + z;
	else
	z = z - y;
	for(i = 0; i < y+z; i++)
	x = x + 2;
	printf("%d %d %d\n",x,y,z);
	return 0;
}
