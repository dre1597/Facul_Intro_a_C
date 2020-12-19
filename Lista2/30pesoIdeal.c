/*Tendo como dados de entrada a altura e o sexo de 10 pessoas, construir um programa que calcule seu peso ideal de cada pessoa lida, utilizando as seguintes formulas
a.Para homens(72.7*h)-58
b.Para mulheres(62.1*h)-44.7
c.Peça o peso de cada pessoa e informe se ela esta dentro, acima ou abaixo do peso.*/

#include <stdio.h>
#define TAM 10

int main(void) {

	double altura, peso;
	char sexo;
	int i = 0;
	
	while(i < TAM){

		printf("\nPeso:");
		scanf("%lf", &peso);

		printf("\nAltura:");
		scanf("%lf", &altura);

		printf("\nSexo:");
		scanf(" %c", &sexo);
	
		if(sexo == 'm' || sexo == 'M'){

			double pesoIdeal = (72.7 * altura) - 58;

			if(peso > pesoIdeal)
				printf("Acima do peso.\n");

			else if(peso < pesoIdeal)
				printf("Abaixo do peso.\n");

			else
				printf("Dentro do peso.\n");

			i++;

		}

		else if(sexo == 'f'||sexo == 'F'){	
		
			double pesoIdeal = (62.1 * altura) - 44.7;
			
			if(peso > pesoIdeal)
				printf("Acima do peso.\n");

			else if(peso < pesoIdeal)
				printf("Abaixo do peso.\n");

			else
				printf("Dentro do peso.\n");

			i++;

		}
		else
			printf("Sexo não adicionado.");

	}

}