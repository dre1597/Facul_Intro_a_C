//Faça um programa que leia um numero inteiro e chame uma funçao que recebe o numero como parametro e verifique se ele é primo.

#include <stdio.h>

void primo(int n){

	int div=0;

	if( n > 0)
		for(int i = 1 ; i <= n ; i++)
			if(n % i == 0)
				div++;
	if(div ==2)
		printf("\nÉ primo.\n\n");

	else
		printf("\nNão é primo.\n\n");

}

int main(void) {

	int num;

	printf("\nNumero: ");
	scanf("%d",&num);

	primo(num);

}