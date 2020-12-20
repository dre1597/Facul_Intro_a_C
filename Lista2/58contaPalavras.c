//Escreva um programa para ler uma frase contar o numero de palavras existentes na frase.

#include <stdio.h>
#include<string.h>
#define MAX 100

int main(void) {

	char s[MAX];
	
	printf("Digite uma frase: ");
	fgets(s, MAX, stdin);

	int tamanho = strlen(s);
	int palavras = 0;

	for(int i = 0 ; i < tamanho ; i++){

		if(s[i] == ' ')
			palavras++;

	}

	printf("Numero de palavras = %d\n", palavras + 1);
	
}