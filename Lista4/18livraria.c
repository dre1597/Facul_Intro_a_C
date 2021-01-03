/*Considere uma estrutura para descrever os livros de uma livraria que contém os
seguintes campos: título (string tamanho 15), autor (string tamanho 20), estilo (string
tamanho 10), código (inteiro) e preço (real). No programa, escreva a definição da estrutura,
aloque memória para um vetor do tipo criado de tamanho 50. Crie um menu com as
seguintes opções: I- Incluir um livro, L- Listar os livros do vetor, A- Buscar por Autor, T-Buscar por Título, E- Buscar por Estilo,
 M- Calcular a média de preços de todos os livros
lidos, S- Sair. Para cada opção, chame uma função para executar a tarefa. Nas opções A, T, E
deverá ser lido o nome do autor, título ou estilo, respectivamente, e só depois chamar a
função. O menu deve ficar sendo mostrado até que o usuário digite a letra S.*/


#include<stdio.h>
#include<string.h>

#define MAX 50

struct	livro{
	
	char titulo[15];
	char autor[20];
	char estilo[10];
	int codigo;
	double preco;
	
};

void incluir(struct livro *b, int *tam){
		
	int i = *tam;
	
	fgetc(stdin);
	
	printf("\nTitulo: ");
	gets((b+i)->titulo);
	
	printf("\nAutor: ");
	gets((b+i)->autor);
	
	printf("\nEstilo: ");
	gets((b+i)->estilo);
	
	printf("\nCodigo: ");
	scanf("%d", &(b+i)->codigo);
	
	printf("\nPreco: ");
	scanf("%lf", &(b+i)->preco);
	
	fgetc(stdin);
}

void lista(struct livro *b, int *tam){
	
	for(int i = 0 ; i < *tam ; i++)
		printf("\nTitulo: %s\nAutor: %s\n Estilo: %s\nCodigo: %d\n Preco: %.2lf\n", (b+i)->titulo, (b+i)->autor, (b+i)->estilo, (b+i)->codigo, (b+i)->preco);
		
}

void busca_autor(struct livro *b, int *tam){
	
	char busca[30];
	
	fgetc(stdin);
	
	printf("\nAutor: ");
	gets(busca);
	
	for(int i = 0 ; i < *tam ; i++)
		if(strcmp((b+i)->autor, busca))
			printf("\nTitulo: %s\nEstilo: %s\nCodigo: %d\nPreco: %.2lf\n", (b+i)->titulo, (b+i)->estilo, (b+i)->codigo, (b+i)->preco);
	
}

void busca_titulo(struct livro *b, int *tam){
	
	char busca[30];
	
	fgetc(stdin);
	
	printf("\nTitulo: ");
	gets(busca);
	
	for(int i = 0 ; i < *tam ; i++)
		if(strcmp((b+i)->titulo, busca))
			printf("\nAutor: %s\nEstilo: %s\nCodigo: %d\nPreco: %.2lf\n", (b+i)->autor, (b+i)->estilo, (b+i)->codigo, (b+i)->preco);
			
}

void busca_estilo(struct livro *b,int *tam){
	
	char busca[30];
	
	fgetc(stdin);
	printf("\nEstilo: ");
	gets(busca);
	
	for(int i = 0 ; i < *tam ; i++)
		if(strcmp((b+i)->estilo, busca))
			printf("\nTitulo: %s\nAutor: %s\n\nCodigo: %d\nPreco: %.2lf\n", (b+i)->titulo, (b+i)->autor, (b+i)->codigo, (b+i)->preco);
		
}

double media(struct livro *b,int *tam){
	
	double med,s = 0;
	
	for(int i = 0 ; i < *tam ; i++)
		s += (b+i)->preco;
		
	med = s / (*tam);
	
	return(med);
	
}

int main(void){
	
	int op,tam = 0;
	struct livro vb[MAX];
	double m;
	
	do{
	
		printf("\tMENU\n1-Incluir um livro\n2-Listar os livros do vetor\n3-Buscar por Autor\n4-Buscar por Titulo\n5-Buscar por Estilo\n6-Calcular a media de precos de todos os livros lidos\n7-Sair\nOPCAO:");
		scanf("%d",&op);
		
		switch(op){
			
			case 1:
			
				if(tam<MAX){
					
					incluir(vb,&tam);
					tam++;
					
				}
				
				else
					printf("\nVetor Cheio.\n");
					
				break;
				
			case 2:
			
				if(tam>0)
					lista(vb,&tam);
				
				else
					printf("\nVetor Vazio.\n");
					
				break;
				
			case 3:
			
				if(tam>0)
					busca_autor(vb,&tam);
				
				else
					printf("\nVetor Vazio.\n");
					
				break;
				
			case 4:
			
				if(tam>0)
					busca_titulo(vb,&tam);
				
				else
					printf("\nVetor Vazio.\n");
					
				break;
				
			case 5:
			
				if(tam>0)
					busca_estilo(vb, &tam);
				
				else
					printf("\nVetor Vazio.\n");
					
				break;
				
			case 6:
				if(tam>0){
					
					m=media(vb,&tam);
					printf("\nMedia dos precos: %.2f",m);
					
				}
				
				else
					printf("\nVetor Vazio.\n");
					
				break;
				
			case 7:
			
				printf("\nSair.");
				break;
				
			default:
			
				printf("\nOpcao invalida.");
				break;
				
		}
			
	}while(op != 7);
	
}
