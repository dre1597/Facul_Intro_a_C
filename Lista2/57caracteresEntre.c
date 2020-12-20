//Escreva um programa que solicite dois caracterer de A a Z ao usuario e imprima o numero de caracterer existente entre eles.Exemplo 2 caracteres j - t O Numero de caracterer entre eles é:9

#include <stdio.h>

int main(void) {

	char a,b;

	printf("Caracterer:");
	scanf(" %c",&a);

	printf("Caracterer:");
	scanf(" %c",&b);

	int contador = 0;

	for(int i = a ; i < b ; i++)
		contador++;

	printf("\nCaracteres entre eles: %d", contador - 1);

}