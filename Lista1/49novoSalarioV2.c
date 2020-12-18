/*
Um funcionário irá receber um aumento de acordo com o seu plano de trabalho, de
acordo com a tabela abaixo:
Plano Aumento
A - 10%
B - 15%
C - 20%
Faça um programa que leia o plano de trabalho e o salário atual de um funcionário e calcula
e imprime o seu novo salário. (Use o comando switch...case)
*/

#include <stdio.h>

int main(void) {

  double salario;
	char op;
	
	printf("\tPlano Aumento\nA-10%%\nB-15%%\nC-20%%\n");

	printf("Qual seu salario atual? ");
	scanf("%lf", &salario);

	printf("Qual seu plano de trabalho? ");
	scanf(" %c", &op);

	switch(op)
	{
    double novoSalario;

		case 'A':

      novoSalario = salario * 1.10;
			printf("Novo salario: %.2lf", novoSalario);
			break;

		case 'B':

      novoSalario = salario * 1.15;
			printf("Novo salario: %.2f", novoSalario);
			break;

		case 'C':

      novoSalario = salario * 1.20;
			printf("Novo salario: %.2f", novoSalario);
			break;

		default:

			printf("Opção inválido");
			break;

	}

}