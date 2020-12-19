//Escreva um programa para imprmir os multiplos 6 no intervalo de 5 ate 300.

#include <stdio.h>

int main(void) {
	
	for(int i = 5 ; i <= 300 ; i++){

		if(i % 6 == 0)
			printf("%d\t", i);

	}

}