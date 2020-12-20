/*

Escrever um programa principal e três funções conforme o enunciado abaixo:
a) Função somaElem – recebe dois vetores de inteiros de mesmo tamanho,
calcula e retorna o valor da soma dos elementos entre os dois vetores;
b) Função produtoInt– função que recebe dois vetores de inteiros de
mesmo tamanho e calcula e retorna o valor do produto interno entre os
vetores (Ex: Sejam v={1,2,3} e w={4,5,6} então o prodint=1*4 + 2*5 + 3*6
= 4+10+18=32);
c) Função testaIgual – recebe um número inteiro n e os dois vetores de
inteiros de mesmo tamanho e retorna a quantidade de elementos que são
iguais nos dois vetores.
d) Na main(), ler dois vetores com n elementos inteiros, chamar as funções
e, usando o retorno das funções, imprimir a soma dos elementos dos vetores,
o valor do produto interno entre os vetores e quantidade de elementos que
são iguais nos dois vetores.

*/
#include <stdio.h>
#define TAM 5

int somaElem(int a[TAM],int b[TAM]) {

	int soma=0;

	for(int i = 0 ; i < TAM ; i++)
		soma += a[i];
	
	for(int i = 0 ; i < TAM ; i++)
		soma+=b[i];
	
	return(soma);

}

int calculaProdutoInt(int a[],int b[]){

	int prodInt=0;

	for(int i = 0 ; i < TAM ; i++)
		prodInt+=a[i]*b[i];

	return(prodInt);

}

int testaIgual(int a[],int b[]){

	int cont=0;

	for(int i = 0 ; i < TAM ; i++)
		if(a[i]==b[i])
			cont++;

	return(cont);

}

int main(void) {

	int x[TAM], y[TAM];

	printf("\nVetor x: \n");
	for(int i = 0 ; i < TAM ; i++){

		printf("Elemento [%d]:", i + 1);
		scanf("%d", &x[i]);

	}

	printf("\nVetor y: \n");
	for(int i = 0 ; i < TAM ; i++){

		printf("Elemento [%d]:", i + 1);
		scanf("%d", &y[i]);

	}

	int soma = somaElem(x,y);
	
	printf("\nSoma = %d\n", soma);

	int prodInt = calculaProdutoInt(x,y);

	printf("Produto Interno = %d\n", prodInt);

	int iguais = testaIgual(x,y);

	printf("Quantidade de iguais = %d\n", iguais);

}