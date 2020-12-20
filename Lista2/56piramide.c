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

int main(void) { //funciona se colocar o espaço já na string lida

	char s[100],s2[100];
	char ch = 32;
	int tam;

	printf("\nString: ");
	gets(s);
	tam=strlen(s);
	printf("\n");
	strcpy(s2,s);

	for(int i = 0 ; i < tam ; i++){

		printf("%s",s2);
		strcat(s2,s);
		printf("\n");
	}

}