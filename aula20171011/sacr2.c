#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
 {
    int s=0, cont=1, i, dado;
    srand(time(0));
    char c;
    printf("Que Comecem os jogos - Digite ENTER para rodar o dado ");
    for(i=0; i<3; i++)
    {
        printf("\nRODADA:%i\n", cont);
        do
        {
        scanf("%c", &c);
        dado = rand()%6 + 1;
        printf("... %d\n", dado);
        s=s+dado;
        printf("*%d\n", s);
        cont++;
        }
    while(cont<=5 || s<= 18);
    if (s>=18)
        break;
    }
        if(s>=18 && s<=23 && i<3)
    printf("__PARABENS voce venceu!___\n");
        if((s<18 || s>23) && i<3)
    printf("__Nao foi dessa vez :( !___\n");
    return EXIT_SUCCESS;
}
