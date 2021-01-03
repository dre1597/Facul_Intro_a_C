/*Escreva um programa que contém uma função que receba um vetor de inteiros e retorne
o maior elemento e o menor elemento. Observe que a função deve retornar ao local da
chamada os dois valores. Portanto, você precisará usar passagem de parâmetro por
referência, já que as funções só podem retornar um único valor. Na main(), leia e imprima
um vetor de tamanho lido via teclado, chame a função e, em seguida, imprima o valor do
menor e do maior elementos do vetor.*/

#include<stdio.h>
#include<stdlib.h>

void calculaMaiorMenor(int a[],int n,int *maior,int *menor){
	
	*maior = *a;
	*menor = *a;
	
	for(int i = 0 ; i < n ; i++){
		
		if((*(a + i)) > *maior)
			*maior = *(a + i);
			
		if((*(a + i)) < *menor)
			*menor = *(a + i);
			
	}
	
}

int main(void){
	
	int n,*a;
	
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
	
	int maior, menor;
	
	calculaMaiorMenor(a, n, &maior, &menor);
	
	printf("\nMaior = %d", maior);
	printf("\nMenor = %d", menor);
	
}