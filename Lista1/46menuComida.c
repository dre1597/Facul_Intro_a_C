/*
	Faça um programa que possa imprimir o menu abaixo:
	MENU:
	1-PEIXE
	2-PIZZA
	3-MACARRONADA
	4-FEIJOADA
	5-SAIR
	OPÇÃO:
	opções: mostrar o preço, 5 sair, outro numero: operaçao inexistente
*/

#include <stdio.h>

int main(void) {

	int op;
	int sair = 0;

	do{

		printf("\tMENU\n1-PEIXE\n2-PIZZA\n3-MACARRONADA\n4-FEIJOADA\n5-SAIDA\nOpção: ");
		scanf("%d",&op);
    
		switch(op){

			case 1:
				printf("Preço do peixe.\n");
				break;
        
			case 2:
				printf("Preço da pizza.\n");
				break;

			case 3:
				printf("Preço da macarronada.\n");
				break;
	
			case 4:
				printf("Preço da Feijoada.\n");
				break;

			case 5:
				printf("Saindo do menu.\n");
				sair = 1;
				break;

			default: 
				printf("Opção Inexistente.\n");
				break;

		}

	}while(!sair);

}