//Escreva um programa que leia e imprima uma matriz 5x5 de inteiros e imprima o maior elemento da diagonal principal e a soma dos elementos da diagonal secundaria.
#include<stdio.h>

#define NUMLINHAS 5
#define NUMCOLUNAS 5

int main(void){
	
	int a[NUMLINHAS][NUMCOLUNAS];

	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){
			
			printf("Elemento[%d][%d]: ", linhas, colunas);
			scanf("%d", &a[linhas][colunas]);
			
		}
		
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){
		
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", a[linhas][colunas]);
			
		printf("\n");
		
	}
	
	int maior = a[0][0];
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			if(linhas == colunas)
				if(a[linhas][colunas] > maior)
					maior = a[linhas][colunas];
			
	int soma = 0;
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			if(linhas + colunas == NUMLINHAS - 1)
				soma +=a [linhas][colunas];
				
	printf("\nMaior elemento da diagonal principal = %d\n", maior);
	
	printf("\nSoma dos elementos da diagonal secundaria = %d\n", soma);
	
}
