/*Faça um programa que leia e imprima um vetor de 10 números reais e chame uma função
recebe o vetor e encontra e retornar o maior valor do vetor. Em seguida, divida todos os
elementos do vetor pelo maior valor encontrado. Mostre o vetor alterado após os cálculos.*/

#include<stdio.h>

#define TAM 10

int buscaMaior(int a[]){
	
	int maior = a[0];
	
	for(int i = 0 ; i < TAM ; i++)
		if(a[i] > maior)
			maior = a[i];
			
	return maior;
		
}
int main(void){
	
	int a[TAM];
	double b[TAM];
	
	for(int i = 0 ; i < TAM ; i++){

		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &a[i]);
	}
	
	printf("\nVetor lido: \n");
	for(int i = 0 ; i < TAM ; i++)
		printf("%d\t", a[i]);
	
	int maior = buscaMaior(a);
	
	for(int i = 0 ; i < TAM ; i++)
		a[i] = a[i] / maior;
	
	printf("\nVetor alterado: \n");
	for(int i = 0 ; i < TAM ; i++)
		printf("%d\t", a[i]);

}