//Escreva um programa que leia um número natural na base decimal, transformá-lo para a base binária. Exemplo: Dado 18 a saída deverá ser 10010

#include <stdio.h>
#define MAX 50

int main(void) {
  
	int num, bin[MAX];

	for(int i = 0; i < MAX; i++)
    bin[i] = 0;

	printf("Decimal: ");
	scanf("%d", &num);

	if(num == 1)
		printf("%d\n", num);

	else{

		int resto;
		int i = 0;

		do{

			resto = num % 2;
			bin[i++] = resto;
			num = num / 2;

		}while(num >= 1);

		printf("Binário: ");
		for(int j = i - 1 ; j >= 0 ; j--)
			printf("%d", bin[j]);
    
	}

}