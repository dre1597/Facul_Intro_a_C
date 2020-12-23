/*Escreva um programa que leia e imprima um vetor com 20 elementos inteiros e chame
uma função que recebe o vetor e retorna a quantidade de números primos presentes no
vetor.*/

#include<stdio.h>

#define TAM 20


int contaPrimos(int a[TAM]){
	
	int contador = 0;
	
	for(int i = 0 ; i < TAM ; i++){
		
		int div = 0;
		
		if(a[i] > 0){
			
			for(int j = 1 ; j <= a[i] ; j++)
				if(a[i] % j == 0)
					div++;
					
			if(div == 2)
				contador++;
				
		}
			
	}
	
	return contador;
	
}

int main(void){
	
	int a[TAM];
	
	for(int i = 0 ; i < TAM ; i++){
		
		printf("Elemento[%d]: ", i + 1);
		scanf("%d", &a[i]);
		
	}
	
	printf("\nVetor lido:\n");
	for(int i = 0 ; i < TAM ; i++)
		printf("%d\t", a[i]);
	
	int numPrimos = contaPrimos(a);
	
	printf("Quantidade de primos lidos: %d", numPrimos);
	
}
