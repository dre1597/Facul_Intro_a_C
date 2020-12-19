//Faça um programa que leia dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles.

#include <stdio.h>

int main(void) {
  
	int num1, num2;
	
	printf("Insira um numero:");
	scanf("%d", &num1);
	
	printf("Insira outro numero: ");
	scanf("%d", &num2);

	int maior = num1;

	if(num2 > maior)
		maior = num2;
	
	int menor = num1;
	
	if(num2 < menor)
		menor = num2;

	printf("Os numeros no intervalo entre %d e %d são: ", menor, maior);
	for(int i = menor + 1 ; i < maior ; i++)
		printf("%d\t", i);

}