//Faça um programa que leia dois números e impriam uma mensagem dizendo se são iguais ou diferentes.

#include <stdio.h>

int main(void) {
  
	int n;

	printf("Informe um numero: ");
	scanf("%d", &n);

	if(n > 100)
		printf("O numero lido foi: %d", n);

	else{

		n = n * 3;
		printf("O numero lido multiplicado por 3 é: %d ", n);
    
	}

}