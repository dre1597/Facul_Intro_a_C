/*Escreva um programa que leia e imprima uma matriz 5x5 de inteiros e chame uma
função que recebe uma matriz e retorna a quantidade de números perfeitos existentes na
matriz.*/

#include<stdio.h>

#define NUMLINHAS 5
#define NUMCOLUNAS 5

int contaPerfeitos(int a[NUMLINHAS][NUMCOLUNAS]){

	int contador = 0;
	
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){
		
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){
			
			int soma = 0;
			for(int i = 1 ; i < a[linhas][colunas] ; i++)
				if(a[linhas][colunas] % i == 0)
					soma += i;

			if(soma == a[linhas][colunas])
				contador++;
		}	
	}
	
	return(contador);
	
}
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
	
	int quantPerfeitos = contaPerfeitos(a);
	
	printf("Quantidade de numeros perfeitos lidos: %d", quantPerfeitos);
	
}