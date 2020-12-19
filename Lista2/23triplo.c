//Escreva um programa para entrar com varios numeros e imprimir o triplo de cada numero. O programa acaba quando entrar o numero -999.

#include <stdio.h>

int main(void) {
  int n;

	do{

		printf("Numero: ");
		scanf("%d", &n);

		printf("Triplo = %d\n", n * 3);

	}while(n != -999);

}