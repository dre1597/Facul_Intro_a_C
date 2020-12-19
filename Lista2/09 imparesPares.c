//Escreva um programa para ler 10 numeros inteiros e imprimir quantos sao pares e quantos sao impares

#include <stdio.h>
#define TAM 10

int main(void) {
  
	int num, impares = 0, pares = 0;

	for(int i = 0 ; i < 10 ; i++){ 

		printf("[%d] Numero: ", i + 1);
		scanf("%d", &num);
		
		if(num % 2 == 0)
			pares++;

		else
			impares++;

	}

	printf("\nNumero de impares = %d\nNumero de pares = %d\n", impares, pares);

}