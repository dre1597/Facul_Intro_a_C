/* Escreva um programa que leia um vetor com 20 números inteiros. Logo após, crie funções
que:
a) Receba como parâmetro o vetor lido e o tamanho n e inverta a ordem dos
elementos armazenados nesse vetor. Retorne ponteiro para o início do vetor
invertido. Imprima o vetor invertido na main().
Protótipo: int *inverteVetor (int* vet, int n);
b) Receba como parâmetro o vetor lido e o tamanho n, conte os pares e ímpares e
retorne quantos números pares estão armazenados no vetor. Imprima os valores na
main().
Protótipo: int paresVetor (int* vet, int n, int *impar);*/

#include<stdio.h>
#include<stdlib.h>

#define TAM 5

int *inverteVetor(int *vet){
	
	int *v3,j=TAM-1;
	
	v3 = (int*)malloc(TAM * sizeof(int));
	
	if(v3 == NULL){
		
		printf("\nImpossivel alocar memoria\n");
		exit(0);
		
	}	
	
	for(int i = 0 ; i < TAM ; i++){
		
		*(v3 + i) = *(vet + j);
		j--;
		
	}
	
	return(v3);
	
}
int paresVetor(int *vet,int *impares){
	
	int pares = 0, contador = 0;
	
	for(int i = 0 ; i < TAM ; i++){
		
		if((*(vet + i) % 2 ) == 0)
			pares++;
			
		else 
			contador++;
			
	}
	
	*impares = contador;
	
	return(pares);
	
}

int main(void){
	
	int *v1,*invertido;
	
	v1 = (int*)malloc(TAM * sizeof(int));
	
	if(v1 == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		exit(0);
		
	}
	
	invertido = (int*)malloc(TAM * sizeof(int));
	
	if(invertido == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		exit(0);
		
	}
	
	for(int i = 0 ; i < TAM ; i++){
		
		printf("Elemento[%d]: ", i + 1);
		scanf("%d", v1 + i);
		
	}

	for(int i = 0 ; i < TAM ; i++)
		printf("%d\t", *( v1 + i));
	
	printf("\n\n");
	
	invertido = inverteVetor(v1);
	
	for(int i = 0 ; i < TAM ; i++)
		printf("%d\t", *(invertido + i));
		
	printf("\n\n");
	
	int impares = 0;
	int par = paresVetor(v1, &impares);
	
	printf("Pares = %d, Impares = %d", par, impares);
	
	free(v1);
	free(invertido);
	
}


