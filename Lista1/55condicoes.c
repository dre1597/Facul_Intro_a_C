/*Escreva um programa para ler um número inteiro x e calcular e imprimir o valor de y
de acordo com as condições abaixo:
y = x , se x < 1;
y = 0 , se x = 1;
y = x² , se x > 1;*/


#include <stdio.h>

int main(void) {
  
	int x;

	printf("Inteiro:");
	scanf("%d", &x);
	
	if(x < 1){

    int y = x;
		printf("y = %d.\n", y);

	}

	else if(x == 1){

		int y = 0;
		printf("y = %d.\n", y);

	}	
	else{

		int y = x * x;
		printf("y = %d.\n", y);

	}

}