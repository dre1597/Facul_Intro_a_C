/*Faça um programa com a seguinte saida
	MENU
1-Calcula quadrado
2-Calcula Raiz Quadrada
3-Calcula Logaritmo
4-Sair
OPÇÃO:*/

#include <stdio.h>
#include <math.h>

int main(void) {

  	int op, sair = 0;
	double base, num;
	
	do{
		
		printf("\tMENU\n1-Calcula Quadrado\n2-Calcula Raiz Quadrado\n3-Calcula Logaritmo\n4-Sair\n\nOPÇÃO:");
		scanf("%d",&op);
	
		switch(op){

			case 1:

				printf("\nNumero: ");
				scanf("%lf", &num);

				printf("Quadrado = %.2lf\n", pow(num, 2));

				break;

			case 2:

				printf("\nNumero: ");
				scanf("%lf",&num);

				if(num > 0)
					printf("Raiz Quadrada = %.2lf\n", sqrt(num));

				else
					printf("Negativo.\n");

				break;

			case 3:

				printf("\nNumero: ");
				scanf("%lf", &num);

				printf("\nBase:");
				scanf("%lf",&base);

				if((base !=1 && base > 0) && (num > 0))
					printf("Logaritmo = %.2lf\n", log(num) / log(base));

				break;

			case 4:

				sair = 1;
				printf("Saindo do programa.\n");
				break;

			default:

				printf("Opção Inválida.\n");
				break;

		}

	}while(!sair);

}