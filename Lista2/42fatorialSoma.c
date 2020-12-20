/*
Fazer um programa que leia vários números inteiros e positivos e calcule o
fatorial se o número é menor que 7 e a soma de 1 até o número lido se o número é
maior ou igual a 7. Sair quando for digitado –1.
*/

#include <stdio.h>

int main(void) {

  	int num;

	do{

		printf("\nInforme um numero: ");
		scanf("%d", &num);

		int soma = 0;
		int fatorial;

		if(num < 7){

			if(num == 0)
				printf("\nFatorial de 0 é 1\n");

			else if(num >= 1){

				for(fatorial = 1 ; num > 1 ; num--)
					fatorial *= num;

				printf("\nFatorial = %d\n", fatorial);
			}

			else
				printf("\nNão existe fatorial de numero negativo.\n");
		}

		else{

			for(int i = 1 ; i <= num ; i++)
				soma += i;

			printf("\nSoma = %d\n", soma);
		}
	
	}while(num != -1);

}