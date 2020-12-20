/*
Deseja-se publicar o número de acertos de cada aluno em uma prova em forma
de testes. A prova consta de 30 questões, cada uma com cinco alternativas
identificadas por A, B, C, D e E. Para isso são dados:
- o cartão gabarito;
- o número de alunos da turma;
- o cartão de respostas para cada aluno, contendo o seu número e suas
respostas.
Escreva um programa que imprima o número de acertos de cada aluno.
*/

#include <stdio.h>
#define MAX 30

int main(void) {

	int numeroAlunos;
	char gabarito[MAX+1], cartaoResposta[MAX+1];

	for(int i = 0; i < MAX ; i++){
		
		printf("Gabarito questão [%d]: ", i + 1);
		scanf(" %c", &gabarito[i]);
		
	}

	printf("Numero de alunos: ");
	scanf("%d", &numeroAlunos);

	int acertos[numeroAlunos];

	for(int i = 0; i < numeroAlunos ; i++){

		int contador = 0;
		for(int j = 0 ; j < MAX ; j++){
			
			printf("Aluno [%d] Resposta questão [%d]: ", i + 1, j + 1);
			scanf(" %c", &cartaoResposta[j]);

			if(cartaoResposta[j] == gabarito[j])
				contador++; 
		}

		acertos[i] = contador;

	}

	for(int i = 0; i < numeroAlunos; i++){

		if(acertos[i] == 0 )
			printf("O aluno [%d] não acertou nenhuma questão.\n", i + 1);

		else if(acertos[i] == 1)
			printf("O aluno [%d] acertou apenas uma questão. \n", i + 1);

		else
			printf("O aluno [%d] acertou %d questões.\n", i + 1, acertos[i]);

	}
		
}