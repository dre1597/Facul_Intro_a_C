//Escreva um programa que leia e imprima na tela se a letra é ou não é uma vogal.

#include <stdio.h>

int main(void) {
  
  char op;
	
	printf("Digite uma letra: ");
	scanf(" %c", &op);
	
	switch(op)
	{

		case'A':
		case'a':
		case'E':
		case'e':
		case'I':
		case'i':
		case'O':
		case'o':
		case'U':
		case'u':

			printf("É vogal.\n");
			break;

		default:

			printf("Não é vogal.\n");
			break;
      
	}

}