//Construa um programa que leia e imprima uma matriz 5x5 de reais e apresente uma determinada linha da matriz, solicitada via teclado .


#include <stdio.h>
#define NUMLINHAS 5
#define NUMCOLUNAS 5

int main(void) {

	int linhaPedida, naoEncontrada = 0;
	double a[NUMLINHAS][NUMCOLUNAS];

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){

			printf("Elemento [%d][%d]:", linhas, colunas);
			scanf("%lf", &a[linhas][colunas]);

		}

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%.2lf\t", a[linhas][colunas]);

		printf("\n");

	}
	
	printf("Informe uma linha:");
	scanf("%d", &linhaPedida);
	
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){

			if(linhas == linhaPedida)
				printf("%.2lf\t", a[linhaPedida][colunas]);

			else
				naoEncontrada++;
				
		}
		printf("\n");

	if(naoEncontrada > NUMLINHAS)
		printf("\nLinha não encontrada.\n");
		
}