/*
Faça um programa que leia e imprima um vetor A de tamanho 15 de inteiros positivos.
Logo após, gere o vetor B contendo o somatório (de 1 até o número) de cada elemento de A.
Imprima o vetor B.
*/

#include <stdio.h>
#define MAX 15

int main(void) {

	int A[MAX];

	for(int i = 0 ; i < MAX ; i++){

		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &A[i]);

	}

	printf("\nVetor A: \n");
	for(int i = 0 ; i < MAX ; i++)
		printf("%d\t", A[i]);
	printf("\n");

	int B[MAX];

	for(int i = 0 ; i < MAX ; i++)
		B[i] = 0;

	for(int i = 0 ; i < MAX ; i++){
		
		int soma = 0;

		for(int j = 0 ; j < A[i] ; j++)
			soma += A[j];

		B[i] = soma;
			
	}

	printf("\nVetor B: \n");
	for(int i = 0 ; i < MAX ; i++)
		printf("%d\t", B[i]);
	printf("\n");

}