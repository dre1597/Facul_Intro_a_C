/*
Faça um programa que leia e imprima uma matriz A 7x7 de inteiros. Em seguida, calcule e
imprima a quantidade de primos existentes na diagonal principal de A.
*/

#include<stdio.h>

#define NUMLINHAS 7
#define NUMCOLUNAS 7

int verificaPrimo(int n){

	int div = 0;

	if(n > 0)
		for(int i = 1 ; i <= n ; i++)
			if(n % i == 0)
				div++;
	if(div == 2)
		return 1;
		
	return 0;

}

int main(void){
	
	int contador = 0;
	
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
		
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			if(linhas == colunas)
				if(verificaPrimo(a[linhas][colunas]))
					contador++;
					
	printf("Numero de primos na diagonal principal: %d", contador);
	
}