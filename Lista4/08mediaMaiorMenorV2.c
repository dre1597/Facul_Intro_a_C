/*Fazer um programa que leia um valor n de números a ser digitado. Em seguida, o
programa deve alocar dinamicamente um vetor de n inteiros, receber n números do usuário e
armazenar no vetor. Imprima o vetor e chame uma função que recebe um vetor de números
inteiros e o seu tamanho como parâmetros e devolve:
- a média dos valores do vetor;
- o menor valor do vetor
- o maior valor do vetor*/
#include<stdio.h>
#include<stdlib.h>

void itens(int *a, int n, int *menor, int *maior, double *media){
	
	*maior = *a;
	*menor = *a;
	
	for(int i = 0 ; i < n ; i++){
		
		if((*(a + i)) > *maior)
			*maior = *(a + i);
			
		if((*(a + i)) < *menor)
			*menor = *(a + i);
			
	}
	
	int soma = 0;
	for(int i = 0 ; i < n ; i++)
		soma += *(a + i);
		
	*media = (double) soma / n;
}
int main(void){
	
	int *a, n, maior, menor;
	double media;
	
	printf("\nTamanho:");
	scanf("%d",&n);
	
	a = (int*)malloc(n * sizeof(int));
	
	if(a == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		return 0;
	}
	
	for(int i = 0 ; i < n ; i++){
		
		printf("\n\nVetor a Elemento[%d]: ", i +1);
		scanf("%d", a + i);
		
	}
	
	itens(a, n, &menor, &maior, &media);
	
	printf("Maior = %d, Menor = %d, Media = %.2lf", maior, menor, media);
}
