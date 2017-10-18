#include<stdio.h>
#include<string.h>
int main()
{
	char str[256] = "?!";
	int x = 3+4+4, y = 3+4+4, z = 4+2+4;
	int i, tam;
	strcat(str,"11711EEL021");
	strcat(str,"11711EEL003");
	strcat(str,"10011EBI075");
	tam = strlen(str);
	printf("%d %d %d\n", *(str+x), str[0], str[2*z]);
	return 0;
}
