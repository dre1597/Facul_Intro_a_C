//Faça um programa que leia uma string e chame uma funçao que conte e retorna quantas letras maiusculas existem na string recebido como parametro.

#include<stdio.h>
#include<string.h>

#define MAX 200

int contaMaiusculas (char s[]){
	
	int contador=0;

	for(int i = 0 ; i < strlen(s) ; i++)
		if(s[i] >= 'A' && s[i] <= 'Z')
			contador++;
			
	return(contador);
	
}
int main(void){
	
	char s[MAX];

	printf("Informe uma frase: ");
	fgets(s, MAX, stdin);

	int maiusculas = contaMaiusculas(s);

	printf("Maisculas: %d ", maiusculas);
	
}

