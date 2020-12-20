//Fazer um programa para ler uma string e verifica se ela é palíndroma, isto é se ela é igual lida da esquerda para a direita e vice-versa. Exemplos: arara, osso.

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {
  
  	char s[MAX];

	printf("\nString:");
	fgets(s, MAX, stdin);
	
	int tamanho = strlen(s);
	int contador = 0;

	// foi usado tamanho -1 por causa do fgets
	for(int i = 0, f = tamanho - 2 ; f > 0 && s[i] != '\0' ; i++ , f--)
		if(s[f] != s[i])
			contador++;
	
	if(contador == 0)
		printf("\nÉ palindromo.\n");

	else
		printf("\nNão é palindromo.\n\n");

}