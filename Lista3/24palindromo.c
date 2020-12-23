//Faça um programa que leia um string e chame uma funçao que recebe uma string e verifica se é palindromo.

#include<stdio.h>
#include<string.h>

#define MAX 100

void palindromo(char s[]){
	
	int tam = strlen(s);
	
	int contador = 0;
	
	for(int i = 0 , f = tam - 2 ; f > 0 && s[i] != '\0' ; i++ , f--)
		if(s[f] != s[i])
			contador++;
			
	if(contador == 0)
		printf("é palindromo");
			
	else
		printf("Não é palindromo");
			
}

int main(void){
	
	char s[MAX];

	printf("String: ");
	fgets(s, MAX, stdin);
	
	palindromo(s);
}
