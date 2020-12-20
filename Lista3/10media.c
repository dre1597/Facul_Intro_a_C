//Faça um programa que leia e imprima tres matrizes 3x2 de reais e logo apos chame uma funçao que recebe as matrizes e calcule e retorna a media entre os elementos das tres matrizes. Imprima o valor da media na main.

#include <stdio.h>
#define NUMLINHAS 3
#define NUMCOLUNAS 2

double calculaMedia(int a[NUMLINHAS][NUMCOLUNAS], int b[NUMLINHAS][NUMCOLUNAS], int c[NUMLINHAS][NUMCOLUNAS]){

	double soma = 0;

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){

			soma += a[linhas][colunas];
			soma += b[linhas][colunas];
			soma += c[linhas][colunas];

		}

	double media = (double) soma / (3 * NUMLINHAS * NUMCOLUNAS);

	return(media);	

}

int main(void) {
  
  	int a[NUMLINHAS][NUMCOLUNAS], b[NUMLINHAS][NUMCOLUNAS], c[NUMLINHAS][NUMCOLUNAS];

  	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){

			printf("Elemento [%d][%d]:", linhas, colunas);
			scanf("%d", &a[linhas][colunas]);

		}
		
	printf("\nMatriz lida.\n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", a[linhas][colunas]);

		printf("\n");

	}

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){

			printf("Elemento [%d][%d]:", linhas, colunas);
			scanf("%d", &b[linhas][colunas]);

		}

	printf("\nMatriz lida.\n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", b[linhas][colunas]);

		printf("\n");

	}

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){

			printf("Elemento [%d][%d]:", linhas, colunas);
			scanf("%d", &c[linhas][colunas]);

		}

	printf("\nMatriz lida.\n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", c[linhas][colunas]);

		printf("\n");

	}

	double media = calculaMedia(a, b, c);

	printf("A media das 3 matrizes é %.2lf", media);

}