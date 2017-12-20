#include <stdio.h>

const int KANO = 3, KCUR = 4, KNUM0=4, KNUM1=5, KNUM2=3;

typedef
struct stArmazem 
{
	char codigo[KNUM1];
	double preco;
}Armazem;

Armazem criaInstancia(char * codigo, double preco)
{
	Armazem temp;
	int i;
	for(i = 0; i < 5; i++) 
	{
	//	printf("%c",codigo[i]);
		codigo[i] -= (codigo[i])? 1 : 0; //if(codigo[i] == codigo[i])
		temp.codigo[i] = codigo[i];
	}
	preco -= 10.0;
	temp.preco = preco;
	return temp;
}

int main() 
{
	int i;
	Armazem instancia, novainsta;
	for(i = 0; i < KNUM1; i++)
	{
	
		instancia.codigo[i] = 'a' + i;
		printf("%c", instancia.codigo[i]);
	}
	instancia.codigo[KNUM1-1] = '\0';
	instancia.preco = (double)(KANO+KCUR+KNUM2+KANO)/10.0;
	//printf("\ninstancia: %s %lf\n", instancia.codigo, instancia.preco);
	
	novainsta = criaInstancia(instancia.codigo, instancia.preco);
	
	//printf("\ninstancia: %s %lf\n", instancia.codigo, instancia.preco);
	//printf("\nnovainsta: %s %lf\n", novainsta.codigo, novainsta.preco);
	return 0;
 
}

