/*
Escreva um programa para entrar com a matricula, a nota da V1 e a nota da
V2 de 15 alunos. Imprimir uma listagem, contendo: matricula, nota da V1,
nota da V2 e média de cada aluno. Ao final, a média geral da turma.
*/

#include <stdio.h>
#define TAM 15

int main(void) {
  
	int matricula[TAM];
	double v1[TAM], v2[TAM], media[TAM], soma = 0;

	for(int i = 0; i < TAM ; i++){

		printf("[%d] Matricula: ", i + 1);
		scanf("%d", &matricula[i]);

		printf("[%d] Nota V1: ", i + 1);
		scanf("%lf", &v1[i]);

		printf("[%d] Nota V2: ", i + 1);
		scanf("%lf", &v2[i]);

		media[i] = (v1[i] + v2[i]) / 2;
		soma += media[i];

		printf("\n\n");

	}

	for(int i = 0; i < TAM ; i++)
		printf("[%d] Matricula: %d \t V1: %.2lf \t V2: %.2lf \t Média: %.2lf\n", i + 1, matricula[i], v1[i], v2[i], media[i]);

	double mediaTurma = soma / TAM;

	printf("Média geral da turma: %.2lf", mediaTurma);

}