//Escreva um programa que leia dois vetores de 10 elementos e faça a multiplicação dos elementos de mesmo indice, colocando os resultados em um terceiro vetor.Mostre o vetor resultante.

#include <stdio.h>
#define MAX 10

int main(void) {

	int a[MAX], b[MAX], prod[MAX];

	for(int i = 0 ; i < MAX ; i++){

		printf("\nElemento [%d]: ", i + 1);
		scanf("%d", &a[i]);

	}
	for(int i = 0 ; i < MAX ; i++){

		printf("\nElemento [%d]: ", i + 1);
		scanf("%d", &b[i]);

	}

	for(int i = 0 ; i < MAX ; i++)
		prod[i] = a[i] * b[i];

	printf("\nVetor produto: \n");
	for(int i = 0 ; i < MAX ; i++)
		printf("%d\t", prod[i]);

}