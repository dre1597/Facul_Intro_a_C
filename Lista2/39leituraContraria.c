//Faça um programa que leia um conjunto de 30 inteiros, armazene no vetor e escreva ao contrario da ordem de leitura


#include <stdio.h>
#define TAM 5

int main(void) {

  	int v[TAM];

	for(int i = 0 ; i < TAM ; i++){

		printf("Elemento [%d]: ",i+1);
		scanf("%d", &v[i]);

	}

	for(int i = TAM - 1 ; i >= 0 ; i--)
		printf("%d\t", v[i]);

}