/*Escreva um programa que leia e imprima uma matriz 6x6 de reais. Chame uma função
que recebe a matriz, calcula e retorna o valor do produto dos elementos acima da diagonal
principal da matriz. Imprima o valor retornado.*/

#include<stdio.h>

#define NUMLINHAS 6
#define NUMCOLUNAS 6

double produto(double a[NUMLINHAS][NUMCOLUNAS]){
	
	double prod = 1;
	
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0; colunas < NUMCOLUNAS ; colunas++)
			if(linhas < colunas)
				prod *= a[linhas][colunas];
				
	return(prod);
	
}

int main(void){

	double a[NUMLINHAS][NUMCOLUNAS];
	
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){
			
			printf("Elemento[%d][%d]: ", linhas, colunas);
			scanf("%lf", &a[linhas][colunas]);
			
		}
		
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){
		
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%.2lf\t", a[linhas][colunas]);
			
		printf("\n");
		
	}
	
	double prod = produto(a);
	
	printf("Produto dos elementos acima da diagonal principal: = %.2lf", prod);
	
}
