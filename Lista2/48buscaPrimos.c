//Faça um programa que leia um vetor de 20 numeros inteiros, mostre apenas os primos e suas respectivas posiçoes.


#include <stdio.h>
#define MAX 20

int main(void) {
  
	int v[MAX], k = 0;
	
	for(int i = 0 ; i < MAX ; i++){

		printf("Elemento[%d]:",i+1);
		scanf("%d", &v[i]);
	}

  	int primos[MAX], pos[MAX];

	for(int i = 0 ; i < MAX ; i++){

		primos[i] = 0;
		pos[i] = 0;
	
	}

  	for(int i = 0; i < MAX ; i++){

		if(v[i] > 0){

			int div = 0;

			for(int j = 1; j <= v[i] ; j++)
			  	if(v[i] % j == 0)
					div++;

			if(div == 2){

				primos[k] = v[i];
				pos[k] = i;
				k++;

			}

		}

  	}

	printf("Posição\tPrimo\n");

	for(int a = 0 ; a < k ; a++)
		printf("%d\t %d\n", pos[a], primos[a]);
	
}