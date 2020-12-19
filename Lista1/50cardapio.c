/*
O cardápio de uma lanchonete é o seguinte:

Especificação Código Preço
Cachorro quente 100 3.20
Bauru simples 101 4.50
Bauru com ovo 102 5.00
Hambúrger 103 6.30
Cheeseburguer 104 6.60
Refrigerante 105 2.50

Implemente um programa que leia o código do item pedido, a quantidade e calcule e mostre
o valor a ser pago por aquele lanche. Considere que a cada execução somente será
calculado um item. (Use o comando switch...case).
*/

#include <stdio.h>

int main(void) {

	int quant,cod;
	
	printf("\tMENU\n100-Cachorro quente-3.20\n101-bauru simples-4.50\n102-bauru com ovo-5.00\n103-hamburguer-6.30\n104-cheeseburger-6.60\n105-refrigerante-2.50\n106-sair.\nOpção: ");
	scanf("%d", &cod);

	printf("Escolha a quantidade: ");
	scanf("%d", &quant);
	
	switch(cod){
    
		double precoTotal; 

		case 100:

			precoTotal = quant * 3.20;
			printf("Preço Total: %.2lf", precoTotal);
			break;

		case 101:

			precoTotal = quant * 4.50;
			printf("Preço Total: %.2lf", precoTotal);
			break;

		case 102:

			precoTotal = quant * 5.00;
			printf("Preço Total: %.2lf", precoTotal);
			break;

		case 103:

			precoTotal = quant * 6.30;
			printf("Preço Total: %.2lf", precoTotal);
			break;

		case 104:

			precoTotal = quant * 6.60;
			printf("Preço Total: %.2lf", precoTotal);
			break;

		case 105:

			precoTotal = quant * 2.50;
			printf("Preço Total: %.2lf", precoTotal);
			break;

		default:

			printf("Opção inválida.\n");
			break;

	}

}