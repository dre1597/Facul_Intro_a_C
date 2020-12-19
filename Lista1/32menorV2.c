//Escreva um programa que leia três números inteiros e imprima o menor número lido.(suponha números diferentes)

#include <stdio.h>

int main(void) {
  
	int numero1, numero2, numero3;

	printf("Informe um numero: ");
	scanf("%d", &numero1);

	printf("Informe outro numero: ");
	scanf("%d", &numero2);

	printf("Informe mais um numero: ");
	scanf("%d", &numero3);

	int menor = numero1;

	if(numero2 < menor)
		menor = numero2;
  
	if(numero3 < menor)
		menor = numero3;

	printf("O menor numero lido foi: %d", menor);

}