//Escreva um programa para armazenar 15 numeros inteiros em um vetor e imprimir uma listagem numerada contedo o numero e uma das mensagens: par ou impar.

#include <stdio.h>
#define MAX 15

int main(void) {

  	int v[MAX];
	
	for(int i = 0 ; i < MAX ; i++){

		printf("\nElemento v[%d]: ", i + 1);
		scanf("%d", &v[i]);

	}

	printf("\n\n");
	
	for(int i = 0 ; i < MAX ; i++){

		if(v[i] % 2 == 0)
			printf("%d é par\n", v[i]);

		else
			printf("%d é impar\n", v[i]);

	}
}