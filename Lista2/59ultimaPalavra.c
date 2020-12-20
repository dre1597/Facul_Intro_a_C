/*
Escreva um programa que leia uma string e imprima somente a última palavra da
mesma. Exemplo: Se a string digitada for "José da Silva", deverá ser impresso na tela a
substring "Silva"
*/

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {
  
	char frase[MAX], s2[MAX];

	printf("Digite uma frase: ");
	fgets(frase, MAX, stdin );
	
	strcpy(s2, strrchr(frase, ' ') + 1);
    printf("Ultima palavra: %s\n", s2);

}