//Escreva um programa para entrar com numeros reais para 2 vetores a e b de 10 elementos cada. Gerar e imprimir o vetor diferença

#include <stdio.h>
#define MAX 10
int main(void) {

	double a[MAX], b[MAX], dif[MAX];

	for(int i = 0 ; i < MAX ; i++){

		printf("Elemento[%d]: ", i + 1);
		scanf("%lf", &a[i]);

	}

	for(int i=0;i<MAX;i++){

		printf("Elemento[%d]: ", i + 1);
		scanf("%lf", &b[i]);

	}

	for(int i = 0 ; i < MAX ; i++)
		dif[i] = a[i] - b[i];

	for(int i = 0 ; i < MAX ; i++)
		printf("%.2lf\t", dif[i]);

}