//Escreva um programa que leia dois vetores de inteiros de mesmo tamanho.Em seguida, chame uma funçao que receba dois vetores como parametro. A funçao deverá retornar o produto inteiro dos dois vetores.

#include <stdio.h>
#define TAM 5

int calculaProdInterno(int a[TAM], int b[TAM]){

	int prodInterno = 0;

	for(int i = 0; i < TAM ; i++)
		prodInterno += a[i] * b[i];

	return(prodInterno);

}

int main(void) {

	int a[TAM] , b[TAM];

	printf("\nVetor a: \n");
	for(int i = 0; i < TAM ; i++){

		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &a[i]);

	}

	printf("\nVetor b: \n");
	for(int i = 0; i < TAM ; i++){

		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &b[i]);
		
	}

	int prodInterno = calculaProdInterno(a,b);

	printf("Produto interno: %d", prodInterno);
}