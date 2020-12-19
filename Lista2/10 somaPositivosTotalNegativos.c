//Escreva um programa para entrar com 20 numeros e imprimir a soma dos positivos e o total de numeros negativos.


#include <stdio.h>
#define TAM 20

int main(void) {
  
	int num, soma = 0 , total = 0;

	for(int i = 0 ; i < TAM ; i++){

		printf("Numero: ");
		scanf("%d", &num);

		if(num > 0)
			soma+=num;

		else if(num < 0)
			total++;

		else 
			printf("Zero.\n");
	}

	printf("Soma dos positivos = %d\nTotal de negativos = %d\n", soma, total);

}