//Escreva um programa para entrar com 10 numeros(positivos ou negativos) e imprimir o maior e o menor numero.

#include <stdio.h>
#define MAX 10
int main(void) {

	int num;

	printf("Numero:");
	scanf("%d",&num);

	int maior = num;
	int menor = num;

	for(int i = 0 ; i < MAX - 1; i++){

		printf("Numero:");
		scanf("%d",&num);
		
		if(num > maior)
			maior = num;

		if(num < menor)
			menor = num;
	}
	printf("Menor = %d\nMaior = %d", menor, maior);
}