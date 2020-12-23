/*
Implemente funções abaixo que façam o mesmo que as funções pré-definidas da
linguagem C:
a. strlen( ) - retorna o tamanho da string;
b. strcmp( ) - diz se as duas strings são iguais ou não;
c. strcpy( ) - copia os n primeiros caracteres para a string destino;
d. strcat( ) - concatena duas strings.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 200

int tamanhoString(char s[]){
	
	int contador = 0;
	
	for(int i = 0 ; i < MAX ; i++){
		
		if(s[i] != '\0')
			contador++;
		
		else
			break;
			
	}
		
	return contador - 1 ;
	
}

int testaIgual(char s1[], char s2[]){
	
	int tamanho1 = tamanhoString(s1);
	int tamanho2 = tamanhoString(s2);
	
	if( tamanho1 != tamanho2)
		return 0;
	
	
	for(int i = 0 ; i < tamanho1; ++i)
			if(s1[i] != s2[i])
				return 0;
				
	return 1;
	
}

char *copiaString(char *destino, const char *origem){

	int i = 0;
	
	while(origem[i] != '\0'){
		
		destino[i] = origem[i];
		++i;
		
	}
	
	destino[i] = '\0';
	
	return destino;
}

char *concatenaString(char *s1, char *s2){

	int i, j;

	for(i = 0; s1[i] != '\0'; ++i);
	for(j = 0; s2[j] != '\0'; ++j, ++i)
		s1[i] = s2[j];
		
	s1[i] = '\0';
	
	return s1;
	
}

int main(void){

	char s1[MAX], s2[MAX];
	
	printf("String: ");
	scanf("%s", s1);
	
	printf("String: ");
	scanf("%s", s2);
	
	int tamanho = tamanhoString(s1);
	
	printf("Tamanho da string: %d", tamanho);
	
	int igual = testaIgual(s1,s2);
	
	if(igual)
		printf("\nAs duas strings são iguais\n");
		
	else
		printf("\nAs duas strings são diferentes\n");
	
	char *s3 = copiaString(s3, s2);
	
	printf("String copiada: %s\n", s3);
	
	char *s4 = concatenaString(s1, s2);
	
	printf("String concatenada: %s\n", s4);
	
}