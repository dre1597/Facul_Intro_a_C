/*Faça um programa que tenha a seguinte saida:

	MENU
1-Calcula quadrado
2-Calcula raiz quadrada
3-Calcula logaritmo
4-Potencia
5-Sair
OPÇÃO:

- Se for escolhido 1, então pede-se o número e imprime o quadrado.
- Se for escolhido 2, então pede-se o número real e imprime a raiz, caso seja positivo. Caso
contrário, imprima a mensagem “Número Negativo.”
- Se for escolhido 3, então pede-se o número e a base, e imprime o logaritmo do número
nesta base.
- Se for escolhido 4, então pede-se a base e o expoente e imprime o valor da potência.
- Se for escolhido 5, sai do programa.
- Qualquer outra opção, imprima a mensagem “Opção Inválida.”.*/

#include <stdio.h>
#include <math.h>

int main(void) {
  
	int op;
	double num, base, expoente;
	int sair = 0;
	
	do{

		printf("\tMENU\n1-calcula quadrado\n2-calcula raiz quadrada\n3-calcula log\n4-potencia\n5-sair\nOPÇÃO:");
		scanf("%d",&op);

		switch(op){

			case 1:

				printf("Numero: ");
				scanf("%lf", &num);
		
				double quadrado = pow(num,2);
				printf("Quadrado: %.2lf\n", quadrado);

				break;

			case 2:

				printf("Numero: ");
				scanf("%lf", &num);

				double raizQuadrada = sqrt(num);
				printf("Raiz quadrada: %2.lf\n", raizQuadrada);

				break;

			case 3:

				printf("Numero: ");
				scanf("%lf", &num);

				printf("Base: ");
				scanf("%lf", &base);

				int existLog = ( base != 1 && base > 0) && (num > 0);

				if(existLog){

					double logaritmo = log(num) / log(base);
					printf("Log: %.2lf\n", logaritmo);

				}
			  
				else
					printf("Não é possivel realizar a operação.\n");

				break;

			case 4:

				printf("base: ");
				scanf("%lf",&base);

				printf("Expoente: ");
				scanf("%lf",&expoente);	

				double potencia = pow(base,expoente);

				printf("Potencia: %.2lf\n", potencia);

				break;

			case 5:
		
				printf("Saindo do menu.\n");
				sair = 1;
				break;

			default:

				printf("Opção Inválida.\n");
				break;

		}

	}while(!sair);
	
}