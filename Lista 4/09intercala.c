/*Faça um programa que leia o tamnho n e aloque memória para dois vetores, A e B.
Preencha os vetores. Imprima os vetores. Chame uma função que recebe os dois vetores e o
seu tamanho e gere e retorna o vetor intercalação entre os elementos de A e B formando um
novo vetor C. Imprima o vetor C na main.*/

#include<stdio.h>
#include<stdlib.h>

void intercalacao(int *a,int *b,int tam){
	
	int *x, j = 0, k = 0;
	
	x=(int*)malloc((tam*2)*sizeof(int));
	
	if(x == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		return;
		
	}
	
	for(int i = 0 ; i < tam * 2 ; i++){
		
		if(i % 2 != 0){
			
			*(x + i) = *(b + j);
			j++;
			
		}
		
		else{
			
			*(x + i) = * (a + k);
			k++;
			
		}
		
	}
	
	
	for(int i = 0 ; i < (tam * 2) ; i++)
		printf("%d\t", *(x + i));
		
	printf("\n\n");
	
	free(x);
	
}

int main(void){
	
	int n,*a,*b;
	
	printf("\nTamanho:");
	scanf("%d", &n);
	
	a = (int*)malloc(n * sizeof(int));
	
	if(a == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		return 0;
		
	}
	
	b = (int*)malloc(n * sizeof(int));
	
	if(b == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		return 0;
		
	}
	
	for(int i = 0 ; i < n ; i++){
		
		printf("\n\nvetor a Elemento[%d]: ", i + 1);
		scanf("%d", a+i);
		
	}
	
	for(int i = 0 ; i < n ; i++){
		
		printf("\n\nvetor b Elemento[%d]: ", i + 1);
		scanf("%d", b+i);
		
	}
	
	for(int i = 0 ; i < n ; i++)
		printf("%d\t", *(a + i));
		
	printf("\n\n");
	
	for(int i = 0 ; i < n ; i++)
		printf("%d\t", *(b + i));
		
	printf("\n\n");
	
	intercalacao(a,b,n);
	
	free(a);
	free(b);
	
}
