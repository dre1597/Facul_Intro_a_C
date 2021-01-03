/*Escrever um programa principal e três funções conforme o enunciado abaixo:
(PROIBIDO USAR COLCHETES)
a) Função somaElem – recebe dois vetores de inteiros de mesmo tamanho, calcula e
retorna o valor da soma dos elementos entre os dois vetores;
b) Função produtoInt– função que recebe dois vetores de inteiros de mesmo
tamanho e calcula e retorna o valor do produto interno entre os vetores (Ex: Sejam
v={1,2,3} e w={4,5,6} então o prodint=1*4 + 2*5 + 3*6 = 4+10+18=32);
c) Função testaIgual – recebe um número inteiro n e os dois vetores de inteiros de
mesmo tamanho e retorna a quantidade de elementos que são iguais nos dois vetores.
Na main(), ler um número inteiro n e dois vetores com n elementos inteiros,
chamar as funções e, usando o retorno das funções, imprimir a soma dos elementos
dos vetores, o valor do produto interno entre os vetores e quantidade de elementos
que são iguais nos dois vetores.*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 5

int somaElem(int *x, int *y){
	
	int soma =0;
	
	for(int i = 0 ; i < TAM ; i++)
		soma += *(x + i) + *(y + i);
		
	return(soma);
	
}

int produtoInt(int *x, int *y){
	
	
	int prodint = 0;
	
	for(int i = 0 ; i < TAM ; i++)
		prodint += (*(x + i)) * (*(y + i));
	
	return(prodint);
	
}

int testeIgual(int *x, int *y, int n){
	
	
	int qtd = 0;
	
	for(int i = 0 ; i < TAM ; i++){
		
		if(n == *(x + i))
			qtd++;
			
		if(n == *(y + i))
			qtd++;
			
	}
	
	return(qtd);
}

int main(void){
	
	
	int *x,*y;


	x = (int*)malloc(TAM * sizeof(int));
	
	if(x == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		exit(0);
		
	}

	y=(int*)malloc(TAM * sizeof(int));
	
	if(y == NULL){
		
		printf("\nImpossivel alocar memoria.\n");
		exit(0);
		
	}
	
	for(int i = 0 ; i < TAM ; i++){
		
		printf("Vetor 1 / Elemento[%d]: ", i + 1);
		scanf("%d", x + i);
		
	}
	
	for(int i = 0 ; i < TAM ; i++){
		
		printf("Vetor 2 / Elemento[%d]: ", i + 1);
		scanf("%d", y + i);
		
	}
	
	int n;
	printf("Numero: ");
	scanf("%d", &n);

	int soma = somaElem(x, y);
	int prodInt = produtoInt(x, y);
	int qtd = testeIgual(x, y, n);

	printf("Soma de elementos = %d\n\n", soma);
	printf("Produto Interno = %d\n\n", prodInt);
	printf("Quantidade de iguais = %d\n\n", qtd);

}