// /*Escreva um programa que leia três números inteiros e imprima o valor do maior
número lido (suponha números diferentes).*/

#include <stdio.h>

int main(void) {
  
	int numero1, numero2, numero3;

	printf("Informe um numero: ");
	scanf("%d", &numero1);

	printf("Informe outro numero: ");
	scanf("%d", &numero2);

	printf("Informe mais um numero: ");
	scanf("%d", &numero3);

	int maior = numero1;

	if(numero2 > maior)
		maior = numero2;
  
	if(numero3 > maior)
		maior = numero3;

	printf("O maior numero lido foi: %d", maior);

}