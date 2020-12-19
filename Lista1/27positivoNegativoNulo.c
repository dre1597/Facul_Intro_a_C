//Faça um programa que entre com um número inteiro e informe se ele é positivo, negativo ou nulo.

#include <stdio.h>

int main(void) {
  
	int numero;

	printf("Informe um numero: ");
	scanf("%d", &numero);

	if(numero > 0)
		printf("Positivo.\n");

	else if(numero < 0)
		printf("Negativo.\n");
    
	else
		printf("Nulo.\n");
}