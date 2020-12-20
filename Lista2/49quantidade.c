/*Faça um programa que leia e imprima um vetor de 50 elementos inteiros. EM seguida calcule e mostre
->A quantidade de numeros entre 9 e 25;
->Quantos e quais os numeros pares;
->A quantidade de numeros menores que 30;
->Quantos e quais os numeros impares;*/

#include <stdio.h>
#define MAX 50

int main(void) {
  
	int v[MAX];

	for(int i = 0 ; i < MAX ; i++){

		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &v[i]);
		
	}

	printf("\nVetor lido: \n");

	for(int i = 0 ; i < MAX ; i++)
		printf("%d\t", v[i]);

	int contador1 = 0;

	for(int i = 0 ; i < MAX ; i++)
		if(v[i] > 9 && v[i] < 25)
			contador1++;

	printf("\n");

	printf("\nPares lidos: \n");

	int pares = 0;

	for(int i = 0 ; i < MAX ; i++){

		if(v[i] % 2 == 0){

			pares++;
			printf("%d\t", v[i]);

		}
	}
	
	int contador2 = 0;

	for(int i = 0 ; i < MAX ; i++)
		if(v[i] < 30)
			contador2++;

	printf("\n");

	printf("\nImpares lidos: \n");

	int impares = 0;

	for(int i = 0 ; i < MAX ; i++){

		if(v[i] % 2 != 0){

			impares++;
			printf("%d\t", v[i]);

		}

	}

	printf("\n\nQuantidade de numeros entre 9 e 25 = %d\nQuantidade de pares = %d\nQuantidade de numeros menores que 30 = %d\nQuantidade de impares = %d\n\n", contador1, pares, contador2, impares);

}