#include<stdio.h>
#include<stdlib.h>


int compara(char str1[], char str2[])
{
	int i, resp=1;
	for(i=0;str1[i]='\0';i++)
	{
		if(str1[i]=!str2[i])
		resp=0;
	}
	return i;
}
int main()
{
	char frase[100], frase2[100];
	gets(frase);
	gets(frase2);
	printf("%d", compara(frase, frase2));
	return 0;
}
