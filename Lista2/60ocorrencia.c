//Fazer um programa para ler uma string e um caracterer qualquer e calcular o indice da primeira ocorrencia desse caracterer na string. Caso nao haja ocrrencia. Imprimir -1.

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {
  
  	char s[MAX], a;
	int ocorrencia, contador = 0;
	
	printf("\nString:");
	fgets(s, MAX, stdin);

	printf("\nCaracter:");
	scanf(" %c", &a);
	
	int tamanho = strlen(s);
	
	for(int i = 0 ; i < tamanho ; i++){

		if(s[i] == a){

			contador++;
			ocorrencia = i;
			break;	

		}	

	}

	if(contador != 0)
		printf("\nPrimeira ocorencia na posição: %d", ocorrencia);

	else
		printf("\n-1");

	printf("\n\n");

}