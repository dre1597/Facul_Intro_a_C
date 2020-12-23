//Faça um programa que leia uma string e chame uma funçao para contrae retorna quantas letras minusculas existem na string recebido como parametro.

#include<stdio.h>
#include<string.h>
#define MAX 100

int contaMinusculas (char s[]){
	
	int contador = 0;


	for(int i = 0 ; i < strlen(s) ; i++)
		if(s[i] >= 'a' && s[i] <= 'z')
			contador++;
			
	return(contador);
	
}

int main(void) {
	
	char s[MAX];
	
	printf("Informe uma frase: ");
	fgets(s, MAX, stdin);

	int contador = contaMinusculas(s);

	printf("Minusculas : %d", contador);
	
}