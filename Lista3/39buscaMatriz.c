/*
Escreva um programa que leia e imprima uma matriz 6 x 6 de inteiros. Em seguida, leia
um valor X e faça uma busca desse valor na matriz e, ao final escrever a localização (linha e
coluna) se for o valor for encontrado na matriz. Caso contrário, imprima uma mensagem de
“Não encontrado”.
*/

#include<stdio.h>
#define NUMLINHAS 6
#define NUMCOLUNAS 6

int main(void){
	int a[NUMLINHAS][NUMCOLUNAS];
	
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){

			printf("Elemento a[%d][%d]: ", linhas, colunas);
			scanf("%d", &a[linhas][colunas]);

		}
		
	printf("\nMatriz a: \n");
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++){

		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", a[linhas][colunas]);

		printf("\n");

	}
	
	int x;
	
	printf("Busca: ");
	scanf("%d", &x);
	
	int l = 0;
	int c = 0;
	
	int encontrado = 0;
	
	for(int linhas = 0 ; linhas < NUMLINHAS ; linhas++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			if(x == a[linhas][colunas]){
				
				encontrado = 1;
				l = linhas;
				c = colunas;
				break;
				
			}
				
	if(encontrado == 1)
		printf("Encontrado em [%d][%d]", l, c);
		
	else
		printf("NAO ENCONTRADO");
	
}