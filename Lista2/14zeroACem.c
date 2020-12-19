//Escreva um programa para imprmir todos os numeros de 1 a 100 e a soma deles


#include <stdio.h>

int main(void) {
	
	int soma=0;

	for(int i = 1 ; i <= 100 ; i++)
	{
		printf("%d\t",i);
		soma += i;
	}

	printf("\nSoma = %d\n", soma);

}