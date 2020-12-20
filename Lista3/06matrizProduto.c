// Faça um programa que entre com números inteiros para duas matrizes: M[6][4] e N[4][6]. Imprima as matrizes lidas. Em seguida, gere e imprima a matriz produto.

#include <stdio.h>
#define NUMLINHAS1 6
#define NUMCOLUNAS1 4
#define NUMLINHAS2 4
#define NUMCOLUNAS2 6

int main(void){

	int M[NUMLINHAS1][NUMCOLUNAS1], N[NUMLINHAS2][NUMCOLUNAS2], PRODUTO[NUMLINHAS1][NUMCOLUNAS2];

	for(int linhas = 0 ; linhas < NUMLINHAS1 ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS1 ; colunas++){

			printf("Elemento a[%d][%d]: ", linhas, colunas);
			scanf("%d", &M[linhas][colunas]);

		}

	printf("\nMatriz M: \n");
	for(int linhas = 0 ; linhas < NUMLINHAS1 ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS1 ; colunas++)
			printf("%d\t", M[linhas][colunas]);

		printf("\n\n");

	}

	for(int linhas = 0 ; linhas < NUMLINHAS2 ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS2 ; colunas++){

			printf("Elemento a[%d][%d]: ", linhas, colunas);
			scanf("%d", &N[linhas][colunas]);

		}

	printf("\nMatriz N: \n");
	for(int linhas = 0 ; linhas < NUMLINHAS2 ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS2 ; colunas++)
			printf("%d\t", N[linhas][colunas]);

		printf("\n\n");

	}
	
	for(int i = 0 ; i < NUMLINHAS1 ; i++ ){

		for(int j = 0 ; j < NUMCOLUNAS2 ; j++){
			
			PRODUTO[i][j] = 0;
			for(int k = 0 ; k < NUMCOLUNAS1 ; k++)
				PRODUTO[i][j] = PRODUTO[i][j] + M[i][k] * N[k][j];
				
		}
		
	}
	
	printf("Matriz Produto: \n");

	for(int linhas = 0 ; linhas < NUMLINHAS1 ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS2 ; colunas++)
			printf("%d\t", PRODUTO[linhas][colunas]);

		printf("\n\n");

	}
	
}