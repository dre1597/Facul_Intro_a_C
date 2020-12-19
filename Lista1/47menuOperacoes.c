/*
Escreva um programa que mostre ao usuário quatro opções de operações:
a.adiçao
b.subtraçao
c.multiplicaçao
d.divisao inteira
e.divisao real
f.resto da divisao
apos o menu leia dois numeros e calcule o indicado no menu
*/

#include <stdio.h>

int main(void) {
  
	double x, y;

	char op;
	
	printf("\tMENU\na.adição\nb.subtração\nc.multiplicação\nd.divisão inteira\ne.divisão real\nf.resto da divisão\nOpção: ");
	scanf(" %c", &op);

	printf("Insira um numero: ");
	scanf("%lf", &x);

	printf("Insira outro numero: ");
	scanf("%lf", &y);
	
	switch(op){

		double soma, diferenca, produto, divisaoReal;
		int divisaoInt, resto;

		case'a':

			soma = x + y; 
			printf("Soma: %.2lf", soma);
			break;

		case'b':

			diferenca = x - y;
			printf("Subtração: %.2lf", diferenca);
			break;

		case'c':

			produto = x * y;
			printf("Produto: %.2lf", produto);
			break;

		case'd':
      
			if(y!=0){

				divisaoInt = (int) x / (int) y;
				printf("Divisão inteira: %d", divisaoInt);

			}
				
			else
				printf("Não pode dividir por zero:");

			break;

		case'e':

			if(y!=0){

				divisaoReal = x / y;
				printf("Divisão real: %.2lf", divisaoReal);

			}

			else
				printf("Não pode dividir por zero:");		
        
			break;

		case'f':

			if(y != 0){

				resto = (int) x % (int) y;
				printf("Resto da divisão: %d", resto);

			}

			else
				printf("Não pode dividir por zero:");
      
			break;

		default:

			printf("Opção iexistente");
			break;

	}  

}