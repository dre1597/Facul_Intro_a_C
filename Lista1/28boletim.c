/*Construa um programa que leia a matricula, a nota da V1 e a nota da V2 de um aluno.
Imprimir: a matricula, nota da V1, nota da V2, média aritmética e uma das mensagens:
APROVADO ou O ALUNO DEVERÁ FAZER A VS ou REPROVADO (a média é 6.0
para aprovação, considerando que para fazer a VS a média entre a V1 e a V2 deve ser
maior ou igual a 4,0) */

#include <stdio.h>

int main(void) {
  
	int matricula;
	double notaV1, notaV2;

	printf("Matricula: ");
	scanf("%d", &matricula);

	printf("Nota V1: ");
	scanf("%lf", &notaV1);

	printf("Nota V2: ");
	scanf("%lf", &notaV2);

	double media = (double) (notaV1 + notaV2) / 2;

	printf("Matricula: %d\n", matricula);

	printf("Média: %.2lf\n", media);
  
	if(media >= 6)
		printf("APROVADO.\n");

	else if(media < 4)
		printf("REPROVADO.\n");

	else
		printf("VS.");
}