#include<stdio.h>
#include<stdlib.h>

typedef unsigned char byte;
typedef unsigned short int word;
typedef unsigned int dword;
typedef struct stPixel {byte B; byte G; byte R; } Pixel;
typedef struct stHeaderBMP24bpp{
	byte char1;
	byte char2;
	dword tamanho_arquivo;
	word inforesl;
	word inforesl2;
	dword offset;
	}HeaderBMP24bpp;

Pixel *carregar_imagem(const char *nomearq, HeaderBMP24bpp * pheader)
{
	Pixel * imagem = NULL;
	FILE * arq;
	arq =fopen(nomearq, "rb");
	fread(pheader, sizeof(HeaderBMP24bpp), 1, arq);
	fclose(arq);
	return imagem;
}
void printHeader(HeaderBMP24bpp header)
{
	printf ("Origem: %c%c\n", header.char1, header.char2);
	printf("tamanho do arquivo: %u bytes\n", header.char1, header.char2);
}



int main()
{
	Pixel *imagem;
	HeaderBMP24bpp header;
	imagem = carregar_imagem("imagem.bmp", &header);
	printHeader (header);
	return EXIT_SUCCESS;
}
