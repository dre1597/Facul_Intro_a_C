//Escreva uma funçao para gerar os n primeiros termos da sequencia de Fibonacci: 0,1,1,2,3,5,8,13,21,34,55,89.

#include<stdio.h>

int main(void){
	
	int a = 0, b = 1, n;

	printf("\nNumero:");
	scanf("%d", &n);
	
	printf("%d\n%d\n", a, b);
	
	for(int i = 0 ; i < n - 2 ; i++){
		
		int aux = a + b;
		a = b;
		b = aux;
		
		printf("%d\n", aux);
	}
}
