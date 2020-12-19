/*
Escreva um programa que leia um número natural na base binária. Transformá-
lo para a base decimal.
Exemplo:
Dado 10010 a saída será 18, pois 1. 2 4 + 0. 2 3 + 0. 2 2 + 1. 2 1 + 0. 2 0 = 18.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  
	int bin;

	printf("\nBinário: ");
	scanf("%d", &bin);

	int decimal = 0;

	for(int i = 0; bin > 0 ; i++){

		decimal += pow(2,i) * (bin % 10);
		bin /= 10;

	}
  
	printf("Decimal : %d\n", decimal);

}