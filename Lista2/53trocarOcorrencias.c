//Fazer um programa para ler uma string e dois caracteres. Imprima a string lida. Em seguida, troque todas as ocorrencias do primeiro caracter pelo segundo. Mostre e imprime a string modificada

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {

	char s[MAX], a, b;
	
	printf("\nString: ");
	fgets(s, MAX, stdin);

	printf("String lida: %s\n", s);
	
	printf("\nTrocar: ");
	scanf(" %c", &a);

	printf("\nPor: ");
	scanf(" %c", &b);
	
	int tamanho = strlen(s);
	
	for(int i = 0 ; i < tamanho ; i++)
		if(s[i] == a)
			s[i] = b;

	printf("\nString modificada = %s\n\n", s);

}