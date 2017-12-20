#include <stdio.h>
#include <math.h>
#include<stdlib.h>

const double G = 6.67e-11; // Newtons*metro^2/quilograma^2

typedef
struct stEsfera
{
	double x, y, z, massa;
}

Esfera;
double distancia(Esfera um, Esfera dois) 
{
	double x2, y2, z2;
	x2 = pow(um.x - dois.x, 2.0);
	y2 = pow(um.y - dois.y, 2.0);
	z2 = pow(um.z - dois.z, 2.0);
	return sqrt(x2 + y2 + z2);
}

double forcaGravitacional (Esfera um, Esfera dois)
{
	return G*um.massa*dois.massa/
	pow(distancia(um,dois),2.0);
}
int main()
{
	int KANO = 3, KCUR = 4, KNUM[] = {4,5,3};
	Esfera azul, vermelha;
	azul.x = KANO; // metros
	azul.y = -1*KCUR + 0.5; // metros
	azul.z = KNUM[2] - 0.75; // metros
	vermelha.x = -1*KCUR; // metros
	vermelha.y = KNUM[1] + 0.75; // metros
	vermelha.z = -0.5*KANO; // metros
	azul.massa = KNUM[2]*1e6; // quilogramas
	vermelha.massa = KANO*1e6; // quilogramas
	printf("A forca gravitacional entre as esferas "
	"azul e vermelha, distantes %lf metros uma "
	"da outra, eh de %lf Newtons.\n",
	distancia(azul, vermelha),
	forcaGravitacional(azul,vermelha));
	return EXIT_SUCCESS;
}
