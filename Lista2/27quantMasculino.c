//Escreva um programa para entrar com o sexo de varias pessoas e imprimir quantas pessoas sao do sexo masculino.

#include <stdio.h>

int main(void) {

	int cont = 0;
	char s;
	
	int sair = 0;

	printf("Escreva o character 'p' quando quiser parar.\n");
  
	do{

		printf("Sexo:");
		scanf(" %c",&s);

		if(s == 'm' || s == 'M')
			cont++;
		
		if(s == 'p')
			sair = 1;

	}while(!sair);
	
	printf("Masculino: %d\n", cont);
	
}