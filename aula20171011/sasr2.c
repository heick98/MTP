#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define N 256

void par()
 {
    int i;
    for(i=1; i<=20; i++)
        if (i%2==0)
        printf("%d\n", i);
}
void imp()
 {
    int i;
    for(i=1; i<=20; i++)
        if (i%2!=0)
        printf("%d\n", i);
}
int main()
{
    int str, i;
    printf("Digite 1 para ver os numeros impares e 2 para ver numeros pares: \n");
    scanf("%i", &i);
    if(i==1)
        imp();
	if(i==2)
        par();
    if(i!=1 && i!=2)
        printf("Entrada nao reconhecida");
    return EXIT_SUCCESS;
}
