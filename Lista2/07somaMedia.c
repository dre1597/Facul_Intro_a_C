// Escreva um programa para entrar com 12 números e imprimir a soma e a média desses números.

#include <stdio.h>

int main(void) {
  
	double num , soma = 0;
	
	for(int i = 0 ; i < 12 ; i++){

		printf("Numero:");
		scanf("%lf", &num);
		soma += num;
	}
	printf("Soma = %.2lf\n", soma);

	double media = soma / 12;

	printf("Media = %.2lf\n", media);

}