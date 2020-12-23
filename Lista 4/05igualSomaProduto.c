/*Fazer um programa com as seguintes características:
a) Contém uma função que recebe dois números inteiros;
b) A função retorna 1 se os números são iguais, 0 se são diferentes. Além disso, a
função calcula a soma e o produto entre os dois números.c) Na main(), leia os dois números, chame a função e mostre se os números são
iguais ou não. Além disso, mostre sua soma e seu produto.*/
#include<stdio.h>
int iguais(int x, int y, int *soma, int *produto){
	
	*soma = x + y;
	*produto= x * y;
	
	if(x == y)
		return 1;
		
	return 0;
	
}
int main(void){
	
	int a, b, soma, produto;
	
	printf("Informe um numero: ");
	scanf("%d", &a);
	
	printf("Informe outro numero: ");
	scanf("%d", &b);
	
	if(iguais(a, b, &soma, &produto))
		printf("\nSao iguais.\n");
		
	else
		printf("\nSão diferentes.\n");
		
	printf("Soma: %d\n",soma);
	printf("Produto: %d\n",produto);
}
