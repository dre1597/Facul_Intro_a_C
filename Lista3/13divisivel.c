//Faça um programa que leia dois numeros inteiros e chame uma funçao que recebe os dois numeros lidos e que verifique e retorna quantas vezes um numero é divisivel pro outro

#include <stdio.h>

int testeDivisivel(int x, int y){

	int contador = 0, sair = 0;

	do{

		int divisao = x / y;
		int resto = x % y;

		if(resto == 0)
			contador++;
		else
			sair = 1;

		x = divisao;

	}while(!sair);

	return contador;

}

int main(void) {

	int num1, num2;

	printf("Informe um inteiro: ");
	scanf("%d", &num1);

	printf("Informe outro inteiro: ");
	scanf("%d", &num2);

	int div = testeDivisivel(num1, num2);

	printf("%d é divisivel por %d %d vezes ", num1, num2, div);

}