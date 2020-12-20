/*Faça um programa que leia e imprima dois vetores de mesmo tamanho. Em. seguida, mostre o menu abaixo:

	MENU
1-Vetor Soma
2-Vetor Diferença
3-Vetor Produto
4-Media entre os elementos 
5-Sair
OPÇÃO:

- Se for escolhido 1, então gere e imprima o vetor soma entre os dois vetores;
- Se for escolhido 2, então gere e imprima o vetor diferença entre os dois vetores;
- Se for escolhido 3, então gere e imprima o vetor produto entre os dois vetores;
- Se for escolhido 4, calcular a média entre os elementos dos dois vetores.
- o menu deve ficar sendo mostrado até que o usuário escolha a opção 5.
*/

#include <stdio.h>
#define MAX 3

int main(void) {

	int a[MAX], b[MAX], op;
	
	printf("\nLeitura do vetor a:\n");
	for(int i = 0 ; i < MAX ; i++){

		printf("Elemento a[%d]:", i+1);
		scanf("%d", &a[i]);

	}

	printf("\nLeitura do vetor b:\n");
	for(int i = 0 ; i < MAX ; i++){

		printf("Elemento b[%d]:",i+1);
		scanf("%d", &b[i]);

	}

	printf("\nImpressao do vetor a:\n");
	for(int i = 0 ; i < MAX ; i++)
		printf("%d\t", a[i]);
	
	printf("\nImpressao do vetor b:\n");
	for(int i = 0 ; i < MAX ; i++)
		printf("%d\t", b[i]);

	int sair = 0;

	do{

		printf("\n");
		printf("\tMENU\n1-VETOR SOMA\n2-VETOR DIFERENÇA\n3-VETOR PRODUTO\n4-MEDIA\n5-SAIR\nOPÇÃO:");
		scanf("%d", &op);

		switch(op){

			int soma[MAX], diferenca[MAX], produto[MAX], contador = 0;
			double media;

			case 1:

				for(int i = 0 ; i < MAX ; i++)
					soma[i] = a[i] + b[i];

				printf("\nVetor soma\n");
				for(int i = 0 ; i < MAX ; i++)
					printf("%d\t", soma[i]);

				break;

			case 2:

				for(int i = 0 ; i < MAX ; i++)
					diferenca[i] = a[i] - b[i];

				printf("\nVetor diferença\n");
				for(int i = 0 ; i < MAX ; i++)
					printf("%d\t", diferenca[i]);	

				break;

			case 3:

				for(int i = 0 ; i < MAX ; i++)
					produto[i] = a[i] * b[i];

				printf("\nVetor Produto\n");
				for(int i = 0 ; i < MAX ; i++)
					printf("%d\t", produto[i]);

				break;

			case 4:

				for(int i = 0 ; i < MAX ; i++)
					contador += a[i];

				for(int i = 0 ; i < MAX ; i++)
					contador += b[i];

				media = (double) contador / (MAX * 2);
				printf("\nMedia = %.2lf\n", media);

				break;

			case 5:

				sair = 1;
				printf("\nSaindo do programa.\n\n");

				break;

			default:

				printf("\nOpção inválida.\n");

				break;

		}

	}while(!sair);

}