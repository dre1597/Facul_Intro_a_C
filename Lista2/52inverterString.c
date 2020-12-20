//Faça um programa que inverta uma string. O programa deve ler e imprimir a string e, em seguida, armazena-la invertida em outra string. Imprima a string invertida.


#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {
  
  	char s[MAX];

	printf("String:");
	fgets(s, MAX, stdin);

	int tamanho = strlen(s);

	int j = 0;
	char s2[MAX];

	for(int i = tamanho - 1 ; i >= 0 ; i--){
		
		s2[j]=s[i];
		j++;

	}
	printf("String invertido: %s\n", s2);

}