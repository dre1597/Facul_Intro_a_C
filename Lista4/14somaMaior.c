/*Escreva um programa que leia e imprima uma matriz 5x5 de inteiros. Chame uma
função que recebe a matriz, calcula e retorna o valor da soma dos elementos da matriz. Além
disso, a função deve procurar o valor do maior elemento armazenado na matriz. Na
main(), imprima os valores calculados na função.*/
/*Escreva um programa que leia e imprima uma matriz 5x5 de inteiros. Chame uma
função que recebe a matriz, calcula e retorna o valor da soma dos elementos da matriz. Além
disso, a função deve procurar o valor do maior elemento armazenado na matriz. Na
main(), imprima os valores calculados na função.
*/

#include<stdio.h>
#include<stdlib.h>

#define NUMLINHAS 5
#define NUMCOLUNAS 5
int soma_matriz(int a[NUMLINHAS][NUMCOLUNAS], int *maior){
	
	int soma = 0;
	
	*maior = a[0][0];
	
	for(int linha = 0 ; linha < NUMLINHAS ; linha++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			if(a[linha][colunas] > *maior)
				*maior = a[linha][colunas];
				
	for(int linha = 0 ; linha < NUMLINHAS ; linha++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			soma += a[linha][colunas];
	
	return(soma);
	
}

int main(void){
	
	int a[NUMLINHAS][NUMCOLUNAS];
	
	for(int linha = 0 ; linha < NUMLINHAS ; linha++)
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++){
			
			printf("a[%d][%d]:", linha, colunas);
			scanf("%d", &a[linha][colunas]);
			
		}
		
	for(int linha = 0 ; linha < NUMLINHAS ; linha++){
		
		for(int colunas = 0 ; colunas < NUMCOLUNAS ; colunas++)
			printf("%d\t", a[linha][colunas]);
			
		printf("\n");
		
	}
	
	int maior;
	int soma = soma_matriz(a,&maior);
	
	printf("Soma = %d, Maior = %d", soma, maior);
	
}