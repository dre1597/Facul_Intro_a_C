//Escreva um programa para entrar com varios numeros positivos e imprimir a media dos numeros digitados.

#include <stdio.h>

int main(void) {
  
	int num, soma=0, contador=0;

	do{
    
		printf("Numero:");
		scanf("%d", &num);

		soma += num;
		contador++;

	}while(num > 0);

	double media = (double) soma / contador;
	printf("Media = %.2lf", media);

}