#include<stdio.h>

int main()
{
	
	int x =  8%9, y = 8%9, z = 6%9;  // declarando 3 números inteiros menores que nove( nove devido ao tamanho dos vetores len1 len2 len3
	char str1[] = "P!hbujoip!LjljNbsjfMpvjtP!mfbpP!npsdfhpP!ujhsfB!"
	"ujhsftbB!mfpbBmfyfj";
	char str2[] = "dbdpvdpnfvgpj!qsftp!qpshptupv!efmbncfvspvcbeftu"
	"spjdpotuspjfybnjob";
	char str3[] = "vnb!bsnbejmib!ef!dpfmipvnb!spvqb!opwbvnb!qpdb!ef!"
	"tbohvfvn!pttpvn!csjorvfepvn!wbnqjspvn!dftup!ef!wjnfvn!"
	"esbhbpvn!cbmef!ef!bsfjb";
	int len1[] = {0, 14, 19, 24, 30, 39, 46, 55, 61, 67}; //vetor chaver da criptografia, vetor dos incrementos ao indereço de memória da srting
	int len2[] = {0, 5, 10, 23, 32, 38, 43, 50, 58, 65};  //vetores chaver da criptografia  vetor dos incrementos ao indereço de memória da srting
	int len3[] = {0, 23, 37, 55, 62, 74, 84, 100, 109, 126}; //vetores chaver da criptografia  vetor dos incrementos ao indereço de memória da srting
	int i; // declarando variavel que servirá de contador para os laços.
	char * ptr; // declarando um ponteiro que apontará para um endereços da string a cada repetição de cada um dos laços do tipo for 
	for(i = len1[x], ptr = str1+i; i < len1[x+1]; i++, ptr++)// i recebe o xzésimo valor do vetor len1 ptr aponta para o endereço de memória da letra situada na posição len1[x] da str1.      
	printf("%c", (*ptr) - 1); // printa-se na tela a letra anterior ao endereço de memória apontado pelo ponteiro.
	printf(" "); // printa se um espaço após quebrar a criptografia da str 1
	for(i = len2[y], ptr = str2+i; i < len2[y+1]; i++, ptr++) // repete se o mesmo procedimento do primeiro laço substituinda a variavel x por y e str1 por str2
	printf("%c", (*ptr) - 1); // printa-se na tela a letra anterior ao endereço de memória apontado pelo ponteiro.
	printf(" "); // printa se um espaço após descriptografar a str2
	for(i = len3[z], ptr = str3+i; i < len3[z+1]; i++, ptr++) // repete-se o mesmo procedimento do primeiro laço substituindo x por z e str1 por str2 
	printf("%c", (*ptr) - 1); // printa-se na tela a letra anterior ao endereço de memória apontado pelo ponteiro
	printf(".\n");// pular uma linha após a frase ser escriptografada.
 	return 0; // em caso de sucesso, retorne 0.
}
