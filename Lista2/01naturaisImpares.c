/*
Faça um programa que leia um número inteiro positivo n, imprimir os n
primeiros naturais ímpares.
Exemplo: Para n=4 a saída deverá ser 1,3,5,7
*/

#include <stdio.h>

int main(void) {
  
	int num, impar = 1;
	
	printf("Numero inteiro e positivo: ");
	scanf("%d", &num);

	if(num > 0){

		for(int i=0 ; i<num ; i++){

			printf("%d\t", impar);
			impar += 2;

		}
	  
	}
	
}