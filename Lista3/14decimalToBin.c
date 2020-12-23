/*Escreva um programa que leia um número na base décima. Logo após, chame uma
função que converta o número lido para a base 2 (binária)*/

#include<stdio.h>

#define MAX 100

void converteBinario(int num){
	
	int bin[MAX];
	
	for(int i = 0; i < MAX; i++)
		bin[i] = 0;
	
	if(num == 1)
		printf("%d\n", num);

	else{

		int resto;
		int i = 0;

		do{

			resto = num % 2;
			bin[i++] = resto;
			num = num / 2;

		}while(num >= 1);

		printf("Binário: ");
		for(int j = i - 1 ; j >= 0 ; j--)
			printf("%d", bin[j]);
    
	}
	
}

int main(void){
	
	int num;

	printf("Decimal: ");
	scanf("%d", &num);
	
	converteBinario(num);
	
}