/*Faça um programa para ler o salário de uma pessoa e imprimir o desconto do INSS
segundo a tabela abaixo:

- menor ou igual a R$ 900,00 - isento
- maior que R$ 900,00 e menor ou igual a R$ 1200,00 - 10%
- maior que R$ 1200,00 e menor ou igual a R$2000,00 - 15%
- maior que R$ 2000,00 – 27,5%*/
#include <stdio.h>

int main(void) {
  
	int salario;

	printf("Salario: ");
	scanf("%d", &salario);

	if(salario <= 900)
		printf("Insento.");

	else if(salario <= 1200)
		printf("10%% de desconto no INSS");

	else if(salario <= 2000)
		printf("15%% de desconto no INSS");
    
	else
		printf("27.5%% de desconto no INSS.");

}