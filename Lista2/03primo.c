//Escreva um programa que leia um inteiro positivo p, verificar se ele é primo.

#include <stdio.h>

int main(void) {
  
	int num, div = 0;

	printf("Inteiro:");
	scanf("%d", &num);
	
	if(num > 0){

		for(int i = 1 ; i <= num ; i++){

			if(num % i == 0)
				div++;

		}
	}

	if(div == 2)
		printf("É primo.\n");

	else
		printf("Não é primo.\n");

}