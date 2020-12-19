/*Faça um programa que leia a velocidade máxima permitida em uma avenida e a
velocidade com que o motorista estava dirigindo nela e calcule a multa que uma pessoa vai
receber, sabendo que são pagos: 
a) 50 reais se o motorista estiver ultrapassar em até 10km/h a velocidade permitida (ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a
56km/h); 
b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida. 
c)
200 reais, se estiver acima de 31km/h da velocidade permitida.*/

#include <stdio.h>

int main(void) {

	double veloAvenida,veloMotorista,veloAcima;
	
	printf("Qual a velocidade maxima da avenida? ");
	scanf("%lf", &veloAvenida);

	printf("Velocidade do motorista? ");
	scanf("%lf", &veloMotorista);
	
	veloAcima = veloMotorista - veloAvenida;

	if(veloAcima <= 0)
		printf("Não paga multa.");

	else if(veloAcima <=10)
		printf("50 reais de multa.");

	else if(veloAcima <= 30)
		printf("100 reais de multa.");

	else 
		printf("200 reais de multa.");
}
