//Faça um programa que leia dois numeros inteiros e imprimir a soma. Antes do resultado, deverá aparecer a mensagem: SOMA.

#include <stdio.h>

int main(void) {

	int numero1, numero2;
  
	printf("Informe um numero: ");
	scanf("%d", &numero1);

	printf("Informe outro numero: ");
	scanf("%d", &numero2);

	printf("SOMA: %d", numero1 + numero2);

}