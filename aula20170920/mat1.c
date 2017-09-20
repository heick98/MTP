#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float x1, x2, y1, y2, distancia;
	printf("Entre com as coordenadas de x1 e y1 \n");
	scanf("%f, %f", &x1, &y1);
	printf("Entre com as coordenadas de x2 e y2 \n");
	scanf("%f, %f", &x2, &y2);
	distancia = sqrt(pow(x2-x1,2)+pow(y1-y2,2));
	printf("A distancia entre os pontos de coordenadas (%f, %f) e (%f, %f) e %f  \n", x1, y1, x2, y2, distancia);
	return EXIT_SUCCESS;
}
