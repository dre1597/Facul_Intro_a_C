// Escreva um programa que leia dois números e depois mostre a diferença do maior pelo menor.

#include <stdio.h>

int main(void) {
  
	int num1, num2;

	printf("Informe um numero: ");
	scanf("%d", &num1);

	printf("Informe outro numero: ");
	scanf("%d", &num2);

	if(num1 > num2){

		int diferenca = num1 - num2;
		printf("A diferença de %d por %d é: %d", num1, num2, diferenca);
		
	}
	else{

		int diferenca = num2 - num1;
		printf("A diferença de %d por %d é: %d", num2, num2, diferenca);

	}
}