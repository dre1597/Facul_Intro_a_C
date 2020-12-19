//Crie um programa que peça um numero ao usuario e armazene ele na variavel x. Depois peça outro numero e armazene na variavel y. Mostrar os numeros. E, seguida, faça com que x passe a ter o valor de y e que y passe a ter o valor de x. Use uma aux para troca. Mostre x e y trocados.
#include <stdio.h>

int main(void) {
  
	int x, y, aux;

	printf("Numero para a váriavel X:");
	scanf("%d", &x);

	printf("Numero para a váriavel Y:");
	scanf("%d", &y);
	
	printf("X: %d\tY: %d\n", x, y);
	
	aux=x;
	x=y;
	y=aux;
	
	printf("X: %d\tY: %d\n", x, y);

}