/* Fazer um programa que leia a matrícula e a média de 10 alunos. Ordene da
maior nota para menor e imprima uma relação contendo todas as matrículas e
médias.
*/

#include <stdio.h>
#define MAX 10

void imprime(int matricula[], double media[]){

	printf("Matricula\tMedia\n");
	for(int i = 0; i < MAX ; i++){
		
		printf("%d\t", matricula[i]);
		printf("%.2lf\n", media[i]);
		
	}
		
	printf("\n");

}

void troca(int *a,int *b){

	int aux;
	
	aux=*a;
	*a=*b;
	*b=aux;

}

void troca2(double *a,double *b){

	double aux;
	
	aux=*a;
	*a=*b;
	*b=aux;

}

void bubblesort(double media[], int matricula[]){

	int trocou = 1;
	
	while(trocou == 1){

		trocou = 0;

		for(int i = 0 ; i < MAX - 1 ; i++){

			if(media[i] > media[i + 1]){

				troca2(&media[i], &media[i + 1]);
				troca(&matricula[i], &matricula[i + 1]);
				trocou = 1;

			}

		}

	}

	printf("\n\n");
	imprime(matricula, media);

}

int main(void) {
	
	int matricula[MAX];
	double media[MAX];	

	for(int i = 0; i < MAX ; i++){

		printf("Matricula[%d]: ", i + 1);
		scanf("%d", &matricula[i]);

		printf("Média[%d]: ", i + 1);
		scanf("%lf", &media[i]);
	}

	bubblesort(media, matricula);

}