// Escreva um programa que leia dois valores inteiros e faça a soma os dois. Caso a soma seja maior que 10, mostrar o valor da soma. Caso contrário, mostre o produto entre eles

#include <stdio.h>

int main(void) {
  
	int num1, num2;

	printf("Informe um numero: ");
	scanf("%d", &num1);

	printf("Informe outro numero: ");
	scanf("%d", &num2);

	int soma = num1 + num2;
	int produto = num1 * num2;

	if(soma > 10)
		printf("A soma entre %d e %d é: %d", num1, num2, soma);
    
	else
		printf("O produto entre %d e %d é: %d", num1, num2, produto);

}