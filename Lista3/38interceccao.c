/*
 Faça um programa que leia 2 vetores com 10 elementos inteiros cada. Em seguida, crie um
terceiro vetor, que seja a união dos dois primeiros lidos, e um quarto vetor, que seja a
intersecção entre os dois primeiros lidos. Imprima os vetores.
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 3

void calculaUniao(const int a[], const int b[]){ // incompleto
	
	int uniao[MAX*2];
	
	for(int i = 0 ; i < MAX*2 ; i++)
		uniao[i] = 0;
	
	int i = 0;
	int j = 0;
	int k = 0;
	
	while(i < MAX*2){
		
		uniao[i] = a[j];
		uniao[i+1] = b[k];
		
		i += 2;
		j++;
		k++;
		
	}
	
	printf("\nVetor uniao:\n");
	for(int i = 0 ; i < MAX*2 ; i++)
		printf("%d\t", uniao[i]);
		
}

//nao sei porque sem ponteiros eu não estou conseguindo fazer, então vai com ponteiros.

void calculaInterseccao(int *a, int *b){ 
	
	int *interseccao, k = 0;
	
	interseccao = (int*)malloc(MAX* sizeof(int));
	
	if(interseccao == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		return;
		
	}
	
	for(int i = 0 ; i < MAX ; i++)
		for(int j = 0 ; j < MAX ; j++)
			if((*(a + j)) == (*(b + i))){
				
				*(interseccao + k)= *(a + j);
				k++;
				
			}	
			
	if(k == 0)
		printf("\nNão há inteserccao\n");
	
	printf("\nVetor interseccao: \n");
	for(int i = 0 ; i < k ; i++)
		printf("%d\t", *(interseccao + i));
			
}

int main(void){
	
	int a[MAX], b[MAX];
	
	for(int i = 0 ; i < MAX ; i++){

		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &a[i]);
		
	}
	
	for(int i = 0 ; i < MAX ; i++){

		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &b[i]);
		
	}
	
	printf("\nVetor a:\n");
	for(int i = 0 ; i < MAX ; i++)
		printf("%d\t", a[i]);
		
	printf("\n");
	
	printf("\nVetor b:\n");
	for(int i = 0 ; i < MAX ; i++)
		printf("%d\t", b[i]);
		
	printf("\n");

	calculaUniao(a,b);
	
	calculaInterseccao(a,b);
}