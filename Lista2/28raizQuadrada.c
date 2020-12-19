//Escreva um programa que deixe entrar com 10 numeros positivos e imprimir a raiz quadrada de cada numero.

#include <stdio.h>
#include <math.h>

int main(void) {

	double num;
	int i = 0;

	do{

		printf("Numero: ");
		scanf("%lf", &num);

		if(num > 0){

			i++;
			printf("Raiz = %f\n", sqrt(num));

		}

	}while(i < 10);

}