#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void arte(int l, int c, char caract[])
{
    int i=0, j=0, a=0;
    for(i=0;i<l;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            a=rand()%strlen(caract);
            printf("%c", caract[a]);
        }
    }
}
int main()
{
    srand(time(0));
    int c=0, l=0, a=0, i=0, j=0;
    char caract[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";
    printf("Write the numbers of line e columnar (linhas,colunas): ");
    scanf("%d,%d", &l, &c);
    getchar();
    arte(l,c, caract);
    printf("\n\n\n\n\n");
    return EXIT_SUCCESS;
}
