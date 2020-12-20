//Escreva um programa para armazenar o salario de 12 pessoas num vetor. Calcular e amazenar o novo salario em outro vetor, sabendo-se que o reajuste foi de 2%. IMprima o vetor resultante

#include <stdio.h>
#define MAX 12

int main(void) {

	int salario[MAX], novoSalario[MAX];

	for(int i = 0 ; i < MAX ; i++){

		printf("Salario [%d]: ", i + 1);
		scanf("%d", &salario[i]);

	}

	for(int i = 0 ; i < MAX ; i++)
		novoSalario[i] = salario[i] * 1.02;

	for(int i = 0 ; i < MAX ; i++)
		printf("%d\t", novoSalario[i]);

}