/*
Escreva um programa em C para entrar com um número inteiro e positivo n,
imprimir os n primeiros naturais pares.
Exemplo: Para n=4, a saída deverá ser 0,2,4,6.
*/

#include <stdio.h>

int main(void) {
  
	int num, par = 0;
	
	printf("Numero inteiro e positivo:");
	scanf("%d",&num);

	if(num > 0){

    for(int i = 0 ; i < num ; i++){

		printf("%d\t", par);
		par += 2;

	}
    
    printf("\n");
    
  }

}