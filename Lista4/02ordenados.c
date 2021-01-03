/*Escreva um programa que chame uma função que:
a) Receba 3 ponteiros para números como parâmetros: a, b e c.
b) Ordene de tal forma que, ao final da função, a contenha o menor número e c o
maior. A função deve usar os ponteiros para acessar os valores dos números por
referência.
c) Na main(), leia 3 números inteiros, chame a função e mostre os números
ordenados.*/

#include<stdio.h>

void ordem(int *a, int *b, int *c){
	
	if(*a > *b){

    int aux = *b;
    *b = *a;
    *a = aux;

  }

  if(*a > *c){

    int aux = *c;
    *c = *a;
    *a = aux;

  }

  if(*b > *c){

    int aux = *c;
    *c = *b;
    *b = aux;

  }

  printf("Ordem crescente: %d %d %d", *a, *b, *c);

}

int main(void){
	
	int a,b,c;
	
	printf("Informe um numero: ");
	scanf("%d", &a);
	
	printf("Informe um numero: ");
	scanf("%d", &b);
	
	printf("Informe um numero: ");
	scanf("%d", &c);
	
	ordem(&a,&b,&c);	
}