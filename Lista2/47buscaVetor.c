////Escreva um programa para ler e imprimir um vetor A de 10 elementos inteiros. Em seguida, leia um valor X e verifique se o valor X está no vetor, caso esteja imprima ACHEI, e NAO ACHEI caso controlar.

#include <stdio.h>
#define MAX 10

int main(void) {
  
  	int v[MAX];
	
	for(int i = 0 ; i < MAX ; i++){

		printf("Elemento [%d]: ", i + 1);
		scanf("%d", &v[i]);
		
	}
	
	for(int i = 0 ; i < MAX ; i++)
		printf("%d\t", v[i]);

	int x;

	printf("\nValor para a busca: \n");
	scanf("%d", &x);

	int encontrou = 0;

	for(int i = 0 ; i < MAX ; i++)
		if(v[i]==x)
			encontrou++;

	if(encontrou != 0)
		printf("\nACHEI.\n");

	else
		printf("\nNAO ACHEI.\n");

}