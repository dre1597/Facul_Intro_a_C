/*
Escreva um programa para ler valores inteiros para a matriz A[3][5] . Imprimir a matriz.
Gerar e imprimir a matriz SOMA_LINHA, onde cada elemento é a soma dos elementos de
uma linha da matriz A.
*/

#include <stdio.h>
#define NUMLINHAS 3
#define NUMCOLUNAS 5

int main(void) {
  
	int a[NUMLINHAS][NUMCOLUNAS], soma_linha[NUMLINHAS];

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){

			printf("Elemento a[%d][%d]: ", linhas, colunas);
			scanf("%d", &a[linhas][colunas]);

		}

	printf("\nMatriz a: \n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", a[linhas][colunas]);

		printf("\n");

	}
	
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			soma_linha[linhas] = 0;

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)	
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			soma_linha[linhas] += a[linhas][colunas];

	printf("\nMatriz SOMA_LINHA: \n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		printf("%d\t",soma_linha[linhas]);

	printf("\n");

} 