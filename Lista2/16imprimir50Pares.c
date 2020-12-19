//Escreva um programa para imprimir os 50 primeiros pares.


#include <stdio.h>

int main(void) {

	int par=0;
	
	for(int i = 0 ; i < 50 ; i++){

		printf("%d\t", par);
		par += 2;

	}
  
}