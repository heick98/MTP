#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define n 256

int main()
{
	char tot[n], aux[n];
	int v=0, c=0, d=0, e=0, i=0;
	printf("Digite a frase:\n");
	fgets(tot,n,stdin);
	tot[strlen(tot)-1]='\0';
	for(i=0;tot[i]!='\0';i++)
	{
	    if(isalpha(tot[i]))
	    {
			if(tot[i]>=97 && tot[i]<=109)
    			tot[i]=tot[i]+13;
            else
            {
            	if(tot[i]>=65 && tot[i]<=77)
						tot[i]=tot[i]+13;
				else
					tot[i]=tot[i]-13;
			}
		}
		else
			tot[i]=tot[i];
	}	
	printf("%s", tot);
	return EXIT_SUCCESS;
}
