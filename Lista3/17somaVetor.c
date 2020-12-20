//Escreva um programa que leia um  vetor de inteiro. Chame uma funçao que recebe por parametro um vetor de inteiros e retorna a soma de seus elementos.

#include <stdio.h>
#define TAM 10

int somaElementos(int x[TAM]){
	
	int soma = 0;

	for(int i = 0 ; i < TAM; i++)
		soma+= x[i];

	return(soma);

}
int main(void) {
  
  	int a[TAM];

  	for(int i = 0; i < TAM; i++){

	  	printf("Elemento [%d]: ", i + 1);
	  	scanf("%d", &a[i]);

  	}
	
	int soma = somaElementos(a);

	printf("Soma: %d", soma);

}