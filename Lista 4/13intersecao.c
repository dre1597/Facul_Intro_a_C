/*Escreva um programa que leia o tamanho para alocação de dois vetores de números
inteiros. Aloque dinamicamente os dois vetores. Preencha os dois vetores. Chame uma
função que recebe os dois vetores e o tamanho, calcule o vetor interseção entre os dois
vetores e retorne ponteiro para o início do vetor interseção. Imprima o vetor gerado.*/

#include<stdio.h>
#include<stdlib.h>

int *calculaIntersecao(int *a, int *b, int n, int *k){
	
	int *c;
	
	c = (int*)malloc(n* sizeof(int));
	
	if(c == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		return 0;
		
	}
	
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			if((*(a + j)) == (*(b + i))){
				
				*(c + (*k))= *(a + j);
				(*k)++;
				
			}	
			
	if((*k) == 0)
		return NULL;
		
	return c;
			
}

int main(void){ 

	int n,*a,*b,*c,k = 0;
	
	printf("\nTamanho:");
	scanf("%d", &n);
	
	a = (int*)malloc(n * sizeof(int));
	if(a==NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		return 0;
		
	}
	
	b = (int*)malloc(n * sizeof(int));
	
	if(b == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		return 0;
		
	}
	
	c = (int*)malloc(n* sizeof(int));
	
	if(c==NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		return 0;
		
	}
	
	
	for(int i = 0 ; i < n ; i++){
		
		printf("vetor a / Elemento[%d]: ", i + 1);
		scanf("%d", a + i);
		
	}
	
	for(int i = 0 ; i < n ; i++)
		printf("%d\t", *(a + i));
		
	printf("\n\n");
	
	for(int i = 0 ; i < n ; i++){
		
		printf("vetor b / Elemento[%d]:", i + 1);
		scanf("%d", b + i);
		
	}

	for(int i = 0 ; i < n ; i++)
		printf("%d\t", *(b + i));
		
	printf("\n\n");
	
	
	c = calculaIntersecao(a, b, n, &k);
	
	if(c == NULL)
		printf("\nNão há interseção\n");
	
	for(int i = 0 ; i < k ; i++)
		printf("%d\t", *(c + i));
}
