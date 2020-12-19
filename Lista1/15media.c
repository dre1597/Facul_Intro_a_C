//Faça um programa que leia dois numeros reais e imprima a media aritmetica com a mensagem: MEDIA: antes do resultado.

#include <stdio.h>

int main(void) {
  
	double numero1, numero2;
	double media;

	printf("Informe um numero: ");
	scanf("%lf", &numero1);

	printf("Informe outro numero: ");
	scanf("%lf", &numero2);

	media = (numero1 + numero2) / 2;

	printf("MEDIA: %.2lf", media);

}