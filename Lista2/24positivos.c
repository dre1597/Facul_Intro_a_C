// Escreva um programa para entrar com números enquanto forem positivos e imprimir quantos números foram digitados. (USAR COMANDO WHILE OU DO...WHILE).

#include <stdio.h>

int main(void) {
  
	int n, contador = 0;

	printf("Numero: ");
	scanf("%d", &n);

	while(n > 0){

		contador++;

		printf("Numero: ");
		scanf("%d", &n);

	}

	printf("Foram digitados %d numeros positivos.\n", contador);

}