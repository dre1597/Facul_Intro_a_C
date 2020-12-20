// Escreva um programa para entrar com valores para duas matrizes 5x5 de inteiros. Imprima as matrizes. Gerar e imprimir a matriz DIFERENÇA.

#include <stdio.h>
#define NUMLINHAS 5
#define NUMCOLUNAS 5

int main(void) {
  int a[NUMLINHAS][NUMCOLUNAS], b[NUMLINHAS][NUMCOLUNAS], DIFERENCA[NUMLINHAS][NUMCOLUNAS];

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
			DIFERENCA[linhas][colunas] = a[linhas][colunas] - b[linhas][colunas];

	printf("\nMatriz DIFERENÇA: \n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", DIFERENCA[linhas][colunas]);

		printf("\n");

	}

}