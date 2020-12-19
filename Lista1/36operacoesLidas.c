/*Fazer um programa que leia um símbolo de operação do usuário (+, -, * ou /) e dois
números reais. O programa deve imprimir o resultado da operação recebida sobre estes dois
números*/

#include <stdio.h>

int main(void) {
  
	double num1, num2;
	char operacao;

	printf("Informe um numero: ");
	scanf("%lf", &num1);

	printf("Informe outro numero: ");
	scanf("%lf", &num2);

	printf("Informe uma operação (+,-,* ou /): ");
	scanf(" %c", &operacao);

	if(operacao == '+'){

		double soma = num1 + num2;
		printf("A soma entre %.2lf e %.2lf resulta em %.2lf", num1, num2, soma);

	}

	else if(operacao == '-'){
	
		double diferenca = num1 - num2;
		printf("A diferenca entre %.2lf e %.2lf resulta em %.2lf", num1, num2, diferenca);

	} 

	else if(operacao == '*'){
    
		double produto = num1 * num2;
		printf("O produto entre %.2lf e %.2lf resulta em %.2lf", num1, num2, produto);

	}

	else if(operacao == '/'){

		double divisao = num1 / num2;
		printf("A divisão entre %.2lf e %.2lf resulta em %.2lf", num1, num2, divisao);

	}

	else
		printf("Operação inválida.");
}