/*Escreva um programa para ler um vetor A de 10 elementos inteiros e um valor X qualquer.
Em seguida, chame uma função que recebe o vetor e o valor X lido e retorna 1, caso o valor X
esteja no vetor e 0 caso não esteja. Na função main() escrever "ACHEI" se o valor X existir
em A e "NÃO ACHEI", caso contrário.*/

#include<stdio.h>

#define MAX 3

int buscaVetor(int a[], int x){
	
	for(int i = 0 ; i < MAX ; i++)
		if(a[i]==x)
			return 1;
			
	return 0;

}
int main(void){
	
	int a[MAX];
	
	for(int i = 0 ; i < MAX ; i++){

		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &a[i]);
	}
	
	int x;

	printf("\nValor para a busca: \n");
	scanf("%d", &x);
	
	int busca = buscaVetor(a, x);
	
	if(busca)
		printf("\nACHEI\n");
		
	else
		printf("\nNÃO ACHEI\n");
		
}