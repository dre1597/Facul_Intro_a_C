/*Criar um programa para ler uma palavra e imprimir a palavra conforme o exemplo a seguir
Exemplo: SONHO
SONHO 
SONHO SONHO
SONHO SONHO SONHO
SONHO SONHO SONHO SONHO
SONHO SONHO SONHO SONHO SONHO
pois, sonho tem 5 letras
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int main(void) { 

	char palavra[MAX];
	int i = 1;

	printf("\nInforme uma palavra : ");
	gets(s);

	int TAM = strlen(s);

	do{

		for(int j = 0 ; j < i ; j++)
			printf(" %s", palavra);

		printf("\n");

		i++;

	}while(i <= TAM);

}