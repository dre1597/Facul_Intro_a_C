//Dizemos que um numero inteiro positivo n é perfeito se for igual a soma de seus divisores positivos diferentes de n. Exemplo: 6 é perfeito, pois 1+2+3=6. Escreva um programa que dado um numero inteiro positivo n, verifique se n é perfeito.


#include <stdio.h>

int main(void) {

	int num, soma = 0;

	printf("Numero:");
	scanf("%d",&num);

	for(int i = 1 ; i < num ; i++)
		if(num % i == 0)
			soma += i;

	if(soma == num)
		printf("É perfeito.\n");
	
	else
		printf("Não é perfeito.\n");

}