#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define n 256

int main()
{
	char tot[n];
	int v=0, c=0, d=0, e=0, i=0;
	printf("digite a frase:\n");
	fgets(tot,n,stdin);
	tot[strlen(tot)-1]='\0';
	for(i=0;tot[i]!='\0';i++)
	{
    	if(tot[i]==65 || tot[i]==69 || tot[i]==73 || tot[i]==79 || tot[i]==85 || tot[i]==97 || tot[i]==101 || tot[i]==105 || tot[i]==111 || tot[i]==117)
    	    v++;
    	else
    	{
    	    if (isalpha(tot[i]))
    		    c++;
    	    if (isspace(tot[i]))
        		e++;
        	 if (isxdigit(tot[i]))
        		d++;
    	}
	}
	printf("numero de vogais:%i\n numero de consoantes:%i\n numero de digitos:%i\n numero de espaco:%i\n", v, c, d, e);
	return EXIT_SUCCESS;
}
