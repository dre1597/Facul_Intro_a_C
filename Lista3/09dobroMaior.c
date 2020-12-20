/*
Faça um programa que leia e imprima uma matriz 4X5 de inteiros e chame a função que
recebe a matriz e gera e imprime a matriz dobro e retorna o valor do maior elemento
presente na matriz. Ao retornar, imprima o valor na tela.
*/

#include <stdio.h>
#define NUMLINHAS 4
#define NUMCOLUNAS 5

int dobroMaior(int a[NUMLINHAS][NUMCOLUNAS]){
	
	int DOBRO[NUMLINHAS][NUMCOLUNAS];

	
  	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			DOBRO[linhas][colunas] = 2*a[linhas][colunas];

	printf("\nMatriz Dobro.\n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", DOBRO[linhas][colunas]);

		printf("\n");

	}

	int maior = DOBRO[0][0];

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			if(DOBRO[linhas][colunas] > maior)
				maior = DOBRO[linhas][colunas];

	return(maior);

}

int main(void) {
  
  int a[NUMLINHAS][NUMCOLUNAS];

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
	
	int maior = dobroMaior(a);

	printf("\nO maior numero presente na matriz DOBRO é: %d", maior);
	
}