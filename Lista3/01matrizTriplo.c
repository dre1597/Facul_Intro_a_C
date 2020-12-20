//Escreva um programa que leia valores reais para uma matriz m[4][5].Gerar e imprimir a matriz TRIPLO

#include <stdio.h>
#define NUMLINHAS 4
#define NUMCOLUNAS 5

int main(void) {

	double a[NUMLINHAS][NUMCOLUNAS], TRIPLO[NUMLINHAS][NUMCOLUNAS];
	
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){
		
		for(int colunas = 0 ; colunas <NUMCOLUNAS ; colunas++){

			printf("Elemento a[%d][%d]: ", linhas, colunas);
			scanf("%lf", &a[linhas][colunas]);

		}
		
	}

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			TRIPLO[linhas][colunas] =  3 * a[linhas][colunas];

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%.2lf\t", TRIPLO[linhas][colunas]);

		printf("\n");
		
	}

}