//Escreva um programa para entrar com dois números inteiros e imprimir todos os números no intervalo fechado entre os números, do menor para o maior.

#include <stdio.h>

int main(void) {
  
	int x,y;
	
	printf("Extremo 1: ");
	scanf("%d", &x);

	printf("Extremo 2: ");
	scanf("%d", &y);
	
	int maior = x;
	if(y > maior)
		maior=y;

	int menor = x;
	if(y<menor)
		menor=y;
	
	for(int i = menor ; i <= maior ; i++)
		printf("%d\t",i);
	

}