//Faça um programa que le um numero inteiro positivo e chame uma funçao que verifique se um valor lido é perfeito ou nao.A funçao deve retornar um valor 1 se for perfeito e 0, caso contrario.


#include <stdio.h>

int perfeito(int n){

	int soma = 0;

	for(int i = 1 ; i < n ; i++)
		if(n % i == 0)
			soma += i;

	if(soma == n)
		return(1);

	else
		return(0);

}

int main(void) {

	int x;
	
	printf("Numero:");
	scanf("%d", &x);

	perfeito(x);

	if(perfeito(x))
		printf("É perfeito");

	else
		printf("Não é perfeito.");
		
}