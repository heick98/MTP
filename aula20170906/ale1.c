#include <stdio.h>
 int main ()
 {
 	int n;
 	printf("entre com um número: ");
 	scanf("%d", &n);
 	if(n%2)
 	{
 		printf("numero impar!\n");
 		if(n%5==0)
 		printf("multiplo de 5.\n");
	}
	  else
	  {
	  	printf("numero par!\n");
	  	if(n%3==0) 
	  	printf("multiplo de 3.\n");
	  	if(n%7==0)
	  	printf("multiplo de 7.\n");
	  }
	  return 0;
	  system ("pause");
 }
