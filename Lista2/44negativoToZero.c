/*
Faça um programa que leia e imprima um vetor A com 25 números inteiros. Logo
após, substitua todos os valores negativos de A por zero, se existir. Imprima o vetor A
alterado.
*/


#include <stdio.h>
#define MAX 3

int main(void) {

	int A[MAX];

	for(int i = 0; i < MAX ; i++){
		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &A[i]);
	}

	printf("\nVetor A:\n");
	for(int i = 0; i < MAX ; i++)
		printf("%d\t", A[i]);

	printf("\n");

	for(int i = 0; i < MAX ; i++)
		if(A[i] < 0)
			A[i] = 0;
	
	printf("\nVetor A alterado:\n");
	for(int i = 0; i < MAX ; i++)
		printf("%d\t", A[i]);

	printf("\n");

}