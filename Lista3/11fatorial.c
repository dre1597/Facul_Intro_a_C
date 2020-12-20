//Faça um programa que calcule o fatorial de um numero, usando uma funçao que receba um valor e retorne o fatorial desse valor

#include <stdio.h>

int calculaFatorial(int n){

	int fatorial;

	for(fatorial = 1 ; n > 1 ; n--)
		fatorial = fatorial * n;

	return(fatorial);

}

int main(void) {

  	int num ,fatorial;
	
	printf("\nNumero:");
	scanf("%d",&num);
	
	if(num == 0)
		printf("0! = 1 ");

	else if(num >0){

		fatorial = calculaFatorial(num);
		printf("\%d! = %d", num, fatorial);

	}

	else
		printf("Negativo.");

	printf("\n\n");
	
}