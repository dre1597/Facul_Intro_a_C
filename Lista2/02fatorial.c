/*
Faça um programa que leia um inteiro não-negativo n, determinar o seu
fatorial, n!. Sabendo que:
0! = 1
n! = n*(n-1)!
*/

#include <stdio.h>

int main(void) 
{
	int fatorial = 1, num;
	
	printf("Numero:");
	scanf("%d", &num);
	
	if(num == 0)
		printf("0! = 1");

	else if(num > 1){

		for(int i = 1 ; i <= num ; i++)
			fatorial = fatorial * i;

		printf("%d! = %d\n", num, fatorial);
	}

	else
		printf("Não existe fatorial de numero negativo.");

}