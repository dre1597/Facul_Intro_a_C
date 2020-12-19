//Faça um programa que leia um número inteiro e mostre se o número lido é PAR ou ÍMPAR.

#include <stdio.h>

int main(void) {
  
	int numero;

	printf("Informe um numero: ");
	scanf("%d", &numero);

	if(numero%2 ==0)
		printf("O número lido é par.");

	else
		printf("O número lido é impar.");
		
}