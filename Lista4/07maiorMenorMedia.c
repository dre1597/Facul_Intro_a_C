/*Fazer um programa que leia um valor n de números a ser digitado. Em seguida, o
programa deve alocar dinamicamente um vetor de n inteiros, receber n números do usuário e
armazenar no vetor. No final, mostrar o maior valor do vetor, o menor valor do vetor e a
média dos valores*/

#include<stdio.h>
#include<stdlib.h>

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
	
	int maior = *a;
	int menor = *a;
	
	for(int i = 0 ; i < n ; i++){
		
		if((*(a + i)) > maior)
			maior = *(a + i);
			
		if((*(a + i)) < menor)
			menor = *(a + i);
			
	}
	
	int soma = 0;
	for(int i = 0 ; i < n ; i++)
		soma += *(a + i);
		
	double media = (double) soma / n;
	
	printf("\nMaior = %d", maior);
	printf("\nMenor = %d", menor);
	printf("\nMedia = %.2lf", media);
}
