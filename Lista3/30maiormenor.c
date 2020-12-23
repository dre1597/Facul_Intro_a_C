/*Faça um programa que leia um vetor com 12 inteiros.Em seguida calcule e exiba
-O maior elemento do vetor e em que posiçao ele se encontra
-O mesmo para o menor.*/
#include<stdio.h>

#define MAX 12

int main(void){
	
	int a[MAX];

	for(int i = 0 ; i < MAX ; i++){
		
		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &a[i]);
		
	}
	
	int indiceMaior = 0;
	int maior = a[0];
	
	for(int i = 0 ; i < MAX ; i++)
		if(a[i] > maior){
			
			maior = a[i];
			indiceMaior = i;
		}
		
	int indiceMenor = 0;
	int menor = a[0];
	
	for(int i = 0 ; i < MAX ; i++)
		if(a[i] < menor){
			
			menor = a[i];
			indiceMenor = i;
			
		}
		
	printf("\nMaior elemento = %d / Posição = %d\n", maior, indiceMaior);
	printf("\nMenor elemento = %d / Posição = %d\n", menor, indiceMenor);
	
}
