//Faça um programa que leia uma string e troque todas as letras maiusculas por minusculas e vice-versa. Imprima a string modificada
#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 200

int main(void){
	
	char s[100];

	printf("Informe uma frase: ");
	fgets(s, MAX, stdin);
	
	int tamanho = strlen(s);

	for(int i = 0 ; i < tamanho ; i++){
		
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = tolower(s[i]);
			
		else if(s[i] >= 'a' && s[i] <= 'z')
			s[i] = toupper(s[i]);
			
	}
	
	printf("Frase modificada: %s", s);
	
}