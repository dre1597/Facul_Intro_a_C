//Construa um programa que leia e imprima uma matriz 5x5 de reais e apresente uma determinada coluna da matriz, solicitada via teclado.

#include <stdio.h>
#define NUMLINHAS 5
#define NUMCOLUNAS 5

int main(void) {

	int colunaPedida, naoEncontrada = 0;
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
	
	printf("Informe uma coluna:");
	scanf("%d", &colunaPedida);
	
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){
			
			if(colunas == colunaPedida)
				printf("%.2lf\n", a[linhas][colunaPedida]);
			else
				naoEncontrada++;
		}
		
	if(naoEncontrada > NUMCOLUNAS)
		printf("\nColuna não encontrada.\n");
		
}