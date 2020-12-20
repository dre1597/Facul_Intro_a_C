////Faça um programa que leia um vetor que contenha as notas p1 e p2 de uma turma de 20 alunos. calcular a media da turma e contar quantos alunos obtiveram nota acima desta media calculada. imprimir a media da turma e o resultado da contagem.

#include <stdio.h>
#define MAX 20

int main(void) {

	double p1[MAX], p2[MAX];
	
	for(int i = 0 ; i < MAX ; i++){

		printf("Nota P1 do aluno [%d]: ",i + 1);
		scanf("%lf", &p1[i]);

		printf("Nota P2 do aluno [%d]: ", i + 1);
		scanf("%lf", &p2[i]);

		printf("\n");

	}

	double med[MAX];

	for(int i = 0 ; i < MAX ; i++ )
		med[i] = 0;
	
	double mediaTurma;

	for(int i = 0 ; i < MAX ; i++){

		double media;
		media = p1[i] + p2[i];
		med[i] = media / 2;
		mediaTurma += med[i] / MAX;

	}

	printf("Media da turma: %.2lf\n",mediaTurma);

	int contador = 0;

	for(int i = 0 ; i < MAX ; i++)
		if(med[i] > mediaTurma)
			contador++;

	printf("Acima da media = %d\n\n", contador);

}