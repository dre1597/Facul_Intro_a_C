//Escreva um programa que leia um vetor com 20 elementos inteiros e chame uma funçao que receba o vetor de inteiros e seu tamanho e retorne o menor dos elementos do vetor.

#include <stdio.h>
#define TAM 20

int calculaMenor(int v[]){

	int menor;
	menor = v[0];

	for(int i = 0; i < TAM; i++)
		if(v[i] < menor)
			menor = v[i];

	return(menor);

}

int main(void) {

	int a[20];

	for(int i = 0; i < TAM; i++){

		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &a[i]);
		
	}

	int menor = calculaMenor(a);

	printf("O menor numero lido foi: %d", menor);
}