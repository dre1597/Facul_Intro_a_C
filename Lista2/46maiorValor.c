//Faça um programa que leia e imprima um vetor de 10 numeros reais. Em seguida, encontre o maior valor do vetor e divida todos os elementos do vetor pelo maior valor encontrado. Mostre o vetor modificado apos os calculos.


#include <stdio.h>
#define MAX 10

int main(void) {
  
	double v[MAX];
	
	for(int i = 0 ; i < MAX ; i++){

		printf("Elemento[%d]: ", i + 1);
		scanf("%lf", &v[i]);
		
	}
	
	double maior=v[0];
	
	for(int i = 1 ; i < MAX ; i++)
		if(v[i] > maior)
			maior = v[i];

	for(int i = 0 ; i < MAX ; i++)
		v[i] = v[i] / maior;
	
	for(int i = 0 ; i < MAX ; i++)
		printf("%.2lf\t", v[i]);
	printf("\n");

}