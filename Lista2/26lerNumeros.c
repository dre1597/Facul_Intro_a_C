//Escreva um programa para ler varios numeros e informar quantos numeros entre 100 e 200 foram digitados. Quando o valor 0 for lido, o programa deverá cessar sua execução.

#include <stdio.h>

int main(void) {

	int num, contador = 0;

	do{

		printf("Numero: ");
		scanf("%d", &num);

		if(num > 100 && num < 200)
			contador++;

	}while(num != 0);

	printf("Numeros entre 100 e 200 = %d\n", contador);

}