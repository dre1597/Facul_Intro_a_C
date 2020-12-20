//Escreva um programa para entrar com valores inteiros para uma matriz a[4][4] e para b[4][4].Imprimir.Gerar e imprimir SOMA.

#include <stdio.h>
#define NUMLINHAS 4
#define NUMCOLUNAS 4

int main(void) {
  int a[NUMLINHAS][NUMCOLUNAS], b[NUMLINHAS][NUMCOLUNAS], SOMA[NUMLINHAS][NUMCOLUNAS];

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){

			printf("Elemento a[%d][%d]: ", linhas, colunas);
			scanf("%d", &a[linhas][colunas]);

		}

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){

			printf("Elemento b[%d][%d]: ", linhas, colunas);
			scanf("%d", &b[linhas][colunas]);

		}

	printf("\nMatriz a: \n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", a[linhas][colunas]);

		printf("\n");

	}

	printf("\nMatriz b: \n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", b[linhas][colunas]);

		printf("\n");

	}

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			SOMA[linhas][colunas] = a[linhas][colunas] + b[linhas][colunas];

	printf("\nMatriz SOMA: \n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", SOMA[linhas][colunas]);

		printf("\n");

	}

}