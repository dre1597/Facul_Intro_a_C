//Escreva um programa que leia e imprima uma matriz de reais A 5x4. Em seguida, determine a sua transposta.
#include<stdio.h>
#define NUMLINHAS 5
#define NUMCOLUNAS 4
int main(void){
	
	double a[NUMLINHAS][NUMCOLUNAS];
	
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){
			
			printf("Elemento [%d][%d]:", linhas,colunas);
			scanf("%lf", &a[linhas][colunas]);
			
		}
	printf("\nMatriz lida: \n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){
		
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%.1lf\t", a[linhas][colunas]);
			
		printf("\n");
		
	}
	
	printf("\nMatriz Transposta:\n");
	for(int linhas = 0 ; linhas < NUMCOLUNAS ; linhas++){
		
		for(int colunas = 0 ; colunas < NUMLINHAS ; colunas++)
			printf("%.1lf\t", a[colunas][linhas]);
			
		printf("\n");
		
	}
	
}		
