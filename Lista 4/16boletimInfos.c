/*Escrever um programa que leia informações de 40 estudantes do curso de Linguagem C,
o nome, a matricula e a média. Defina a estrutura aluno e um vetor turma do tipo aluno. O
programa deverá também chamar funções para:
a) Calcular e imprimir a média da turma;
b) Calcular imprimir o número de alunos acima da média;
c) Identificar e imprimir a matrícula do aluno com a maior média;
d) Identificar e imprimir a matrícula do aluno com a menor média;
e) Listar a matrícula de todos os alunos com média abaixo da média da turma*/

#include<stdio.h>
#define TAM 40

struct aluno{
	
	char nome;
	int matricula;
	double media;
	
};

void leitura(struct aluno *b){
		
	for(int i = 0 ; i < TAM ; i++){
		
		printf("\nNome: ");
		gets(&b->nome);
		
		printf("\nMatricula: ");
		scanf("%d", &b->matricula);
		
		printf("\nMedia: ");
		scanf("%lf", &b->media);
		
		fgetc(stdin);
		printf("\n");
		b++;
		
	}
	
}

double media_turma(struct aluno *b){
	
	double soma = 0;
	
	for(int i = 0 ; i < TAM ; i++){
		
		soma += b->media;
		b++;
		
	}
	
	double mediaTurma = soma / TAM;
	printf("\nMedia da turma: %.2lf", mediaTurma);
	
	return(mediaTurma);
	
}

void acima_media(struct aluno *b,float mediaTurma){
	
	int contador = 0;
	
	for(int i = 0 ; i < TAM ; i++){
		
		if((b->media) > mediaTurma)
			contador++;
			
		b++;
		
	}
	
	printf("\nNumero de alunos acima da media: %d", contador);
	
}

void maior_media(struct aluno *b){
	
	double maior = b->media;
	int mat = b->matricula;
	
	for(int i = 0 ; i < TAM ; i++){
		
		if((b->media) > maior){
			
			maior = (b->media);
			mat = (b->matricula);
			
		}
		
		b++;
		
	}
	
	printf("\nMatricula do aluno com maior media: %d", mat);
	
}

void menor_media(struct aluno *b){
	
	double menor = b->media;
	int mat = b->matricula;
	
	for(int i = 0 ; i < TAM ; i++){
		
		if((b->media) < menor){
			
			menor = (b->media);
			mat = (b->matricula);
			
		}
		
		b++;
		
	}
	
	printf("\nMatricula do aluno com menor media: %d", mat);
	
}
void abaixo_media(struct aluno *b, double mt){
	
	printf("\n\n\nLista de alunos abaixo da media:");
	for(int i = 0 ; i < TAM ; i++){
		
		if((b->media) < mt)
			printf("\nMatricula: %d", b->matricula);
			
		b++;
	}
	
}
int main(void){
	
	struct aluno turma[TAM];
	double m;
	
	leitura(turma);
	
	m = media_turma(turma);
	
	acima_media(turma,m);
	
	maior_media(turma);
	menor_media(turma);
	
	abaixo_media(turma,m);
	
}